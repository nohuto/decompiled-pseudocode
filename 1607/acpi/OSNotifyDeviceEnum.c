/*
 * XREFs of OSNotifyDeviceEnum @ 0x1C00514B8
 * Callers:
 *     NotifyHandler @ 0x1C0054C30 (NotifyHandler.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C000B518 (AMLIIterateParentNext.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C0014200 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0028220 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0045AA8 (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEnum(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  void (__fastcall *v6)(__int64, __int64); // rdx
  KIRQL v7; // si
  __int64 v8; // rdx
  __int64 v9; // rdx

  v1 = a1;
  v2 = 0LL;
  dword_1C0074514 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  byte_1C0074518 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    8,
    24,
    (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
    (char)a1,
    (__int64)&dword_1C0074514);
  if ( ACPIDockIsDockDevice() )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      v6 = ACPIBuildIssueNotifyInvalidateRelationsForDockDevice;
LABEL_14:
      ACPIBuildSynchronizationRequestInternal(v4, (__int64)v6, v5, v3, 1);
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    AMLIReferenceHandleEx((__int64)v1);
    do
    {
      if ( v2 )
        break;
      v9 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( v9 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( *(_DWORD *)(v9 + 16) != 1599293264 )
          v2 = 0LL;
      }
      v1 = (volatile signed __int32 *)AMLIIterateParentNext((__int64)v1);
    }
    while ( v1 );
    if ( v1 )
      AMLIDereferenceHandleEx(v1, v8);
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
