/*
 * XREFs of PnpiGrowResourceDescriptor @ 0x1C0085E60
 * Callers:
 *     PnpiUpdateResourceList @ 0x1C0086790 (PnpiUpdateResourceList.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C000C1D4 (WPP_RECORDER_SF_ddL.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIInternalGrowBuffer @ 0x1C0085724 (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceDescriptor(const void **a1, __int64 a2, int a3)
{
  PVOID PoolWithTag; // rax
  int v6; // edi

  if ( *a1 )
  {
    v6 = 32 * (*((_DWORD *)*a1 + 1) - 1);
    WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 30);
    return ACPIInternalGrowBuffer(a1, v6 + 40, v6 + 296);
  }
  else
  {
    WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 2, a3, 29);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x52706341u);
    *a1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x108uLL);
      *(_WORD *)*a1 = 1;
      *((_WORD *)*a1 + 1) = 1;
      *((_DWORD *)*a1 + 1) = 0;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
