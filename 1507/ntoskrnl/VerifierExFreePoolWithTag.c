/*
 * XREFs of VerifierExFreePoolWithTag @ 0x140736880
 * Callers:
 *     VerifierExFreePool @ 0x140736860 (VerifierExFreePool.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x140746198 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14074A9FC (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x140758D44 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(PVOID P, ULONG Tag)
{
  VfFreePoolNotification(P, 0LL);
  VfIrpDatabaseCheckExFreePool((int)P);
  if ( (MiFlags & 2) != 0 )
  {
    ExFreePoolWithTag(P, Tag);
  }
  else
  {
    ExFreePoolSanityChecks(P);
    pXdvExFreePoolWithTag(P, Tag);
  }
}
