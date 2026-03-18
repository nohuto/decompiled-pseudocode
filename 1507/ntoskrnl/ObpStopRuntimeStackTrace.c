/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x1406AE860
 * Callers:
 *     ObSetRefTraceInformation @ 0x1406AD52C (ObSetRefTraceInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObpDestroyStackAndObjectTables @ 0x1406AD7DC (ObpDestroyStackAndObjectTables.c)
 */

__int64 __fastcall ObpStopRuntimeStackTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  int v10; // edi
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  unsigned int v13; // edi
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  _QWORD **v16; // rbp
  _WORD *v17; // rdi
  PSLIST_ENTRY v18; // r14
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax

  CurrentThread = KeGetCurrentThread();
  Buffer = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v6, (ULONG_PTR)&ObpStackTraceLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = ObpTraceFlags;
  if ( (ObpTraceFlags & 2) != 0 )
  {
    if ( (ObpTraceFlags & 0x10) != 0 )
      memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
    if ( (ObpTraceFlags & 0x20) != 0 )
    {
      Buffer = ObpRuntimeTraceProcessName.Buffer;
      RtlInitUnicodeStringEx(&ObpRuntimeTraceProcessName, 0LL);
      v10 = ObpTraceFlags;
    }
    ObpRuntimeTraceFlags = 0;
    v13 = ObpRegTraceFlags | v10 & 0xFFFFFF8C;
    ObpTraceFlags = v13;
    if ( (v13 & 1) != 0 )
    {
      ObpTracePoolTags = (unsigned __int64)&ObpRegTracePoolTags & -(__int64)((v13 & 0x10) != 0);
      ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRegTraceProcessName & -(__int64)((v13 & 0x20) != 0));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      v14 = KeGetCurrentThread();
      v15 = v14->SpecialApcDisable + 1;
      v14->SpecialApcDisable = v15;
      if ( !v15 && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      v16 = (_QWORD **)ObpObjectTable;
      ObpTracePoolTags = 0LL;
      ObpTraceFlags = v13 & 0xFFFFFF8C;
      v17 = ObpStackTable;
      ObpTraceProcessName = 0LL;
      ObpStackSequence = 0;
      ObpNumTracedObjects = 0;
      v18 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      ObpStackTable = 0LL;
      ObpObjectTable = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      v19 = KeGetCurrentThread();
      v20 = v19->SpecialApcDisable + 1;
      v19->SpecialApcDisable = v20;
      if ( !v20 && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
        KiCheckForKernelApcDelivery();
      ObpDestroyStackAndObjectTables(v17, v16, v18);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x7452624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v11 = KeGetCurrentThread();
    v12 = v11->SpecialApcDisable + 1;
    v11->SpecialApcDisable = v12;
    if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
