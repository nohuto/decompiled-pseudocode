/*
 * XREFs of PsQueryProcessAttributes @ 0x14046DFC4
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsQueryProcessAttributesByToken @ 0x14046F8E0 (PsQueryProcessAttributesByToken.c)
 */

signed __int64 __fastcall PsQueryProcessAttributes(struct _KPROCESS *a1, __int64 a2)
{
  PACCESS_TOKEN v4; // rbx

  v4 = PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v4, a2, 0LL);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v4);
}
