/*
 * XREFs of KiAddProcessorToGroupDatabase @ 0x140139934
 * Callers:
 *     KiConfigureInitialNodes @ 0x140139898 (KiConfigureInitialNodes.c)
 *     KxInitializeProcessorState @ 0x14054E9DC (KxInitializeProcessorState.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 */

_QWORD *__fastcall KiAddProcessorToGroupDatabase(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 *v5; // r8
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *result; // rax
  __int64 v12; // rcx
  bool v13; // cc

  v2 = *(_QWORD *)(a1 + 1600);
  v5 = &KiGroupBlock[2 * *(unsigned __int16 *)(v2 + 144)];
  v6 = *v5 + 1;
  _BitScanReverse64((unsigned __int64 *)&v7, v6);
  *(_QWORD *)(a1 + 1608) = v6;
  v8 = *(_BYTE *)(v2 + 144);
  *(_BYTE *)(a1 + 1617) = v7;
  *(_BYTE *)(a1 + 1616) = v8;
  *v5 |= v6;
  if ( KeForceGroupAwareness )
  {
    v13 = *(_DWORD *)(a1 + 36) <= 0xFFu;
    *(_BYTE *)(a1 + 4) = *(_BYTE *)(a1 + 36);
    if ( !v13 )
      *(_BYTE *)(a1 + 4) = -1;
  }
  else if ( *(_BYTE *)(a1 + 1616) )
  {
    *(_BYTE *)(a1 + 4) = (unsigned int)v7 % KeQueryActiveProcessorCountEx(0);
  }
  else
  {
    *(_BYTE *)(a1 + 4) = v7;
  }
  v9 = *(unsigned int *)(a1 + 36);
  v10 = (unsigned int)v7 + (*(unsigned __int8 *)(a1 + 1616) << 6);
  KiProcessorIndexToNumberMappingTable[v9] = v10;
  KiProcessorNumberToIndexMappingTable[v10] = v9;
  result = (_QWORD *)(v2 + 184);
  v12 = 5LL;
  do
  {
    if ( !a2 )
    {
      *(result - 1) |= v6;
      *result |= v6;
    }
    result[1] |= v6;
    result += 3;
    --v12;
  }
  while ( v12 );
  return result;
}
