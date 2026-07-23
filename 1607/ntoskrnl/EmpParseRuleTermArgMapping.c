/*
 * XREFs of EmpParseRuleTermArgMapping @ 0x1407A8E30
 * Callers:
 *     EmpParseRuleTerm @ 0x1407A7A90 (EmpParseRuleTerm.c)
 * Callees:
 *     strtoul @ 0x14014FDF8 (strtoul.c)
 */

char __fastcall EmpParseRuleTermArgMapping(char *Str, __int64 a2, int a3, int a4, int a5)
{
  __int64 v5; // rsi
  int v6; // r10d
  unsigned int v7; // edx
  char *v9; // rcx
  char v10; // r12
  char v11; // di
  __int64 v12; // r15
  int v13; // r13d
  unsigned int v14; // ebp
  char v15; // bl
  bool v16; // zf
  unsigned int v18; // eax
  __int64 v19; // rsi
  unsigned int v20; // eax
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  __int64 v24; // rsi
  unsigned int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-58h]
  char *EndPtr[10]; // [rsp+28h] [rbp-50h] BYREF
  int v28; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+90h] [rbp+18h]
  int v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v5 = a2;
  v6 = 0;
  v28 = 0;
  v7 = a5 + a3 + a4;
  v9 = 0LL;
  v26 = v7;
  v10 = 0;
  EndPtr[0] = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( !v5 )
    return 0;
  v15 = 1;
  while ( !v11 )
  {
    if ( v14 == 5 )
    {
      if ( *Str == 41 )
      {
        v14 = 6;
        goto LABEL_13;
      }
      v21 = *Str == 46;
LABEL_30:
      if ( !v21 )
        goto LABEL_65;
      v14 = 4;
      goto LABEL_13;
    }
    if ( v14 <= 5 )
    {
      switch ( v14 )
      {
        case 0u:
          v16 = *Str == 40;
LABEL_11:
          if ( !v16 )
            goto LABEL_65;
          v14 = 1;
          goto LABEL_13;
        case 1u:
          if ( *Str == 41 )
          {
            v14 = 3;
          }
          else
          {
            if ( (unsigned int)v12 >= v7 )
              goto LABEL_64;
            v18 = strtoul(Str, EndPtr, 10);
            v7 = v26;
            a4 = v31;
            a3 = v30;
            v6 = v28;
            *(_DWORD *)(v5 + 4 * v12) = v18;
            v9 = EndPtr[0];
            if ( Str == EndPtr[0] )
              goto LABEL_62;
            v14 = 2;
            v12 = (unsigned int)(v12 + 1);
          }
          goto LABEL_21;
        case 2u:
          if ( *Str == 41 )
          {
            v14 = 3;
            goto LABEL_13;
          }
          v16 = *Str == 46;
          goto LABEL_11;
      }
      if ( v14 != 3 )
      {
        if ( *Str == 41 )
        {
          v14 = 6;
        }
        else
        {
          v19 = (unsigned int)(v12 + v13);
          if ( (unsigned int)v19 >= v7 )
            goto LABEL_64;
          v20 = strtoul(Str, EndPtr, 10);
          a4 = v31;
          a3 = v30;
          v6 = v28;
          *(_DWORD *)(a2 + 4 * v19) = v20;
          v9 = EndPtr[0];
          v7 = v26;
          if ( Str == EndPtr[0] )
            goto LABEL_62;
          v14 = 5;
          ++v13;
        }
        goto LABEL_21;
      }
      if ( !*Str )
      {
        if ( (_DWORD)v12 != a3 || a4 )
          goto LABEL_65;
        v22 = a5 == 0;
LABEL_39:
        if ( !v22 )
          goto LABEL_65;
        goto LABEL_40;
      }
      v21 = *Str == 40;
      goto LABEL_30;
    }
    switch ( v14 )
    {
      case 6u:
        if ( !*Str )
        {
          if ( (_DWORD)v12 == a3 && v13 == a4 && !a5 )
            goto LABEL_40;
          goto LABEL_62;
        }
        v23 = *Str == 40;
        break;
      case 7u:
        if ( *Str == 41 )
        {
          v14 = 9;
        }
        else
        {
          v24 = (unsigned int)(v6 + v13 + v12);
          if ( (unsigned int)v24 >= v7 )
          {
LABEL_64:
            v11 = 1;
LABEL_40:
            v10 = 1;
            goto LABEL_13;
          }
          v25 = strtoul(Str, EndPtr, 10);
          a4 = v31;
          a3 = v30;
          v6 = v28;
          *(_DWORD *)(a2 + 4 * v24) = v25;
          v9 = EndPtr[0];
          v7 = v26;
          if ( Str == EndPtr[0] )
          {
LABEL_62:
            v11 = 1;
          }
          else
          {
            v6 = v28 + 1;
            v14 = 8;
            ++v28;
          }
        }
LABEL_21:
        if ( v9 )
        {
          Str = v9;
          v9 = 0LL;
          EndPtr[0] = 0LL;
          goto LABEL_14;
        }
        goto LABEL_13;
      case 8u:
        if ( *Str == 41 )
        {
          v14 = 9;
          goto LABEL_13;
        }
        v23 = *Str == 46;
        break;
      default:
        if ( *Str || (_DWORD)v12 != a3 || v13 != a4 )
        {
LABEL_65:
          v11 = 1;
          goto LABEL_13;
        }
        v22 = v6 == a5;
        goto LABEL_39;
    }
    if ( !v23 )
      goto LABEL_65;
    v14 = 7;
LABEL_13:
    ++Str;
LABEL_14:
    v5 = a2;
    if ( v10 )
    {
      if ( !v11 )
        return v15;
      return 0;
    }
  }
  return 0;
}
