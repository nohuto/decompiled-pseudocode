/*
 * XREFs of ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00D9584
 * Callers:
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 *     ZombieCursor @ 0x1C01E9CC0 (ZombieCursor.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkCursor(struct tagCURSOR *a1)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // edi
  __int64 *v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  if ( v3 )
  {
    v4 = 0;
    v5 = (__int64 *)(v3 + 704);
  }
  else
  {
    v4 = 1;
    v5 = &gpcurFirst;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( *v5 )
      {
        if ( (struct tagCURSOR *)*v5 == a1 )
        {
          *v5 = *((_QWORD *)a1 + 4);
LABEL_7:
          *((_QWORD *)a1 + 4) = 0LL;
          *((_DWORD *)a1 + 20) &= ~0x100u;
          return;
        }
        v5 = (__int64 *)(*v5 + 32);
      }
      if ( v4 )
        break;
      v5 = &gpcurFirst;
      v4 = 1;
    }
    if ( v2 )
      break;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v2 = 1;
    v5 = (__int64 *)(CurrentProcessWin32Process + 704);
  }
  v7 = gSharedInfo[1];
  v8 = v7 + 24LL * giheLast;
  while ( v7 <= v8 )
  {
    if ( *(_BYTE *)(v7 + 16) == 3 )
    {
      if ( *(struct tagCURSOR **)(*(_QWORD *)v7 + 32LL) == a1 )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 32LL) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
      v9 = *(_QWORD *)(v7 + 8);
      if ( v9 && *(struct tagCURSOR **)(v9 + 704) == a1 )
      {
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 704LL) = *((_QWORD *)a1 + 4);
        goto LABEL_7;
      }
    }
    v7 += 24LL;
  }
}
