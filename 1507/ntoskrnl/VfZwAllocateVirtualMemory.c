/*
 * XREFs of VfZwAllocateVirtualMemory @ 0x140754DAC
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *a2,
        ULONG_PTR ZeroBits,
        ULONG_PTR *a4,
        ULONG a5,
        ULONG Protect)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(Protect, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, retaddr);
    ViZwCheckVirtualAddress((int)a4, retaddr);
  }
  return pXdvZwAllocateVirtualMemory(ProcessHandle, a2, ZeroBits, a4, a5, Protect);
}
