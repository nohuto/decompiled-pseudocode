/*
 * XREFs of PiSwIrpCleanup @ 0x1404868C8
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x140489090 (PiSwDispatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwCloseDevice @ 0x140483C1C (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x140484B98 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x1404867FC (PiSwFindSwDevice.c)
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
    PiSwCloseDescendants((__int128 *)(a1 + 72));
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
