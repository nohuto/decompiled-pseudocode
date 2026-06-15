/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180070BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     pow_0 @ 0x1800449FA (pow_0.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180067E84 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180067ECC (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this)
{
  int v2; // edi
  float *v3; // rbx
  __int64 i; // rdi
  float v5; // xmm1_4
  int v6; // eax
  LPCRITICAL_SECTION v8; // [rsp+38h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 96));
  if ( *((_QWORD *)this + 11) )
  {
    v10 = 0LL;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&v10, *((unsigned int *)this + 17));
    v3 = (float *)v10;
    if ( !v10 )
    {
      v2 = -2147024882;
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v10);
LABEL_13:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x51u,
          (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
          v2);
      }
      goto LABEL_23;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 17); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int64)(unsigned int)i >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      v5 = pow_0(10.0, *(float *)(*((_QWORD *)this + 4) + 56LL * (unsigned int)i + 4) / 20.0);
      v3[i] = v5;
    }
    v11 = 50000LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD, int, __int64 *, __int64))(**((_QWORD **)this + 11)
                                                                                             + 32LL))(
           *((_QWORD *)this + 11),
           *((unsigned int *)this + 17),
           v3,
           0LL,
           1,
           &v11,
           -2LL);
    v2 = v6;
    if ( v6 == -2147417848 || v6 == -2147023174 )
    {
      ATL::CComPtrBase<IPart>::Release((__int64 *)this + 11);
      v2 = 0;
    }
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v10);
    if ( v2 < 0 )
      goto LABEL_13;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x50u,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      this);
  }
  *((_BYTE *)this + 140) = 1;
  v10 = -10000000LL;
  if ( ThreadPool )
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 18),
      &v10,
      0LL,
      0);
LABEL_23:
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return (unsigned int)v2;
}
