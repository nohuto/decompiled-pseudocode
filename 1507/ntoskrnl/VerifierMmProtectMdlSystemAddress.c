/*
 * XREFs of VerifierMmProtectMdlSystemAddress @ 0x140753DA4
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 */

NTSTATUS __fastcall VerifierMmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPageProtection(NewProtect, retaddr);
  return pXdvMmProtectMdlSystemAddress(MemoryDescriptorList, NewProtect);
}
