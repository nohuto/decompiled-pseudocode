/*
 * XREFs of AuthzBasepEvaluateSetRelationship @ 0x140234F30
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x140234DDC (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepGetNextValue @ 0x14023533C (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402356A8 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepValueInSet @ 0x1402356F4 (AuthzBasepValueInSet.c)
 */

__int64 __fastcall AuthzBasepEvaluateSetRelationship(int a1, __int64 a2, _DWORD *a3)
{
  int v4; // r13d
  int v5; // edx
  int v6; // r12d
  int v8; // ecx
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // r9
  char v12; // al
  unsigned int v13; // r14d
  int v14; // eax
  char v15; // al
  unsigned int v16; // r14d
  int NextValue; // eax
  char v18; // al
  int v19; // eax
  unsigned int v20; // r14d
  int v21; // eax
  char v22; // al
  _WORD v24[2]; // [rsp+20h] [rbp-50h] BYREF
  char v25; // [rsp+24h] [rbp-4Ch]
  int v26; // [rsp+28h] [rbp-48h]
  __int64 v27; // [rsp+30h] [rbp-40h]
  int v28; // [rsp+38h] [rbp-38h]
  __int64 v29; // [rsp+40h] [rbp-30h]
  _BYTE v30[40]; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  *a3 = 0;
  if ( !a1 )
  {
    if ( *(_DWORD *)(a2 + 12) != 1 && *(_DWORD *)(a2 + 52) != 1 && *(_DWORD *)(a2 + 4) != *(_DWORD *)(a2 + 44) )
      return (unsigned int)v5;
    while ( 1 )
    {
      v16 = *(_DWORD *)(a2 + 8);
      NextValue = AuthzBasepGetNextValue(a2, v24);
      v5 = NextValue;
      if ( NextValue == -2147483622 )
        break;
      if ( NextValue < 0 )
        goto LABEL_55;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v5 = AuthzBasepGetNextValue(a2, v30);
        if ( v5 < 0 )
          goto LABEL_55;
        v18 = *(_BYTE *)(a2 + 4);
        v26 = 0;
        v25 = v18;
        v24[0] = *(_WORD *)a2;
        v27 = *(_QWORD *)(a2 + 16);
        v28 = *(_DWORD *)(a2 + 8);
        v29 = *(_QWORD *)(a2 + 32) + v16;
      }
      ++v4;
      v5 = ((__int64 (__fastcall *)(_WORD *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(v24, a2 + 40, a3, 0LL);
      if ( v5 < 0 )
      {
LABEL_55:
        *a3 = -1;
        return (unsigned int)v5;
      }
      if ( *a3 != 1 )
        return (unsigned int)v5;
    }
    v19 = *(_DWORD *)(a2 + 12);
    v5 = 0;
    if ( v19 == 1 && !*(_BYTE *)(a2 + 4) )
    {
      if ( *(_DWORD *)(a2 + 52) == 1 )
        goto LABEL_40;
      if ( *(_DWORD *)(a2 + 44) == 1 )
        return (unsigned int)v5;
    }
    if ( *(_DWORD *)(a2 + 52) != 1 )
    {
LABEL_43:
      AuthzBasepRestartOperandValueEnumeration(a2, 0LL);
      while ( 1 )
      {
        v20 = *(_DWORD *)(a2 + 48);
        v21 = AuthzBasepGetNextValue(a2 + 40, v24);
        v5 = v21;
        if ( v21 == -2147483622 )
          break;
        if ( v21 < 0 )
          goto LABEL_55;
        if ( *(_WORD *)a2 == 4 )
        {
          v5 = AuthzBasepGetNextValue(a2 + 40, v30);
          if ( v5 < 0 )
            goto LABEL_55;
          v22 = *(_BYTE *)(a2 + 44);
          v26 = 0;
          v25 = v22;
          v24[0] = *(_WORD *)(a2 + 40);
          v27 = *(_QWORD *)(a2 + 56);
          v28 = *(_DWORD *)(a2 + 48);
          v29 = *(_QWORD *)(a2 + 72) + v20;
        }
        ++v6;
        v5 = ((__int64 (__fastcall *)(_WORD *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(v24, a2, a3, 0LL);
        if ( v5 < 0 )
          goto LABEL_55;
        if ( *a3 != 1 )
          return (unsigned int)v5;
      }
      v5 = 0;
      if ( v4 != v6 )
        *a3 = 0;
      return (unsigned int)v5;
    }
LABEL_40:
    if ( !*(_BYTE *)(a2 + 44) && v19 != 1 && *(_DWORD *)(a2 + 4) == 1 )
      return (unsigned int)v5;
    goto LABEL_43;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(a2 + 8);
        v10 = AuthzBasepGetNextValue(a2, v24);
        v5 = v10;
        if ( v10 == -2147483622 )
          return 0;
        if ( v10 < 0 )
          goto LABEL_55;
        if ( *(_WORD *)(a2 + 40) == 4 )
        {
          v5 = AuthzBasepGetNextValue(a2, v30);
          if ( v5 < 0 )
            goto LABEL_55;
          v12 = *(_BYTE *)(a2 + 4);
          v26 = 0;
          v25 = v12;
          v24[0] = *(_WORD *)a2;
          v27 = *(_QWORD *)(a2 + 16);
          v28 = *(_DWORD *)(a2 + 8);
          v29 = *(_QWORD *)(a2 + 32) + v9;
        }
        LOBYTE(v11) = 1;
        v5 = ((__int64 (__fastcall *)(_WORD *, __int64, _DWORD *, __int64))AuthzBasepValueInSet)(v24, a2 + 40, a3, v11);
        if ( v5 < 0 )
          goto LABEL_55;
        if ( *a3 )
          return (unsigned int)v5;
      }
    }
  }
  else if ( *(_DWORD *)(a2 + 12) == 1 || *(_DWORD *)(a2 + 52) == 1 || *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a2 + 44) )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(a2 + 48);
      v14 = AuthzBasepGetNextValue(a2 + 40, v24);
      v5 = v14;
      if ( v14 == -2147483622 )
        return 0;
      if ( v14 < 0 )
        goto LABEL_55;
      if ( *(_WORD *)a2 == 4 )
      {
        v5 = AuthzBasepGetNextValue(a2 + 40, v30);
        if ( v5 < 0 )
          goto LABEL_55;
        v15 = *(_BYTE *)(a2 + 44);
        v26 = 0;
        v25 = v15;
        v24[0] = *(_WORD *)(a2 + 40);
        v27 = *(_QWORD *)(a2 + 56);
        v28 = *(_DWORD *)(a2 + 48);
        v29 = *(_QWORD *)(a2 + 72) + v13;
      }
      v5 = ((__int64 (__fastcall *)(_WORD *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(v24, a2, a3, 0LL);
      if ( v5 < 0 )
        goto LABEL_55;
      if ( *a3 != 1 )
        return (unsigned int)v5;
    }
  }
  return (unsigned int)v5;
}
