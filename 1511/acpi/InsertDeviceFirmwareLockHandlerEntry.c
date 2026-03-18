/*
 * XREFs of InsertDeviceFirmwareLockHandlerEntry @ 0x1C0023204
 * Callers:
 *     AcpiRegisterDeviceFirmwareLockHandler @ 0x1C0073328 (AcpiRegisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     FindDeviceFirmwareLockHandlerEntryLocked @ 0x1C0023288 (FindDeviceFirmwareLockHandlerEntryLocked.c)
 */

__int64 __fastcall InsertDeviceFirmwareLockHandlerEntry(__int64 a1)
{
  KIRQL v2; // r10
  unsigned int v3; // edi
  __int64 **v4; // rcx

  KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
  v3 = 0;
  if ( FindDeviceFirmwareLockHandlerEntryLocked(*(unsigned int *)(a1 + 40), *(_QWORD *)(a1 + 48), 0LL) )
  {
    v3 = -1073741823;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
    v4 = (__int64 **)qword_1C0059C28;
    *(_QWORD *)a1 = &AcpiDeviceFirmwareLockHandlerList;
    *(_QWORD *)(a1 + 8) = v4;
    if ( *v4 != &AcpiDeviceFirmwareLockHandlerList )
      __fastfail(3u);
    *v4 = (__int64 *)a1;
    qword_1C0059C28 = a1;
  }
  KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v2);
  return v3;
}
