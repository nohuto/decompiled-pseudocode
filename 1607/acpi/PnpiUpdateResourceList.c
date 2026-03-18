/*
 * XREFs of PnpiUpdateResourceList @ 0x1C0086790
 * Callers:
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C0083F4C (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C0083FC4 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00843F0 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C0084774 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C0085664 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0085D3C (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0085F40 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C008670C (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C009EFF0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C009F3C4 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C009F76C (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C009F7C8 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosSerialBusToIoDescriptor @ 0x1C009F918 (PnpiBiosSerialBusToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C009F96C (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C002C1C0 (memset.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0085E60 (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(const void **a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  void *v9; // rcx
  __int64 result; // rax

  v3 = 0;
  if ( *a1 && (*((_DWORD *)*a1 + 1) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, (__int64)a2, a3), v3 = result, (int)result >= 0) )
  {
    v6 = (__int64)*a1 + 8;
    v7 = 32LL * *((unsigned int *)*a1 + 1);
    v8 = v7 + v6 == 0;
    v9 = (void *)(v7 + v6);
    *a2 = v9;
    if ( v8 )
    {
      return 3221225473LL;
    }
    else
    {
      memset(v9, 0, 0x20uLL);
      ++*((_DWORD *)*a1 + 1);
      return v3;
    }
  }
  return result;
}
