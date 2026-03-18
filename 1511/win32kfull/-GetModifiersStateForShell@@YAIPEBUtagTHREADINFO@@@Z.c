/*
 * XREFs of ?GetModifiersStateForShell@@YAIPEBUtagTHREADINFO@@@Z @ 0x1C01D65FC
 * Callers:
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01D7B60 (xxxCallIAMGetArrangementRectangleHandler.c)
 *     xxxCallShellWindowSizeStartingHandler @ 0x1C01D7CC0 (xxxCallShellWindowSizeStartingHandler.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01D8164 (xxxNotifyShellWindowBorderEnter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModifiersStateForShell(const struct tagTHREADINFO *a1)
{
  unsigned int v1; // edx
  char v2; // cl

  v1 = 0;
  v2 = *(_BYTE *)(*((_QWORD *)a1 + 48) + 188LL);
  if ( (v2 & 1) != 0 )
    v1 = 4;
  if ( (v2 & 0x10) != 0 )
    v1 |= 1u;
  if ( (v2 & 4) != 0 )
    v1 |= 2u;
  return v1;
}
