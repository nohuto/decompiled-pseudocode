/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C0159950
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00AD7D0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C015A818 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00AD8D4 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C0159C60 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C015A770 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  struct _KMUTANT *v1; // rbx
  __int64 **v3; // rsi
  __int64 *v4; // rax
  __int64 v5; // rcx
  BLTENTRY *v6; // rbp
  void *v7; // rcx

  v1 = (struct _KMUTANT *)*((_QWORD *)this + 1);
  KeWaitForSingleObject(v1, Executive, 0, 0, 0LL);
  v3 = (__int64 **)((char *)this + 16);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    v6 = (BLTENTRY *)(v4 - 1);
    *(_QWORD *)(v5 + 8) = v3;
    v7 = (void *)v4[4];
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)v6 + 5) = 0LL;
    }
    BLTENTRY::ReleasePresentDoneEvent(v6, 1u);
    BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)this + 2, v6);
  }
  if ( *((_BYTE *)this + 261) || *((_BYTE *)this + 262) )
  {
    *(_WORD *)((char *)this + 261) = 0;
    BLTQUEUE::FinishCommand((LARGE_INTEGER *)this, 0);
  }
  KeReleaseMutex(v1, 0);
}
