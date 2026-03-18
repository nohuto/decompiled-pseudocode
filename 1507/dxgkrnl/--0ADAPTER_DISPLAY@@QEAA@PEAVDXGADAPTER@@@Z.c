/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00CF898
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00D1E28 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0004B40 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(ADAPTER_DISPLAY *this, struct DXGADAPTER *a2)
{
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r10

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 24, 5, 14);
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  *(_DWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_DWORD *)(v2 + 120) = -1;
  *(_DWORD *)(v2 + 124) = -1;
  *(_DWORD *)(v2 + 128) = 3;
  *(_WORD *)(v2 + 132) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX(v2 + 136, -1, 1);
  *(_QWORD *)(v3 + 176) = v4;
  DXGFASTMUTEX::DXGFASTMUTEX(v3 + 200, v4 + 16, v4 + 7);
  *(_QWORD *)(v5 + 240) = v6;
  *(_QWORD *)(v5 + 248) = v6;
  *(_BYTE *)(v5 + 256) = v6;
  *(_QWORD *)(v5 + 192) = v5 + 184;
  *(_QWORD *)(v5 + 184) = v5 + 184;
  return (ADAPTER_DISPLAY *)v5;
}
