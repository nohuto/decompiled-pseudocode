/*
 * XREFs of ValidateNewParent @ 0x14012E85C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     IsTopLevelParent @ 0x14012EA18 (IsTopLevelParent.c)
 *     ProtectedContentAccessCheck @ 0x1401F6B6C (ProtectedContentAccessCheck.c)
 */

__int64 __fastcall ValidateNewParent(_QWORD *a1, _QWORD *a2, int a3)
{
  int v6; // ecx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // r9
  unsigned int v11; // r10d
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *i; // rax
  _QWORD *j; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned int v21; // eax

  if ( *(char *)(a1[5] + 19LL) < 0 || *(char *)(a2[5] + 19LL) < 0 )
    goto LABEL_2;
  v8 = a2;
  do
  {
    if ( (unsigned int)IsDesktopWindow(v8) )
      break;
    v8 = (_QWORD *)v8[13];
    ++v11;
  }
  while ( v8 );
  v12 = v11;
  if ( a1[14] )
  {
    while ( 1 )
    {
      while ( v10[14] )
      {
        v10 = (_QWORD *)v10[14];
        ++v11;
      }
      v20 = (_QWORD *)v10[11];
      if ( !v20 )
        break;
LABEL_26:
      v10 = v20;
    }
    v21 = v11;
    if ( v11 <= v12 )
      v21 = v12;
    v12 = v21;
    while ( 1 )
    {
      v10 = (_QWORD *)v10[13];
      --v11;
      if ( v10 == a1 )
        break;
      v20 = (_QWORD *)v10[11];
      if ( v20 )
        goto LABEL_26;
    }
  }
  if ( v12 > *(_DWORD *)(W32GetUserSessionState(v8, v9) + 63224) )
    goto LABEL_2;
  if ( !a3 && !(unsigned int)ProtectedContentAccessCheck(a1) )
  {
    v6 = 5;
    goto LABEL_3;
  }
  if ( a2[3] != a1[3]
    || !(unsigned int)IsTopLevelParent(a2, v13, v14, v15)
    && (v18 = a2[5], (*(_BYTE *)(v18 + 233) & 8) == 0)
    && ((v19 = a1[5], *(_DWORD *)(v18 + 236) != *(_DWORD *)(v19 + 236))
     || ((*(_BYTE *)(v19 + 232) ^ *(_BYTE *)(v18 + 232)) & 0x40) != 0) )
  {
LABEL_2:
    v6 = 87;
LABEL_3:
    UserSetLastError(v6);
    return 0LL;
  }
  for ( i = a2; i; i = (_QWORD *)i[13] )
  {
    if ( a1 == i )
      goto LABEL_2;
  }
  for ( j = (_QWORD *)a2[15]; j; j = (_QWORD *)j[15] )
  {
    if ( a1 == j )
      goto LABEL_2;
  }
  return 1LL;
}
