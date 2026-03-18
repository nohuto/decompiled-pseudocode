/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C0078104
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMIsParentCommon @ 0x1C007822C (RIMIsParentCommon.c)
 */

void __fastcall RIMFindSiblingMouseDevice(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  struct _LIST_ENTRY *Flink; // rsi
  __int16 v8; // di
  __int64 v9; // rbx

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimDevList.Flink;
  if ( gObRimDevList.Flink != &gObRimDevList )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = Flink == (struct _LIST_ENTRY *)16 ? 0LL : (__int64)&Flink[3];
      if ( !*(_BYTE *)(v9 + 48)
        && (*(_DWORD *)(v9 + 184) & 0x100) == 0
        && (unsigned int)RIMIsParentCommon(a4, v9, a2, *(unsigned __int16 *)(v9 + 678), *(_WORD *)(v9 + 680)) )
      {
        break;
      }
      Flink = Flink->Flink;
      if ( Flink == &gObRimDevList )
        goto LABEL_20;
    }
    switch ( a3 )
    {
      case 2:
        v8 = 4;
        break;
      case 4:
        v8 = 8;
        break;
      case 5:
        v8 = 2;
        break;
    }
    *(_WORD *)(v9 + 676) = (v8 | *(_WORD *)(v9 + 676)) & 0xFFFE;
    if ( a3 == 5 && *(_WORD *)(a2 + 110) == 1118 )
      *(_DWORD *)(v9 + 184) |= 0xC00000u;
  }
LABEL_20:
  RIMUnlockExclusive((__int64)&gObListLock);
}
