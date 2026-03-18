/*
 * XREFs of HalpIsValidPartitionEntry @ 0x14056303C
 * Callers:
 *     IoReadPartitionTable @ 0x140562AE0 (IoReadPartitionTable.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIsValidPartitionEntry(_BYTE *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r8

  if ( !a1[4] )
    return 1;
  v4 = (unsigned __int8)a1[8]
     + ((unsigned __int8)a1[9] << 8)
     + ((unsigned __int8)a1[10] << 16)
     + ((unsigned __int8)a1[11] << 24);
  return v4
       + ((unsigned __int8)a1[13] << 8)
       + ((unsigned __int8)a1[14] << 16)
       + ((unsigned __int8)a1[15] << 24)
       + (unsigned int)(unsigned __int8)a1[12] <= a3
      && v4 <= a2;
}
