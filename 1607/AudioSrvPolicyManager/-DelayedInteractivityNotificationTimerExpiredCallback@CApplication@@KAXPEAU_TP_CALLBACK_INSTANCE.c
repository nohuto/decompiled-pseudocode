/*
 * XREFs of ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000C7F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::DelayedInteractivityNotificationTimerExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_TIMER *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // rcx
  UINT32 v9; // [rsp+20h] [rbp-29h]
  int v10; // [rsp+30h] [rbp-19h] BYREF
  int v11; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  int *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  int *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  v3 = a2[56];
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct _TP_TIMER *))(*(_QWORD *)v3 + 16LL))(v3, a2, a3);
  v10 = v5;
  if ( v5 >= 0 )
    a2[56] = 0LL;
  v8 = a2[56];
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
    v5 = v10;
  }
  a2[56] = 0LL;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v5);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = "__FUNC__";
      v16 = &v11;
      v19 = &v10;
      v14 = 9;
      v11 = 1556;
      v17 = 4;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v6, v7, v9, &pData);
    }
  }
}
