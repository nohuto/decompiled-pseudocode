/*
 * XREFs of BgpConsoleDisplayCharacterEx @ 0x14072A4F8
 * Callers:
 *     BgpConsoleDisplayString @ 0x14072A77C (BgpConsoleDisplayString.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14023941C (BgpDisplayCharacterEx.c)
 *     BgpConsoleScrollScreen @ 0x14072A9AC (BgpConsoleScrollScreen.c)
 */

__int64 BgpConsoleDisplayCharacterEx(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5, ...)
{
  __int64 v7; // rdx
  int *v8; // rbx
  int v9; // ebp
  _DWORD *v10; // r15
  _DWORD *v11; // r13
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // r14d
  unsigned int v15; // eax
  int v16; // r12d
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rax
  int v20; // r14d
  int v21; // r8d
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned __int64 v25; // [rsp+40h] [rbp-38h]
  int v26; // [rsp+88h] [rbp+10h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( a2 > 0x50 )
    return 3221225485LL;
  v7 = qword_140329998;
  if ( a3 > *(_DWORD *)(qword_140329998 + 4) )
    return 3221225485LL;
  v8 = (int *)(qword_140329998 + 68);
  v9 = 0;
  v10 = (_DWORD *)(qword_140329998 + 60);
  v11 = (_DWORD *)(qword_140329998 + 48);
  v12 = (unsigned int)a1 - 8;
  if ( !(_DWORD)v12 )
  {
    if ( !*v8 )
      goto LABEL_20;
    v20 = a5;
    v21 = *v8 - 1;
    *v8 = v21;
    v9 = BgpDisplayCharacterEx(
           0x20u,
           *(__int64 **)(v7 + 40),
           *v10 + *v11 * v21,
           v10[1] + *(_DWORD *)(v7 + 72) * *(_DWORD *)(v7 + 52),
           v20,
           a4,
           (int *)va,
           &v26,
           v25);
    if ( v9 >= 0 )
    {
      v7 = qword_140329998;
      v12 = (unsigned int)v8[1] + 25LL * (unsigned int)*v8;
      v22 = 3 * v12;
      *(_WORD *)(qword_140329998 + 4 * v22 + 88) = 32;
      *(_DWORD *)(v7 + 4 * v22 + 80) = a4;
      *(_DWORD *)(v7 + 4 * v22 + 84) = v20;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v12 = (unsigned int)(v13 - 1);
    if ( !(_DWORD)v12 )
    {
LABEL_21:
      ++v8[1];
      goto LABEL_22;
    }
    if ( (_DWORD)v12 == 3 )
    {
LABEL_22:
      *v8 = 0;
      goto LABEL_23;
    }
    v14 = a5;
    v9 = BgpDisplayCharacterEx(
           a1,
           *(__int64 **)(qword_140329998 + 40),
           *(_DWORD *)(qword_140329998 + 60) + *v11 * *v8,
           *(_DWORD *)(qword_140329998 + 64) + *(_DWORD *)(qword_140329998 + 72) * *(_DWORD *)(qword_140329998 + 52),
           a5,
           a4,
           (int *)va,
           &v26,
           v25);
    if ( v9 >= 0 )
    {
      v12 = 3 * ((unsigned int)v8[1] + 25LL * (unsigned int)*v8);
      v7 = qword_140329998;
      *(_WORD *)(qword_140329998 + 4 * v12 + 88) = a1;
      *(_DWORD *)(v7 + 4 * v12 + 80) = a4;
      *(_DWORD *)(v7 + 4 * v12 + 84) = v14;
      ++*v8;
      goto LABEL_20;
    }
LABEL_19:
    v7 = qword_140329998;
    goto LABEL_20;
  }
  LODWORD(v12) = 5;
  v15 = 80 - *v8;
  if ( v15 >= 5 || (v12 = v15) != 0 )
  {
    v16 = a5;
    v17 = (unsigned int)v12;
    do
    {
      v18 = BgpDisplayCharacterEx(
              0x20u,
              *(__int64 **)(v7 + 40),
              *v10 + *v11 * *v8,
              v10[1] + v11[1] * v8[1],
              v16,
              a4,
              (int *)va,
              &v26,
              v25);
      v7 = qword_140329998;
      v9 = v18;
      if ( v18 >= 0 )
      {
        v12 = (unsigned int)v8[1] + 25LL * (unsigned int)*v8;
        v19 = 3 * v12;
        *(_WORD *)(qword_140329998 + 4 * v19 + 88) = 32;
        *(_DWORD *)(v7 + 4 * v19 + 80) = a4;
        *(_DWORD *)(v7 + 4 * v19 + 84) = v16;
      }
      ++*v8;
      --v17;
    }
    while ( v17 );
  }
LABEL_20:
  if ( (unsigned int)*v8 >= 0x50 )
    goto LABEL_21;
LABEL_23:
  v23 = v8[1];
  if ( v23 >= *(_DWORD *)(v7 + 4) )
  {
    v8[1] = v23 - 1;
    BgpConsoleScrollScreen(v12);
  }
  return (unsigned int)v9;
}
