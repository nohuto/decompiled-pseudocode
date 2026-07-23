/*
 * XREFs of AuthzBasepIsValidExpression @ 0x14009EC60
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepSupportSetOperation @ 0x14009ED60 (AuthzBasepSupportSetOperation.c)
 */

bool __fastcall AuthzBasepIsValidExpression(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  unsigned __int8 v5; // di
  unsigned int v6; // ebx
  _DWORD *v7; // r11
  unsigned int v8; // r8d
  int v9; // r9d
  __int64 v10; // r11
  __int64 v11; // rdx
  unsigned int v12; // r8d
  int v13; // r10d
  bool v14; // zf
  int v16; // eax
  _DWORD *i; // rdx

  *a4 = 0;
  v5 = a1;
  v6 = 0;
  if ( a3 )
  {
    v7 = (_DWORD *)(a2 + 12);
    while ( *v7 )
    {
      LOBYTE(a1) = v5;
      if ( !(unsigned __int8)AuthzBasepSupportSetOperation(a1) && v9 != 1 && *(_DWORD *)(v10 - 8) > 1u )
        goto LABEL_27;
      ++v6;
      v7 = (_DWORD *)(v10 + 40);
      if ( v6 >= v8 )
        goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  LOBYTE(a1) = v5;
  if ( !(unsigned __int8)AuthzBasepSupportSetOperation(a1)
    && v12 == 2
    && (*(_WORD *)v11 & 0xFFFB) != 0
    && *(_DWORD *)(v11 + 52) == 1
    && *(_BYTE *)(v11 + 44) != (_BYTE)v13 )
  {
    return 0;
  }
  if ( v5 <= 0x8Fu )
  {
    if ( v5 >= 0x8Eu )
      goto LABEL_37;
    if ( v5 < 0x80u )
      return 1;
    if ( v5 <= 0x86u )
      goto LABEL_37;
    if ( v5 == 135 )
      goto LABEL_54;
    if ( v5 == 136 )
    {
LABEL_37:
      if ( v12 != 2 || *(_DWORD *)(v11 + 12) == 1 )
        return 0;
      if ( v5 != 0x88 && v5 != 0x8F || *(_DWORD *)(v11 + 52) != 1 )
        return 1;
      v14 = *(_BYTE *)(v11 + 44) == (unsigned __int8)v13;
      return !v14;
    }
    if ( v5 > 0x8Cu )
    {
LABEL_54:
      if ( v12 != 1 )
        return 0;
      v16 = *(_DWORD *)(v11 + 12);
      if ( v16 == 1 )
        return 0;
      v14 = ((v16 - 3) & 0xFFFFFFFD) == 0;
      return !v14;
    }
LABEL_48:
    if ( v12 == 1 )
    {
      if ( *(_DWORD *)(v11 + 12) == 1 || *(_WORD *)v11 == 5 )
        return 1;
LABEL_27:
      *a4 = 1;
    }
    return 0;
  }
  if ( v5 <= 0x93u )
    goto LABEL_48;
  if ( v5 <= 0x9Fu )
    return 1;
  if ( v5 <= 0xA1u )
  {
    if ( !v12 )
      return 1;
    for ( i = (_DWORD *)(v11 + 12); *i != 1; i += 10 )
    {
      if ( ++v13 >= v12 )
        return 1;
    }
    return 0;
  }
  if ( v5 != 162 )
  {
    if ( v5 != 163 )
      return 1;
    goto LABEL_37;
  }
  if ( v12 == 2 )
    return 0;
  if ( v12 != 1 )
    return 1;
  v14 = *(_DWORD *)(v11 + 12) == 1;
  return !v14;
}
