/*
 * XREFs of VerifyChildMenu @ 0x1C02245FC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     UnlockWndMenu @ 0x1C01270C8 (UnlockWndMenu.c)
 */

char __fastcall VerifyChildMenu(__int64 a1, int a2)
{
  char result; // al

  result = *(_BYTE *)(a1 + 55) & 0xC0;
  if ( a2 )
  {
    if ( result != 64 )
      *(_QWORD *)(a1 + 192) = 0LL;
  }
  else if ( result == 64 )
  {
    SetOrClrWF(0, (_DWORD *)a1, 1u, 0);
    return UnlockWndMenu(a1, (_QWORD *)(a1 + 192));
  }
  return result;
}
