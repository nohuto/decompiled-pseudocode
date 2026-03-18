/*
 * XREFs of KeInitializeProfile @ 0x140699134
 * Callers:
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall KeInitializeProfile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned __int16 a8,
        __int16 *a9)
{
  unsigned __int16 v10; // r8
  int v11; // ebx
  __int64 result; // rax
  _BYTE *v13; // r9
  __int16 v14; // ax
  unsigned __int16 i; // r10
  bool v16; // zf
  __int64 v17; // rcx
  _BYTE v18[176]; // [rsp+0h] [rbp-C8h] BYREF

  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 48) = a6 - 2;
  *(_QWORD *)(a1 + 56) = a3;
  v10 = 0;
  *(_DWORD *)(a1 + 64) = a7;
  v11 = 0;
  result = a8;
  *(_WORD *)(a1 + 240) = a8;
  *(_DWORD *)a1 = 16252951;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a4 + a5;
  *(_BYTE *)(a1 + 242) = 0;
  if ( a9 )
  {
    v13 = v18;
    if ( a1 != -72 )
      v13 = (_BYTE *)(a1 + 72);
    v14 = *a9;
    if ( (unsigned __int16)*a9 >= LOWORD(KeActiveProcessors[0]) )
      v14 = KeActiveProcessors[0];
    *(_WORD *)v13 = v14;
    for ( i = 0; i < *(_WORD *)v13; ++i )
    {
      v16 = (*(_QWORD *)&KeActiveProcessors[2 * i + 2] & *(_QWORD *)&a9[4 * i + 4]) == 0LL;
      *(_QWORD *)&v13[8 * i + 8] = *(_QWORD *)&KeActiveProcessors[2 * i + 2] & *(_QWORD *)&a9[4 * i + 4];
      if ( !v16 )
        v11 = 1;
    }
    result = (__int64)v18;
    if ( v13 != v18 )
    {
      result = 20LL;
      *((_DWORD *)v13 + 1) = 0;
      *((_WORD *)v13 + 1) = 20;
      if ( i < 0x14u )
      {
        do
        {
          result = i++;
          *(_QWORD *)&v13[8 * result + 8] = 0LL;
        }
        while ( i < *((_WORD *)v13 + 1) );
      }
    }
  }
  if ( !v11 )
  {
    *(_WORD *)(a1 + 72) = KeActiveProcessors[0];
    result = HIWORD(KeActiveProcessors[0]);
    *(_WORD *)(a1 + 74) = HIWORD(KeActiveProcessors[0]);
    *(_DWORD *)(a1 + 76) = 0;
    while ( v10 < LOWORD(KeActiveProcessors[0]) )
    {
      v17 = v10++;
      result = *(_QWORD *)&KeActiveProcessors[2 * v17 + 2];
      *(_QWORD *)(a1 + 8 * v17 + 80) = result;
    }
  }
  return result;
}
