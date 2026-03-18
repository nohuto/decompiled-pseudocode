/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C00512D0
 * Callers:
 *     NotifyHandler @ 0x1C0054C30 (NotifyHandler.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C000B518 (AMLIIterateParentNext.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ACPIDockIsDockDevice @ 0x1C0014200 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0028220 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0045AA8 (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x1C0051438 (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  KIRQL v5; // si
  __int64 v6; // rdx
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r9

  dword_1C0074514 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  v2 = dword_1C0074514;
  LOBYTE(v2) = 4;
  byte_1C0074518 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    8,
    22,
    (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
    a1,
    (__int64)&dword_1C0074514);
  if ( ACPIDockIsDockDevice() )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      21,
      23,
      (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids);
    return OSNotifyDeviceEject(a1);
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v6 && (*(_QWORD *)(v6 + 8) & 0x2000000000LL) != 0 && (unsigned int)(*(_DWORD *)(v6 + 320) - 2) > 1 )
      *(_BYTE *)(v6 + 185) = 0;
    v7 = 0LL;
    v8 = (volatile signed __int32 *)AMLIGetParent(a1);
    if ( v8 )
    {
      do
      {
        if ( v7 )
          break;
        v10 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
        if ( v10 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
          if ( *(_DWORD *)(v10 + 16) != 1599293264 )
            v7 = 0LL;
        }
        v8 = (volatile signed __int32 *)AMLIIterateParentNext((__int64)v8);
      }
      while ( v8 );
      if ( v8 )
        AMLIDereferenceHandleEx(v8, v9);
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v7 )
      ACPIBuildSynchronizationRequestInternal(v7, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v7, v11, 1);
    return 0LL;
  }
}
