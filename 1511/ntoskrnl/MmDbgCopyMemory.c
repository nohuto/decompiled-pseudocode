/*
 * XREFs of MmDbgCopyMemory @ 0x1401DE338
 * Callers:
 *     KdpReadPhysicalMemory @ 0x1406AB290 (KdpReadPhysicalMemory.c)
 *     KdpSearchMemory @ 0x1406AB95C (KdpSearchMemory.c)
 *     KdpSearchPhysicalPage @ 0x1406ABB50 (KdpSearchPhysicalPage.c)
 *     KdpCopyMemoryChunks @ 0x1406AD60C (KdpCopyMemoryChunks.c)
 * Callees:
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 */

__int64 __fastcall MmDbgCopyMemory(char *BaseAddress, _BYTE *a2, ULONG a3, unsigned int a4, unsigned int a5)
{
  ULONG v6; // edi
  __int64 result; // rax
  ULONG v10; // esi

  v6 = a3;
  if ( a4 > 2 && a4 != 4 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v10 = 4096 - ((unsigned __int16)BaseAddress & 0xFFF);
      if ( v10 > v6 )
        v10 = v6;
      result = MiDbgCopyMemory(BaseAddress, a2, v10, a4, a5);
      if ( (int)result < 0 )
        break;
      BaseAddress += v10;
      a2 += v10;
      v6 -= v10;
    }
    while ( v6 );
  }
  return result;
}
