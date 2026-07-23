/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x1401E8918
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // r12
  char v10; // r15
  _SLIST_HEADER *CurrentPrcb; // rbx
  char *HypercallCachedPages; // rax
  _SLIST_ENTRY *v13; // rdi
  _SLIST_ENTRY *v14; // rsi
  char v15; // bp
  __int16 v16; // ax
  _DWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  unsigned int v21; // r14d
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-68h]
  _SLIST_HEADER *v25; // [rsp+30h] [rbp-58h]
  _SLIST_ENTRY *v26; // [rsp+38h] [rbp-50h]
  _SLIST_ENTRY *v27; // [rsp+40h] [rbp-48h]
  __int16 v28; // [rsp+80h] [rbp-8h]
  int *v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v6 = a2;
  v7 = a1;
  v8 = a2;
  if ( (unsigned __int64)(32 * v6) > 0x1000 )
    return 3221225485LL;
  LODWORD(v24) = 137;
  if ( (HvlpFlags & 0x10) == 0 )
  {
    v10 = 4;
    LOWORD(CurrentPrcb) = v28;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v25) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
    v13 = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
LABEL_8:
    v14 = v26;
    v15 = 1;
    HIDWORD(v25) = 1;
    goto LABEL_9;
  }
  CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
  HypercallCachedPages = (char *)RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
  if ( !HypercallCachedPages )
  {
    v10 = 4;
    v16 = v28;
    _disable();
    v13 = v27;
    a3 = v30;
    v7 = a1;
    LOBYTE(CurrentPrcb) = (v16 & 0x200) != 0;
    LOBYTE(v25) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
    goto LABEL_8;
  }
  v13 = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
  v10 = 1;
  a3 = v30;
  v14 = (_SLIST_ENTRY *)HypercallCachedPages;
  v7 = a1;
  v25 = CurrentPrcb;
  v15 = BYTE4(CurrentPrcb);
LABEL_9:
  if ( a2 )
  {
    v17 = HypercallCachedPages + 8;
    do
    {
      *(v17 - 2) = v7;
      *(v17 - 1) = 65537;
      v18 = *a3++;
      *v17 = v18;
      v17 += 8;
      v19 = *a4++;
      *((_QWORD *)v17 - 3) = v19;
      --v8;
    }
    while ( v8 );
  }
  HIDWORD(v24) = a2 & 0xFFF;
  v20 = (unsigned __int16)HvlpHypercallCodeVa(v24, v13, 0LL) == 0;
  v21 = 0;
  v22 = 0LL;
  if ( !v20 )
    v21 = -1073741823;
  if ( (v10 & 1) != 0 )
  {
    v14[1].Next = v13;
    RtlpInterlockedPushEntrySList(v25 + 1535, v14);
  }
  else
  {
    v23 = KeGetCurrentPrcb();
    if ( (v15 & 1) != 0 )
    {
      v22 = (__int64)v23->HypercallCachedPages;
    }
    else if ( (v15 & 2) != 0 )
    {
      v22 = (__int64)v23->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v22 + 16) = v13;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v21;
}
