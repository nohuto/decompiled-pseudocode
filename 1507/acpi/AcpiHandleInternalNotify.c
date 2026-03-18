/*
 * XREFs of AcpiHandleInternalNotify @ 0x1C003F74C
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C003F8F0 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C0007700 (AMLIIterateParentNext.c)
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 */

void __fastcall AcpiHandleInternalNotify(volatile signed __int32 *a1)
{
  volatile signed __int64 *v2; // rdi
  KIRQL v3; // si
  __int64 v4; // rdx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  AMLIReferenceHandleEx((__int64)a1);
  if ( a1 )
  {
    do
    {
      if ( v2 )
        break;
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
      if ( v4 )
      {
        v2 = *(volatile signed __int64 **)(*(_QWORD *)a1 + 96LL);
        if ( *(_DWORD *)(v4 + 8) != 1599293264 )
          v2 = 0LL;
      }
      a1 = (volatile signed __int32 *)AMLIIterateParentNext((__int64)a1);
    }
    while ( a1 );
    if ( a1 )
      AMLIDereferenceHandleEx(a1);
  }
  _InterlockedOr64(v2, 0x20000000000uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
}
