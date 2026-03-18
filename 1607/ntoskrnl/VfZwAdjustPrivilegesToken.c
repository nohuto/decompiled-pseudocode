/*
 * XREFs of VfZwAdjustPrivilegesToken @ 0x14071D2EC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAdjustPrivilegesToken(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdx
  int v11; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v11, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
  }
  LOBYTE(v10) = a2;
  return pXdvZwAdjustPrivilegesToken(a1, v10, a3, a4, a5, a6);
}
