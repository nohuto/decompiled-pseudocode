/*
 * XREFs of KdpReadPhysicalMemory @ 0x1406F3F6C
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 *     KdpReadPhysicalMemoryLong @ 0x1406F54D4 (KdpReadPhysicalMemoryLong.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x1400842A4 (MmDbgCopyMemory.c)
 *     RunLengthEncode @ 0x1401D1734 (RunLengthEncode.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReadPhysicalMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v14; // eax
  __int16 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  v4 = *(unsigned int *)(a1 + 24);
  v16 = a1;
  v15 = 56;
  if ( v4 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v4) = KdTransportMaxPacketSize - 56;
  v8 = *(_DWORD *)(a1 + 28);
  v9 = 6;
  LODWORD(v17) = v4;
  v10 = v8 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
        v9 = 38;
    }
    else
    {
      v9 = 22;
    }
  }
  else
  {
    v9 = 14;
  }
  if ( *(_DWORD *)a1 == 12642 )
  {
    if ( (unsigned int)v4 > 4096 - (*(_DWORD *)(a1 + 16) & 0xFFFu) )
      LODWORD(v4) = 4096 - (*(_DWORD *)(a1 + 16) & 0xFFF);
    v14 = MmDbgCopyMemory(*(char **)(a1 + 16), *(_QWORD *)(a2 + 8), v4, 0, v9);
    *(_DWORD *)(a1 + 8) = v14;
    if ( v14 < 0 )
      LODWORD(v4) = 0;
  }
  else
  {
    v12 = KdpCopyMemoryChunks(*(char **)(a1 + 16), *(_QWORD *)(a2 + 8), v4, 0, v9, &v17);
    LODWORD(v4) = v17;
    *(_DWORD *)(a1 + 8) = v12;
  }
  *(_DWORD *)(a1 + 28) = v4;
  if ( *(_DWORD *)a1 == 12642 && RunLengthEncode(*(_DWORD **)(a2 + 8), v4) )
  {
    *(_DWORD *)(a1 + 28) = ((unsigned int)v4 >> 2) | 0x40000000;
    LOWORD(v4) = 4;
  }
  *(_WORD *)a2 = v4;
  return KdSendPacket(2LL, &v15, a2, a4);
}
