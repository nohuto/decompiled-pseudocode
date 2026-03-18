/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01CBF44
 * Callers:
 *     DestroyThreadHidObjects @ 0x1C00E2960 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01CC7F0 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 36); ; i = *(_QWORD *)(i + 584) )
  {
    if ( !i )
      return 0LL;
    if ( (*(_DWORD *)(i + 1096) & 0x200000) != 0 )
      break;
  }
  return 1LL;
}
