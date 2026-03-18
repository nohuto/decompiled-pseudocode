/*
 * XREFs of ACPIBuildIssueNotifyDeviceEject @ 0x1C0035600
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDockIsDockDevice @ 0x1C000DE9C (ACPIDockIsDockDevice.c)
 */

void __fastcall ACPIBuildIssueNotifyDeviceEject(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx

  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( RootDeviceExtension )
  {
    if ( (*a2 & 0x8000000000000LL) != 0 || !ACPIDockIsDockDevice() )
    {
      v4 = a2;
LABEL_11:
      if ( v4 && (*(_DWORD *)v4 & 0x208) == 0x200LL )
        IoRequestDeviceEject((PDEVICE_OBJECT)v4[91]);
    }
    else
    {
      v3 = *(_QWORD **)(RootDeviceExtension + 744);
      while ( v3 != (_QWORD *)(RootDeviceExtension + 744) )
      {
        v4 = v3 - 95;
        v3 = (_QWORD *)*v3;
        if ( v4 && (*v4 & 0x200000000000000LL) != 0 && (_QWORD *)v4[22] == a2 )
          goto LABEL_11;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
