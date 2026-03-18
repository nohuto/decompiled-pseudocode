/*
 * XREFs of ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000CBB0
 * Callers:
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C007FE94 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A7AF8 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

_QWORD *__fastcall Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x178uLL, 0x4E506456u, PagedPool);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *(_DWORD *)v2 = 305419896;
  v2[1] = a1;
  memset(v2 + 2, 0, 0x168uLL);
  return v3;
}
