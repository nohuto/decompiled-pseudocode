/*
 * XREFs of FreeThreadsWindowHooks @ 0x140026630
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x140026714 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void FreeThreadsWindowHooks()
{
  struct tagTHREADINFO *v0; // rax
  struct tagTHREADINFO *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp

  v0 = PtiCurrent();
  v1 = v0;
  if ( v0 && *((_QWORD *)v0 + 61) )
  {
    HMAssignmentUnlock((char *)v0 + 720);
    v2 = 40LL;
    while ( 1 )
    {
      v3 = *(_QWORD *)((char *)v1 + v2 + 912);
      if ( v3 )
        break;
      v3 = *(_QWORD *)(v2 + *((_QWORD *)v1 + 62));
      if ( v3 )
        break;
LABEL_6:
      v2 += 8LL;
      if ( v2 > 160 )
      {
        *((_DWORD *)v1 + 178) = 0;
        return;
      }
    }
    while ( 1 )
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( !v4 && (*(_DWORD *)(v3 + 64) & 1) == 0 )
        break;
      if ( (*(_DWORD *)(v3 + 64) & 1) == 0 )
        goto LABEL_13;
LABEL_14:
      if ( *(struct tagTHREADINFO **)(v3 + 16) == v1 )
        FreeHook((struct tagHOOK *)v3);
      v3 = v4;
      if ( !v4 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v2 + *((_QWORD *)v1 + 62));
LABEL_13:
    UnlinkHook((struct tagHOOK *)v3);
    *(_DWORD *)(v3 + 64) |= 0x80u;
    *(_QWORD *)(v3 + 40) = 0LL;
    goto LABEL_14;
  }
}
