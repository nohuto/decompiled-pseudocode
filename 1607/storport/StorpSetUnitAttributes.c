/*
 * XREFs of StorpSetUnitAttributes @ 0x1C002F8F4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall StorpSetUnitAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 Unit; // rax
  int v6; // edx
  int v8; // [rsp+40h] [rbp+18h]
  unsigned int v9; // [rsp+48h] [rbp+20h]

  v8 = a3;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3238002694LL;
  v4 = **(_QWORD **)(a1 - 16);
  if ( !v4 )
    return 3238002694LL;
  if ( !a2 )
    return 3238002694LL;
  if ( *(_WORD *)a2 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v9) = *(_WORD *)(a2 + 8);
  BYTE2(v9) = *(_BYTE *)(a2 + 10);
  Unit = RaidAdapterFindUnit(v4, v9, a3, a4);
  if ( !Unit )
    return 3238002694LL;
  *(_DWORD *)(Unit + 1536) ^= (*(_DWORD *)(Unit + 1536) ^ (2 * v8)) & 2;
  v6 = *(_DWORD *)(Unit + 1536) ^ ((unsigned __int8)*(_DWORD *)(Unit + 1536) ^ (unsigned __int8)(2 * v8)) & 4;
  *(_DWORD *)(Unit + 1536) = v6;
  *(_DWORD *)(Unit + 1536) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * v8)) & 8;
  return 0LL;
}
