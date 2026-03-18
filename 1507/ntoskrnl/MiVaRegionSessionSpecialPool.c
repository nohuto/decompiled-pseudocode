/*
 * XREFs of MiVaRegionSessionSpecialPool @ 0x1402209BC
 * Callers:
 *     MiExpandSpecialPool @ 0x14021F2B8 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x14021F4BC (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiVaRegionSessionSpecialPool(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( a2 )
    ++*(_DWORD *)(result + 7816);
  else
    --*(_DWORD *)(result + 7816);
  return result;
}
