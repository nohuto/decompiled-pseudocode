/*
 * XREFs of MiReplenishNonPagedSlists @ 0x1400E3284
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x1400B3980 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     MiAllocatingNonPagedPoolVa @ 0x1400B479C (MiAllocatingNonPagedPoolVa.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400B480C (RtlFindClearBitsAndSetEx.c)
 *     InterlockedPushListSList @ 0x14015BA10 (InterlockedPushListSList.c)
 */

__int64 __fastcall MiReplenishNonPagedSlists(
        _OWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _SLIST_HEADER *v6; // r13
  unsigned int Alignment_low; // r8d
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int16 v10; // bx
  __int64 v11; // rdi
  __int64 v12; // r12
  _SLIST_ENTRY *v13; // r15
  __int16 v14; // r14
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v16; // rbx
  _SLIST_ENTRY *v17; // rcx
  unsigned __int64 v19; // [rsp+20h] [rbp-58h]
  _SLIST_HEADER *ListHead; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21[9]; // [rsp+30h] [rbp-48h] BYREF
  _SLIST_ENTRY *v23; // [rsp+A0h] [rbp+28h]

  v6 = &qword_1402FE6C0[26 * a2];
  ListHead = &v6[a5 + 3];
  Alignment_low = LOWORD(ListHead->Alignment);
  if ( Alignment_low >= (unsigned int)dword_1402FE188[a5 - 1] >> 1 )
  {
    ++dword_1402E17B0;
    return 0LL;
  }
  v8 = a4 & 0xFFFFFFFFFFFFFE00uLL;
  *(_OWORD *)v21 = *a1;
  if ( a4 + 2 * a5 > v21[0] + (a4 & 0xFFFFFFFFFFFFFE00uLL) )
  {
    ++dword_1402E17B4;
    return 0LL;
  }
  v9 = v21[0] - v8;
  v10 = LOWORD(dword_1402FE188[a5 - 1]) - Alignment_low;
  v21[1] += 8 * (v8 >> 6);
  if ( v21[0] - v8 > 0x200 )
    v9 = 512LL;
  v11 = 0LL;
  v21[0] = v9;
  v12 = 0LL;
  v23 = 0LL;
  v13 = 0LL;
  if ( !v10 )
    goto LABEL_16;
  v14 = v10;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSetEx(v21, a5, a4);
    v19 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1LL )
      break;
    v16 = v6[20].Region + ((a3 + ClearBitsAndSet + v8) << 12);
    MiAllocatingNonPagedPoolVa((__int64)v6, 0, a3 + ClearBitsAndSet + v8, a5);
    v17 = v23;
    *(_QWORD *)v16 = v16 ^ qword_1402FF6C0;
    if ( !v13 )
      v17 = (_SLIST_ENTRY *)(v16 + 16);
    *(_QWORD *)(v16 + 16) = v13;
    v13 = (_SLIST_ENTRY *)(v16 + 16);
    v23 = v17;
    a4 = v19 + a5;
    ++v12;
    if ( !--v14 )
      goto LABEL_13;
  }
  v17 = v23;
LABEL_13:
  if ( v13 )
  {
    ++dword_1402E17A8;
    InterlockedPushListSList(ListHead, v13, v17, v12);
    return a5 * v12;
  }
  else
  {
LABEL_16:
    ++dword_1402E17AC;
  }
  return v11;
}
