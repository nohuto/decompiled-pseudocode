/*
 * XREFs of ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C000FEE8
 * Callers:
 *     VidMmTerminateDevice @ 0x1C0011B50 (VidMmTerminateDevice.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0048224 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C0093354 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C005B580 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_DEVICE::`scalar deleting destructor'(VIDMM_DEVICE *this)
{
  VIDMM_DEVICE::~VIDMM_DEVICE(this);
  operator delete(this);
  return this;
}
