/*
 * XREFs of ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01655D0
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01679D0 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::DXGSWAPCHAIN(DXGSWAPCHAIN *this)
{
  DXGSWAPCHAIN *result; // rax

  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this, 62, 32);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  AUTOEXPANDALLOCATION::GetBuffer((void **)this + 10, 0, 0);
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 52) = 1;
  memset((char *)this + 96, 0, 0x38uLL);
  memset((char *)this + 152, 0, 0x38uLL);
  *((_DWORD *)this + 48) = 0;
  result = this;
  *((_DWORD *)this + 34) = 1;
  return result;
}
