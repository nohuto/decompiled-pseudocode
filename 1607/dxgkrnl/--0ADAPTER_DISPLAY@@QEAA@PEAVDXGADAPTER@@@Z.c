/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00F6330
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7778 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DDC (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(ADAPTER_DISPLAY *this, struct DXGADAPTER *a2)
{
  __int64 v2; // r9
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // r11
  int v8; // r10d
  ADAPTER_DISPLAY *v9; // r9
  ADAPTER_DISPLAY *result; // rax

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
  *(_BYTE *)(v2 + 134) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX(v2 + 136, -1, v3 - 13);
  *(_QWORD *)(v4 + 176) = v5;
  DXGFASTMUTEX::DXGFASTMUTEX(v4 + 200, v5 + 16, v5 + 7);
  *(_QWORD *)(v6 + 240) = v7;
  *(_DWORD *)(v6 + 248) = v8;
  *(_QWORD *)(v6 + 256) = v7;
  *(_DWORD *)(v6 + 264) = v7;
  *(_BYTE *)(v6 + 268) = v7;
  DXGFASTMUTEX::DXGFASTMUTEX(v6 + 272, v7 + 72, v7 + 32);
  result = v9;
  *((_QWORD *)v9 + 24) = (char *)v9 + 184;
  *((_QWORD *)v9 + 23) = (char *)v9 + 184;
  return result;
}
