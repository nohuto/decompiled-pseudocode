/*
 * XREFs of RtlpInitializeSecondLevelDir @ 0x1400A7BD8
 * Callers:
 *     RtlpCreateHashTable @ 0x1400A7AEC (RtlpCreateHashTable.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeSecondLevelDir(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      a1[1] = a1;
      *a1 = a1;
      a1 += 2;
      --v2;
    }
    while ( v2 );
  }
}
