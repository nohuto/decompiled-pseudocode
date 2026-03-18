/*
 * XREFs of KeOrAffinityEx @ 0x140201580
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall KeOrAffinityEx(unsigned __int16 *a1, _WORD *a2, _BYTE *a3)
{
  __int64 v3; // r11
  _BYTE *v4; // r9
  unsigned __int16 *v6; // r10
  unsigned int v7; // r8d
  unsigned __int16 v8; // dx
  signed __int64 v9; // rdi
  _QWORD *v10; // rsi
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rcx
  _BYTE v15[176]; // [rsp+0h] [rbp-D8h] BYREF

  LOWORD(v3) = *a1;
  v4 = v15;
  if ( a3 )
    v4 = a3;
  if ( (unsigned __int16)v3 >= *a2 )
  {
    v6 = a1;
    LOWORD(v3) = *a2;
  }
  else
  {
    v6 = a2;
  }
  v7 = 0;
  *((_WORD *)v4 + 1) = 20;
  v8 = 0;
  *(_WORD *)v4 = *v6;
  if ( (_WORD)v3 )
  {
    v9 = (char *)a1 - (char *)a2;
    v8 = v3;
    v10 = a2 + 4;
    v3 = (unsigned __int16)v3;
    do
    {
      v11 = (*v10 | *(_QWORD *)((char *)v10 + v9)) == 0LL;
      *(_QWORD *)((char *)v10 + v4 - (_BYTE *)a2) = *v10 | *(_QWORD *)((char *)v10 + v9);
      ++v10;
      if ( !v11 )
        v7 = 1;
      --v3;
    }
    while ( v3 );
  }
  while ( v8 < *v6 )
  {
    v12 = *(_QWORD *)&v6[4 * v8 + 4];
    *(_QWORD *)&v4[8 * v8 + 8] = v12;
    if ( v12 )
      v7 = 1;
    ++v8;
  }
  if ( v4 != v15 )
  {
    *((_DWORD *)v4 + 1) = 0;
    while ( v8 < *((_WORD *)v4 + 1) )
    {
      v13 = v8++;
      *(_QWORD *)&v4[8 * v13 + 8] = 0LL;
    }
  }
  return v7;
}
