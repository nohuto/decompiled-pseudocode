/*
 * XREFs of ?FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F3AA8
 * Callers:
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F35E0 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01F3968 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeNode(struct tagINPUTPOINTERNODE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct tagINPUTPOINTERNODE **v5; // rax
  char *v6; // rax
  char **v7; // rcx

  v4 = *(_QWORD *)a1;
  v5 = (struct tagINPUTPOINTERNODE **)*((_QWORD *)a1 + 1);
  if ( *(struct tagINPUTPOINTERNODE **)(v4 + 8) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = (struct tagINPUTPOINTERNODE *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = (char *)a1 + 16;
  if ( *(char **)v6 != v6 )
  {
    a2 = *(_QWORD *)v6;
    v7 = (char **)*((_QWORD *)a1 + 3);
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || *v7 != v6 )
      __fastfail(3u);
    *v7 = (char *)a2;
    *(_QWORD *)(a2 + 8) = v7;
  }
  if ( *((_QWORD *)a1 + 6) )
    HMAssignmentUnlock((char *)a1 + 48);
  Win32FreePool(a1, a2, a3);
}
