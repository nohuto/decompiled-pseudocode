/*
 * XREFs of ??0EDIDCACHE@@QEAA@XZ @ 0x1C00E7C70
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00D4630 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C00E7CF4 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 */

EDIDCACHE *__fastcall EDIDCACHE::EDIDCACHE(EDIDCACHE *this)
{
  unsigned __int8 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rax

  *((_BYTE *)this + 1008) = 0;
  memset(this, 0, 0x260uLL);
  memset((char *)this + 608, 0, 0x180uLL);
  EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, 0, 0, v2);
  v3 = (__int64)operator new[](0x40uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v3 )
    v3 = DXGFASTMUTEX::DXGFASTMUTEX(v3, 51, 1);
  *((_QWORD *)this + 124) = v3;
  if ( !v3 )
  {
    v9 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = 173LL;
    WdLogEvent5_WdLowResource(v9);
  }
  return this;
}
