/*
 * XREFs of rimFindReferencedRimObj @ 0x1C00C16D0
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00C64DC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C66E8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedRimObj(int a1, __int64 a2, __int16 a3, struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v8; // rdx
  struct _LIST_ENTRY *v9; // rbx
  int Blink_high; // ecx
  int v11; // ecx
  int v12; // ecx
  NTSTATUS v13; // edi

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v8 = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_32;
  do
  {
    v9 = v8 - 1;
    if ( !LOBYTE(v8[3].Blink) && !BYTE1(v9[4].Blink) )
    {
      Blink_high = HIDWORD(v9[4].Blink);
      if ( (Blink_high & a1) != 0 )
      {
        if ( (unsigned int)(Blink_high - 1) <= 1 )
          break;
        v11 = HIDWORD(v9[4].Blink) & 0x1C;
        if ( v11 == 4 && a3 == 2 )
          break;
        if ( v11 == 8 && a3 == 5 || v11 == 16 && a3 == 4 )
          break;
      }
    }
    v8 = v8->Flink;
    v9 = 0LL;
  }
  while ( v8 != &gObRimList );
  if ( v9 )
    goto LABEL_30;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_32;
  do
  {
    v9 = Flink - 1;
    if ( !LOBYTE(Flink[3].Blink) && !BYTE1(v9[4].Blink) && (HIDWORD(v9[4].Blink) & a1) != 0 )
    {
      v12 = HIDWORD(v9[4].Blink) & 0x1C;
      if ( v12 == 12 && (a3 == 2 || a3 == 5) )
        break;
      if ( v12 == 24 && (unsigned __int16)(a3 - 4) <= 1u
        || v12 == 20 && ((a3 - 2) & 0xFFFD) == 0
        || v12 == 28 && ((a3 - 2) & 0xFFFC) == 0 && a3 != 3 )
      {
        break;
      }
    }
    Flink = Flink->Flink;
    v9 = 0LL;
  }
  while ( Flink != &gObRimList );
  if ( !v9 )
  {
LABEL_32:
    v13 = -1073741637;
  }
  else
  {
LABEL_30:
    v13 = ObReferenceObjectByPointer(v9, 3u, ExRawInputManagerObjectType, 1);
    if ( v13 >= 0 )
      *a4 = v9;
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  return (unsigned int)v13;
}
