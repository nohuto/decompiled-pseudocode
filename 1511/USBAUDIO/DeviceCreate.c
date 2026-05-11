/*
 * XREFs of DeviceCreate @ 0x1C0001880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     McGenEventRegister @ 0x1C00016F8 (McGenEventRegister.c)
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008000 (memset.c)
 *     WmiRegisterProvider @ 0x1C001A66C (WmiRegisterProvider.c)
 */

__int64 __fastcall DeviceCreate(__int64 a1)
{
  NTSTATUS v2; // edi
  PETWENABLECALLBACK v3; // rdx
  LPCGUID v4; // rcx
  PVOID v5; // r8
  PREGHANDLE v6; // r9
  PDRIVER_CONTROL *PoolWithTag; // rax
  PDRIVER_CONTROL *v8; // rbx
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  struct _DEVICE_OBJECT *v11; // rdx
  KIRQL v12; // al
  PDRIVER_CONTROL DeviceRoutine; // rcx
  PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp; // [rsp+30h] [rbp-40h]
  _COUNTED_REASON_CONTEXT Context; // [rsp+40h] [rbp-30h] BYREF

  v2 = -1073741670;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xAu,
    (__int64)&WPP_2f55663bb2019a56db71a685c2757be1_Traceguids,
    a1);
  McGenEventRegister(v4, v3, v5, v6);
  PoolWithTag = (PDRIVER_CONTROL *)ExAllocatePoolWithTag(NonPagedPool, 0x2B0uLL, 0x41627845u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_15;
  v2 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool);
  if ( v2 < 0 )
  {
    ExFreePool(v8);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v8;
    memset(v8, 0, 0x2B0uLL);
    WmiRegisterProvider(a1);
    KeInitializeSpinLock((PKSPIN_LOCK)v8 + 12);
    v8[14] = (PDRIVER_CONTROL)(v8 + 13);
    v8[13] = (PDRIVER_CONTROL)(v8 + 13);
    v9 = L"mmres.dll";
    v8[2] = (PDRIVER_CONTROL)a1;
    *((_BYTE *)v8 + 64) = 1;
    Context.ResourceReasonId = 900;
    v10 = 0x7FFFLL;
    Context.Version = 0;
    *(_QWORD *)&Context.Flags = 2LL;
    Context.StringCount = 0;
    Context.ReasonStrings = 0LL;
    Context.ResourceFileName.Buffer = 0LL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v10;
    }
    while ( v10 );
    if ( v10 )
    {
      Context.ResourceFileName.Buffer = L"mmres.dll";
      v11 = *(struct _DEVICE_OBJECT **)(a1 + 24);
      Context.ResourceFileName.Length = 2 * (0x7FFF - v10);
      Context.ResourceFileName.MaximumLength = Context.ResourceFileName.Length + 2;
      PoCreatePowerRequest((PVOID *)v8 + 62, v11, &Context);
    }
    KeInitializeEvent((PRKEVENT)v8 + 22, NotificationEvent, 1u);
    KeInitializeSpinLock((PKSPIN_LOCK)v8 + 77);
    KeInitializeSemaphore((PRKSEMAPHORE)v8 + 20, 0, 0x7FFFFFFF);
    v8[79] = (PDRIVER_CONTROL)(v8 + 78);
    v8[78] = (PDRIVER_CONTROL)(v8 + 78);
    v2 = IoCsqInitialize(
           (PIO_CSQ)(v8 + 69),
           CsInsertIrp,
           CsRemoveIrp,
           CsPeekNextIrp,
           CsAcquireLock,
           CsReleaseLock,
           CsCompleteCanceledIrp);
    if ( v2 < 0 )
      goto LABEL_15;
    v2 = (*(__int64 (__fastcall **)(__int64))pExtBusDeviceDispatchTable)(a1);
    if ( v2 < 0 )
      goto LABEL_15;
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
    DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    ++WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    *v8 = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    v8[1] = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    if ( *((struct _DEVICE_OBJECT **)DeviceRoutine + 1) != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
      __fastfail(3u);
    *((_QWORD *)DeviceRoutine + 1) = v8;
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v8;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v12);
  }
  if ( v2 < 0 )
  {
LABEL_15:
    LODWORD(CsqCompleteCanceledIrp) = v2;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xBu,
      (__int64)&WPP_2f55663bb2019a56db71a685c2757be1_Traceguids,
      a1,
      CsqCompleteCanceledIrp);
  }
  return (unsigned int)v2;
}
