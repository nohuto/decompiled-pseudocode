/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800646FC
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x18005C5D0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 * Callees:
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x1800288E8 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_g @ 0x180058F9C (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800643FC (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  int v4; // edi
  float v5; // xmm6_4
  float *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  float v10; // xmm6_4
  LPCRITICAL_SECTION v11; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+30h] [rbp-38h]
  float *v13; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  if ( !*((_QWORD *)this + 23) )
  {
LABEL_22:
    if ( v12 )
      ATL::CCritSecLock::Unlock(&v11);
    v10 = fminf(v5, 1.0);
    if ( v10 <= 0.0 )
      v10 = 0.0;
    *a2 = v10;
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_27;
  }
  v13 = 0LL;
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&v13, *((unsigned int *)this + 21));
  v7 = v13;
  if ( v13 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD))(**((_QWORD **)this + 23) + 24LL))(
           *((_QWORD *)this + 23),
           v13,
           *((unsigned int *)this + 21));
    v4 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids);
        }
        ATL::CComPtrBase<IAudioMeter>::Release((_QWORD *)this + 23);
        v4 = 0;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 21) )
      {
        v9 = *((unsigned int *)this + 21);
        do
        {
          v5 = fmaxf(*v7, v5);
          v7 += 3;
          --v9;
        }
        while ( v9 );
      }
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_g(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x24u,
          (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
          v5);
      }
    }
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v13);
    goto LABEL_22;
  }
  v4 = -2147024882;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v13);
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
LABEL_27:
  AudSrvTraceLoggingErrorHelper("CAudioStream::GetPeakValue", 1644, v4);
  return (unsigned int)v4;
}
