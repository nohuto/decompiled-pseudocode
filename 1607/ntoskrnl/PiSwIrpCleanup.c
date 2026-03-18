/*
 * XREFs of PiSwIrpCleanup @ 0x1404C3820
 * Callers:
 *     PiSwDispatch @ 0x140489CB0 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     _wcsnicmp @ 0x14014D8A0 (_wcsnicmp.c)
 *     PiSwLock @ 0x1403F1A74 (PiSwLock.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F4A34 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwCloseDevice @ 0x1404C3900 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x1404C6390 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x1404C63C0 (PiSwFindSwDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1)
{
  IRP *v2; // rsi
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  const wchar_t *v9; // rbp
  _QWORD *v10; // rax
  __int64 SwDevice; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  PiSwLock();
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_2;
  v8 = *(_QWORD *)(a1 + 112);
  v3 = 0;
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
  v10 = PnpDeviceObjectFromDeviceInstance((__int64)&DestinationString);
  if ( v10 )
    ObfDereferenceObject(v10);
  else
LABEL_2:
    v3 = 1;
LABEL_3:
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 && _InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL) )
  {
    v2 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v3 )
  {
    PiSwCloseDescendants(a1 + 72);
    PiSwCloseDevice(a1);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  if ( v2 )
  {
    v2->IoStatus.Information = 0LL;
    v2->IoStatus.Status = -1073741536;
    IofCompleteRequest(v2, 0);
  }
}
