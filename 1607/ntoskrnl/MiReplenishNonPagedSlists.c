/*
 * XREFs of MiReplenishNonPagedSlists @ 0x140017040
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x1400171EC (RtlFindClearBitsAndSetEx.c)
 *     MiAllocatingNonPagedPoolVa @ 0x140017628 (MiAllocatingNonPagedPoolVa.c)
 *     InterlockedPushListSList @ 0x140167420 (InterlockedPushListSList.c)
 */

__int64 __fastcall MiReplenishNonPagedSlists(__int128 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _SLIST_HEADER *v6; // r13
  unsigned int Alignment_low; // r8d
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int16 v10; // bx
  __int64 v11; // rdi
  __int64 v12; // r12
  _SLIST_ENTRY *v13; // r15
  __int16 v14; // bx
  __int16 v15; // r14
  __int64 ClearBitsAndSet; // rax
  unsigned __int64 v17; // rbx
  _SLIST_ENTRY *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-58h]
  _SLIST_HEADER *ListHead; // [rsp+28h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF
  _SLIST_ENTRY *v24; // [rsp+A0h] [rbp+28h]

  v6 = &qword_1403269F0[26 * a2];
  ListHead = &v6[a5 + 3];
  Alignment_low = LOWORD(ListHead->Alignment);
  if ( Alignment_low >= (unsigned int)dword_140326488[a5 - 1] >> 1 )
    return 0LL;
  v8 = a4 & 0xFFFFFFFFFFFFFE00uLL;
  v22 = *a1;
  if ( a4 + 2 * a5 > (unsigned __int64)v22 + (a4 & 0xFFFFFFFFFFFFFE00uLL) )
    return 0LL;
  v9 = v22 - v8;
  v10 = dword_140326488[a5 - 1];
  *((_QWORD *)&v22 + 1) += 8 * (v8 >> 6);
  if ( (unsigned __int64)v22 - v8 > 0x200 )
    v9 = 512LL;
  v11 = 0LL;
  *(_QWORD *)&v22 = v9;
  v12 = 0LL;
  v24 = 0LL;
  v13 = 0LL;
  v14 = v10 - Alignment_low;
  if ( v14 )
  {
    v15 = v14;
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(&v22, a5, a4);
      v20 = ClearBitsAndSet;
      if ( ClearBitsAndSet == -1 )
        break;
      v17 = v6[20].Region + ((a3 + ClearBitsAndSet + v8) << 12);
      MiAllocatingNonPagedPoolVa(v6, 0LL, a3 + ClearBitsAndSet + v8, a5);
      v18 = v24;
      *(_QWORD *)v17 = v17 ^ qword_1403277C0;
      if ( !v13 )
        v18 = (_SLIST_ENTRY *)(v17 + 16);
      *(_QWORD *)(v17 + 16) = v13;
      v13 = (_SLIST_ENTRY *)(v17 + 16);
      v24 = v18;
      a4 = v20 + a5;
      ++v12;
      if ( !--v15 )
        goto LABEL_13;
    }
    v18 = v24;
LABEL_13:
    if ( v13 )
    {
      InterlockedPushListSList(ListHead, v13, v18, v12);
      return a5 * v12;
    }
  }
  return v11;
}
