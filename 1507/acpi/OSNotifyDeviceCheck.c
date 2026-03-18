/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C003DEA8
 * Callers:
 *     NotifyHandler @ 0x1C00401E0 (NotifyHandler.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C0007700 (AMLIIterateParentNext.c)
 *     AMLIGetParent @ 0x1C000B88C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C000D7C8 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0020B1C (ACPIBuildSynchronizationRequestInternal.c)
 *     OSNotifyDeviceEject @ 0x1C003DFA4 (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 a1)
{
  KIRQL v3; // si
  __int64 v4; // rdx
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9

  if ( ACPIDockIsDockDevice() )
    return OSNotifyDeviceEject(a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
  if ( v4 && (*(_QWORD *)v4 & 0x2000000000LL) != 0 && (unsigned int)(*(_DWORD *)(v4 + 312) - 2) > 1 )
    *(_BYTE *)(v4 + 177) = 0;
  v5 = 0LL;
  v6 = (volatile signed __int32 *)AMLIGetParent(a1);
  if ( v6 )
  {
    do
    {
      if ( v5 )
        break;
      v7 = *(_QWORD *)(*(_QWORD *)v6 + 96LL);
      if ( v7 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)v6 + 96LL);
        if ( *(_DWORD *)(v7 + 8) != 1599293264 )
          v5 = 0LL;
      }
      v6 = (volatile signed __int32 *)AMLIIterateParentNext((__int64)v6);
    }
    while ( v6 );
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
  if ( v5 )
    ACPIBuildSynchronizationRequestInternal(v5, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v5, v8, 1);
  return 0LL;
}
