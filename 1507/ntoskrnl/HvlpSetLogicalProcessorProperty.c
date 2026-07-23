/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x1401E7438
 * Callers:
 *     HvlConfigurePcc @ 0x1401EC8C0 (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x1401EC90C (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x1401EC93C (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x1401EC9D0 (HvlConfigureThrottleStates.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  char v6; // bp
  _SLIST_HEADER *CurrentPrcb; // rbx
  char *HypercallCachedPages; // rax
  _SLIST_ENTRY *v9; // r14
  _SLIST_ENTRY *v10; // r15
  char v11; // si
  __int16 v12; // ax
  _OWORD *v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  bool v25; // zf
  unsigned int v26; // edi
  __int64 v27; // rax
  struct _KPRCB *v28; // rcx
  _SLIST_HEADER *v30; // [rsp+28h] [rbp-40h]
  _SLIST_ENTRY *v31; // [rsp+30h] [rbp-38h]
  _SLIST_ENTRY *v32; // [rsp+38h] [rbp-30h]
  __int16 v33; // [rsp+60h] [rbp-8h]

  if ( (HvlpFlags & 0x10) == 0 )
  {
    v6 = 4;
    LOWORD(CurrentPrcb) = v33;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v30) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
    v9 = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
LABEL_6:
    v10 = v31;
    v11 = 1;
    HIDWORD(v30) = 1;
    goto LABEL_7;
  }
  CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
  HypercallCachedPages = (char *)RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
  if ( !HypercallCachedPages )
  {
    v6 = 4;
    v12 = v33;
    _disable();
    v9 = v32;
    LOBYTE(CurrentPrcb) = (v12 & 0x200) != 0;
    LOBYTE(v30) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
    goto LABEL_6;
  }
  v9 = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
  v6 = 1;
  v30 = CurrentPrcb;
  v10 = (_SLIST_ENTRY *)HypercallCachedPages;
  v11 = BYTE4(CurrentPrcb);
LABEL_7:
  *(_DWORD *)HypercallCachedPages = a1;
  v13 = HypercallCachedPages + 8;
  *((_DWORD *)HypercallCachedPages + 1) = a2;
  v14 = 25LL;
  do
  {
    v15 = a3[1];
    *v13 = *a3;
    v16 = a3[2];
    v13[1] = v15;
    v17 = a3[3];
    v13[2] = v16;
    v18 = a3[4];
    v13[3] = v17;
    v19 = a3[5];
    v13[4] = v18;
    v20 = a3[6];
    v13[5] = v19;
    v21 = a3[7];
    a3 += 8;
    v13[6] = v20;
    v13 += 8;
    *(v13 - 1) = v21;
    --v14;
  }
  while ( v14 );
  v22 = *((_QWORD *)a3 + 6);
  v23 = a3[1];
  *v13 = *a3;
  v24 = a3[2];
  v13[1] = v23;
  v13[2] = v24;
  *((_QWORD *)v13 + 6) = v22;
  v25 = (unsigned __int16)HvlpHypercallCodeVa(121LL, v9, 0LL) == 0;
  v26 = 0;
  v27 = 0LL;
  if ( !v25 )
    v26 = -1073741823;
  if ( (v6 & 1) != 0 )
  {
    v10[1].Next = v9;
    RtlpInterlockedPushEntrySList(v30 + 1535, v10);
  }
  else
  {
    v28 = KeGetCurrentPrcb();
    if ( (v11 & 1) != 0 )
    {
      v27 = (__int64)v28->HypercallCachedPages;
    }
    else if ( (v11 & 2) != 0 )
    {
      v27 = (__int64)v28->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v27 + 16) = v9;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v26;
}
