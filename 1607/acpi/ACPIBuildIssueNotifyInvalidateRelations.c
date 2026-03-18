/*
 * XREFs of ACPIBuildIssueNotifyInvalidateRelations @ 0x1C0026D50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPendingInvalidate @ 0x1C0026DC4 (ACPIPendingInvalidate.c)
 */

void __fastcall ACPIBuildIssueNotifyInvalidateRelations(__int64 a1, __int64 a2)
{
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  while ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 8) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x200LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFBFFFFFFFFFFuLL);
        if ( !(unsigned __int8)ACPIPendingInvalidate(a2) )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a2 + 736), BusRelations);
      }
      break;
    }
    a2 = *(_QWORD *)(a2 + 744);
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
