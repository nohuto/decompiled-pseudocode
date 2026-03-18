/*
 * XREFs of VerifierEtwRegister @ 0x14075498C
 * Callers:
 *     <none>
 * Callees:
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     VfTargetEtwRegister @ 0x140745840 (VfTargetEtwRegister.c)
 */

__int64 __fastcall VerifierEtwRegister(const GUID *a1, ETWENABLECALLBACK *a2, void *a3, ULONGLONG *a4)
{
  int v5; // ebx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v5 = pXdvEtwRegister(a1, a2, a3, a4);
  if ( v5 >= 0 )
    VfTargetEtwRegister(*a4, retaddr);
  return (unsigned int)v5;
}
