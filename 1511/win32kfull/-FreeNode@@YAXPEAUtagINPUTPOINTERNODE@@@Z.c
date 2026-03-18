/*
 * XREFs of ?FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC808
 * Callers:
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC340 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01FC6C8 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeNode(struct tagINPUTPOINTERNODE *a1)
{
  __int64 v2; // rcx
  struct tagINPUTPOINTERNODE **v3; // rax
  char *v4; // rax
  __int64 v5; // rdx
  char **v6; // rcx

  v2 = *(_QWORD *)a1;
  v3 = (struct tagINPUTPOINTERNODE **)*((_QWORD *)a1 + 1);
  if ( *(struct tagINPUTPOINTERNODE **)(v2 + 8) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = (struct tagINPUTPOINTERNODE *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = (char *)a1 + 16;
  if ( *(char **)v4 != v4 )
  {
    v5 = *(_QWORD *)v4;
    v6 = (char **)*((_QWORD *)a1 + 3);
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  if ( *((_QWORD *)a1 + 6) )
    HMAssignmentUnlock((char *)a1 + 48);
  Win32FreePool(a1);
}
