/*
 * XREFs of ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C0034A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIBuildIssueNotifyInvalidateRelationsForDockDevice(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  volatile signed __int32 *v4; // rcx

  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( RootDeviceExtension )
  {
    v3 = *(_QWORD **)(RootDeviceExtension + 744);
    while ( v3 != (_QWORD *)(RootDeviceExtension + 744) )
    {
      v4 = (volatile signed __int32 *)(v3 - 95);
      v3 = (_QWORD *)*v3;
      if ( v4 && (*(_QWORD *)v4 & 0x200000000000000LL) != 0 && *((_QWORD *)v4 + 22) == a2 )
      {
        _InterlockedCompareExchange(v4 + 48, 1, 0);
        if ( *((_DWORD *)v4 + 48) == 1 )
        {
          if ( (*(_BYTE *)v4 & 8) != 0 )
            _InterlockedOr64((volatile signed __int64 *)v4, 0x400000000uLL);
          if ( (*(_DWORD *)RootDeviceExtension & 0x208) == 0x200LL )
            IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(RootDeviceExtension + 728), SingleBusRelations);
        }
        break;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
