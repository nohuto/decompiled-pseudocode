/*
 * XREFs of iHipot @ 0x1C001A758
 * Callers:
 *     fxPtSize @ 0x1C0016E94 (fxPtSize.c)
 *     vCheckForSingularXform @ 0x1C001A658 (vCheckForSingularXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iHipot(int a1, int a2)
{
  unsigned int v2; // eax
  char v3; // r10
  int v5; // r8d
  unsigned int v6; // edx
  int v7; // r9d

  v2 = 0;
  v3 = 0;
  if ( a1 < 0 )
    a1 = -a1;
  if ( a2 < 0 )
    a2 = -a2;
  if ( !a1 )
    return (unsigned int)a2;
  if ( !a2 )
    return (unsigned int)a1;
  while ( a1 > 0x8000 || a2 > 0x8000 )
  {
    a1 >>= 1;
    a2 >>= 1;
    ++v3;
  }
  if ( a1 <= a2 )
  {
    v5 = a2;
    v6 = a1 * a1;
  }
  else
  {
    v5 = a1;
    v6 = a2 * a2;
  }
  if ( v6 )
  {
    v7 = 2 * v5;
    do
    {
      ++v5;
      v2 += v7 + 1;
      v7 += 2;
    }
    while ( v2 < v6 );
  }
  return (unsigned int)(v5 << v3);
}
