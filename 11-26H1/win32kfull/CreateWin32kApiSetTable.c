/*
 * XREFs of CreateWin32kApiSetTable @ 0x1402478CC
 * Callers:
 *     EditionDriverInitialize @ 0x1402A25E0 (EditionDriverInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateWin32kApiSetTable(__int64 *a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rdi
  char *v4; // rsi
  __int64 v5; // rbp
  __int64 *v6; // rbx
  char *v7; // r14
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  wchar_t **v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  wchar_t ***v15; // r8
  bool v16; // zf
  __int64 v17; // rax

  Pool2 = ExAllocatePool2(256LL, 48LL, 1953513813LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *a1 = Pool2;
  v4 = (char *)&Win32kApiSetTable - Pool2;
  v5 = 0LL;
  v6 = (__int64 *)(Pool2 + 8);
  v7 = (char *)&off_1403AAB88 - Pool2;
  while ( *(_QWORD *)&v4[(_QWORD)v6] )
  {
    v8 = ExAllocatePool2(256LL, 56LL, 1953513813LL);
    *v6 = v8;
    if ( !v8 )
      return 3221225495LL;
    v10 = ExAllocatePool2(256LL, 8LL * *(int *)(*(_QWORD *)&v4[(_QWORD)v6] + 24LL), 1953513813LL);
    *(v6 - 1) = v10;
    if ( !v10 )
      return 3221225495LL;
    *(_QWORD *)*v6 = **(_QWORD **)&v4[(_QWORD)v6];
    *(_QWORD *)(*v6 + 8) = *(_QWORD *)(*(_QWORD *)&v4[(_QWORD)v6] + 8LL);
    *(_QWORD *)(*v6 + 16) = *(_QWORD *)(*(_QWORD *)&v4[(_QWORD)v6] + 16LL);
    *(_DWORD *)(*v6 + 24) = *(_DWORD *)(*(_QWORD *)&v4[(_QWORD)v6] + 24LL);
    v11 = -1LL;
    *(_QWORD *)(*v6 + 32) = 0LL;
    *(_QWORD *)(*v6 + 40) = 0LL;
    v12 = *(wchar_t ***)((char *)v6 + (_QWORD)v7);
    if ( !v12 )
      goto LABEL_8;
    v14 = 0LL;
    if ( v5 <= 0 )
      goto LABEL_8;
    v15 = &off_1403AAB88;
    do
    {
      v16 = *v15 == v12;
      v17 = v14;
      v15 += 3;
      if ( !v16 )
        v17 = v11;
      ++v14;
      v11 = v17;
    }
    while ( v14 < v5 );
    if ( v17 == -1 )
LABEL_8:
      v13 = 0LL;
    else
      v13 = *(_QWORD *)(v3 + 24 * v17 + 8);
    ++v5;
    v6[1] = v13;
    v6 += 3;
  }
  return 0LL;
}
