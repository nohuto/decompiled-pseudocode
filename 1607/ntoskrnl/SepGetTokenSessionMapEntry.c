/*
 * XREFs of SepGetTokenSessionMapEntry @ 0x14021B124
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x140475934 (SepSetTokenLowboxNumber.c)
 *     SepIsParentOfChildAppContainer @ 0x1404C9740 (SepIsParentOfChildAppContainer.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepGetTokenSessionMapEntry(int a1, char a2, _QWORD *a3)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rcx
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
      v10 = g_SessionLowboxMap;
      PoolWithTag[3] = 0LL;
      *((_BYTE *)PoolWithTag + 56) = 0;
      *((_DWORD *)PoolWithTag + 4) = a1;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      *PoolWithTag = v11;
      PoolWithTag[1] = v10;
      *(_QWORD *)(v11 + 8) = PoolWithTag;
      *(_QWORD *)v10 = PoolWithTag;
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
