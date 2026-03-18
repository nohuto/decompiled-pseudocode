/*
 * XREFs of InitWindowMsgTable @ 0x1C0378F34
 * Callers:
 *     InitMessageTables @ 0x1C0378D70 (InitMessageTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitWindowMsgTable(__int64 *a1, unsigned int *a2, unsigned __int16 *a3)
{
  int v5; // r8d
  unsigned __int16 i; // ax
  unsigned int v7; // r9d
  unsigned int v8; // eax
  __int64 result; // rax
  int v10; // r9d

  *a2 = 0;
  v5 = 0;
  for ( i = *a3; i; i = a3[v5] )
  {
    v7 = i;
    v8 = *a2;
    if ( v7 > *a2 )
      v8 = v7;
    ++v5;
    *a2 = v8;
  }
  result = SharedAlloc((*a2 >> 3) + 1);
  *a1 = result;
  if ( result )
  {
    result = *a3;
    v10 = 0;
    while ( (_WORD)result )
    {
      ++v10;
      *(_BYTE *)(((unsigned __int64)(unsigned __int16)result >> 3) + *a1) |= 1 << (result & 7);
      result = a3[v10];
    }
  }
  return result;
}
