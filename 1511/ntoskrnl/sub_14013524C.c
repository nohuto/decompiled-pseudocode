/*
 * XREFs of sub_14013524C @ 0x14013524C
 * Callers:
 *     RtlStringCchCopyA @ 0x14013520C (RtlStringCchCopyA.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140760518 (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14013524C(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r8d
  __int64 v7; // r10
  char v8; // r9

  v5 = 0;
  if ( !a2 )
    goto LABEL_8;
  v7 = a4 - (_QWORD)a1;
  do
  {
    if ( !a5 )
      break;
    v8 = a1[v7];
    if ( !v8 )
      break;
    *a1 = v8;
    --a5;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
LABEL_8:
    --a1;
    v5 = -2147483643;
  }
  *a1 = 0;
  return v5;
}
