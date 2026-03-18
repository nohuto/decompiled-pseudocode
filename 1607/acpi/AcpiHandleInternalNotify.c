/*
 * XREFs of AcpiHandleInternalNotify @ 0x1C0053634
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C0053810 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C000B518 (AMLIIterateParentNext.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0045AA8 (WPP_RECORDER_SF_qs.c)
 */

void __fastcall AcpiHandleInternalNotify(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rdi
  KIRQL v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = a1;
  v2 = 0LL;
  dword_1C0074514 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  byte_1C0074518 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    8,
    10,
    (__int64)&WPP_04283116df513c0b4bfc015614b55db9_Traceguids,
    (char)a1,
    (__int64)&dword_1C0074514);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  AMLIReferenceHandleEx((__int64)v1);
  do
  {
    if ( v2 )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( v5 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( *(_DWORD *)(v5 + 16) != 1599293264 )
        v2 = 0LL;
    }
    v1 = (volatile signed __int32 *)AMLIIterateParentNext((__int64)v1);
  }
  while ( v1 );
  if ( v1 )
    AMLIDereferenceHandleEx(v1, v4);
  _InterlockedOr64((volatile signed __int64 *)(v2 + 8), 0x20000000000uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
}
