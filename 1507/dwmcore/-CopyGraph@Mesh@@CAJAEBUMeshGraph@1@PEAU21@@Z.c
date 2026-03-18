/*
 * XREFs of ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x180060244
 * Callers:
 *     ?LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z @ 0x180074DB0 (-LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z.c)
 *     ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x1800FFFD4 (-RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall Mesh::CopyGraph(const void **a1, void **a2)
{
  void *v4; // rcx

  memcpy_0(a2[2], a1[2], 72LL * *((int *)a1 + 8));
  memcpy_0(a2[5], a1[5], 88LL * *((int *)a1 + 14));
  v4 = a2[9];
  a2[8] = (void *)a1[8];
  memcpy_0(v4, a1[9], 88LL * *((int *)a1 + 22));
  *((_DWORD *)a2 + 8) = *((_DWORD *)a1 + 8);
  *((_DWORD *)a2 + 14) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a2 + 22) = *((_DWORD *)a1 + 22);
  *((_DWORD *)a2 + 23) = *((_DWORD *)a1 + 23);
  *((_DWORD *)a2 + 24) = *((_DWORD *)a1 + 24);
  *((_DWORD *)a2 + 25) = *((_DWORD *)a1 + 25);
  *((_DWORD *)a2 + 26) = *((_DWORD *)a1 + 26);
  return 0LL;
}
