/*
 * XREFs of PnpiUpdateResourceList @ 0x1C007030C
 * Callers:
 *     PnpiBiosDmaToIoDescriptor @ 0x1C006E6FC (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C006E7B0 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C006F148 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C006F290 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C006F73C (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C006FBA0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C006FCC4 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C0070288 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C007DA48 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C007DD20 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C007DFC8 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C007E024 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosSerialBusToIoDescriptor @ 0x1C007E174 (PnpiBiosSerialBusToIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0070380 (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  void *v8; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(), v2 = result, (int)result >= 0) )
  {
    v5 = *(_QWORD *)a1 + 8LL;
    v6 = 32LL * *(unsigned int *)(*(_QWORD *)a1 + 4LL);
    v7 = v6 + v5 == 0;
    v8 = (void *)(v6 + v5);
    *a2 = v8;
    if ( v7 )
    {
      return 3221225473LL;
    }
    else
    {
      memset(v8, 0, 0x20uLL);
      ++*(_DWORD *)(*(_QWORD *)a1 + 4LL);
      return v2;
    }
  }
  return result;
}
