/*
 * XREFs of ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18006B5A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800315C0 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     _TlgKeywordOn @ 0x180037F6C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18006B3A0 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 */

void __fastcall CAudioDGProcess::OnADGProcessTerminatedHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        CAudioDGProcess *a2,
        struct _TP_WAIT *a3,
        int a4)
{
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800E7500 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
    TlgWrite(v6, &unk_1800C6610, v7, v8, 2u, &pData);
  if ( a4 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Cu,
        (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids,
        a4);
    }
  }
  else
  {
    CAudioDGProcess::OnADGProcessTerminated(a2);
  }
}
