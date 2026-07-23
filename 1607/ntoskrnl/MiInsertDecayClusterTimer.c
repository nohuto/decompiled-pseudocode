/*
 * XREFs of MiInsertDecayClusterTimer @ 0x1400991F0
 * Callers:
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

unsigned __int64 __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  int *v1; // rax
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 v4; // r9
  int *v5; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx

  v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v4 = (unsigned int)v1[1066];
  *(_BYTE *)(v3 + 34) = ((unsigned __int8)v1[1066] << 6) | *(_BYTE *)(v3 + 34) & 0x3F;
  v5 = &v1[2 * v4];
  result = *((_QWORD *)v5 + 529);
  v7 = result >> 1;
  LODWORD(v7) = (result >> 1) & 0x7FFFFFFF;
  *(_QWORD *)(v3 + 8) = 2 * (((unsigned int)result >> 1) | 0xFFFFFFFF00000000uLL);
  if ( v7 == 0x7FFFFFFF )
    result = (v2 << 33) | result & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_1403273A0 + v7) - 0x58000000000LL + 8) = *(_QWORD *)(48 * (qword_1403273A0 + v7)
                                                                               - 0x58000000000LL
                                                                               + 8) & 0x1FFFFFFFFLL | (v2 << 33);
  *((_QWORD *)v5 + 529) = result ^ (result ^ (2 * v2)) & 0xFFFFFFFE;
  return result;
}
