/*
 * XREFs of ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0037C64
 * Callers:
 *     VidMmCreateDevice @ 0x1C0004B30 (VidMmCreateDevice.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0044BBC (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0060960 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

VIDMM_DEVICE *__fastcall VIDMM_DEVICE::VIDMM_DEVICE(VIDMM_DEVICE *this, struct VIDMM_GLOBAL *a2, struct DXGDEVICE *a3)
{
  *((_BYTE *)this + 48) &= ~1u;
  *((_BYTE *)this + 50) &= 0xFCu;
  *((_DWORD *)this + 13) &= 0xFFFFFFFC;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 49) = 0;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 3) = a3;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 926);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 1604);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 19) = (char *)this + 152;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return this;
}
