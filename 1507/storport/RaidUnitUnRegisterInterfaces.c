/*
 * XREFs of RaidUnitUnRegisterInterfaces @ 0x1C00342AC
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x1C0030C10 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0030D5C (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0054520 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     PortMapDeleteLunEntry @ 0x1C003AC04 (PortMapDeleteLunEntry.c)
 */

__int64 __fastcall RaidUnitUnRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  void (*v5)(void); // rax

  v1 = *(_DWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  if ( v3 )
    v4 = PortMapDeleteLunEntry(*(unsigned int *)(v3 + 56), (unsigned __int8)v1, BYTE1(v1), BYTE2(v1));
  if ( *(_QWORD *)(a1 + 1536) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1528), 0);
  if ( *(_QWORD *)(a1 + 1656) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1648), 0);
  v5 = *(void (**)(void))(a1 + 616);
  if ( v5 && *(_QWORD *)(a1 + 544) )
  {
    v5();
    memset((void *)(a1 + 536), 0, 0x58uLL);
  }
  return v4;
}
