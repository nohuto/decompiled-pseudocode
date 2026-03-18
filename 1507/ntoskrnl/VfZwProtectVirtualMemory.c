/*
 * XREFs of VfZwProtectVirtualMemory @ 0x140756D34
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *a2,
        SIZE_T *a3,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(NewAccessProtection, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, retaddr);
    ViZwCheckVirtualAddress((int)a3, retaddr);
    ViZwCheckVirtualAddress((int)OldAccessProtection, retaddr);
  }
  return pXdvZwProtectVirtualMemory(ProcessHandle, a2, a3, NewAccessProtection, OldAccessProtection);
}
