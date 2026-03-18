/*
 * XREFs of rimFindReferencedRimObj @ 0x1C00CDF28
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00D5BB4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00D5DD8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedRimObj(int a1, __int16 a2, __int16 a3, struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY *Flink; // r10
  struct _LIST_ENTRY *v9; // r8
  struct _LIST_ENTRY *v10; // rbx
  int Blink_high; // ecx
  int v12; // ecx
  int v13; // ecx
  NTSTATUS v14; // edi

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v9 = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_41;
  do
  {
    v10 = v9 - 1;
    if ( !LOBYTE(v9[3].Blink) && !BYTE1(v10[4].Blink) )
    {
      Blink_high = HIDWORD(v10[4].Blink);
      if ( (Blink_high & a1) != 0 )
      {
        if ( (unsigned int)(Blink_high - 1) <= 1 )
          break;
        v12 = HIDWORD(v10[4].Blink) & 0x1C;
        if ( v12 == 4 && a2 == 13 && a3 == 2 )
          break;
        if ( v12 == 8 && a2 == 13 && a3 == 5 || v12 == 16 && a2 == 13 && a3 == 4 )
          break;
      }
    }
    v9 = v9->Flink;
    v10 = 0LL;
  }
  while ( v9 != &gObRimList );
  if ( v10 )
    goto LABEL_39;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_41;
  do
  {
    v10 = Flink - 1;
    if ( !LOBYTE(Flink[3].Blink) && !BYTE1(v10[4].Blink) && (HIDWORD(v10[4].Blink) & a1) != 0 )
    {
      v13 = HIDWORD(v10[4].Blink) & 0x1C;
      if ( v13 == 12 && a2 == 13 && (a3 == 2 || a3 == 5) )
        break;
      if ( v13 == 24 && a2 == 13 && (unsigned __int16)(a3 - 4) <= 1u
        || v13 == 20 && a2 == 13 && ((a3 - 2) & 0xFFFD) == 0
        || v13 == 28 && (a2 == 13 && ((a3 - 2) & 0xFFFC) == 0 && a3 != 3 || a2 == 1 && a3 == 14) )
      {
        break;
      }
    }
    Flink = Flink->Flink;
    v10 = 0LL;
  }
  while ( Flink != &gObRimList );
  if ( !v10 )
  {
LABEL_41:
    v14 = -1073741637;
  }
  else
  {
LABEL_39:
    v14 = ObReferenceObjectByPointer(v10, 3u, ExRawInputManagerObjectType, 1);
    if ( v14 >= 0 )
      *a4 = v10;
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  return (unsigned int)v14;
}
