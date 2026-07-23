/*
 * XREFs of GetNextWchar @ 0x1404A9024
 * Callers:
 *     RtlGenerate8dot3Name @ 0x1404A8C4C (RtlGenerate8dot3Name.c)
 * Callees:
 *     RtlIsValidOemCharacter @ 0x140689064 (RtlIsValidOemCharacter.c)
 */

__int64 __fastcall GetNextWchar(unsigned __int16 *a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // edi
  WCHAR v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  WCHAR Char; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1 >> 1;
  v8 = 0;
  if ( *a2 >= v4 )
    return v8;
  v9 = *((_QWORD *)a1 + 1);
  while ( 1 )
  {
    v10 = *a2;
    Char = *(_WORD *)(v9 + 2 * v10);
    v8 = Char;
    *a2 = v10 + 1;
    if ( v8 <= 0x20u )
      goto LABEL_13;
    if ( v8 >= 0x7Fu )
    {
      if ( !a4 || !RtlIsValidOemCharacter(&Char) )
        goto LABEL_13;
      v8 = Char;
    }
    if ( v8 != 46 )
      break;
    if ( !a3 )
      goto LABEL_7;
LABEL_13:
    v8 = 0;
    if ( *a2 >= v4 )
      return v8;
  }
  if ( v8 >= 0x80u )
    goto LABEL_9;
LABEL_7:
  v11 = RtlFatIllegalTable[(unsigned __int64)v8 >> 5];
  if ( _bittest(&v11, v8 % 32) )
    v8 = 95;
LABEL_9:
  if ( (unsigned __int16)(v8 - 97) <= 0x19u )
    v8 -= 32;
  return v8;
}
