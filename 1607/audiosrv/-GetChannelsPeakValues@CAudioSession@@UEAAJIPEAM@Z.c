/*
 * XREFs of ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x18005BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18000261C (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x180064490 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x180064698 (-GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z.c)
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 */

__int64 __fastcall CAudioSession::GetChannelsPeakValues(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  int MeteringChannelCount; // edi
  unsigned __int64 v7; // r14
  float *v8; // rbx
  float *v9; // rax
  signed __int64 v10; // rbx
  __int64 v11; // rdx
  float v12; // xmm0_4
  LPCRITICAL_SECTION v14; // [rsp+30h] [rbp-10h] BYREF
  char v15; // [rsp+38h] [rbp-8h]
  unsigned int v16; // [rsp+80h] [rbp+40h] BYREF
  float *v17; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, 0LL);
  }
  if ( !a3 )
  {
    MeteringChannelCount = -2147467261;
    goto LABEL_31;
  }
  if ( (_DWORD)v4 )
    memset(a3, 0, 4 * v4);
  MeteringChannelCount = (*(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)this + 384LL))(
                           this,
                           &v16);
  if ( MeteringChannelCount < 0 )
    goto LABEL_31;
  if ( (_DWORD)v4 != v16 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
    }
    MeteringChannelCount = -2147024809;
    goto LABEL_31;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v14, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v7 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    while ( 1 )
    {
      v17 = 0LL;
      if ( v7 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      MeteringChannelCount = CAudioStream::GetMeteringChannelCount(
                               *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7),
                               &v16);
      if ( MeteringChannelCount < 0 )
      {
        ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v17);
        goto LABEL_28;
      }
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&v17, v16);
      v8 = v17;
      if ( !v17 )
        break;
      if ( v7 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      if ( CAudioStream::GetChannelPeakValues(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7), v16, v17) >= 0 && v16 )
      {
        v9 = a3;
        v10 = (char *)v8 - (char *)a3;
        v11 = v16;
        do
        {
          v12 = *(float *)((char *)v9 + v10);
          if ( v12 > *v9 )
            *v9 = v12;
          ++v9;
          --v11;
        }
        while ( v11 );
      }
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v17);
      if ( ++v7 >= *((_QWORD *)this + 13) )
        goto LABEL_28;
    }
    MeteringChannelCount = -2147024882;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v17);
    if ( v15 )
      ATL::CCritSecLock::Unlock(&v14);
    goto LABEL_31;
  }
LABEL_28:
  if ( v15 )
    ATL::CCritSecLock::Unlock(&v14);
  if ( MeteringChannelCount < 0 )
LABEL_31:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelsPeakValues", 1573, MeteringChannelCount);
  return (unsigned int)MeteringChannelCount;
}
