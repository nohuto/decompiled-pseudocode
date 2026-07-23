/*
 * XREFs of PnpStringToDwordValue @ 0x1401CF320
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401CEC6C (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EC90 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     wcstoul @ 0x14014FA4C (wcstoul.c)
 */

_BOOL8 __fastcall PnpStringToDwordValue(__int64 a1, unsigned int *a2)
{
  int v3; // r8d
  unsigned int v4; // eax
  wchar_t *v5; // rcx
  _BOOL8 result; // rax
  wchar_t *EndPtr; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_WORD *)a1 != 48 || ((*(_WORD *)(a1 + 2) - 88) & 0xFFDF) != 0 )
  {
    v3 = 10;
  }
  else
  {
    a1 += 4LL;
    v3 = 16;
  }
  v4 = wcstoul((const wchar_t *)a1, &EndPtr, v3);
  v5 = EndPtr;
  *a2 = v4;
  result = 0LL;
  if ( v5 )
    return *v5 == 0;
  return result;
}
