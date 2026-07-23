/*
 * XREFs of RtlpInitializeSecondLevelDir @ 0x18007EEDC
 * Callers:
 *     RtlpCreateHashTable @ 0x18007EDF8 (RtlpCreateHashTable.c)
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
