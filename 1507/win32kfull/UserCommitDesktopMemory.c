/*
 * XREFs of UserCommitDesktopMemory @ 0x1C00F9CB0
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C007EF40 (MapDesktop.c)
 *     GetDesktopView @ 0x1C007F0F0 (GetDesktopView.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 result; // rax
  __int64 v9; // r9
  __int64 i; // rcx
  __int64 v11; // rcx
  __int64 j; // rbx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+3Ch] [rbp-Ch]
  int v20; // [rsp+68h] [rbp+20h] BYREF

  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v9 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD *)(v9 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        if ( **(_QWORD **)(i + 8) == a1 )
          goto LABEL_15;
      }
      v9 = *(_QWORD *)(v9 + 8);
    }
    while ( v9 );
LABEL_15:
    if ( !v9 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(*(_QWORD *)(i + 112), a3, (unsigned int)(*(_DWORD *)a2 - a1), &v20);
    if ( (int)result >= 0 )
      *a2 += v20;
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
      v11 = grpWinStaList;
      if ( !grpWinStaList )
        return 3221225495LL;
      do
      {
        for ( j = *(_QWORD *)(v11 + 16); j; j = *(_QWORD *)(j + 16) )
        {
          if ( **(_QWORD **)(j + 8) == a1 )
            goto LABEL_24;
        }
        v11 = *(_QWORD *)(v11 + 8);
      }
      while ( v11 );
LABEL_24:
      if ( !v11 )
        return 3221225495LL;
      v15 = 1;
      v18 = 0;
      CurrentProcess = PsGetCurrentProcess(v11, v7);
      v17 = j;
      v19 = 1;
      if ( (int)MapDesktop((__int64)&v15) < 0 )
        return 3221225495LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      if ( !GetDesktopView(CurrentProcessWin32Process, j) )
        return 3221225495LL;
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
