/*
 * XREFs of ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0069CB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C000D680 (AMLIIsNamedChildPresent.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0039234 (AcpiDeviceResetInvokeReset.c)
 *     AcpiDeviceResetMarkDeviceRemoved @ 0x1C0039344 (AcpiDeviceResetMarkDeviceRemoved.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryPnpDeviceState(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 DeviceExtension; // rdi
  bool v7; // si
  int v8; // r14d
  char v9; // si
  bool v10; // zf
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = (*(_QWORD *)DeviceExtension & 0x8000000000000LL) == 0
    && AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 704), 1096045407);
  v8 = ACPIGet((_QWORD *)DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)v12, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( (*(_QWORD *)DeviceExtension & 0x40000000LL) != 0 || (*(_QWORD *)DeviceExtension & 0x20000000LL) != 0 )
  {
    *(_QWORD *)(a2 + 56) |= 2uLL;
  }
  else if ( v7 || !a4 )
  {
    *(_QWORD *)(a2 + 56) &= ~2uLL;
  }
  if ( (*(_QWORD *)DeviceExtension & 0x80000000000000LL) != 0 )
  {
    *(_QWORD *)(a2 + 56) |= 4uLL;
  }
  else if ( v7 && !a4 )
  {
    *(_QWORD *)(a2 + 56) &= ~4uLL;
  }
  if ( (*(_QWORD *)DeviceExtension & 0x8001008040000LL) != 0 )
  {
    v10 = (*(_QWORD *)DeviceExtension & 0x204000LL) == 0x200000;
    goto LABEL_23;
  }
  if ( !a4 )
  {
    v9 = 1;
    if ( (*(_DWORD *)(DeviceExtension + 904) & 0x40000) == 0
      && (!AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 704), 1397310559)
       && !AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 704), 861098079)
       && !AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 704), 810700895)
       || (*(_DWORD *)DeviceExtension & 0x204000) == 0x200000LL) )
    {
      v9 = 0;
    }
    if ( *(int *)(DeviceExtension + 684) > 0 || *(int *)(DeviceExtension + 688) > 0 )
      v9 = 0;
    v10 = v9 == 0;
LABEL_23:
    if ( !v10 )
      goto LABEL_25;
LABEL_24:
    *(_QWORD *)(a2 + 56) |= 0x20uLL;
    goto LABEL_25;
  }
  if ( *(int *)(DeviceExtension + 684) > 0 || *(int *)(DeviceExtension + 688) > 0 )
    goto LABEL_24;
LABEL_25:
  if ( *(_QWORD *)(DeviceExtension + 896)
    && (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 728) + 48LL) & 0x4000000) != 0
    && AcpiDeviceResetMarkDeviceRemoved(DeviceExtension) )
  {
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    AcpiDeviceResetInvokeReset(DeviceExtension, a2);
    return 259;
  }
  return (unsigned int)v8;
}
