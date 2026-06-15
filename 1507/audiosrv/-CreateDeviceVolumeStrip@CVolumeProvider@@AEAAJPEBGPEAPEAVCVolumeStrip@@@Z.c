/*
 * XREFs of ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18003D250
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002CD20 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?Initialize@CVolumeProvider@@QEAAJXZ @ 0x18003D43C (-Initialize@CVolumeProvider@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180007234 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18001D2C0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x18001D330 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18003D5CC (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeProvider::CreateDeviceVolumeStrip(
        LPCRITICAL_SECTION lpCriticalSection,
        STRSAFE_PCNZWCH pszSrc,
        struct CVolumeStrip **a3)
{
  struct CVolumeStrip **v3; // r15
  LPCRITICAL_SECTION v5; // rdi
  HANDLE ProcessHeap; // rax
  CVolumeStrip *v7; // rax
  CVolumeStrip *v8; // rbx
  int v9; // esi
  struct _RTL_CRITICAL_SECTION *v10; // r14
  struct _RTL_CRITICAL_SECTION_DEBUG *SpinCount; // rax
  ULONG_PTR v12; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG **v13; // rcx
  __int64 (__fastcall *v14)(CVolumeStrip *); // r14
  __int64 (__fastcall *v15)(CVolumeStrip *); // rdi
  struct ATL::CAtlPlex *v17; // r8
  int DebugInfo; // edx
  ULONG_PTR *i; // rcx
  __int64 (__fastcall *v20)(CVolumeStrip *); // r14
  ATL::CAtlException *v21; // rbx
  CVolumeStrip *v22; // [rsp+20h] [rbp-58h]
  ATL::CAtlException *v23; // [rsp+30h] [rbp-48h] BYREF
  int v26; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = lpCriticalSection;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      13LL,
      &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
      pszSrc);
  }
  ProcessHeap = GetProcessHeap();
  v7 = (CVolumeStrip *)HeapAlloc(ProcessHeap, 0, 0x108uLL);
  if ( v7 )
    v8 = CVolumeStrip::CVolumeStrip(v7);
  else
    v8 = 0LL;
  v22 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_42:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xEu,
        (__int64)&WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
        v9);
    }
    return (unsigned int)v9;
  }
  v9 = CVolumeStrip::Initialize(v8, pszSrc);
  if ( v9 >= 0 )
  {
    EnterCriticalSection(v5);
    v9 = 0;
    try
    {
      v10 = *(struct _RTL_CRITICAL_SECTION **)&v5[1].LockCount;
      if ( !v5[1].SpinCount )
      {
        v17 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)&v5[1].LockSemaphore, LODWORD(v5[2].DebugInfo), 0x18uLL);
        if ( !v17 )
          ATL::AtlThrowImpl(-2147024882);
        DebugInfo = (int)v5[2].DebugInfo;
        for ( i = (ULONG_PTR *)((char *)v17 + 16 * (DebugInfo - 1) + 8 * (unsigned int)(DebugInfo - 1) + 8);
              --DebugInfo >= 0;
              i -= 3 )
        {
          *i = v5[1].SpinCount;
          v5[1].SpinCount = (ULONG_PTR)i;
        }
      }
      SpinCount = (struct _RTL_CRITICAL_SECTION_DEBUG *)v5[1].SpinCount;
      v12 = *(_QWORD *)&SpinCount->Type;
      if ( SpinCount )
        SpinCount->ProcessLocksList.Flink = (struct _LIST_ENTRY *)v8;
      v5[1].SpinCount = v12;
      SpinCount->CriticalSection = v10;
      *(_QWORD *)&SpinCount->Type = 0LL;
      ++v5[1].OwningThread;
      v13 = *(struct _RTL_CRITICAL_SECTION_DEBUG ***)&v5[1].LockCount;
      if ( v13 )
        *v13 = SpinCount;
      else
        v5[1].DebugInfo = SpinCount;
      *(_QWORD *)&v5[1].LockCount = SpinCount;
    }
    catch ( ATL::CAtlException *v23 )
    {
      v21 = v23;
      if ( *(_DWORD *)v23 == -1073741571 )
        _resetstkoflw();
      v26 = *(_DWORD *)v21;
      v9 = *(_DWORD *)v21;
      v5 = lpCriticalSection;
      v8 = v22;
      if ( v26 < 0 )
        goto LABEL_19;
      v3 = a3;
    }
    v14 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v8 + 8LL);
    if ( v14 == CVolumeStrip::AddRef )
      CVolumeStrip::AddRef(v8);
    else
      v14(v8);
    if ( v3 )
    {
      v20 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v8 + 8LL);
      if ( v20 == CVolumeStrip::AddRef )
        CVolumeStrip::AddRef(v8);
      else
        v20(v8);
      *v3 = v8;
    }
LABEL_19:
    LeaveCriticalSection(v5);
  }
  if ( v8 )
  {
    v15 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v8 + 16LL);
    if ( v15 == CVolumeStrip::Release )
      CVolumeStrip::Release(v8);
    else
      v15(v8);
  }
  if ( v9 < 0 )
    goto LABEL_42;
  return (unsigned int)v9;
}
