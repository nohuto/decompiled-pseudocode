/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00CF23C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00CF6B0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C6CC (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C00CF364 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00CF9A8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00CFA4C (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C0183160 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C01835A4 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C01837C8 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C018382C (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C01838D4 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C01843E8 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C01851CC (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v4; // r13d
  int v6; // r12d
  struct _LIST_ENTRY *i; // rbx
  struct BLTENTRY *v8; // rax
  struct BLTENTRY *v9; // rbp
  char v10; // cl
  int v11; // eax
  __int64 v12; // rbx
  int v14; // eax
  struct _KEVENT *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  int v19; // eax

  v4 = a2;
  v6 = 0;
  if ( *(int *)(a1 + 852) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 852);
  }
  if ( a2 == 1 )
  {
    v14 = *(_DWORD *)(a1 + 324);
    if ( v14 )
      *(_DWORD *)(a1 + 324) = v14 - 1;
  }
  for ( i = (struct _LIST_ENTRY *)(a1 + 64); ; i = (struct _LIST_ENTRY *)(a1 + 64) )
  {
    if ( *(_DWORD *)(a1 + 324) )
      *(_DWORD *)a3 |= 2u;
    v8 = BLTQUEUE::RemoveQueueHead((BLTQUEUE *)a1, i);
    v9 = v8;
    if ( !v8 )
      break;
    if ( v4 == 2 )
    {
      *((_DWORD *)v8 + 130) |= 1u;
      ObfDereferenceObject(*((PVOID *)v8 + 5));
      *((_QWORD *)v9 + 5) = 0LL;
    }
    if ( (*((_DWORD *)v9 + 130) & 1) == 0 )
    {
      v15 = (struct _KEVENT *)*((_QWORD *)v9 + 5);
      if ( KeReadStateEvent(v15) )
      {
        *((_DWORD *)v9 + 130) |= 1u;
        goto LABEL_30;
      }
      *(_DWORD *)a3 |= 1u;
      *(_QWORD *)(a3 + 8) = v15;
      if ( ++*((_DWORD *)v9 + 131) > (unsigned int)(5 * *(_DWORD *)(a1 + 208)) / *(_DWORD *)(a1 + 212) )
      {
        *((_DWORD *)v9 + 130) |= 3u;
        *(_DWORD *)(a1 + 848) |= 4u;
        v17 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v17 + 24) = a1;
        WdLogEvent5_WdError(v17);
        *(_DWORD *)a3 &= ~1u;
LABEL_30:
        ObfDereferenceObject(*((PVOID *)v9 + 5));
        *((_QWORD *)v9 + 5) = 0LL;
      }
      i = (struct _LIST_ENTRY *)(a1 + 64);
    }
    if ( v4 != 1
      && (*((_DWORD *)v9 + 130) & 1) != 0
      && !*(_DWORD *)(a1 + 324)
      && *((_DWORD *)v9 + 14)
      && !*(_BYTE *)(a1 + 192) )
    {
      *(_DWORD *)a3 |= 2u;
    }
    if ( (*(_DWORD *)a3 & 2) != 0 || (*(_DWORD *)a3 & 1) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, i, v9);
      goto LABEL_13;
    }
    KeWaitForSingleObject((PVOID)(a1 + 104), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, v9, (struct BLTQUEUE::__BLTWAITINFO *)a3);
    if ( v4 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, i, v9);
      KeReleaseMutex((PRKMUTEX)(a1 + 104), 0);
      goto LABEL_13;
    }
    v4 = -1;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 75) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2568), Executive, 0, 0, 0LL);
      v6 = BLTENTRY::IndirectBlt(v9);
      KeReleaseMutex((PRKMUTEX)(a1 + 2568), 0);
    }
    else
    {
      v6 = BLTENTRY::Blt(v9);
      BLTENTRY::ReleasePresentDoneEvent(v9, 1u);
    }
    if ( v6 >= 0 )
    {
      v18 = *(_BYTE *)(a1 + 192) == 0;
      *(_DWORD *)(a1 + 320) = *((_DWORD *)v9 + 14);
      if ( v18 )
        v19 = *((_DWORD *)v9 + 14);
      else
        v19 = 0;
      *(_DWORD *)(a1 + 324) = v19;
    }
    BLTQUEUE::InsertQueueTail((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 80), v9);
    if ( *(_BYTE *)(a1 + 406) )
    {
      *(_BYTE *)(a1 + 406) = 0;
      BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v6);
    }
    KeReleaseMutex((PRKMUTEX)(a1 + 104), 0);
    if ( v6 < 0 )
    {
      BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
      *(_DWORD *)(a1 + 852) = v6;
      return (unsigned int)v6;
    }
  }
  v10 = *(_BYTE *)(a1 + 405);
  if ( v10 )
  {
    v11 = 1;
    if ( !*(_BYTE *)(a1 + 406) )
      goto LABEL_9;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 406) )
      goto LABEL_13;
LABEL_9:
    v11 = 0;
  }
  *(_DWORD *)(a1 + 840) ^= (*(_DWORD *)(a1 + 840) ^ (2 * v11)) & 2;
  if ( v10 )
  {
    v12 = 5LL * *(unsigned int *)(a1 + 752);
    *(LARGE_INTEGER *)(a1 + 8 * v12 + 768) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 8 * v12 + 776) = v4;
  }
  *(_WORD *)(a1 + 405) = 0;
  BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
LABEL_13:
  if ( v4 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  return (unsigned int)v6;
}
