/*
 * XREFs of PiSwIrpCleanup @ 0x1404946BC
 * Callers:
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwCloseDevice @ 0x1404957E8 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x140496720 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x1404968E4 (PiSwFindSwDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1)
{
  IRP *v2; // rsi
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // rax
  const wchar_t *v6; // rbp
  _QWORD *v7; // rax
  __int64 SwDevice; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  PiSwLock();
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_2;
  v5 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  while ( 1 )
  {
    v6 = *(const wchar_t **)(v5 + 8);
    if ( wcsnicmp(v6, L"SWD\\", 4uLL) )
      break;
    SwDevice = PiSwFindSwDevice(v6);
    if ( !SwDevice )
      goto LABEL_2;
    if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
      goto LABEL_3;
    v5 = *(_QWORD *)(SwDevice + 112);
  }
  RtlInitUnicodeString(&DestinationString, v6);
  v7 = PnpDeviceObjectFromDeviceInstance((__int64)&DestinationString);
  if ( v7 )
    ObfDereferenceObject(v7);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v2 )
  {
    v2->IoStatus.Information = 0LL;
    v2->IoStatus.Status = -1073741536;
    IofCompleteRequest(v2, 0);
  }
}
