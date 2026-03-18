/*
 * XREFs of MiReleaseWsle @ 0x1400BAAFC
 * Callers:
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x14001C40C (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 *     MiMoveWorkingFreeToTail @ 0x1400E8DE8 (MiMoveWorkingFreeToTail.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 * Callees:
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08 (MiUpdateWorkingSetAgeDistribution.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseWsle(unsigned __int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  ULONG_PTR v4; // rdi
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  ULONG_PTR v11; // r8
  __int64 result; // rax

  v4 = a2[23];
  if ( a4 && a1 >= *(_QWORD *)(v4 + 8) )
  {
    v9 = (__int64 *)(*(_QWORD *)(v4 + 496) + a1 * *(unsigned int *)(v4 + 64));
    v10 = *v9;
    MiRemoveEntryWsle(v4, v9);
    MiUpdateWorkingSetAgeDistribution(a2, (v10 >> 9) & 7, -1LL);
  }
  v11 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 != 0xFFFFFFFFFLL )
  {
    if ( v11 < *(_QWORD *)(v4 + 8) || v11 > *(_QWORD *)(v4 + 32) )
      KeBugCheckEx(0x1Au, 0x5004uLL, v4, *(_QWORD *)v4, *(_QWORD *)(v4 + 32));
    *(_QWORD *)(v11 * *(unsigned int *)(v4 + 64) + *(_QWORD *)(v4 + 496)) ^= (*(_DWORD *)(v11
                                                                                        * *(unsigned int *)(v4 + 64)
                                                                                        + *(_QWORD *)(v4 + 496)) ^ (2 * (_DWORD)a1)) & 0xFFFFFFE;
  }
  result = *(_QWORD *)(v4 + 496);
  *(_QWORD *)(a1 * *(unsigned int *)(v4 + 64) + result) = (v11 << 28) | 0xFFFFFFE;
  *(_QWORD *)v4 = a1;
  if ( a4 )
  {
    --a2[15];
    result = a3 + 0x98000000000LL;
    if ( (unsigned __int64)(a3 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
      --a2[13];
  }
  return result;
}
