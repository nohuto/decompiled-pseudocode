/*
 * XREFs of MiReplenishNonPagedSlists @ 0x140064E4C
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x140063F60 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x140064FF8 (RtlFindClearBitsAndSetEx.c)
 *     MiAllocatingNonPagedPoolVa @ 0x140065468 (MiAllocatingNonPagedPoolVa.c)
 *     InterlockedPushListSList @ 0x14018B4F0 (InterlockedPushListSList.c)
 */

__int64 __fastcall MiReplenishNonPagedSlists(__int128 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _SLIST_HEADER *v6; // r13
  unsigned int Alignment_low; // r8d
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  __int16 v11; // bx
  __int64 v12; // rdi
  __int64 v13; // r12
  _SLIST_ENTRY *v14; // r15
  __int16 v15; // r14
  __int64 ClearBitsAndSet; // rax
  unsigned __int64 v17; // rbx
  _SLIST_ENTRY *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-58h]
  _SLIST_HEADER *ListHead; // [rsp+28h] [rbp-50h]
  __int128 v21; // [rsp+30h] [rbp-48h] BYREF
  _SLIST_ENTRY *v23; // [rsp+A0h] [rbp+28h]

  v6 = &qword_14034EB70[26 * a2];
  ListHead = &v6[a5 + 3];
  Alignment_low = LOWORD(ListHead->Alignment);
  if ( Alignment_low >= (unsigned int)dword_14034E648[a5 - 1] >> 1 )
    return 0LL;
  v9 = a4 & 0xFFFFFFFFFFFFFE00uLL;
  v21 = *a1;
  if ( a4 + 2 * a5 > (unsigned __int64)v21 + (a4 & 0xFFFFFFFFFFFFFE00uLL) )
    return 0LL;
  v10 = v21 - v9;
  v11 = LOWORD(dword_14034E648[a5 - 1]) - Alignment_low;
  *((_QWORD *)&v21 + 1) += 8 * (v9 >> 6);
  if ( (unsigned __int64)v21 - v9 > 0x200 )
    v10 = 512LL;
  v12 = 0LL;
  *(_QWORD *)&v21 = v10;
  v13 = 0LL;
  v23 = 0LL;
  v14 = 0LL;
  if ( v11 )
  {
    v15 = v11;
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(&v21, a5, a4);
      v19 = ClearBitsAndSet;
      if ( ClearBitsAndSet == -1 )
        break;
      v17 = v6[20].Region + ((a3 + ClearBitsAndSet + v9) << 12);
      MiAllocatingNonPagedPoolVa(v6, 0LL, a3 + ClearBitsAndSet + v9, a5);
      v18 = v23;
      *(_QWORD *)v17 = v17 ^ qword_14034FB80;
      if ( !v14 )
        v18 = (_SLIST_ENTRY *)(v17 + 16);
      *(_QWORD *)(v17 + 16) = v14;
      v14 = (_SLIST_ENTRY *)(v17 + 16);
      v23 = v18;
      a4 = v19 + a5;
      ++v13;
      if ( !--v15 )
        goto LABEL_14;
    }
    v18 = v23;
LABEL_14:
    if ( v14 )
    {
      InterlockedPushListSList(ListHead, v14, v18, v13);
      return a5 * v13;
    }
  }
  return v12;
}
