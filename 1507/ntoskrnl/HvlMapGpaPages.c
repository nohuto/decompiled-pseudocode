/*
 * XREFs of HvlMapGpaPages @ 0x140271C0C
 * Callers:
 *     VmpProcessInvalidateSlat @ 0x14025BB7C (VmpProcessInvalidateSlat.c)
 *     VmpProcessUpdateSlat @ 0x14025BC18 (VmpProcessUpdateSlat.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // ebp
  __int16 v9; // si
  _QWORD *HypercallCachedPages; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v12; // rax
  unsigned __int8 v13; // si
  unsigned __int64 v14; // r13
  int v15; // rdi^4
  __int64 v16; // rax
  unsigned __int16 v17; // bx
  __int64 v18; // rax
  struct _KPRCB *v19; // rcx
  _SLIST_ENTRY *Next; // [rsp+28h] [rbp-80h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-78h]
  __int64 v23; // [rsp+38h] [rbp-70h]
  _SLIST_HEADER *v24; // [rsp+48h] [rbp-60h]
  _SLIST_ENTRY *v25; // [rsp+50h] [rbp-58h]
  _SLIST_ENTRY *v26; // [rsp+58h] [rbp-50h]
  __int16 v27; // [rsp+A0h] [rbp-8h]
  char v28; // [rsp+B0h] [rbp+8h]

  v6 = 0;
  *a6 = 0LL;
  if ( (HvlpFlags & 0x10) == 0 )
  {
    v9 = v27;
    v28 = 4;
    _disable();
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
    ListEntry = v25;
LABEL_6:
    v13 = (v9 & 0x200) != 0;
    HIDWORD(v24) = 1;
    LOBYTE(v24) = v13;
    goto LABEL_7;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
  HypercallCachedPages = &v12->Next;
  if ( !v12 )
  {
    v9 = v27;
    v28 = 4;
    _disable();
    Next = v26;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v25;
    goto LABEL_6;
  }
  ListEntry = v12;
  v13 = (unsigned __int8)CurrentPrcb;
  Next = v12[1].Next;
  v28 = 1;
  v24 = (_SLIST_HEADER *)CurrentPrcb;
LABEL_7:
  HypercallCachedPages[1] = 0LL;
  HypercallCachedPages[2] = 0LL;
  *HypercallCachedPages = a1;
  v14 = a4;
  v15 = 0;
  *((_DWORD *)HypercallCachedPages + 4) = a3;
  LODWORD(v23) = 75;
  do
  {
    if ( v14 >= 0x1FD )
      v14 = 509LL;
    if ( (a3 & 0x700) == 0 )
      memmove(HypercallCachedPages + 3, (const void *)(a5 + 8LL * *a6), 8 * v14);
    HypercallCachedPages[1] = *a6 + a2;
    v15 ^= ((unsigned __int16)v14 ^ (unsigned __int16)v15) & 0xFFF;
    HIDWORD(v23) = v15;
    v16 = HvlpHypercallCodeVa(v23, Next, 0LL);
    v17 = v16;
    if ( (_WORD)v16 )
      break;
    *a6 += WORD2(v16) & 0xFFF;
    v14 = a4 - *a6;
  }
  while ( v14 );
  v18 = 0LL;
  if ( (v28 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList(v24 + 1535, ListEntry);
  }
  else if ( (v28 & 2) != 0 )
  {
    if ( v13 < 2u )
      __writecr8(v13);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    if ( (BYTE4(v24) & 1) != 0 )
    {
      v18 = (__int64)v19->HypercallCachedPages;
    }
    else if ( (BYTE4(v24) & 2) != 0 )
    {
      v18 = (__int64)v19->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v18 + 16) = Next;
    if ( v13 )
      _enable();
  }
  if ( v17 )
    return v17 | 0xC0350000;
  return v6;
}
