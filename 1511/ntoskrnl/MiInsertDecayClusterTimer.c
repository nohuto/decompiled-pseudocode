/*
 * XREFs of MiInsertDecayClusterTimer @ 0x1400E11BC
 * Callers:
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  int *v3; // r11
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v4 = (unsigned int)v3[1034];
  *(_BYTE *)(v1 + 34) = ((unsigned __int8)v3[1034] << 6) | *(_BYTE *)(v1 + 34) & 0x3F;
  v5 = *(_QWORD *)&v3[2 * v4 + 1026];
  v6 = (unsigned int)v5 >> 1;
  *(_QWORD *)(v1 + 8) = 2 * (v6 & 0x7FFFFFFF | 0xFFFFFFFF00000000uLL);
  if ( v6 == 0x7FFFFFFF )
    v5 = (v2 << 33) | v5 & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_1402FEF60 + v6) - 0x58000000000LL + 8) = *(_QWORD *)(48 * (qword_1402FEF60 + v6)
                                                                               - 0x58000000000LL
                                                                               + 8) & 0x1FFFFFFFFLL | (v2 << 33);
  result = v5 ^ (v5 ^ (2 * v2)) & 0xFFFFFFFELL;
  *(_QWORD *)&v3[2 * v4 + 1026] = result;
  return result;
}
