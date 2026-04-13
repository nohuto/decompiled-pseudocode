/*
 * XREFs of sub_18000B060 @ 0x18000B060
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021EDC @ 0x180021EDC (sub_180021EDC.c)
 */

CHAR *__fastcall sub_18000B060(__int64 a1, CHAR *a2, unsigned __int64 a3, WCHAR *a4)
{
  unsigned __int64 v4; // rdi
  CHAR *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  int v9; // eax
  WCHAR v10; // cx
  CHAR MultiByteStr; // [rsp+78h] [rbp+10h] BYREF
  WCHAR WideCharStr; // [rsp+80h] [rbp+18h] BYREF

  v4 = a3 - (_QWORD)a2;
  v6 = a2;
  v7 = 0LL;
  if ( (unsigned __int64)a2 > a3 )
    v4 = 0LL;
  if ( v4 )
  {
    v8 = a1 + 48;
    do
    {
      MultiByteStr = *v6;
      v9 = sub_180021EDC(&WideCharStr, &MultiByteStr, v8);
      v10 = WideCharStr;
      if ( v9 < 0 )
        v10 = -1;
      ++v6;
      ++v7;
      *a4++ = v10;
    }
    while ( v7 != v4 );
  }
  return v6;
}
