/*
 * XREFs of ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C0293CE8
 * Callers:
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VLFONT@@@@@@SAXPEAX@Z @ 0x1C0293D10 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgShareLockResult@.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall HmgShareLockResult<LFONT>::CleanupRoutine(struct LFONT **a1)
{
  struct LFONT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v2);
    *a1 = 0LL;
  }
}
