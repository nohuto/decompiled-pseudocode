/*
 * XREFs of ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1C00C540C
 * Callers:
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00C53F0 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VBRUSH@@@@@@SAXPEAX@Z @ 0x1C00C5430 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgSha_ea_1C00C5430.c)
 * Callees:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 */

void __fastcall HmgShareLockResult<BRUSH>::CleanupRoutine(struct HOBJ__ ***a1)
{
  struct HOBJ__ **v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT_LAZY0(v2);
    *a1 = 0LL;
  }
}
