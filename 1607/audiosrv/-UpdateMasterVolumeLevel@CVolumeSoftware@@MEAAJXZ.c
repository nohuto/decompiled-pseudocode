/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180058A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18000261C (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     pow @ 0x180036D3C (pow.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this)
{
  int v2; // ebx
  float *v3; // rbx
  __int64 i; // r14
  float v5; // xmm1_4
  int v6; // eax
  LPCRITICAL_SECTION v8; // [rsp+48h] [rbp-18h] BYREF
  char v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+90h] [rbp+30h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
  if ( *((_QWORD *)this + 25) )
  {
    v10 = 0LL;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&v10, *((unsigned int *)this + 29));
    v3 = (float *)v10;
    if ( !v10 )
    {
      v2 = -2147024882;
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v10);
LABEL_13:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::UpdateMasterVolumeLevel", 1881, v2);
      goto LABEL_20;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int64)(unsigned int)i >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v5 = pow(10.0, *(float *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)i + 4) / 20.0);
      v3[i] = v5;
    }
    v11 = 50000LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD, int, __int64 *))(**((_QWORD **)this + 25) + 32LL))(
           *((_QWORD *)this + 25),
           *((unsigned int *)this + 29),
           v3,
           0LL,
           1,
           &v11);
    v2 = v6;
    if ( v6 == -2147417848 || v6 == -2147023174 )
    {
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 25);
      v2 = 0;
    }
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v10);
    if ( v2 < 0 )
      goto LABEL_13;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x36u,
      (__int64)&WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
      (__int64)this);
  }
  *((_BYTE *)this + 252) = 1;
  v10 = -10000000LL;
  if ( ThreadPool )
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 32),
      &v10,
      0LL,
      0);
LABEL_20:
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return (unsigned int)v2;
}
