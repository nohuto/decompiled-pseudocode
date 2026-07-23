/*
 * XREFs of VerifierExFreePoolWithTag @ 0x140702420
 * Callers:
 *     VerifierExFreePool @ 0x140702400 (VerifierExFreePool.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x140710998 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140716988 (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x140721350 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(ULONG_PTR BugCheckParameter4, ULONG Tag, __int64 a3, __int64 a4)
{
  VfFreePoolNotification(BugCheckParameter4, 0LL, a3, a4);
  VfIrpDatabaseCheckExFreePool(BugCheckParameter4);
  if ( (MiFlags & 2) != 0 )
  {
    ExFreePoolWithTag((PVOID)BugCheckParameter4, Tag);
  }
  else
  {
    ExFreePoolSanityChecks(BugCheckParameter4);
    pXdvExFreePoolWithTag(BugCheckParameter4, Tag);
  }
}
