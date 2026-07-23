/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x1401E9568
 * Callers:
 *     PopHiberCheckResume @ 0x1403EFBB8 (PopHiberCheckResume.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  char v0; // r15
  char v1; // bp
  _SLIST_HEADER *CurrentPrcb; // rdi
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  PSLIST_ENTRY v5; // rax
  _SLIST_ENTRY *v6; // r14
  __int16 v7; // ax
  __int64 HypercallCachedPages; // rcx
  __int16 v9; // bx
  struct _KPRCB *v10; // rax
  _SLIST_HEADER *v12; // [rsp+28h] [rbp-D0h]
  _SLIST_ENTRY *v13; // [rsp+30h] [rbp-C8h]
  _QWORD v14[14]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v15[7]; // [rsp+B0h] [rbp-48h] BYREF
  _BYTE v16[9]; // [rsp+B7h] [rbp-41h] BYREF
  int v17; // [rsp+F0h] [rbp-8h]

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v5 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v5->Next;
    if ( v5 )
    {
      v0 = 1;
      v12 = CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v5[1].Next;
      v6 = v5;
      v1 = BYTE4(CurrentPrcb);
      goto LABEL_11;
    }
    p_Next = v15;
    if ( (((unsigned __int64)v15 ^ (unsigned __int64)v16) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL);
    v0 = 2;
    LOBYTE(v12) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v12;
    if ( (unsigned __int8)v12 < 2u )
      __writecr8(2uLL);
    v1 = BYTE4(v12);
    Next = MmGetPhysicalAddress(p_Next);
  }
  else
  {
    v0 = 4;
    LOWORD(CurrentPrcb) = v17;
    _disable();
    v1 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    HIDWORD(v12) = 1;
    LOBYTE(v12) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  v6 = v13;
LABEL_11:
  *(_DWORD *)p_Next = 1;
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
         135LL,
         (PHYSICAL_ADDRESS)Next.QuadPart,
         0LL);
  HypercallCachedPages = 0LL;
  v9 = v7;
  if ( (v0 & 1) != 0 )
  {
    v6[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v12 + 1535, v6);
  }
  else if ( (v0 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v10 = KeGetCurrentPrcb();
    if ( (v1 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v10->HypercallCachedPages;
    }
    else if ( (v1 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v10->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  if ( v9 )
    return 3221225473LL;
  if ( (HvlpFlags & 0x2000) != 0 )
  {
    memset(v14, 0, 104);
    HvlpEnterIumSecureMode(1u, 238, 0, (unsigned __int8 *)v14);
  }
  return 0LL;
}
