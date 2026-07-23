/*
 * XREFs of AuthzBasepValueInSet @ 0x1402356F4
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x140234F30 (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepCompareFQBNOperands @ 0x140234484 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x1402346F0 (AuthzBasepCompareIntegerOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x140234818 (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepGetNextValue @ 0x14023533C (AuthzBasepGetNextValue.c)
 *     AuthzBasepGetOperandTypeForEvaluation @ 0x1402354A0 (AuthzBasepGetOperandTypeForEvaluation.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402355AC (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402356A8 (AuthzBasepRestartOperandValueEnumeration.c)
 */

__int64 __fastcall AuthzBasepValueInSet(__int128 *a1, __int64 a2, BOOL *a3, char a4)
{
  __int128 v4; // xmm0
  __int128 v6; // xmm1
  unsigned int v9; // r14d
  int NextValue; // eax
  int v11; // ebx
  int v12; // eax
  char v13; // al
  unsigned __int16 OperandTypeForEvaluation; // ax
  int v15; // eax
  int v16; // eax
  _BYTE v18[48]; // [rsp+28h] [rbp-39h] BYREF
  _OWORD v19[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v20; // [rsp+78h] [rbp+17h]
  _WORD v21[2]; // [rsp+80h] [rbp+1Fh] BYREF
  char v22; // [rsp+84h] [rbp+23h]
  int v23; // [rsp+88h] [rbp+27h]
  __int64 v24; // [rsp+90h] [rbp+2Fh]
  int v25; // [rsp+98h] [rbp+37h]
  __int64 v26; // [rsp+A0h] [rbp+3Fh]

  v4 = *a1;
  *a3 = 0;
  v6 = a1[1];
  v19[0] = v4;
  v20 = *((_QWORD *)a1 + 4);
  v19[1] = v6;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a2 + 8);
    NextValue = AuthzBasepGetNextValue(a2, (__int64)v21);
    v11 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      goto LABEL_12;
    if ( LOWORD(v19[0]) == 4 )
    {
      v12 = AuthzBasepGetNextValue(a2, (__int64)v18);
      v11 = v12;
      if ( v12 == -2147483622 )
        break;
      if ( v12 < 0 )
        goto LABEL_12;
      v13 = *(_BYTE *)(a2 + 4);
      v23 = 0;
      v22 = v13;
      v21[0] = *(_WORD *)a2;
      v24 = *(_QWORD *)(a2 + 16);
      v25 = *(_DWORD *)(a2 + 8);
      v26 = *(_QWORD *)(a2 + 32) + v9;
    }
    if ( AuthzBasepOperandValueTypesCompatible((__int16 *)v19) )
    {
      OperandTypeForEvaluation = AuthzBasepGetOperandTypeForEvaluation((unsigned __int16 *)v19);
      if ( OperandTypeForEvaluation )
      {
        if ( OperandTypeForEvaluation <= 2u )
          goto LABEL_25;
        switch ( OperandTypeForEvaluation )
        {
          case 3u:
            v16 = AuthzBasepCompareUnicodeStringOperands(128, (__int64)v19, a3);
LABEL_23:
            v11 = v16;
            if ( v16 < 0 )
              goto LABEL_12;
            break;
          case 4u:
            v16 = AuthzBasepCompareFQBNOperands(128, (__int64)v19, a3);
            goto LABEL_23;
          case 5u:
LABEL_20:
            v15 = AuthzBasepCompareOctetStringOperands(0x80u, (__int64)v19);
LABEL_26:
            *a3 = v15;
            break;
          case 6u:
LABEL_25:
            v15 = AuthzBasepCompareIntegerOperands(0x80u, (__int64)v19);
            goto LABEL_26;
          case 0x10u:
            goto LABEL_20;
        }
      }
      if ( *a3 )
        goto LABEL_11;
    }
    else if ( !a4 )
    {
      v11 = -1073741406;
LABEL_11:
      if ( v11 >= 0 )
        goto LABEL_30;
LABEL_12:
      *a3 = -1;
      goto LABEL_30;
    }
  }
  v11 = 0;
LABEL_30:
  AuthzBasepRestartOperandValueEnumeration(a2);
  return (unsigned int)v11;
}
