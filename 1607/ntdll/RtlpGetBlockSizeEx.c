/*
 * XREFs of RtlpGetBlockSizeEx @ 0x18005FC94
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18005E8F0 (RtlCreateProcessParametersEx.c)
 *     RtlpInitEnvironmentBlock @ 0x18005EE38 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF10 (RtlCreateEnvironmentEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetBlockSizeEx(char *a1, int a2)
{
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rdx

  v2 = a1;
  if ( a2 )
  {
    do
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *(_WORD *)&v2[2 * v3] );
      v2 += 2 * v3 + 2;
    }
    while ( *(_WORD *)v2 );
    v4 = (v2 - a1 + 2) >> 1;
  }
  else
  {
    do
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v2[v6] );
      v2 += v6 + 1;
    }
    while ( *v2 );
    v4 = v2 - a1 + 1;
  }
  return 2 * v4;
}
