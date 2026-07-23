/*
 * XREFs of MmDbgCopyMemory @ 0x1400842A4
 * Callers:
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 *     KdpReadPhysicalMemory @ 0x1406F3F6C (KdpReadPhysicalMemory.c)
 *     KdpSearchMemory @ 0x1406F5684 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPage @ 0x1406F5878 (KdpSearchPhysicalPage.c)
 * Callees:
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 */

__int64 __fastcall MmDbgCopyMemory(char *BaseAddress, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned int v9; // esi

  v5 = a3;
  if ( a4 != 4 && a4 > 2 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = 4096 - ((unsigned __int16)BaseAddress & 0xFFF);
      if ( v9 > v5 )
        v9 = v5;
      result = MiDbgCopyMemory(BaseAddress, a5);
      if ( (int)result < 0 )
        break;
      BaseAddress += v9;
      a2 += v9;
      v5 -= v9;
    }
    while ( v5 );
  }
  return result;
}
