/*
 * XREFs of MiPopFreeWsle @ 0x1400FCB90
 * Callers:
 *     MiRemoveWsleFromFreeList @ 0x1400AE8AC (MiRemoveWsleFromFreeList.c)
 *     MiMoveWorkingFreeToTail @ 0x1400FBD94 (MiMoveWorkingFreeToTail.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiPopFreeWsle(__int64 a1)
{
  ULONG_PTR *SharedWorkingSetList; // r8
  ULONG_PTR v2; // r9
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v4; // r11
  unsigned __int64 v5; // rax
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // r10
  unsigned __int64 v8; // rax

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v2 = *SharedWorkingSetList;
  BugCheckParameter4 = SharedWorkingSetList[3];
  if ( *SharedWorkingSetList > BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x5000uLL, (ULONG_PTR)SharedWorkingSetList, v2, BugCheckParameter4);
  _mm_lfence();
  v4 = SharedWorkingSetList[10];
  v5 = *(_QWORD *)(v2 * *((unsigned int *)SharedWorkingSetList + 8) + v4);
  if ( (v5 & 0xFFFFFFE) != 268435454 || (v5 & 1) != 0 )
    KeBugCheckEx(
      0x1Au,
      0x5001uLL,
      (ULONG_PTR)SharedWorkingSetList,
      v2,
      *(_QWORD *)(v2 * *((unsigned int *)SharedWorkingSetList + 8) + v4));
  v6 = v5 >> 28;
  if ( v5 >> 28 != 0xFFFFFFFFFLL )
  {
    if ( v6 > SharedWorkingSetList[3] )
      KeBugCheckEx(
        0x1Au,
        0x5002uLL,
        (ULONG_PTR)SharedWorkingSetList,
        v2,
        *(_QWORD *)(v2 * *((unsigned int *)SharedWorkingSetList + 8) + v4));
    v7 = v6 * *((unsigned int *)SharedWorkingSetList + 8);
    v8 = *(_QWORD *)(v7 + v4);
    if ( (v8 & 1) != 0 || ((v2 ^ (v8 >> 1)) & 0x7FFFFFF) != 0 )
      KeBugCheckEx(0x1Au, 0x5003uLL, (ULONG_PTR)SharedWorkingSetList, v2, *(_QWORD *)(v7 + v4));
    *(_QWORD *)(v7 + v4) = v8 | 0xFFFFFFE;
  }
  *SharedWorkingSetList = v6;
  if ( v2 > SharedWorkingSetList[2] )
    SharedWorkingSetList[2] = v2;
  return v2;
}
