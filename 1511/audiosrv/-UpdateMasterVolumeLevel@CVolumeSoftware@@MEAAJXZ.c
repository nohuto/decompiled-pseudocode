/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x18006F290
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     pow_0 @ 0x180048C4A (pow_0.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800664B8 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x51u,
          (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
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
      Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 88));
      v2 = 0;
    }
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v10);
    if ( v2 < 0 )
      goto LABEL_13;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x50u,
      (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      (__int64)this);
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
