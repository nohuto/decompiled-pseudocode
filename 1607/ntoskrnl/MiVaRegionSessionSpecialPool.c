/*
 * XREFs of MiVaRegionSessionSpecialPool @ 0x1401EC9AC
 * Callers:
 *     MiExpandSpecialPool @ 0x1401EB618 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB91C (MiRemoveSpecialPoolRange.c)
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
