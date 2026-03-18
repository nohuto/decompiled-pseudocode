/*
 * XREFs of ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C00E6648
 * Callers:
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00E13E0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C003E8A0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003EA44 (-Release@CRegion@@QEBAJXZ.c)
 */

__int64 __fastcall CRegion::Create(struct _RECTL *a1, struct CRegion **a2)
{
  int v4; // edi
  __int64 v5; // rax
  CRegion *v6; // rbx

  *a2 = 0LL;
  v4 = -1073741801;
  v5 = Win32AllocPool();
  v6 = (CRegion *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 4) = 0;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)v5 = 1;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v4 = CRegion::InitializeFromRect(v6, a1);
    if ( v4 < 0 )
      CRegion::Release(v6);
    else
      *a2 = v6;
  }
  return (unsigned int)v4;
}
