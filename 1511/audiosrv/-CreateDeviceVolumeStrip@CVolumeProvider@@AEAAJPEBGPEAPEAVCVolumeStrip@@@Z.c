/*
 * XREFs of ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180043FEC
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x18000F650 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x180043EC0 (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?NewNode@?$CAtlList@PEAVCVolumeStrip@@V?$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVolumeStrip@@PEAV312@1@Z @ 0x18004414C (-NewNode@-$CAtlList@PEAVCVolumeStrip@@V-$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeProvider::CreateDeviceVolumeStrip(
        LPCRITICAL_SECTION lpCriticalSection,
        size_t *a2,
        struct CVolumeStrip **a3)
{
  struct CVolumeStrip **v3; // r15
  LPCRITICAL_SECTION v5; // rsi
  CVolumeStrip *v6; // rax
  CVolumeStrip *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 (__fastcall *v11)(CVolumeStrip *); // r14
  __int64 (__fastcall *v12)(CVolumeStrip *); // r14
  __int64 (__fastcall *v13)(CVolumeStrip *); // rsi
  ATL::CAtlException *v15; // rbx
  CVolumeStrip *v16; // [rsp+20h] [rbp-58h]
  ATL::CAtlException *v17; // [rsp+30h] [rbp-48h] BYREF
  CVolumeStrip *v20; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v5 = lpCriticalSection;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids, a2);
  }
  v6 = (CVolumeStrip *)operator new(0x108uLL);
  v20 = v6;
  if ( v6 )
    v7 = CVolumeStrip::CVolumeStrip(v6);
  else
    v7 = 0LL;
  v16 = v7;
  v20 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
LABEL_33:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids, v8);
    }
    return (unsigned int)v8;
  }
  v8 = CVolumeStrip::Initialize(v7, a2);
  if ( v8 >= 0 )
  {
    EnterCriticalSection(v5);
    v8 = 0;
    try
    {
      v9 = ATL::CAtlList<CVolumeStrip *,ATL::CElementTraits<CVolumeStrip *>>::NewNode(
             &v5[1],
             &v20,
             *(_QWORD *)&v5[1].LockCount);
      v10 = *(__int64 **)&v5[1].LockCount;
      if ( v10 )
        *v10 = v9;
      else
        v5[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v9;
      *(_QWORD *)&v5[1].LockCount = v9;
    }
    catch ( ATL::CAtlException *v17 )
    {
      v15 = v17;
      if ( *(_DWORD *)v17 == -1073741571 )
        _resetstkoflw();
      LODWORD(v20) = *(_DWORD *)v15;
      v8 = (int)v20;
      v5 = lpCriticalSection;
      v7 = v16;
      if ( (int)v20 < 0 )
        goto LABEL_19;
      v3 = a3;
    }
    v11 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v7 + 8LL);
    if ( v11 == CVolumeStrip::AddRef )
      CVolumeStrip::AddRef(v7);
    else
      v11(v7);
    if ( v3 )
    {
      v12 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v7 + 8LL);
      if ( v12 == CVolumeStrip::AddRef )
        CVolumeStrip::AddRef(v7);
      else
        v12(v7);
      *v3 = v7;
    }
LABEL_19:
    LeaveCriticalSection(v5);
  }
  if ( v7 )
  {
    v13 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v7 + 16LL);
    if ( v13 == CVolumeStrip::Release )
      CVolumeStrip::Release(v7);
    else
      v13(v7);
  }
  if ( v8 < 0 )
    goto LABEL_33;
  return (unsigned int)v8;
}
