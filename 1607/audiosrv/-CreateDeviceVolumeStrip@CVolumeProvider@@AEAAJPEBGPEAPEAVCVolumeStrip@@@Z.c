/*
 * XREFs of ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B9B0
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B7C0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVAudioEffectsWatcher@@PEAV312@1@Z @ 0x18000404C (-NewNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x180017BD0 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x180018430 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x180018494 (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeProvider::CreateDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct CVolumeStrip **a3)
{
  struct CVolumeStrip **v3; // r14
  CVolumeStrip *v6; // rax
  CVolumeStrip *v7; // rbx
  int v8; // edi
  __int64 *v9; // rax
  __int64 **v10; // rcx
  __int64 (__fastcall *v11)(CVolumeStrip *); // rax
  __int64 (__fastcall *v12)(CVolumeStrip *); // rax
  __int64 (__fastcall *v13)(CVolumeStrip *); // rax
  ATL::CAtlException *v15; // rbx
  CVolumeStrip *v16; // [rsp+20h] [rbp-48h]
  ATL::CAtlException *v17; // [rsp+30h] [rbp-38h] BYREF
  CVolumeProvider *v18; // [rsp+38h] [rbp-30h] BYREF
  char v19; // [rsp+40h] [rbp-28h]
  CVolumeStrip *v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids, a2);
  }
  v6 = (CVolumeStrip *)operator new(0x108uLL);
  v21 = v6;
  if ( v6 )
    v7 = CVolumeStrip::CVolumeStrip(v6);
  else
    v7 = 0LL;
  v16 = v7;
  v21 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
LABEL_34:
    AudSrvTraceLoggingErrorHelper("CVolumeProvider::CreateDeviceVolumeStrip", 258, v8);
    return (unsigned int)v8;
  }
  v8 = CVolumeStrip::Initialize(v7, a2);
  if ( v8 >= 0 )
  {
    v18 = (CVolumeProvider *)((char *)this + 16);
    v19 = 0;
    ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v18);
    v8 = 0;
    try
    {
      v9 = ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::NewNode(
             (__int64)this + 56,
             (__int64 *)&v21,
             *((_QWORD *)this + 8));
      v10 = (__int64 **)*((_QWORD *)this + 8);
      if ( v10 )
        *v10 = v9;
      else
        *((_QWORD *)this + 7) = v9;
      *((_QWORD *)this + 8) = v9;
    }
    catch ( ATL::CAtlException *v17 )
    {
      v15 = v17;
      if ( *(_DWORD *)v17 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v21) = *(_DWORD *)v15;
      v8 = (int)v21;
      v7 = v16;
      if ( (int)v21 < 0 )
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
    if ( v19 )
      ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v18);
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
    goto LABEL_34;
  return (unsigned int)v8;
}
