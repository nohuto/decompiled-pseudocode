/*
 * XREFs of ??0EDIDCACHE@@QEAA@XZ @ 0x1C00DBE5C
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00C33D4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C00DBF00 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 */

EDIDCACHE *__fastcall EDIDCACHE::EDIDCACHE(EDIDCACHE *this)
{
  unsigned __int8 v2; // r9
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  *((_BYTE *)this + 1008) = 0;
  memset(this, 0, 0x260uLL);
  memset((char *)this + 608, 0, 0x180uLL);
  EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, 0, 0, v2);
  v3 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    v3[2] = 0LL;
    *((_DWORD *)v3 + 7) = 51;
    *((_DWORD *)v3 + 8) = 1;
  }
  *((_QWORD *)this + 124) = v3;
  if ( !v3 )
  {
    v5 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v5 + 24) = 173LL;
    WdLogEvent5_WdLowResource(v5);
  }
  return this;
}
