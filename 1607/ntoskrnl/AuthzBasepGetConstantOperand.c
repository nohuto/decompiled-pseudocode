/*
 * XREFs of AuthzBasepGetConstantOperand @ 0x140235264
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140234484 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepGetNextValue @ 0x14023533C (AuthzBasepGetNextValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetConstantOperand(char *a1, int a2, __int64 a3, int *a4)
{
  unsigned int v4; // r10d
  int v6; // r11d
  unsigned __int8 v7; // cl
  unsigned int v8; // ecx
  __int64 result; // rax

  v4 = 0;
  *(_WORD *)a3 = 0;
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v6 = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(a3 + 12) = 1;
  *(_DWORD *)(a3 + 24) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  v7 = *a1;
  if ( v7 )
  {
    if ( v7 <= 4u )
    {
      if ( (unsigned int)(a2 - 1) >= 0xA )
      {
        *(_DWORD *)(a3 + 24) = 10;
        *(_WORD *)a3 = 2;
        *(_QWORD *)(a3 + 32) = a1 + 1;
        v6 = 11;
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    if ( v7 == 16 || v7 == 24 || (unsigned __int8)(v7 - 80) <= 1u )
    {
      if ( (unsigned int)(a2 - 1) >= 4 )
      {
        if ( v7 == 16 )
        {
          *(_WORD *)a3 = 3;
        }
        else
        {
          *(_WORD *)a3 = 16;
          if ( v7 == 80 )
            *(_BYTE *)(a3 + 4) = 1;
        }
        v8 = *(_DWORD *)(a1 + 1);
        *(_DWORD *)(a3 + 24) = v8;
        v6 = 5;
        if ( a2 - 5 >= v8 )
        {
          v6 = v8 + 5;
          *(_QWORD *)(a3 + 32) = a1 + 5;
          goto LABEL_16;
        }
      }
LABEL_14:
      v4 = -1073741406;
    }
  }
LABEL_16:
  result = v4;
  *a4 = v6;
  return result;
}
