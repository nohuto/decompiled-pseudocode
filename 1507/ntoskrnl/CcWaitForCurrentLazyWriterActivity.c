/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x140133BA4
 * Callers:
 *     CcSetPrivateWriteFile @ 0x1401DDBC0 (CcSetPrivateWriteFile.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     VerifierCcWaitForCurrentLazyWriterActivity @ 0x140741B0C (VerifierCcWaitForCurrentLazyWriterActivity.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14011E480 (CcPerfLogWorkItemEnqueue.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v2; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  NTSTATUS result; // eax
  KIRQL v8; // al
  __int64 **v9; // rcx
  KIRQL v10; // di
  __int16 Object; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+32h] [rbp-26h]
  int v13; // [rsp+34h] [rbp-24h]
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v2 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v2 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[6].L;
    ++L->TotalAllocates;
    v2 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v2 )
    {
      Size = L->Size;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v2 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
      if ( !v2 )
        return -1073741670;
    }
  }
  LODWORD(v2->Next) = CurrentPrcb->Number;
  *((_BYTE *)&v2[6].Next + 8) = 4;
  v13 = 0;
  v14[1] = v14;
  v14[0] = v14;
  Object = 0;
  v12 = 6;
  v2[1].Next = (_SLIST_ENTRY *)&Object;
  if ( (xmmword_1403D1290 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(&CcPostTickWorkQueue, (__int64)v2, 0, 0);
  v8 = KeAcquireQueuedSpinLock(5uLL);
  v9 = (__int64 **)qword_14034DF38;
  v10 = v8;
  v2->Next = (_SLIST_ENTRY *)&CcPostTickWorkQueue;
  *((_QWORD *)&v2->Next + 1) = v9;
  if ( *v9 != &CcPostTickWorkQueue )
    __fastfail(3u);
  *v9 = (__int64 *)v2;
  qword_14034DF38 = (__int64)v2;
  byte_14034E041 = 1;
  _InterlockedIncrement(&CcPostTickWorkItemCount);
  CcScheduleLazyWriteScan(1, 1);
  KeReleaseQueuedSpinLock(5uLL, v10);
  result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  _InterlockedDecrement(&CcPostTickWorkItemCount);
  return result;
}
