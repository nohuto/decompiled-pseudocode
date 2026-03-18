/*
 * XREFs of PsQueryProcessAttributes @ 0x140471DC0
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspAssignProcessToJob @ 0x1404F2C60 (PspAssignProcessToJob.c)
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 *     PopCreateUserPowerRequest @ 0x14051E750 (PopCreateUserPowerRequest.c)
 * Callees:
 *     PsQueryProcessAttributesByToken @ 0x14040D154 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PsQueryProcessAttributes(struct _KPROCESS *a1, _BYTE *a2, _BYTE *a3)
{
  PACCESS_TOKEN v6; // rbx

  v6 = PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken((__int64)v6, a2, a3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v6);
}
