/*
 * XREFs of MiPopFreeWsle @ 0x1400B97C8
 * Callers:
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 *     MiMoveWorkingFreeToTail @ 0x1400E8DE8 (MiMoveWorkingFreeToTail.c)
 *     MiRemoveWsleFromFreeList @ 0x140105920 (MiRemoveWsleFromFreeList.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiPopFreeWsle(__int64 a1)
{
  ULONG_PTR v1; // r8
  ULONG_PTR v2; // r9
  __int64 v3; // r11
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)v1;
  if ( *(_QWORD *)v1 > *(_QWORD *)(v1 + 32) )
    KeBugCheckEx(0x1Au, 0x5000uLL, v1, v2, *(_QWORD *)(v1 + 32));
  _mm_lfence();
  v3 = *(_QWORD *)(v1 + 496);
  v4 = *(_QWORD *)(v2 * *(unsigned int *)(v1 + 64) + v3);
  if ( (v4 & 0xFFFFFFE) != 268435454 || (v4 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x5001uLL, v1, v2, *(_QWORD *)(v2 * *(unsigned int *)(v1 + 64) + v3));
  v5 = v4 >> 28;
  if ( v4 >> 28 != 0xFFFFFFFFFLL )
  {
    if ( v5 > *(_QWORD *)(v1 + 32) )
      KeBugCheckEx(0x1Au, 0x5002uLL, v1, v2, *(_QWORD *)(v2 * *(unsigned int *)(v1 + 64) + v3));
    v6 = v5 * *(unsigned int *)(v1 + 64);
    v7 = *(_QWORD *)(v6 + v3);
    if ( (v7 & 1) != 0 || ((v2 ^ (v7 >> 1)) & 0x7FFFFFF) != 0 )
      KeBugCheckEx(0x1Au, 0x5003uLL, v1, v2, *(_QWORD *)(v6 + v3));
    *(_QWORD *)(v6 + v3) = v7 | 0xFFFFFFE;
  }
  *(_QWORD *)v1 = v5;
  if ( v2 > *(_QWORD *)(v1 + 16) )
    *(_QWORD *)(v1 + 16) = v2;
  return v2;
}
