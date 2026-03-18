/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00DAF78
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DA798 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(ADAPTER_DISPLAY *this, struct DXGADAPTER *a2)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 24, 5, 14);
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 36) = -1;
  *((_DWORD *)this + 37) = -1;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 38) = 3;
  *((_WORD *)this + 78) = 0;
  *((_BYTE *)this + 158) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 160, -1, 1);
  *((_QWORD *)this + 28) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 248, 16, 7);
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_BYTE *)this + 328) = 0;
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  return this;
}
