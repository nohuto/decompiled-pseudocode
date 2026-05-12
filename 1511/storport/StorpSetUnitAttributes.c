/*
 * XREFs of StorpSetUnitAttributes @ 0x1C002BDB4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall StorpSetUnitAttributes(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 Unit; // rax
  int v5; // edx
  unsigned int v8; // [rsp+48h] [rbp+20h]

  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3238002694LL;
  v3 = **(_QWORD **)(a1 - 16);
  if ( !v3 )
    return 3238002694LL;
  if ( !a2 )
    return 3238002694LL;
  if ( *(_WORD *)a2 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v8) = *(_WORD *)(a2 + 8);
  BYTE2(v8) = *(_BYTE *)(a2 + 10);
  Unit = RaidAdapterFindUnit(v3, v8);
  if ( !Unit )
    return 3238002694LL;
  *(_DWORD *)(Unit + 1536) ^= (*(_DWORD *)(Unit + 1536) ^ (2 * a3)) & 2;
  v5 = *(_DWORD *)(Unit + 1536) ^ ((unsigned __int8)*(_DWORD *)(Unit + 1536) ^ (unsigned __int8)(2 * a3)) & 4;
  *(_DWORD *)(Unit + 1536) = v5;
  *(_DWORD *)(Unit + 1536) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * a3)) & 8;
  return 0LL;
}
