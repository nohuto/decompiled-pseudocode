/*
 * XREFs of VfZwProtectVirtualMemory @ 0x14071F338
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140704240 (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwProtectVirtualMemory(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a4, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
  }
  return pXdvZwProtectVirtualMemory(a1, a2, a3, a4, a5);
}
