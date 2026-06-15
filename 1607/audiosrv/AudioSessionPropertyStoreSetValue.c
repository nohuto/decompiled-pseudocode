/*
 * XREFs of AudioSessionPropertyStoreSetValue @ 0x180061440
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionPropertyStoreSetValue(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx

  v3 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 72) + 424LL))(
         *(_QWORD *)(v3 + 72),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionPropertyStoreSetValue", 2414, v6);
  return v7;
}
