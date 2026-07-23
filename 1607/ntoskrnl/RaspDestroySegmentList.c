/*
 * XREFs of RaspDestroySegmentList @ 0x140129980
 * Callers:
 *     RaspScanConvert @ 0x140128500 (RaspScanConvert.c)
 *     RaspCreateSegmentList @ 0x1401295C8 (RaspCreateSegmentList.c)
 * Callees:
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspDestroySegmentList(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v7; // rbx
  _QWORD *v8; // rsi

  v3 = 0;
  if ( a2 )
  {
    v7 = a1 + 16;
    do
    {
      v8 = (_QWORD *)(v7 - 16);
      if ( v7 == 16 )
        break;
      if ( *(_BYTE *)(v7 + 8) == 3 && *v8 )
        RaspFreeMemory(*v8, a3);
      if ( *(_BYTE *)(v7 + 8) == 4 && *(_QWORD *)v7 )
        RaspFreeMemory(*(_QWORD *)v7, a3);
      if ( *(_BYTE *)(v7 + 8) == 5 )
      {
        if ( *v8 )
          RaspFreeMemory(*v8, a3);
        if ( *(_QWORD *)v7 )
          RaspFreeMemory(*(_QWORD *)v7, a3);
      }
      v7 += 25LL;
      ++v3;
    }
    while ( v3 < a2 );
  }
  return RaspFreeMemory(a1, a3);
}
