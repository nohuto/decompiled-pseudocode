/*
 * XREFs of ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C00442E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qs @ 0x1C0045AA8 (WPP_RECORDER_SF_qs.c)
 */

void __fastcall ACPIBuildIssueNotifyInvalidateRelationsForDockDevice(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx

  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( RootDeviceExtension )
  {
    v3 = *(_QWORD **)(RootDeviceExtension + 752);
    do
    {
      if ( v3 == (_QWORD *)(RootDeviceExtension + 752) )
      {
        LOBYTE(v3) = 2;
        dword_1C0074514 = *(_DWORD *)(**(_QWORD **)(a2 + 712) + 40LL);
        byte_1C0074518 = 0;
        WPP_RECORDER_SF_qs(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v3,
          21,
          20,
          (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
          *(_QWORD *)(a2 + 712),
          (__int64)&dword_1C0074514);
        goto LABEL_8;
      }
      v4 = v3 - 96;
      v3 = (_QWORD *)*v3;
    }
    while ( !v4 || (v4[1] & 0x200000000000000LL) == 0 || v4[23] != a2 );
    _InterlockedCompareExchange((volatile signed __int32 *)v4 + 50, 1, 0);
    if ( *((_DWORD *)v4 + 50) == 1 )
    {
      if ( (v4[1] & 8) != 0 )
        _InterlockedOr64(v4 + 1, 0x400000000uLL);
      if ( (*(_DWORD *)(RootDeviceExtension + 8) & 0x208) == 0x200LL )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(RootDeviceExtension + 736), SingleBusRelations);
    }
  }
LABEL_8:
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
