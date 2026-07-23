/*
 * XREFs of MiVaRegionSessionSpecialPool @ 0x1401EC7D8
 * Callers:
 *     MiExpandSpecialPool @ 0x1401EB444 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB748 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiVaRegionSessionSpecialPool(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( a2 )
    ++*(_DWORD *)(result + 7944);
  else
    --*(_DWORD *)(result + 7944);
  return result;
}
