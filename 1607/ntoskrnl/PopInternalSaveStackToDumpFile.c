/*
 * XREFs of PopInternalSaveStackToDumpFile @ 0x1401FEF58
 * Callers:
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14014BA20 (IopIsAddressRangeValid.c)
 */

void __fastcall PopInternalSaveStackToDumpFile(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( !IopIsAddressRangeValid(v1, 336LL) )
        break;
      IoAddTriageDumpDataBlock(v1, *(unsigned __int16 *)(v1 + 2));
      v2 = *(_QWORD *)(v1 + 8);
      if ( v2 )
      {
        if ( IopIsAddressRangeValid(*(_QWORD *)(v1 + 8), 336LL) )
        {
          IoAddTriageDumpDataBlock(v2, *(__int16 *)(v2 + 2));
          v3 = *(_QWORD *)(v2 + 64);
          if ( v3 )
            IoAddTriageDumpDataBlock(v3, *(unsigned __int16 *)(v2 + 56));
        }
      }
      v4 = *(_QWORD *)(v1 + 312);
      if ( v4 && IopIsAddressRangeValid(*(_QWORD *)(v1 + 312), 8LL) )
      {
        IoAddTriageDumpDataBlock(v4, *(unsigned __int16 *)(v4 + 2));
        v5 = *(_QWORD *)(v4 + 40);
        if ( v5 )
          IoAddTriageDumpDataBlock(v5 & 0xFFFFF000, ((*(_QWORD *)(v4 + 40) & 0xFFF) + 4607) & 0xFFFFF000);
        v6 = *(_QWORD *)(v4 + 48);
        if ( v6 && IopIsAddressRangeValid(*(_QWORD *)(v4 + 48), 336LL) )
          IoAddTriageDumpDataBlock(v6, *(unsigned __int16 *)(v6 + 2));
        v7 = *(_QWORD *)(v4 + 72);
        if ( v7 && IopIsAddressRangeValid(v7, 96LL) )
          IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 72), *(__int16 *)(*(_QWORD *)(v4 + 72) + 2LL));
        v8 = *(_QWORD *)(v4 + 24);
        if ( v8 )
          IoAddTriageDumpDataBlock(v8, 96);
      }
      v1 = *(_QWORD *)(v1 + 24);
    }
    while ( v1 );
  }
}
