/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0131480
 * Callers:
 *     UnmapDesktop @ 0x1C009A340 (UnmapDesktop.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C0057CD8 (_PostThreadMessage.c)
 *     ?FreeEdgyData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C0131554 (-FreeEdgyData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 *     UnpackAffectedThreadList @ 0x1C01D8B24 (UnpackAffectedThreadList.c)
 */

__int64 __fastcall DestroyDesktop(struct tagDESKTOP *a1, struct tagEDGY_DATA *a2, __int64 a3)
{
  __int64 v4; // rdi
  Edgy *v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi

  v4 = *((_QWORD *)a1 + 3);
  if ( (*((_DWORD *)a1 + 8) & 8) != 0 )
    return 0LL;
  v6 = (Edgy *)*((_QWORD *)a1 + 29);
  if ( v6 )
  {
    Edgy::FreeEdgyData(v6, a2);
    *((_QWORD *)a1 + 29) = 0LL;
  }
  if ( a1 == (struct tagDESKTOP *)gpdeskRecalcQueueAttach )
    UnpackAffectedThreadList(v6, a2, a3);
  v7 = (_QWORD *)(v4 + 16);
  v8 = *(_QWORD *)(v4 + 16);
  if ( v8 )
  {
    do
    {
      if ( (struct tagDESKTOP *)v8 == a1 )
        break;
      v7 = (_QWORD *)(v8 + 16);
      v8 = *(_QWORD *)(v8 + 16);
    }
    while ( v8 );
    if ( *v7 )
    {
      LockObjectAssignment(v7, *((_QWORD *)a1 + 2));
      UnlockObjectAssignment((char *)a1 + 16);
    }
  }
  v9 = *(_QWORD *)(v4 + 24);
  LockObjectAssignment((char *)a1 + 16, *(_QWORD *)(v9 + 48));
  LockObjectAssignment(v9 + 48, a1);
  PostThreadMessage(*(_QWORD *)(v9 + 16));
  *((_DWORD *)a1 + 8) |= 8u;
  return 1LL;
}
