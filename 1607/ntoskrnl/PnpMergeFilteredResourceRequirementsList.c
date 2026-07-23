/*
 * XREFs of PnpMergeFilteredResourceRequirementsList @ 0x14057E1C4
 * Callers:
 *     IopQueryDeviceResources @ 0x14050EDDC (IopQueryDeviceResources.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpMergeFilteredResourceRequirementsList(_DWORD *Src, unsigned int *a2, unsigned int **a3)
{
  unsigned int v6; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // rsi
  unsigned int *v10; // rsi
  unsigned int *v11; // rax
  unsigned int *v12; // rbx

  *a3 = 0LL;
  if ( (!Src || !Src[7]) && (!a2 || !a2[7]) )
    return 0LL;
  if ( Src && Src[7] )
  {
    if ( a2 && a2[7] )
    {
LABEL_7:
      v6 = *Src - 32 + *a2;
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6, 0x75737050u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src, (unsigned int)*Src);
        memmove((char *)v8 + (unsigned int)*Src, a2 + 8, v6 - *Src);
        *v8 = v6;
        v8[7] += a2[7];
        *a3 = v8;
        return 0LL;
      }
      return 3221225626LL;
    }
    v10 = Src;
  }
  else
  {
    v10 = a2;
  }
  if ( !v10 )
    goto LABEL_7;
  v11 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, *v10, 0x75737050u);
  v12 = v11;
  if ( v11 )
  {
    memmove(v11, v10, *v10);
    *a3 = v12;
    return 0LL;
  }
  return 3221225626LL;
}
