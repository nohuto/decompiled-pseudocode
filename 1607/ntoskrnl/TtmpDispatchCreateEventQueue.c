/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x140679890
 * Callers:
 *     TtmDispatchApi @ 0x140679460 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x140678E54 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406796B0 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateEventQueue @ 0x140679F80 (TtmiCreateEventQueue.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, HANDLE *a2)
{
  void *v2; // rcx
  PVOID v4; // rdi
  int inserted; // eax
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v10; // ax
  PVOID v12[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+48h] BYREF

  v2 = *(void **)(a1 + 8);
  Object = 0LL;
  Handle = 0LL;
  v4 = 0LL;
  inserted = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v14, (__int64)v12);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v7 = 307;
LABEL_3:
    TtmiLogError("TtmpDispatchCreateEventQueue", v7, inserted, inserted);
    goto LABEL_11;
  }
  v8 = TtmiCreateEventQueue(v14, &Object);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v4 = Object;
    inserted = TtmiWriteEnumerationEventsToQueue(v14, (__int64)Object);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 323;
      goto LABEL_3;
    }
    inserted = ObInsertObject(v4, 0LL, 0x1F0000u, 0, 0LL, &Handle);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 340;
      goto LABEL_3;
    }
    v4 = 0LL;
    *a2 = Handle;
    v6 = 0;
    Object = 0LL;
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateEventQueue", 313, v8, v8);
    v4 = Object;
  }
LABEL_11:
  if ( v14 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    CurrentThread = KeGetCurrentThread();
    v10 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v10;
    if ( !v10
      && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)CurrentThread);
    }
    v4 = Object;
  }
  if ( v12[0] )
    ObfDereferenceObject(v12[0]);
  if ( v4 )
    ObfDereferenceObject(v4);
  return v6;
}
