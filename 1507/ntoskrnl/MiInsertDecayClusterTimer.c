/*
 * XREFs of MiInsertDecayClusterTimer @ 0x140116CE0
 * Callers:
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int16 *v3; // r11
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v4 = *((unsigned int *)v3 + 986);
  *(_BYTE *)(v1 + 34) = ((unsigned __int8)*((_DWORD *)v3 + 986) << 6) | *(_BYTE *)(v1 + 34) & 0x3F;
  v5 = *(_QWORD *)&v3[4 * v4 + 1956];
  v6 = (unsigned int)v5 >> 1;
  *(_QWORD *)(v1 + 8) = 2 * (v6 & 0x7FFFFFFF | 0xFFFFFFFF00000000uLL);
  if ( v6 == 0x7FFFFFFF )
    v5 = (v2 << 33) | v5 & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_14034F420 + v6) - 0x58000000000LL + 8) = *(_QWORD *)(48 * (qword_14034F420 + v6)
                                                                               - 0x58000000000LL
                                                                               + 8) & 0x1FFFFFFFFLL | (v2 << 33);
  result = v5 ^ (v5 ^ (2 * v2)) & 0xFFFFFFFELL;
  *(_QWORD *)&v3[4 * v4 + 1956] = result;
  return result;
}
