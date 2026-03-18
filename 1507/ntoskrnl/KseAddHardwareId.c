/*
 * XREFs of KseAddHardwareId @ 0x14054B3B8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepPoolAllocatePaged @ 0x14012980C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020C584 (KsepLogError.c)
 *     KsepCacheInsert @ 0x14054B314 (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x14054B4B0 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x14054B590 (KsepCacheLock.c)
 *     KsepStringDuplicate @ 0x14054B5E0 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  volatile signed __int64 *v2; // rsi
  char *v3; // rdi
  char *Paged; // rax
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v7; // ax
  __int64 v9; // rcx
  char v10; // al
  _BYTE v11[40]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING v12; // [rsp+48h] [rbp-20h] BYREF

  v2 = (volatile signed __int64 *)qword_140353CE0;
  if ( dword_140353C94 != 2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v10 = KsepDebugFlag;
    KsepHistoryErrors[2 * v9 + 1] = -1073741823;
    KsepHistoryErrors[2 * v9] = 656075;
    if ( (v10 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString(&v12, SourceString);
  KsepCacheLock(v2);
  v3 = (char *)KsepCacheLookup(v2, v11);
  if ( !v3 )
  {
    Paged = (char *)KsepPoolAllocatePaged(0x38uLL);
    v3 = Paged;
    if ( !Paged || (int)KsepStringDuplicate(Paged + 40, SourceString) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_8;
    }
    KsepCacheInsert((__int64)v2, (__int64)v3);
  }
  v5 = 0;
LABEL_8:
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  CurrentThread = KeGetCurrentThread();
  v7 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v5 < 0 )
  {
    if ( v3 )
    {
      KsepStringFree(v3 + 40);
      KsepPoolFreePaged(v3);
    }
  }
  return (unsigned int)v5;
}
