/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x14006D530
 * Callers:
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

__int64 CcUpdateTimeOnLogHandles()
{
  __int64 result; // rax
  __int64 i; // rcx
  int v2; // edx

  result = MEMORY[0xFFFFF78000000320];
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    v2 = *(_DWORD *)(i + 168);
    if ( (v2 & 1) != 0 )
    {
      *(_QWORD *)(i + 160) = result;
      *(_DWORD *)(i + 168) = v2 & 0xFFFFFFFE;
    }
  }
  return result;
}
