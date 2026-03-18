/*
 * XREFs of ?GetModifiersStateForShell@@YAIPEBUtagTHREADINFO@@@Z @ 0x1C01CD4B4
 * Callers:
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01CEBD8 (xxxCallIAMGetArrangementRectangleHandler.c)
 *     xxxCallShellWindowSizeStartingHandler @ 0x1C01CED38 (xxxCallShellWindowSizeStartingHandler.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01CF1DC (xxxNotifyShellWindowBorderEnter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModifiersStateForShell(const struct tagTHREADINFO *a1)
{
  unsigned int v1; // edx
  char v2; // cl

  v1 = 0;
  v2 = *(_BYTE *)(*((_QWORD *)a1 + 48) + 196LL);
  if ( (v2 & 1) != 0 )
    v1 = 4;
  if ( (v2 & 0x10) != 0 )
    v1 |= 1u;
  if ( (v2 & 4) != 0 )
    v1 |= 2u;
  return v1;
}
