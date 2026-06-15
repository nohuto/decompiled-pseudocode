/*
 * XREFs of ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x14002F690
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFrequencyForOffload(CAudioDeviceGraph *this, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // ebx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, void **); // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  unsigned __int16 v10; // dx
  void (*v11)(void); // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v5 = -2005139437;
    goto LABEL_21;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL);
  if ( !v6 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = **(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(*(_QWORD *)(v6 + 16) + 32LL);
  v8 = (**v7)(v7, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v14);
  v5 = v8;
  if ( v8 >= 0 )
  {
    v8 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v14)(
           v14,
           &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7,
           &v13);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v13 + 24LL))(v13, a2);
      if ( v5 >= 0 )
      {
        v5 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x1Fu,
            (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
            *a2);
        }
      }
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v10 = 30;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v10 = 29;
LABEL_10:
      WPP_SF_D(v9[2], v10, (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids, v8);
    }
  }
LABEL_21:
  LeaveCriticalSection(v2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x20u,
        (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        v5);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetFrequencyForOffload", 537, v5);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v11 == (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((int *)v14);
    else
      v11();
  }
  return (unsigned int)v5;
}
