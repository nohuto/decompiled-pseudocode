/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x18007CC54
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180073570 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_g @ 0x18006F8F0 (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18007CBE8 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // r15
  __int64 v4; // rbp
  int v6; // edi
  float *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  float v11; // xmm0_4
  float v12; // xmm2_4
  LPCRITICAL_SECTION v13; // [rsp+28h] [rbp-40h] BYREF
  char v14; // [rsp+30h] [rbp-38h]
  float *v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 != *((_DWORD *)this + 19) )
    return 2147942487LL;
  if ( a2 )
    memset_0(a3, 0, 4LL * a2);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v13, (struct _RTL_CRITICAL_SECTION *)((char *)this + 112));
  if ( !*((_QWORD *)this + 21) )
  {
LABEL_33:
    if ( v14 )
      ATL::CCritSecLock::Unlock(&v13);
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_36;
  }
  v15 = 0LL;
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&v15, *((unsigned int *)this + 19));
  v8 = v15;
  if ( v15 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD))(**((_QWORD **)this + 21) + 24LL))(
           *((_QWORD *)this + 21),
           v15,
           *((unsigned int *)this + 19));
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Du, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids);
        }
        Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 168));
        v6 = 0;
      }
    }
    else
    {
      if ( (_DWORD)v4 )
      {
        v10 = v4;
        do
        {
          v11 = *v8;
          if ( *v8 >= 1.0 )
            v12 = FLOAT_1_0;
          else
            v12 = *v8;
          if ( v12 <= 0.0 )
          {
            v11 = 0.0;
          }
          else if ( v11 >= 1.0 )
          {
            v11 = FLOAT_1_0;
          }
          *v3 = v11;
          v8 += 3;
          ++v3;
          --v10;
        }
        while ( v10 );
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_g(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x3Cu,
          (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
          0.0);
      }
    }
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v15);
    goto LABEL_33;
  }
  v6 = -2147024882;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v15);
  if ( v14 )
    ATL::CCritSecLock::Unlock(&v13);
LABEL_36:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Eu, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v6);
  }
  return (unsigned int)v6;
}
