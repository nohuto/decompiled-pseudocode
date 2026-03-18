/*
 * XREFs of CmpLockTwoKcbsExclusive @ 0x140447040
 * Callers:
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 */

void __fastcall CmpLockTwoKcbsExclusive(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx

  v3 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      v4 = *(_DWORD *)(a1 + 4);
      v5 = (*(_DWORD *)(a2 + 4) >> 21) & 0x3FF;
      v6 = (v4 >> 21) & 0x3FF;
      if ( v6 < v5 )
      {
LABEL_4:
        CmpLockKcbExclusive(v3);
        v7 = a2;
LABEL_5:
        CmpLockKcbExclusive(v7);
        return;
      }
      if ( v6 > v5 )
        goto LABEL_8;
      if ( v3 < a2 )
        goto LABEL_4;
      if ( v3 > a2 )
LABEL_8:
        CmpLockKcbExclusive(a2);
    }
LABEL_9:
    v7 = v3;
    goto LABEL_5;
  }
  if ( a2 )
  {
    v3 = a2;
    goto LABEL_9;
  }
}
