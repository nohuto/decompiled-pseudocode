/*
 * XREFs of RtlGuardIsValidWow64StackPointer @ 0x1406D0030
 * Callers:
 *     PspWowSetContextThread @ 0x14056AA80 (PspWowSetContextThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidWow64StackPointer(unsigned int a1)
{
  char *v2; // r8
  char *Teb; // rcx

  v2 = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = (char *)KeGetCurrentThread()->Teb;
  if ( Teb )
    v2 = Teb + 0x2000;
  return a1 >= *((_DWORD *)v2 + 2) && a1 <= *((_DWORD *)v2 + 1);
}
