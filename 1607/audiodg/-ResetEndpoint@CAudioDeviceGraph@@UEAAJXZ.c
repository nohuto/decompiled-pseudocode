/*
 * XREFs of ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x14002FD70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::ResetEndpoint(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  int v3; // ebx
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, void **); // rcx
  int v6; // eax
  _QWORD *v7; // rcx
  unsigned __int16 v8; // dx
  void (*v9)(void); // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( !*((_DWORD *)this + 56) )
  {
    v3 = -2005139437;
    goto LABEL_21;
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL);
  if ( !v4 )
    ATL::AtlThrowImpl(-2147467259);
  v5 = **(__int64 (__fastcall *****)(_QWORD, GUID *, void **))(*(_QWORD *)(v4 + 16) + 32LL);
  v6 = (**v5)(v5, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v12);
  v3 = v6;
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v12)(
           v12,
           &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
           &v11);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
      if ( v3 >= 0 )
      {
        (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 160LL))(this);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
        }
      }
    }
    else
    {
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v8 = 34;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v8 = 33;
LABEL_10:
      WPP_SF_D(v7[2], v8, (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids, v6);
    }
  }
LABEL_21:
  LeaveCriticalSection(v1);
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x24u,
        (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        v3);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::ResetEndpoint", 619, v3);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
    if ( (char *)v9 == (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release((int *)v12);
    else
      v9();
  }
  return (unsigned int)v3;
}
