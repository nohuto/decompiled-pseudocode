/*
 * XREFs of ??0DXGKEYEDMUTEX@@QEAA@PEAVDXGGLOBAL@@_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C4AC
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C394 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 */

DXGKEYEDMUTEX *__fastcall DXGKEYEDMUTEX::DXGKEYEDMUTEX(
        DXGKEYEDMUTEX *this,
        struct DXGGLOBAL *a2,
        __int64 a3,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a4)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = a3;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 9) = 1;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 96, 34, 32);
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS *)this + 43) = a4;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  return this;
}
