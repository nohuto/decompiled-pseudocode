/*
 * XREFs of HvlpConfigureLegacyPowerPolicySetting @ 0x1401ED548
 * Callers:
 *     HvlpLegacyPowerPolicySettingCallback @ 0x1401ED9DC (HvlpLegacyPowerPolicySettingCallback.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpConfigureLegacyPowerPolicySetting(__int64 *a1)
{
  char v2; // si
  _SLIST_HEADER *CurrentPrcb; // rbx
  _QWORD *p_Next; // rcx
  _SLIST_ENTRY *Next; // rbp
  PSLIST_ENTRY v6; // rax
  _SLIST_ENTRY *v7; // r14
  char v8; // di
  __int16 v9; // ax
  __int64 v10; // rax
  unsigned int v11; // r15d
  bool v12; // zf
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v14; // rcx
  _SLIST_HEADER *v16; // [rsp+28h] [rbp-40h]
  _SLIST_ENTRY *v17; // [rsp+30h] [rbp-38h]
  _SLIST_ENTRY *v18; // [rsp+38h] [rbp-30h]
  __int16 v19; // [rsp+60h] [rbp-8h]

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v6 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v6->Next;
    if ( v6 )
    {
      Next = v6[1].Next;
      v2 = 1;
      v16 = CurrentPrcb;
      v7 = v6;
      v8 = BYTE4(CurrentPrcb);
      goto LABEL_7;
    }
    v2 = 4;
    v9 = v19;
    _disable();
    Next = v18;
    LOBYTE(CurrentPrcb) = (v9 & 0x200) != 0;
    LOBYTE(v16) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
  }
  else
  {
    v2 = 4;
    LOWORD(CurrentPrcb) = v19;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v16) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  v7 = v17;
  v8 = 1;
  HIDWORD(v16) = 1;
LABEL_7:
  v10 = *a1;
  *(_DWORD *)p_Next = 2;
  p_Next[1] = v10;
  v11 = 0;
  v12 = (unsigned __int16)HvlpHypercallCodeVa(111LL, Next, 0LL) == 0;
  HypercallCachedPages = 0LL;
  if ( !v12 )
    v11 = -1073741823;
  if ( (v2 & 1) != 0 )
  {
    v7[1].Next = Next;
    RtlpInterlockedPushEntrySList(v16 + 1535, v7);
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    if ( (v8 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages;
    }
    else if ( (v8 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v11;
}
