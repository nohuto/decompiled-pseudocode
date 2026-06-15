/*
 * XREFs of AudioSessionPropertyStoreCommit @ 0x1800611F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionPropertyStoreCommit(__int64 *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 432LL))(*(_QWORD *)(v1 + 72));
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionPropertyStoreCommit", 2431, v2);
  return v3;
}
