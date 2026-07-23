/*
 * XREFs of VerifierEtwRegister @ 0x14071CF6C
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetEtwRegister @ 0x14071005C (VfTargetEtwRegister.c)
 */

__int64 __fastcall VerifierEtwRegister(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // ebx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v5 = pXdvEtwRegister();
  if ( v5 >= 0 )
    VfTargetEtwRegister(*a4, retaddr);
  return (unsigned int)v5;
}
