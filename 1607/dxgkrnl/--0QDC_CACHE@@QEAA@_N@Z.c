/*
 * XREFs of ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C00FCA00
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00E9244 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

QDC_CACHE *__fastcall QDC_CACHE::QDC_CACHE(QDC_CACHE *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v5; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 220) = 0;
  *(_BYTE *)this = 1;
  memset((char *)this + 16, 0, 0x360uLL);
  v2 = operator new(0x28uLL, 0x43434451u, (POOL_TYPE)512);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    *((_DWORD *)v2 + 6) = 0;
    v2[2] = 0LL;
    *((_DWORD *)v2 + 7) = 69;
    *((_DWORD *)v2 + 8) = 32;
  }
  *((_QWORD *)this + 1) = v2;
  if ( v2 )
  {
    *(_BYTE *)this = 0;
  }
  else
  {
    v5 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v5 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v5);
  }
  return this;
}
