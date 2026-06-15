/*
 * XREFs of ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180073570
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800664B8 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x18007CC54 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x18007CFDC (-GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall CAudioSession::GetChannelsPeakValues(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // r14
  TraceLoggingHProvider v6; // rcx
  int MeteringChannelCount; // edi
  unsigned __int64 v8; // r14
  float *v9; // rbx
  float *v10; // rax
  signed __int64 v11; // rbx
  __int64 v12; // rdx
  float v13; // xmm0_4
  LPCRITICAL_SECTION v15; // [rsp+30h] [rbp-10h] BYREF
  char v16; // [rsp+38h] [rbp-8h]
  unsigned int v17; // [rsp+80h] [rbp+40h] BYREF
  float *v18; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, 0LL);
    v6 = WPP_GLOBAL_Control;
  }
  if ( !a3 )
  {
    MeteringChannelCount = -2147467261;
LABEL_32:
    if ( v6 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v6 + 28) & 0x40) != 0
      && *((_BYTE *)v6 + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)v6 + 2),
        0x3Bu,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        MeteringChannelCount);
    }
    return (unsigned int)MeteringChannelCount;
  }
  if ( (_DWORD)v4 )
    memset_0(a3, 0, 4 * v4);
  MeteringChannelCount = (*(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)this + 384LL))(
                           this,
                           &v17);
  if ( MeteringChannelCount < 0 )
    goto LABEL_31;
  if ( (_DWORD)v4 != v17 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Au,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        v4);
      v6 = WPP_GLOBAL_Control;
    }
    MeteringChannelCount = -2147024809;
    goto LABEL_32;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v15, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v8 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    while ( 1 )
    {
      v18 = 0LL;
      if ( v8 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      MeteringChannelCount = CAudioStream::GetMeteringChannelCount(
                               *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v8),
                               &v17);
      if ( MeteringChannelCount < 0 )
      {
        ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v18);
        goto LABEL_28;
      }
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&v18, v17);
      v9 = v18;
      if ( !v18 )
        break;
      if ( v8 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      if ( CAudioStream::GetChannelPeakValues(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v8), v17, v18) >= 0 && v17 )
      {
        v10 = a3;
        v11 = (char *)v9 - (char *)a3;
        v12 = v17;
        do
        {
          v13 = *(float *)((char *)v10 + v11);
          if ( v13 > *v10 )
            *v10 = v13;
          ++v10;
          --v12;
        }
        while ( v12 );
      }
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v18);
      if ( ++v8 >= *((_QWORD *)this + 13) )
        goto LABEL_28;
    }
    MeteringChannelCount = -2147024882;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v18);
    if ( v16 )
      ATL::CCritSecLock::Unlock(&v15);
    goto LABEL_31;
  }
LABEL_28:
  if ( v16 )
    ATL::CCritSecLock::Unlock(&v15);
  if ( MeteringChannelCount < 0 )
  {
LABEL_31:
    v6 = WPP_GLOBAL_Control;
    goto LABEL_32;
  }
  return (unsigned int)MeteringChannelCount;
}
