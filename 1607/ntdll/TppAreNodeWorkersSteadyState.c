/*
 * XREFs of TppAreNodeWorkersSteadyState @ 0x18008EC78
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppAreNodeWorkersSteadyState(__int64 a1)
{
  __int64 result; // rax
  int v2; // r8d
  int v3; // edx
  int *v4; // rcx
  __int64 v5; // r10

  LOBYTE(result) = 0;
  v2 = 0x7FFFFFFF;
  v3 = 0;
  if ( !TppNumberNodes )
    goto LABEL_9;
  v4 = *(int **)(a1 + 40);
  v5 = (unsigned int)TppNumberNodes;
  do
  {
    if ( v3 < *v4 )
      v3 = *v4;
    if ( v2 > *v4 )
      v2 = *v4;
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( v2 > 0 )
LABEL_9:
    LOBYTE(result) = v3 - v2 < 4;
  return (unsigned __int8)result;
}
