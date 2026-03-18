/*
 * XREFs of SepGetTokenSessionMapEntry @ 0x140250784
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x1404082B8 (SepIsParentOfChildAppContainer.c)
 *     SepSetTokenLowboxNumber @ 0x140411728 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepGetTokenSessionMapEntry(int a1, char a2, _QWORD *a3)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdx

  *a3 = 0LL;
  v4 = (__int64 **)g_SessionLowboxMap;
  if ( g_SessionLowboxMap )
  {
LABEL_7:
    for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) == a1 )
      {
        *a3 = i + 3;
        return 0LL;
      }
    }
    if ( !a2 )
      return 3221226021LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x734C6553u);
    if ( PoolWithTag )
    {
      v10 = (__int64 *)g_SessionLowboxMap;
      PoolWithTag[3] = 0LL;
      *((_BYTE *)PoolWithTag + 56) = 0;
      *((_DWORD *)PoolWithTag + 4) = a1;
      v11 = *v10;
      *PoolWithTag = *v10;
      PoolWithTag[1] = v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
      *(_QWORD *)(v11 + 8) = PoolWithTag;
      *v10 = (__int64)PoolWithTag;
      *a3 = PoolWithTag + 3;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( !a2 )
    return 3221226021LL;
  v4 = (__int64 **)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x734C6553u);
  g_SessionLowboxMap = (__int64)v4;
  if ( v4 )
  {
    v4[1] = (__int64 *)v4;
    *v4 = (__int64 *)v4;
    goto LABEL_7;
  }
  return 3221225626LL;
}
