/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0209F54
 * Callers:
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     xxxCallShellWindowSizeStartingHandler @ 0x1C01D7CC0 (xxxCallShellWindowSizeStartingHandler.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C020B4D0 (IsWindowSubjectToShellSizingPolicy.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct _MOVESIZEDATA *a1)
{
  if ( (unsigned int)(*((_DWORD *)a1 + 40) - 1) <= 1
    && (*((_DWORD *)a1 + 45) & 2) == 0
    && (unsigned int)IsWindowSubjectToShellSizingPolicy(*(_QWORD *)a1) )
  {
    if ( (unsigned int)xxxCallShellWindowSizeStartingHandler(*(_QWORD **)a1, *((_DWORD *)a1 + 40) + 9) )
      *((_DWORD *)a1 + 64) |= 4u;
  }
}
