/*
 * XREFs of KdpCopyContext @ 0x1406F2344
 * Callers:
 *     KdpReport @ 0x1400F4360 (KdpReport.c)
 *     KdpSetContextEx @ 0x140125990 (KdpSetContextEx.c)
 *     KdpSymbol @ 0x1406F227C (KdpSymbol.c)
 *     KdpGetContext @ 0x1406F3240 (KdpGetContext.c)
 *     KdpSetContext @ 0x1406F3564 (KdpSetContext.c)
 *     KdpCommandString @ 0x1406F3C28 (KdpCommandString.c)
 * Callees:
 *     KdpQuickMoveMemory @ 0x1406F23B8 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpCopyContext(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  int v6; // r9d
  unsigned int v7; // eax
  __int64 v8; // r8

  KdpQuickMoveMemory(a1, a3, 1232LL);
  result = 1048640LL;
  v3[12] = v6;
  if ( (v6 & 0x100040) == 0x100040 )
  {
    v7 = *(_DWORD *)(v4 + 1252);
    v8 = (unsigned int)v3[313];
    if ( (unsigned int)v8 > v7 )
      v8 = v7;
    return KdpQuickMoveMemory((char *)v3 + v3[312] + 1232, *(int *)(v4 + 1248) + v4 + 1232, v8);
  }
  return result;
}
