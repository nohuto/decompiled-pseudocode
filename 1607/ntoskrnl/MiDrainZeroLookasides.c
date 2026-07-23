/*
 * XREFs of MiDrainZeroLookasides @ 0x1400A71B4
 * Callers:
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiReturnPartitionPagesToParent @ 0x1401F1DA0 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     RtlpInterlockedFlushSList @ 0x1401673F0 (RtlpInterlockedFlushSList.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  _QWORD *result; // rax
  int v8; // ebp
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rsi
  _WORD *v14; // rdi
  PSLIST_ENTRY v15; // r14
  unsigned __int64 v16; // rbx
  _QWORD *v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  _SLIST_ENTRY *Next; // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+88h] [rbp+10h]
  unsigned int v21; // [rsp+90h] [rbp+18h]

  v4 = a4;
  v21 = a4;
  if ( a2 )
  {
    v6 = a4 + 1;
  }
  else
  {
    v6 = dword_140326A3C;
    v4 = 0;
    v21 = 0;
  }
  result = (_QWORD *)(a1 + 1744);
  v20 = v6;
  v8 = 1;
  v17 = (_QWORD *)(a1 + 1744);
  v9 = a2 + 48 * a3;
  v10 = 2LL;
  v18 = 2LL;
  do
  {
    v11 = v4;
    if ( v4 < v6 )
    {
      v12 = v4;
      v13 = *result;
      v14 = (_WORD *)(*result + 16 * v12);
      do
      {
        if ( *v14 )
        {
          v15 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v13 + 16LL * v11));
          if ( v15 )
          {
            do
            {
              Next = v15->Next;
              if ( a2 && ((unsigned __int64)v15 < a2 || (unsigned __int64)v15 >= v9) )
                v8 &= ~0x40u;
              else
                v8 |= 0x40u;
              v15[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte(v15[1].Next, 4294967293LL);
              v16 = (unsigned __int8)MiLockPageInline((__int64)v15);
              MiInsertPageInFreeOrZeroedList((__int64)&v15[0x5800000000LL] / 48, v8);
              _InterlockedAnd64((volatile signed __int64 *)&v15[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v16);
              v15 = Next;
            }
            while ( Next );
            v6 = v20;
          }
        }
        ++v11;
        v14 += 8;
      }
      while ( v11 < v6 );
      v4 = v21;
      result = v17;
      v10 = v18;
    }
    ++result;
    v8 = 2;
    --v10;
    v17 = result;
    v18 = v10;
  }
  while ( v10 );
  return result;
}
