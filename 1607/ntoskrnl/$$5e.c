/*
 * XREFs of $$5e @ 0x140778B84
 * Callers:
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     sub_140251E08 @ 0x140251E08 (sub_140251E08.c)
 */

__int64 __fastcall __5e(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v6; // r15
  _BYTE *v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 result; // rax
  void (__fastcall **v11)(__int64); // rbx
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // r9
  int v15; // r8d
  unsigned __int64 v16; // rcx
  int v17; // edi
  int v18; // ecx
  char *v19; // r9
  int v20; // ecx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 i; // rax
  _QWORD *v25; // r8
  const char *v26; // rax
  unsigned __int64 v27; // rcx
  int v28; // r11d
  void (__fastcall *v29)(__int64); // rdx
  unsigned __int64 v30; // r10
  __int64 v31; // rax

  v4 = (unsigned int)a1[359];
  v6 = a3;
  v7 = a1;
  v8 = a4;
  v9 = v4 + 48;
  if ( (unsigned int)(v4 + 48) <= a1[471] )
  {
    v11 = (void (__fastcall **)(__int64))a1;
    a1[359] = v9;
  }
  else
  {
    result = sub_140251E08(a1, v9, a1[415]);
    v11 = (void (__fastcall **)(__int64))result;
    if ( !result )
      return result;
    v12 = *((_DWORD *)v7 + 438);
    if ( (v12 & 4) == 0 )
    {
      v13 = *((_DWORD *)v7 + 359);
      v14 = *((_QWORD *)v7 + 176);
      v15 = (v12 & 0x20000000) != 0 ? *((_DWORD *)v7 + 415) : 0;
      if ( v13 >= 8 )
      {
        v16 = (unsigned __int64)v13 >> 3;
        do
        {
          *(_QWORD *)v7 = 0LL;
          v13 -= 8;
          v7 += 8;
          --v16;
        }
        while ( v16 );
      }
      for ( ; v13; --v13 )
        *v7++ = 0;
      v17 = *((_DWORD *)v11 + 415);
      *((_DWORD *)v11 + 415) = v15;
      if ( v15 == 3 )
      {
        v11[105](v14);
      }
      else
      {
        v18 = 0;
        if ( ((_DWORD)v11[219] & 0x10000000) == 0 )
          v18 = v15;
        if ( v18 )
          ((void (__fastcall *)(__int64, _QWORD))v11[66])(v14 - 8, *(_QWORD *)(v14 - 8));
        else
          v11[29](v14);
      }
      *((_DWORD *)v11 + 415) = v17;
    }
    *((_DWORD *)v11 + 438) &= ~4u;
  }
  ++*((_DWORD *)v11 + 369);
  v19 = (char *)v11 + v4;
  v20 = 48;
  v21 = (void (__fastcall **)(__int64))((char *)v11 + v4);
  v22 = 6LL;
  do
  {
    *v21 = 0LL;
    v20 -= 8;
    ++v21;
    --v22;
  }
  while ( v22 );
  for ( ; v20; --v20 )
  {
    *(_BYTE *)v21 = 0;
    v21 = (_QWORD *)((char *)v21 + 1);
  }
  *((_QWORD *)v19 + 1) = 0LL;
  *((_DWORD *)v19 + 4) = 0;
  *(_DWORD *)v19 = a2;
  v23 = (unsigned __int64)v11[186];
  for ( i = v23; ; LODWORD(v23) = i ^ v23 )
  {
    i >>= 31;
    if ( !i )
      break;
  }
  v25 = (void (__fastcall **)(__int64))((char *)v11 + v6);
  *((_DWORD *)v19 + 5) = v23 & 0x7FFFFFFF;
  v26 = (char *)v11 + v6;
  *((_DWORD *)v19 + 8) = v6;
  v27 = (unsigned __int64)v11 + v6 + v8;
  *((_DWORD *)v19 + 9) = v8;
  *((_DWORD *)v11 + 376) += v8;
  v28 = *((_DWORD *)v11 + 371);
  v29 = v11[186];
  if ( (unsigned __int64)v11 + v6 < v27 )
  {
    do
    {
      _mm_prefetch(v26, 0);
      v26 += 64;
    }
    while ( (unsigned __int64)v26 < v27 );
  }
  if ( (unsigned int)v8 >= 8 )
  {
    v30 = v8 >> 3;
    do
    {
      v29 = (void (__fastcall *)(__int64))__ROL8__(*v25++ ^ (unsigned __int64)v29, v28);
      LODWORD(v8) = v8 - 8;
      --v30;
    }
    while ( v30 );
  }
  for ( ; (_DWORD)v8; LODWORD(v8) = v8 - 1 )
  {
    v31 = *(unsigned __int8 *)v25;
    v25 = (_QWORD *)((char *)v25 + 1);
    v29 = (void (__fastcall *)(__int64))__ROL8__(v31 ^ (unsigned __int64)v29, v28);
  }
  *((_QWORD *)v19 + 3) = v29;
  return (__int64)v11;
}
