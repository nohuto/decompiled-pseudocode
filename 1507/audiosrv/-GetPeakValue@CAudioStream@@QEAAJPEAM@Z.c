/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x180081C78
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x180078E30 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180001A70 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180067ECC (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_g @ 0x1800711D8 (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180081940 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
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
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)this + 3);
  if ( !*((_QWORD *)this + 22) )
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
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&v13, *((unsigned int *)this + 21));
  v7 = v13;
  if ( v13 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD))(**((_QWORD **)this + 22) + 24LL))(
           *((_QWORD *)this + 22),
           v13,
           *((unsigned int *)this + 21));
    v4 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x3Du,
            (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids);
        }
        ATL::CComPtrBase<IAudioMeter>::Release((__int64 *)this + 22);
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
          if ( *v7 > v5 )
            v5 = *v7;
          v7 += 3;
          --v9;
        }
        while ( v9 );
      }
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
      {
        WPP_SF_g(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x3Cu,
          (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Eu,
      (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
