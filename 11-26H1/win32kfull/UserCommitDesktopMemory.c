/*
 * XREFs of UserCommitDesktopMemory @ 0x1402068E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MapDesktop @ 0x140059FC0 (MapDesktop.c)
 *     GetDesktopView @ 0x14005A3B0 (GetDesktopView.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  _QWORD *j; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  _QWORD *i; // rcx
  __int64 v15; // rcx
  __int64 k; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD v20[5]; // [rsp+20h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-8h]
  int v22; // [rsp+4Ch] [rbp-4h]
  int v23; // [rsp+88h] [rbp+38h] BYREF

  v23 = 0;
  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63512);
    if ( !v13 )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v13 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_17;
      }
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
LABEL_17:
    if ( !v13 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[16], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v23);
    if ( (int)result >= 0 )
      *a2 += v23;
  }
  else
  {
    if ( (*((_BYTE *)PtiCurrent(v7) + 1360) & 0x40) == 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
      {
        v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        CurrentProcessWin32Process &= v10;
      }
      for ( j = *(_QWORD **)(CurrentProcessWin32Process + 688); j; j = (_QWORD *)*j )
      {
        if ( *(_QWORD *)(j[1] + 16LL) == a1 )
          return MmCommitSessionMappedView(*a2, *a3);
      }
      v15 = *(_QWORD *)(W32GetUserSessionState(0LL, v10) + 63512);
      if ( !v15 )
        return 3221225495LL;
      do
      {
        for ( k = *(_QWORD *)(v15 + 16); k; k = *(_QWORD *)(k + 32) )
        {
          if ( *(_QWORD *)(k + 16) == a1 )
            goto LABEL_26;
        }
        v15 = *(_QWORD *)(v15 + 8);
      }
      while ( v15 );
LABEL_26:
      if ( !v15 )
        return 3221225495LL;
      v20[0] = 0LL;
      v20[1] = 0LL;
      v20[2] = 1LL;
      v20[4] = k;
      v20[3] = PsGetCurrentProcess(v15);
      v21 = 0;
      v22 = 1;
      if ( (int)MapDesktop((__int64)v20) < 0 )
        return 3221225495LL;
      v18 = PsGetCurrentProcessWin32Process(v17);
      v19 = v18;
      if ( v18 )
        v19 = -(__int64)(*(_QWORD *)v18 != 0LL) & v18;
      if ( !GetDesktopView(v19, k) )
        return 3221225495LL;
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
