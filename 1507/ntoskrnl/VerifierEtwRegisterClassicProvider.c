/*
 * XREFs of VerifierEtwRegisterClassicProvider @ 0x1407549C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwRegisterClassicProvider @ 0x1405817D4 (EtwRegisterClassicProvider.c)
 *     VfTargetEtwRegister @ 0x140745840 (VfTargetEtwRegister.c)
 */

__int64 __fastcall VerifierEtwRegisterClassicProvider(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(char *, __int64, __int128 *, __int64),
        __int64 a4,
        __int64 *a5)
{
  int v5; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v5 = pXdvEtwRegisterClassicProvider(a1, a2, a3, a4, a5);
  if ( v5 >= 0 )
    VfTargetEtwRegister(*a5, retaddr);
  return (unsigned int)v5;
}
