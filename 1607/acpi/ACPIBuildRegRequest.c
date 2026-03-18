/*
 * XREFs of ACPIBuildRegRequest @ 0x1C00453A4
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x1C002A600 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildRegOnRequest @ 0x1C0045390 (ACPIBuildRegOnRequest.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00067C0 (ACPIBuildRunMethodRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000FCF0 (WPP_RECORDER_SF_qdqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIBuildRegRequest(ULONG_PTR a1, __int64 a2, void (__fastcall *a3)(__int64, __int64, _QWORD))
{
  __int64 DeviceExtension; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  int v8; // r15d
  const char *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // rax
  int v12; // ebx
  int v14; // edi
  KIRQL v15; // bl
  unsigned int v16; // edi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LOBYTE(v6) = 0;
  v7 = DeviceExtension;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  v9 = (const char *)qword_1C002C340;
  v10 = (const char *)qword_1C002C340;
  if ( DeviceExtension )
  {
    v6 = DeviceExtension;
    v11 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v6 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v6 + 568);
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v10,
    0xAu,
    0x52u,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    a2,
    v8 - 1,
    v6,
    v9,
    v10);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v12 = *(_DWORD *)(a2 + 48);
  if ( v12 >= 0 )
  {
    v14 = 37;
    if ( v8 == 1 )
      v14 = 21;
    v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v16 = ACPIBuildRunMethodRequest(v7, a3, a2, 1195725407, v14, 1);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
    if ( v16 == 259 )
      return (unsigned int)-1073741802;
    return v16;
  }
  else
  {
    if ( a3 )
      a3(v7, a2, (unsigned int)v12);
    return (unsigned int)v12;
  }
}
