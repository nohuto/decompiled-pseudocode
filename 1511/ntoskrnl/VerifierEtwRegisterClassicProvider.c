/*
 * XREFs of VerifierEtwRegisterClassicProvider @ 0x1406D0DF8
 * Callers:
 *     <none>
 * Callees:
 *     EtwRegisterClassicProvider @ 0x1404CC708 (EtwRegisterClassicProvider.c)
 *     VfTargetEtwRegister @ 0x1406C3F8C (VfTargetEtwRegister.c)
 */

__int64 __fastcall VerifierEtwRegisterClassicProvider(int a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int v5; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v5 = pXdvEtwRegisterClassicProvider(a1, a2, a3, a4, (__int64)a5);
  if ( v5 >= 0 )
    VfTargetEtwRegister(*a5, retaddr);
  return (unsigned int)v5;
}
