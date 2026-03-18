/*
 * XREFs of HvlDeleteProcessor @ 0x1405F683C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     HvlpFreeOverlayPages @ 0x14010760C (HvlpFreeOverlayPages.c)
 *     HvlpGetRegister64 @ 0x1401B522C (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401B52D0 (HvlpSetRegister64.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 */

void __fastcall HvlDeleteProcessor(struct _KPRCB *a1, SIZE_T a2, MEMORY_CACHING_TYPE a3)
{
  void *VirtualApicAssist; // rcx
  unsigned __int64 HypercallCachedPages; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1->VirtualApicAssist )
  {
    if ( a1 == KeGetCurrentPrcb() )
    {
      HvlpGetRegister64(589843, &v6);
      HvlpSetRegister64(589843, v6 & 0xFFFFFFFFFFFFFFFEuLL);
    }
    VirtualApicAssist = a1->VirtualApicAssist;
    if ( (HvlpFlags & 4) != 0 )
      MmUnmapIoSpace(VirtualApicAssist, 1uLL);
    else
      HvlpFreeOverlayPages(VirtualApicAssist, a2, a3);
    a1->VirtualApicAssist = 0LL;
  }
  HypercallCachedPages = (unsigned __int64)a1->HypercallCachedPages;
  if ( HypercallCachedPages )
    MmFreeIndependentPages(HypercallCachedPages, 0x5000uLL);
}
