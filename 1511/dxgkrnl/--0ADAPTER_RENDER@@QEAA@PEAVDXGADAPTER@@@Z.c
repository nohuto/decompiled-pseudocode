/*
 * XREFs of ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00D64EC
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DAA98 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
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
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 136, 32, 1);
  *((_QWORD *)this + 26) = (char *)this + 200;
  *((_QWORD *)this + 25) = (char *)this + 200;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_BYTE *)this + 416) = 0;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 440, 3, 20);
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 536, 8, 12);
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_BYTE *)this + 656) = 0;
  *((_DWORD *)this + 170) = -1;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 172) = 0;
  *((_QWORD *)this + 87) = 0LL;
  *((_WORD *)this + 352) = 1;
  *((_BYTE *)this + 706) = 0;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_WORD *)this + 484) = 0;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_DWORD *)this + 280) = 0;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 56), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)((char *)this + 80), NotificationEvent, 1u);
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 49) = -1LL;
  memset((char *)this + 504, 0, 0x20uLL);
  *((_QWORD *)this + 78) = (char *)this + 616;
  *((_QWORD *)this + 77) = (char *)this + 616;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 119) = DxgkpDeferredDestructionWork;
  result = this;
  *((_QWORD *)this + 120) = this;
  *((_QWORD *)this + 117) = 0LL;
  return result;
}
