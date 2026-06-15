/*
 * XREFs of AudioSessionPropertyStoreGetValue @ 0x1800613A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionPropertyStoreGetValue(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx

  v3 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 72) + 416LL))(
         *(_QWORD *)(v3 + 72),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionPropertyStoreGetValue", 2397, v6);
  return v7;
}
