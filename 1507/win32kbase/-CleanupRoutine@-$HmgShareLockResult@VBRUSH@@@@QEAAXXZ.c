/*
 * XREFs of ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1C00B7858
 * Callers:
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00B783C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VBRUSH@@@@@@SAXPEAX@Z @ 0x1C00B7880 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgSha_ea_1C00B7880.c)
 * Callees:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B2C90 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
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
