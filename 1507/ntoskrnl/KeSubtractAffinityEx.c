/*
 * XREFs of KeSubtractAffinityEx @ 0x1402016E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall KeSubtractAffinityEx(unsigned __int16 *a1, char *a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  unsigned int v6; // r8d
  __int64 v7; // rdi
  unsigned __int16 v8; // dx
  _QWORD *v9; // rcx
  signed __int64 v10; // rbx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rcx
  _BYTE v15[176]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = v15;
  if ( a3 )
    v3 = a3;
  v6 = 0;
  *((_WORD *)v3 + 1) = 20;
  *(_WORD *)v3 = *a1;
  LOWORD(v7) = *(_WORD *)a2;
  v8 = 0;
  if ( *a1 < (unsigned __int16)v7 )
    LOWORD(v7) = *a1;
  if ( (_WORD)v7 )
  {
    v9 = a1 + 4;
    v8 = v7;
    v10 = a2 - (char *)a1;
    v7 = (unsigned __int16)v7;
    do
    {
      v11 = (*v9 & ~*(_QWORD *)((char *)v9 + v10)) == 0LL;
      *(_QWORD *)((char *)v9 + v3 - (_BYTE *)a1) = *v9 & ~*(_QWORD *)((char *)v9 + v10);
      ++v9;
      if ( !v11 )
        v6 = 1;
      --v7;
    }
    while ( v7 );
  }
  while ( v8 < *a1 )
  {
    v12 = *(_QWORD *)&a1[4 * v8 + 4];
    *(_QWORD *)&v3[8 * v8 + 8] = v12;
    if ( v12 )
      v6 = 1;
    ++v8;
  }
  if ( v3 != v15 )
  {
    *((_DWORD *)v3 + 1) = 0;
    while ( v8 < *((_WORD *)v3 + 1) )
    {
      v13 = v8++;
      *(_QWORD *)&v3[8 * v13 + 8] = 0LL;
    }
  }
  return v6;
}
