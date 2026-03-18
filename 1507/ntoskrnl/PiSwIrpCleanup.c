/*
 * XREFs of PiSwIrpCleanup @ 0x140539078
 * Callers:
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwFindSwDevice @ 0x140538814 (PiSwFindSwDevice.c)
 *     PiSwCloseDecendents @ 0x140538D44 (PiSwCloseDecendents.c)
 *     PiSwCloseDevice @ 0x1405391A8 (PiSwCloseDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  IRP *v3; // rdi
  char v4; // si
  __int64 v5; // rcx
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  __int64 v8; // rax
  const wchar_t *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 SwDevice; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_2;
  v8 = *(_QWORD *)(a1 + 112);
  v4 = 0;
  while ( 1 )
  {
    v9 = *(const wchar_t **)(v8 + 8);
    if ( wcsnicmp(v9, L"SWD\\", 4uLL) )
      break;
    SwDevice = PiSwFindSwDevice(v9);
    if ( !SwDevice )
      goto LABEL_2;
    if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
      goto LABEL_3;
    v8 = *(_QWORD *)(SwDevice + 112);
  }
  RtlInitUnicodeString(&DestinationString, v9);
  v13 = PnpDeviceObjectFromDeviceInstance((__int64)&DestinationString, v10, v11, v12);
  if ( v13 )
    ObfDereferenceObject(v13);
  else
LABEL_2:
    v4 = 1;
LABEL_3:
  v5 = *(_QWORD *)(a1 + 144);
  if ( v5 && _InterlockedExchange64((volatile __int64 *)(v5 + 104), 0LL) )
  {
    v3 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v4 )
  {
    PiSwCloseDecendents((__int128 *)(a1 + 72));
    PiSwCloseDevice(a1);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v3 )
  {
    v3->IoStatus.Status = -1073741536;
    v3->IoStatus.Information = 0LL;
    IofCompleteRequest(v3, 0);
  }
}
