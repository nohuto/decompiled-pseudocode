/*
 * XREFs of RiGetEnqueueReason @ 0x1C00030BC
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x1C00016C0 (RiNormalizeDeviceQueue.c)
 *     RaidInsertDeviceQueue @ 0x1C00021D0 (RaidInsertDeviceQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C000317C (RiPeekDeviceQueue.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2, char a3)
{
  char v3; // r11
  __int64 v4; // r10
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // rax
  char v8; // al
  __int64 result; // rax

  v3 = 0;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 32) )
    return 1LL;
  v5 = a3 == 0;
  v6 = *(unsigned int *)(a1 + 76);
  if ( !v5 )
  {
    if ( (int)v6 <= *(_DWORD *)(a1 + 4) )
      goto LABEL_4;
    return 1LL;
  }
  if ( (int)v6 >= *(_DWORD *)(a1 + 4) )
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
    || (v7 = RiPeekDeviceQueue(a1, a2, v6), v4 == v7)
    || (*(_BYTE *)(v7 + 22) & 1) == 0
    || (result = 6LL, (*(_BYTE *)(v4 + 22) & 6) != 0) )
  {
    v8 = *(_BYTE *)(v4 + 22);
    if ( (v8 & 1) != 0 && (int)v6 >= 1 )
    {
      return 7LL;
    }
    else if ( *(_BYTE *)(a1 + 39) == v3 || (v8 & 8) != 0 )
    {
      return (v8 & 0x10) != 0 ? 9 : 0;
    }
    else
    {
      return 8LL;
    }
  }
  return result;
}
