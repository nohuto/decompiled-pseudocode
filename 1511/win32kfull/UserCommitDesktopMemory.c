/*
 * XREFs of UserCommitDesktopMemory @ 0x1C0101EB0
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C00CF780 (MapDesktop.c)
 *     GetDesktopView @ 0x1C00CF930 (GetDesktopView.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // r9
  __int64 i; // rcx
  __int64 v13; // rcx
  __int64 j; // rbx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+38h] [rbp-10h]
  int v21; // [rsp+3Ch] [rbp-Ch]
  int v22; // [rsp+68h] [rbp+20h] BYREF

  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v11 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD *)(v11 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        if ( **(_QWORD **)(i + 8) == a1 )
          goto LABEL_15;
      }
      v11 = *(_QWORD *)(v11 + 8);
    }
    while ( v11 );
LABEL_15:
    if ( !v11 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(*(_QWORD *)(i + 112), a3, (unsigned int)(*(_DWORD *)a2 - a1), &v22);
    if ( (int)result >= 0 )
      *a2 += v22;
  }
  else
  {
    v7 = *(_QWORD **)(PsGetCurrentProcessWin32Process(v6) + 672);
    if ( !v7 )
      goto LABEL_30;
    do
    {
      if ( **(_QWORD **)(v7[1] + 8LL) == a1 )
        break;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 );
    if ( !v7 )
    {
LABEL_30:
      v13 = grpWinStaList;
      if ( !grpWinStaList )
        return 3221225495LL;
      do
      {
        for ( j = *(_QWORD *)(v13 + 16); j; j = *(_QWORD *)(j + 16) )
        {
          if ( **(_QWORD **)(j + 8) == a1 )
            goto LABEL_24;
        }
        v13 = *(_QWORD *)(v13 + 8);
      }
      while ( v13 );
LABEL_24:
      if ( !v13 )
        return 3221225495LL;
      v17 = 1;
      v20 = 0;
      CurrentProcess = PsGetCurrentProcess(v13, v7, v8, v9);
      v19 = j;
      v21 = 1;
      if ( (int)MapDesktop((__int64)&v17) < 0 )
        return 3221225495LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      if ( !GetDesktopView(CurrentProcessWin32Process, j) )
        return 3221225495LL;
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
