/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x140450420
 * Callers:
 *     KeVerifyContextRecord @ 0x14002055C (KeVerifyContextRecord.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1)
{
  _QWORD *Teb; // r8

  Teb = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && KeGetCurrentThread()->ApcStateIndex != 1 )
    Teb = KeGetCurrentThread()->Teb;
  return a1 >= Teb[2] && a1 <= Teb[1];
}
