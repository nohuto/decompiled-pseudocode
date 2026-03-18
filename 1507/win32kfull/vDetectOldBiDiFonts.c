/*
 * XREFs of vDetectOldBiDiFonts @ 0x1C0159918
 * Callers:
 *     bComputeIDs @ 0x1C015929C (bComputeIDs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vDetectOldBiDiFonts(__int64 a1, __int16 a2, _DWORD *a3, int *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = gpGdiSharedMemory;
  if ( *(_DWORD *)(gpGdiSharedMemory + 1573012LL) )
  {
    if ( a1 )
    {
      v5 = a2 & 0xFF00;
      result = (unsigned int)(v5 - 61440);
      if ( (unsigned int)result <= 0x2FF )
      {
        result = *(unsigned __int16 *)(a1 + 62);
        if ( (unsigned __int8)result >= 0xB1u && (unsigned __int8)result <= 0xB5u )
        {
          *a3 = 7;
          *a4 = v5;
        }
      }
    }
  }
  return result;
}
