/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1406B6590
 * Callers:
 *     VerifierExFreePool @ 0x1406B6570 (VerifierExFreePool.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1406C48D4 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1406C7FE4 (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1406D5158 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(void *a1, ULONG Tag, __int64 a3, __int64 a4)
{
  VfFreePoolNotification(a1, 0LL, a3, a4);
  VfIrpDatabaseCheckExFreePool((int)a1);
  if ( (MiFlags & 2) != 0 )
  {
    ExFreePoolWithTag(a1, Tag);
  }
  else
  {
    ExFreePoolSanityChecks(a1);
    pXdvExFreePoolWithTag(a1, Tag);
  }
}
