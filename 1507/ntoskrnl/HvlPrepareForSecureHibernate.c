/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x1401ED27C
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  char v2; // si
  _SLIST_HEADER *CurrentPrcb; // rbx
  void *HypercallCachedPages; // rax
  __int64 v5; // rbp
  _SLIST_ENTRY *v6; // r14
  char v7; // di
  __int16 v8; // ax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r15d
  struct _KPRCB *v12; // rax
  _SLIST_HEADER *v14; // [rsp+28h] [rbp-B0h]
  _SLIST_ENTRY *v15; // [rsp+30h] [rbp-A8h]
  __int64 v16; // [rsp+38h] [rbp-A0h]
  unsigned __int8 v17[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v18; // [rsp+48h] [rbp-90h]
  int v19; // [rsp+D0h] [rbp-8h]

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    HypercallCachedPages = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    if ( HypercallCachedPages )
    {
      v5 = *((_QWORD *)HypercallCachedPages + 2);
      v2 = 1;
      v14 = CurrentPrcb;
      v6 = (_SLIST_ENTRY *)HypercallCachedPages;
      v7 = BYTE4(CurrentPrcb);
      goto LABEL_7;
    }
    v2 = 4;
    v8 = v19;
    _disable();
    v5 = v16;
    LOBYTE(CurrentPrcb) = (v8 & 0x200) != 0;
    LOBYTE(v14) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
  }
  else
  {
    v2 = 4;
    LOWORD(CurrentPrcb) = v19;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v14) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    v5 = *((_QWORD *)HypercallCachedPages + 2);
  }
  v6 = v15;
  v7 = 1;
  HIDWORD(v14) = 1;
LABEL_7:
  *(_OWORD *)HypercallCachedPages = *a1;
  *((_OWORD *)HypercallCachedPages + 1) = a1[1];
  *((_OWORD *)HypercallCachedPages + 2) = a1[2];
  *((_OWORD *)HypercallCachedPages + 3) = a1[3];
  *((_OWORD *)HypercallCachedPages + 4) = a1[4];
  v18 = v5 >> 12;
  v9 = HvlpEnterIumSecureMode(1u, 234, 0, v17);
  v10 = 0LL;
  v11 = v9;
  if ( (v2 & 1) != 0 )
  {
    v6[1].Next = (_SLIST_ENTRY *)v5;
    RtlpInterlockedPushEntrySList(v14 + 1535, v6);
  }
  else
  {
    v12 = KeGetCurrentPrcb();
    if ( (v7 & 1) != 0 )
    {
      v10 = (__int64)v12->HypercallCachedPages;
    }
    else if ( (v7 & 2) != 0 )
    {
      v10 = (__int64)v12->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v10 + 16) = v5;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v11;
}
