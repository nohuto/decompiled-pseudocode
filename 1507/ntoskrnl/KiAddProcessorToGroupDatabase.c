/*
 * XREFs of KiAddProcessorToGroupDatabase @ 0x140163584
 * Callers:
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 *     KxInitializeProcessorState @ 0x14059A9C8 (KxInitializeProcessorState.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiAddProcessorToGroupDatabase(__int64 a1, int a2)
{
  __int64 v2; // r11
  __int64 v3; // r9
  __int64 *v4; // r8
  unsigned __int64 v5; // r10
  char v6; // al
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // rcx
  bool v12; // cc
  unsigned __int64 v13; // r8

  v2 = *(_QWORD *)(a1 + 1600);
  v3 = a1;
  v4 = &KiGroupBlock[2 * *(unsigned __int16 *)(v2 + 144)];
  v5 = *v4 + 1;
  _BitScanReverse64((unsigned __int64 *)&a1, v5);
  *(_QWORD *)(v3 + 1608) = v5;
  v6 = *(_BYTE *)(v2 + 144);
  *(_BYTE *)(v3 + 1617) = v7;
  *(_BYTE *)(v3 + 1616) = v6;
  *v4 |= v5;
  if ( KeForceGroupAwareness )
  {
    v12 = *(_DWORD *)(v3 + 36) <= 0xFFu;
    *(_BYTE *)(v3 + 4) = *(_BYTE *)(v3 + 36);
    if ( !v12 )
      *(_BYTE *)(v3 + 4) = -1;
  }
  else if ( *(_BYTE *)(v3 + 1616) )
  {
    if ( KiActiveGroups )
      v13 = (0x101010101010101LL
           * ((((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((qword_1403D15E8[0] - (((unsigned __int64)qword_1403D15E8[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    else
      LODWORD(v13) = 0;
    *(_BYTE *)(v3 + 4) = (unsigned int)a1 % (unsigned int)v13;
  }
  else
  {
    *(_BYTE *)(v3 + 4) = a1;
  }
  v8 = (unsigned int)a1 + (*(unsigned __int8 *)(v3 + 1616) << 6);
  v9 = *(unsigned int *)(v3 + 36);
  KiProcessorIndexToNumberMappingTable[v9] = v8;
  KiProcessorNumberToIndexMappingTable[v8] = v9;
  result = (_QWORD *)(v2 + 184);
  v11 = 5LL;
  do
  {
    if ( !a2 )
      *(result - 1) |= v5;
    *result |= v5;
    result += 2;
    --v11;
  }
  while ( v11 );
  return result;
}
