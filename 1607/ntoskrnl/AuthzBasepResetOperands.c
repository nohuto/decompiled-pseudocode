/*
 * XREFs of AuthzBasepResetOperands @ 0x14009EAE4
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepResetOperands(__int64 a1, _BYTE *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 16);
  v4 = 2LL;
  do
  {
    *((_WORD *)v3 - 8) = 0;
    *((_BYTE *)v3 - 12) = 0;
    *(v3 - 1) = 0LL;
    if ( *a2 )
    {
      ExFreePoolWithTag(*(PVOID *)(*v3 + 16), 0);
      result = *v3;
      *(_QWORD *)(*v3 + 16) = 0LL;
      *a2 = 0;
    }
    *v3 = 0LL;
    ++a2;
    *((_DWORD *)v3 + 2) = 0;
    v3[2] = 0LL;
    v3 += 5;
    --v4;
  }
  while ( v4 );
  return result;
}
