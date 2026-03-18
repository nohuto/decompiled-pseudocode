/*
 * XREFs of ACPIBuildProcessDevicePhaseEjd @ 0x1C000B730
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000B7A4 (ACPIBuildCompleteCommon.c)
 *     ACPIDockIsDockDevice @ 0x1C000D7C8 (ACPIDockIsDockDevice.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ACPIBuildDockExtension @ 0x1C003482C (ACPIBuildDockExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseEjd(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  __int64 **v7; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  if ( (*(_BYTE *)v1 & 2) != 0 )
    *(_DWORD *)(a1 + 32) = 16;
  else
    *(_DWORD *)(a1 + 32) = 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
    FreeDataBuffs(v3, 1LL);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v7 = (__int64 **)qword_1C0059DE8;
    *(_QWORD *)(v1 + 800) = qword_1C0059DE8;
    *(_QWORD *)(v1 + 792) = &AcpiUnresolvedEjectList;
    if ( *v7 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *v7 = (__int64 *)(v1 + 792);
    qword_1C0059DE8 = v1 + 792;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( (unsigned __int8)ACPIDockIsDockDevice(*(_QWORD *)(v1 + 704)) )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
      KeBugCheckEx(0xA5u, 0xCuLL, v1, *(_QWORD *)(a1 + 56), 0LL);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v4 = ACPIBuildDockExtension(*(_QWORD *)(v1 + 704));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  else
  {
    v4 = 0;
  }
  v5 = *(unsigned int *)(a1 + 32);
  if ( v4 < 0 )
    *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v5);
  return (unsigned int)v4;
}
