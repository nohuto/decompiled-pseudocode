/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x180064490
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x18005BC20 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_g @ 0x180058F9C (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800643FC (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // r14
  __int64 v4; // rsi
  int v6; // edi
  float *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  float v11; // xmm0_4
  LPCRITICAL_SECTION v12; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  float *v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 != *((_DWORD *)this + 21) )
    return 2147942487LL;
  if ( a2 )
    memset(a3, 0, 4LL * a2);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v12, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  if ( !*((_QWORD *)this + 23) )
  {
LABEL_28:
    if ( v13 )
      ATL::CCritSecLock::Unlock(&v12);
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_31;
  }
  v14 = 0LL;
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&v14, *((unsigned int *)this + 21));
  v8 = v14;
  if ( v14 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD))(**((_QWORD **)this + 23) + 24LL))(
           *((_QWORD *)this + 23),
           v14,
           *((unsigned int *)this + 21));
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids);
        }
        ATL::CComPtrBase<IAudioMeter>::Release((_QWORD *)this + 23);
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
          v11 = fminf(*v8, 1.0);
          if ( v11 <= 0.0 )
            v11 = 0.0;
          *v3 = v11;
          v8 += 3;
          ++v3;
          --v10;
        }
        while ( v10 );
      }
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_g(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x27u,
          (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
          0.0);
      }
    }
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v14);
    goto LABEL_28;
  }
  v6 = -2147024882;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v14);
  if ( v13 )
    ATL::CCritSecLock::Unlock(&v12);
LABEL_31:
  AudSrvTraceLoggingErrorHelper("CAudioStream::GetChannelPeakValues", 1747, v6);
  return (unsigned int)v6;
}
