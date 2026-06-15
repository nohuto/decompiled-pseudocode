/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x18007D040
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x180074050 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_g @ 0x18006F8F0 (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18007CBE8 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  int v4; // edi
  float v5; // xmm6_4
  float *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  float v10; // xmm1_4
  LPCRITICAL_SECTION v11; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+30h] [rbp-38h]
  float *v13; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 112));
  if ( !*((_QWORD *)this + 21) )
  {
LABEL_24:
    if ( v12 )
      ATL::CCritSecLock::Unlock(&v11);
    if ( v5 >= 1.0 )
      v10 = FLOAT_1_0;
    else
      v10 = v5;
    if ( v10 <= 0.0 )
    {
      v5 = 0.0;
    }
    else if ( v5 >= 1.0 )
    {
      v5 = FLOAT_1_0;
    }
    *a2 = v5;
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_34;
  }
  v13 = 0LL;
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&v13, *((unsigned int *)this + 19));
  v7 = v13;
  if ( v13 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD))(**((_QWORD **)this + 21) + 24LL))(
           *((_QWORD *)this + 21),
           v13,
           *((unsigned int *)this + 19));
    v4 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids);
        }
        Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 168));
        v4 = 0;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 19) )
      {
        v9 = *((unsigned int *)this + 19);
        do
        {
          if ( *v7 > v5 )
            v5 = *v7;
          v7 += 3;
          --v9;
        }
        while ( v9 );
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_g(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x38u,
          (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
          v5);
      }
    }
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v13);
    goto LABEL_24;
  }
  v4 = -2147024882;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v13);
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
LABEL_34:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Au, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v4);
  }
  return (unsigned int)v4;
}
