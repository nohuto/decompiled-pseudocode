/*
 * XREFs of ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C004A060
 * Callers:
 *     FreeThreadsWindowHooks @ 0x1C0047740 (FreeThreadsWindowHooks.c)
 *     FreeHook @ 0x1C004A000 (FreeHook.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkHook(struct tagHOOK *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // r9
  struct tagHOOK **i; // rcx
  struct tagHOOK *v6; // rax
  struct tagHOOK *v7; // rax

  if ( (*((_DWORD *)a1 + 16) & 1) != 0 )
  {
    v4 = *((_DWORD *)a1 + 12) + 1;
    i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 32LL + 8 * v4);
LABEL_4:
    while ( 1 )
    {
      v6 = *i;
      if ( *i == a1 )
        break;
      if ( !v6 )
        goto LABEL_11;
      i = (struct tagHOOK **)((char *)v6 + 40);
    }
    if ( v6 )
      goto LABEL_6;
LABEL_11:
    for ( i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 8 * v4 + 32);
          ;
          i = (struct tagHOOK **)((char *)v7 + 40) )
    {
      v7 = *i;
      if ( *i == a1 || !v7 )
        break;
    }
LABEL_6:
    *i = (struct tagHOOK *)*((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = 0LL;
    if ( *((_QWORD *)a1 + 10) )
      UnlockObjectAssignment();
  }
  else
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( v2 )
    {
      v3 = *((_DWORD *)a1 + 12) + 1;
      *((_QWORD *)a1 + 9) = 0LL;
      v4 = v3;
      i = (struct tagHOOK **)(v2 + 8LL * v3 + 792);
      goto LABEL_4;
    }
  }
}
