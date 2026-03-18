/*
 * XREFs of RootHub_SetPortResumeTime @ 0x1C00271B0
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C003280C (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall RootHub_SetPortResumeTime(__int64 a1, int a2, __int16 a3)
{
  __int64 v4; // rdi
  KIRQL v5; // al

  v4 = *(_QWORD *)(a1 + 48) + 56LL * (unsigned int)(a2 - 1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 16));
  ++*(_DWORD *)(v4 + 40);
  *(_WORD *)(v4 + 44) = a3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 16), v5);
}
