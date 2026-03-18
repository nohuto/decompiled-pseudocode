/*
 * XREFs of HalpIsValidPartitionEntry @ 0x1404E8F00
 * Callers:
 *     IoReadPartitionTable @ 0x1404E89A8 (IoReadPartitionTable.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIsValidPartitionEntry(_BYTE *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r8

  if ( !a1[4] )
    return 1;
  v5 = (unsigned __int8)a1[8]
     + ((unsigned __int8)a1[9] << 8)
     + ((unsigned __int8)a1[10] << 16)
     + ((unsigned __int8)a1[11] << 24);
  return v5
       + ((unsigned __int8)a1[13] << 8)
       + ((unsigned __int8)a1[14] << 16)
       + ((unsigned __int8)a1[15] << 24)
       + (unsigned int)(unsigned __int8)a1[12] <= a3
      && v5 <= a2;
}
