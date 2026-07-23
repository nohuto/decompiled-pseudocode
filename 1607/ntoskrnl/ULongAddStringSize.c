/*
 * XREFs of ULongAddStringSize @ 0x1406D03A0
 * Callers:
 *     GetPrintableOperandValue @ 0x1406CD9D4 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1406CFDC0 (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongAddStringSize(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  unsigned __int64 v6; // rcx

  v3 = -1LL;
  result = 0LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  v6 = 2LL * (unsigned int)v3;
  if ( v6 > 0xFFFFFFFF || (*a3 = v6, (unsigned int)v6 + a1 < a1) )
  {
    result = 3221225621LL;
    *a3 = -1;
  }
  else
  {
    *a3 = v6 + a1;
  }
  return result;
}
