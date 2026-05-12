/*
 * XREFs of RiGetEnqueueReason @ 0x1C0007630
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C00046D0 (RaidInsertDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C0007570 (RiNormalizeDeviceQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C00076F4 (RiPeekDeviceQueue.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  char v4; // r11
  __int64 v5; // r10
  bool v6; // zf
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // al
  __int64 result; // rax

  v4 = 0;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 32) )
    return 1LL;
  v6 = a3 == 0;
  v7 = *(unsigned int *)(a1 + 76);
  if ( !v6 )
  {
    if ( (int)v7 <= *(_DWORD *)(a1 + 4) )
      goto LABEL_4;
    return 1LL;
  }
  if ( (int)v7 >= *(_DWORD *)(a1 + 4) )
    return 1LL;
LABEL_4:
  if ( *(_BYTE *)(a1 + 37) && (*(_BYTE *)(a2 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(a1 + 36) && (*(_BYTE *)(a2 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(a1 + 28) > 0 )
    return 4LL;
  if ( *(_BYTE *)(a1 + 38) )
    return 5LL;
  if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 16)
    || (v8 = RiPeekDeviceQueue(a1, a2, v7, a4), v5 == v8)
    || (*(_BYTE *)(v8 + 22) & 1) == 0
    || (result = 6LL, (*(_BYTE *)(v5 + 22) & 6) != 0) )
  {
    v9 = *(_BYTE *)(v5 + 22);
    if ( (v9 & 1) != 0 && (int)v7 >= 1 )
    {
      return 7LL;
    }
    else if ( *(_BYTE *)(a1 + 39) == v4 || (v9 & 8) != 0 )
    {
      return (v9 & 0x10) != 0 ? 9 : 0;
    }
    else
    {
      return 8LL;
    }
  }
  return result;
}
