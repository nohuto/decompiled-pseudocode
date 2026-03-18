/*
 * XREFs of OSNotifyDeviceEnum @ 0x1C003DBC0
 * Callers:
 *     NotifyHandler @ 0x1C003FC90 (NotifyHandler.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C00081F4 (AMLIIterateParentNext.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C000DE9C (ACPIDockIsDockDevice.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0021214 (ACPIBuildSynchronizationRequestInternal.c)
 */

__int64 __fastcall OSNotifyDeviceEnum(volatile signed __int32 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  void (__fastcall *v6)(__int64, __int64); // rdx
  KIRQL v7; // si
  __int64 v8; // rdx

  v2 = 0LL;
  if ( ACPIDockIsDockDevice() )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
      v6 = ACPIBuildIssueNotifyInvalidateRelationsForDockDevice;
LABEL_14:
      ACPIBuildSynchronizationRequestInternal(v4, (__int64)v6, v5, v3, 1);
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    AMLIReferenceHandleEx((__int64)a1);
    if ( a1 )
    {
      do
      {
        if ( v2 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
        if ( v8 )
        {
          v2 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
          if ( *(_DWORD *)(v8 + 8) != 1599293264 )
            v2 = 0LL;
        }
        a1 = (volatile signed __int32 *)AMLIIterateParentNext((__int64)a1);
      }
      while ( a1 );
      if ( a1 )
        AMLIDereferenceHandleEx(a1);
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
    if ( v2 )
    {
      v5 = v2;
      v6 = ACPIBuildIssueNotifyInvalidateRelations;
      v4 = v2;
      goto LABEL_14;
    }
  }
  return 0LL;
}
