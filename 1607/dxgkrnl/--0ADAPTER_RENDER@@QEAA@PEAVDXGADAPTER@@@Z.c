/*
 * XREFs of ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00E4310
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7A7C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

ADAPTER_RENDER *__fastcall ADAPTER_RENDER::ADAPTER_RENDER(ADAPTER_RENDER *this, struct DXGADAPTER *a2)
{
  ADAPTER_RENDER *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 32;
  *((_DWORD *)this + 42) = 1;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 23) = (char *)this + 176;
  *((_QWORD *)this + 22) = (char *)this + 176;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_BYTE *)this + 392) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 111) = 3;
  *((_DWORD *)this + 112) = 20;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 129) = 8;
  *((_DWORD *)this + 130) = 12;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_BYTE *)this + 584) = 0;
  *((_DWORD *)this + 152) = -1;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 154) = 0;
  *((_QWORD *)this + 78) = 0LL;
  *((_WORD *)this + 316) = 1;
  *((_BYTE *)this + 635) = 0;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_WORD *)this + 448) = 0;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_DWORD *)this + 260) = 0;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 56), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)((char *)this + 80), NotificationEvent, 1u);
  memset((char *)this + 224, 0, 0x40uLL);
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 46) = -1LL;
  memset((char *)this + 456, 0, 0x20uLL);
  *((_QWORD *)this + 69) = (char *)this + 544;
  *((_QWORD *)this + 68) = (char *)this + 544;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 110) = DxgkpDeferredDestructionWork;
  result = this;
  *((_QWORD *)this + 111) = this;
  *((_QWORD *)this + 108) = 0LL;
  return result;
}
