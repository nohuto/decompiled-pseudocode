/*
 * XREFs of _ALIGN_MEM @ 0x1C00BDDD0
 * Callers:
 *     BuildExpandAAInfo @ 0x1C00034E0 (BuildExpandAAInfo.c)
 *     BuildBltAAInfo @ 0x1C00BD3B0 (BuildBltAAInfo.c)
 *     SetupAAHeader @ 0x1C00BD57C (SetupAAHeader.c)
 *     BuildShrinkAAInfo @ 0x1C0252840 (BuildShrinkAAInfo.c)
 *     BuildTileAAInfo @ 0x1C0252F90 (BuildTileAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ALIGN_MEM(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx

  v2 = a2 + 8;
  if ( a2 + 8 < a2 )
  {
    *a1 = -1;
    return (unsigned int)-2147024362;
  }
  else
  {
    v3 = 0;
    *a1 = v2 & 0xFFFFFFF8;
  }
  return v3;
}
