/*
 * XREFs of MiFillPageExtraInfo @ 0x1401E26A0
 * Callers:
 *     MiLogAllocateWsleEvent @ 0x1401E26D0 (MiLogAllocateWsleEvent.c)
 *     MiLogRemoveWsleEvent @ 0x1401E2800 (MiLogRemoveWsleEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall MiFillPageExtraInfo(unsigned __int64 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r8

  v3 = a3 & 0xFFFFFFFFFFFFF000uLL;
  *a1 = v3;
  if ( a2 )
  {
    if ( a2 == 1 )
      v4 = v3 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    else
      v4 = v3 & 0xFFFFFFFFFFFFFFFCuLL | 2;
  }
  else
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  *a1 = v4;
}
