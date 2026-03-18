/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C0005AD8
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C0005BA0 (RIMIsParentCommon.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMFindSiblingMouseDevice(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  __int64 *v7; // rsi
  __int16 v8; // di
  __int64 v9; // rbx

  RIMLockExclusive(&gObListLock);
  v7 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList != &gObRimDevList )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v7 == (__int64 *)16 ? 0LL : (__int64)(v7 + 6);
      if ( !*(_BYTE *)(v9 + 48)
        && (*(_DWORD *)(v9 + 184) & 0x100) == 0
        && (unsigned int)RIMIsParentCommon(a4, v9, a2, *(unsigned __int16 *)(v9 + 742), *(_WORD *)(v9 + 744)) )
      {
        break;
      }
      v7 = (__int64 *)*v7;
      if ( v7 == &gObRimDevList )
        return RIMUnlockExclusive(&gObListLock);
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
    *(_WORD *)(v9 + 740) = (v8 | *(_WORD *)(v9 + 740)) & 0xFFFE;
    if ( a3 == 5 && *(_WORD *)(a2 + 110) == 1118 )
      *(_DWORD *)(v9 + 184) |= 0xC00000u;
  }
  return RIMUnlockExclusive(&gObListLock);
}
