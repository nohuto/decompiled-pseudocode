/*
 * XREFs of AuthzBasepOperandValueTypesCompatible @ 0x1402355AC
 * Callers:
 *     AuthzBasepComputeExpression @ 0x140234C54 (AuthzBasepComputeExpression.c)
 *     AuthzBasepEvaluateExpression @ 0x140234DDC (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepValueInSet @ 0x1402356F4 (AuthzBasepValueInSet.c)
 * Callees:
 *     <none>
 */

bool __fastcall AuthzBasepOperandValueTypesCompatible(__int16 *a1)
{
  _WORD *v3; // r9
  __int16 *v4; // r10
  __int16 *v5; // rax
  __int16 v6; // dx
  __int16 v7; // r8
  __int64 v8; // rcx
  char v9; // al

  if ( *((_DWORD *)a1 + 3) == 1 )
  {
    v3 = a1 + 20;
    v4 = a1;
    v5 = a1 + 20;
  }
  else
  {
    if ( *((_DWORD *)a1 + 13) != 1 )
      return *a1 == a1[20];
    v3 = a1 + 20;
    v5 = a1;
    v4 = a1 + 20;
  }
  v6 = *v4;
  if ( *v4 == 16 && *((_BYTE *)v4 + 4) )
    return 1;
  v7 = *v5;
  if ( *v5 == 16 && (v6 == 2 || v6 == 3) )
    return 1;
  if ( (unsigned __int16)(v7 - 1) <= 1u && v6 == 2 )
  {
    v8 = *((_QWORD *)v4 + 4);
    v9 = *(_BYTE *)(v8 + 8);
    return v7 == 2 && v9 != 2 || v7 == 1 && (v9 == 2 || *(_QWORD *)v8 <= 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v7 == 6 && v6 == 2 || v7 == 5 && v6 == 16 )
    return 1;
  return *a1 == *v3;
}
