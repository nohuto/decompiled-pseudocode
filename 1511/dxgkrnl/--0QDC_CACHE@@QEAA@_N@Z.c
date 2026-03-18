/*
 * XREFs of ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C00EA154
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00D4630 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

QDC_CACHE *__fastcall QDC_CACHE::QDC_CACHE(QDC_CACHE *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 220) = 0;
  *(_BYTE *)this = 1;
  memset((char *)this + 16, 0, 0x360uLL);
  v2 = (__int64)operator new[](0x40uLL, 0x43434451u, (POOL_TYPE)512);
  if ( v2 )
    v2 = DXGFASTMUTEX::DXGFASTMUTEX(v2, 69, 32);
  *((_QWORD *)this + 1) = v2;
  if ( v2 )
  {
    *(_BYTE *)this = 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v8 + 24) = 165LL;
    WdLogEvent5_WdLowResource(v8);
  }
  return this;
}
