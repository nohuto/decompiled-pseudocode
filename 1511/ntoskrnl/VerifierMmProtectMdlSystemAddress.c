/*
 * XREFs of VerifierMmProtectMdlSystemAddress @ 0x1406D02D8
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1406B818C (VfCheckPageProtection.c)
 */

NTSTATUS __fastcall VerifierMmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPageProtection(NewProtect, retaddr);
  return pXdvMmProtectMdlSystemAddress(MemoryDescriptorList, NewProtect);
}
