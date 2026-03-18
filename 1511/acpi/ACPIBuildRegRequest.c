/*
 * XREFs of ACPIBuildRegRequest @ 0x1C0036364
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x1C00235F0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildRegOnRequest @ 0x1C0036350 (ACPIBuildRegOnRequest.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0006E60 (ACPIBuildRunMethodRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIBuildRegRequest(ULONG_PTR a1, __int64 a2, void (__fastcall *a3)(__int64, __int64, _QWORD))
{
  __int64 DeviceExtension; // r14
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  int v10; // edi
  KIRQL v11; // bl
  unsigned int v12; // edi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(_DWORD *)(v6 + 24);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v6 + 3) |= 1u;
  v8 = *(_DWORD *)(a2 + 48);
  if ( v8 >= 0 )
  {
    v10 = 37;
    if ( v7 == 1 )
      v10 = 21;
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v12 = ACPIBuildRunMethodRequest(DeviceExtension, a3, a2, 1195725407, v10, 1);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
    if ( v12 == 259 )
      return (unsigned int)-1073741802;
    return v12;
  }
  else
  {
    if ( a3 )
      a3(DeviceExtension, a2, (unsigned int)v8);
    return (unsigned int)v8;
  }
}
