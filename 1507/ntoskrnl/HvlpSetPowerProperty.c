/*
 * XREFs of HvlpSetPowerProperty @ 0x1401EDBFC
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1401578F4 (PpmScaleIdleStateValues.c)
 *     HvlConfigureIdleStates @ 0x1401EC840 (HvlConfigureIdleStates.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401ED4CC (HvlRegisterPerfFeedbackCounters.c)
 *     HvlpPowerPolicySettingCallback @ 0x1401EDB24 (HvlpPowerPolicySettingCallback.c)
 *     PpmIdleGuestExecute @ 0x140241D8C (PpmIdleGuestExecute.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  char v2; // bp
  _SLIST_HEADER *CurrentPrcb; // rbx
  _QWORD *HypercallCachedPages; // rcx
  _SLIST_ENTRY *Next; // r14
  PSLIST_ENTRY v6; // rax
  _SLIST_ENTRY *v7; // r15
  char v8; // si
  __int16 v9; // ax
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  unsigned int v19; // edi
  bool v20; // zf
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  _SLIST_HEADER *v24; // [rsp+28h] [rbp-40h]
  _SLIST_ENTRY *v25; // [rsp+30h] [rbp-38h]
  _SLIST_ENTRY *v26; // [rsp+38h] [rbp-30h]
  __int16 v27; // [rsp+60h] [rbp-8h]

  if ( (HvlpFlags & 0x10) == 0 )
  {
    v2 = 4;
    LOWORD(CurrentPrcb) = v27;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v24) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
LABEL_6:
    v7 = v25;
    v8 = 1;
    HIDWORD(v24) = 1;
    goto LABEL_7;
  }
  CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
  v6 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
  HypercallCachedPages = &v6->Next;
  if ( !v6 )
  {
    v2 = 4;
    v9 = v27;
    _disable();
    Next = v26;
    LOBYTE(CurrentPrcb) = (v9 & 0x200) != 0;
    LOBYTE(v24) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    goto LABEL_6;
  }
  Next = v6[1].Next;
  v2 = 1;
  v24 = CurrentPrcb;
  v7 = v6;
  v8 = BYTE4(CurrentPrcb);
LABEL_7:
  v10 = 3LL;
  do
  {
    v11 = a1[1];
    *(_OWORD *)HypercallCachedPages = *a1;
    v12 = a1[2];
    *((_OWORD *)HypercallCachedPages + 1) = v11;
    v13 = a1[3];
    *((_OWORD *)HypercallCachedPages + 2) = v12;
    v14 = a1[4];
    *((_OWORD *)HypercallCachedPages + 3) = v13;
    v15 = a1[5];
    *((_OWORD *)HypercallCachedPages + 4) = v14;
    v16 = a1[6];
    *((_OWORD *)HypercallCachedPages + 5) = v15;
    v17 = a1[7];
    a1 += 8;
    *((_OWORD *)HypercallCachedPages + 6) = v16;
    HypercallCachedPages += 16;
    *((_OWORD *)HypercallCachedPages - 1) = v17;
    --v10;
  }
  while ( v10 );
  v18 = *((_QWORD *)a1 + 2);
  *(_OWORD *)HypercallCachedPages = *a1;
  HypercallCachedPages[2] = v18;
  v19 = 0;
  v20 = (unsigned __int16)HvlpHypercallCodeVa(156LL, Next, 0LL) == 0;
  v21 = 0LL;
  if ( !v20 )
    v19 = -1073741823;
  if ( (v2 & 1) != 0 )
  {
    v7[1].Next = Next;
    RtlpInterlockedPushEntrySList(v24 + 1535, v7);
  }
  else
  {
    v22 = KeGetCurrentPrcb();
    if ( (v8 & 1) != 0 )
    {
      v21 = (__int64)v22->HypercallCachedPages;
    }
    else if ( (v8 & 2) != 0 )
    {
      v21 = (__int64)v22->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v21 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v19;
}
