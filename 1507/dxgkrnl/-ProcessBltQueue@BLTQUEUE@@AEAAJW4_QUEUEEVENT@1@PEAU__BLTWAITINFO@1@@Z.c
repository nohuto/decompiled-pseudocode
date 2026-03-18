/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00AD7D0
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000A4D0 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00AD8D4 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00AD978 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C0159680 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C0159950 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C0159BB4 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C0159C60 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C015A498 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C015A770 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C015B22C (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C015B9AC (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v3; // r15d
  int v5; // r13d
  struct _LIST_ENTRY *v7; // rdi
  struct BLTENTRY *v8; // rax
  struct BLTENTRY *v9; // rbp
  char v10; // cl
  int v11; // eax
  __int64 v12; // rbx
  int v14; // eax
  void *v15; // rcx
  struct _KEVENT *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _KMUTANT *v19; // rbx
  LARGE_INTEGER v20; // rcx
  __int64 v21; // rax
  struct _KMUTANT *v22; // rdi
  int v23; // r9d
  BLTQUEUE *v24; // rcx
  bool v25; // zf
  int v26; // eax
  union _LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v5 = a2;
  if ( *(int *)(a1 + 652) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 652);
  }
  if ( a2 == 1 )
  {
    v14 = *(_DWORD *)(a1 + 228);
    if ( v14 )
      *(_DWORD *)(a1 + 228) = v14 - 1;
  }
  v7 = (struct _LIST_ENTRY *)(a1 + 16);
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 228) )
      *(_DWORD *)a3 |= 2u;
    v8 = BLTQUEUE::RemoveQueueHead((BLTQUEUE *)a1, v7);
    v9 = v8;
    if ( !v8 )
      break;
    if ( v5 == 2 )
    {
      v15 = (void *)*((_QWORD *)v8 + 5);
      *((_DWORD *)v8 + 130) |= 1u;
      ObfDereferenceObject(v15);
      *((_QWORD *)v9 + 5) = 0LL;
    }
    if ( (*((_DWORD *)v9 + 130) & 1) == 0 )
    {
      v16 = (struct _KEVENT *)*((_QWORD *)v9 + 5);
      if ( KeReadStateEvent(v16) )
      {
        *((_DWORD *)v9 + 130) |= 1u;
LABEL_30:
        ObfDereferenceObject(*((PVOID *)v9 + 5));
        *((_QWORD *)v9 + 5) = 0LL;
        goto LABEL_31;
      }
      *(_DWORD *)a3 |= 1u;
      *(_QWORD *)(a3 + 8) = v16;
      if ( ++*((_DWORD *)v9 + 131) > (unsigned int)(5 * *(_DWORD *)(a1 + 112)) / *(_DWORD *)(a1 + 116) )
      {
        *((_DWORD *)v9 + 130) |= 3u;
        *(_DWORD *)(a1 + 648) |= 4u;
        v18 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v18 + 24) = a1;
        WdLogEvent5_WdError(v18);
        *(_DWORD *)a3 &= ~1u;
        goto LABEL_30;
      }
    }
LABEL_31:
    if ( v5 != 1
      && (*((_DWORD *)v9 + 130) & 1) != 0
      && !*(_DWORD *)(a1 + 228)
      && *((_DWORD *)v9 + 14)
      && !*(_BYTE *)(a1 + 96) )
    {
      *(_DWORD *)a3 |= 2u;
    }
    if ( (*(_DWORD *)a3 & 2) != 0 || (*(_DWORD *)a3 & 1) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, v7, v9);
      goto LABEL_13;
    }
    v19 = *(struct _KMUTANT **)(a1 + 56);
    KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, v9, (struct BLTQUEUE::__BLTWAITINFO *)a3);
    if ( v5 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, v7, v9);
      KeReleaseMutex(v19, 0);
      goto LABEL_13;
    }
    v5 = -1;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 71) & 0x80u) != 0 )
    {
      v22 = *(struct _KMUTANT **)(a1 + 2368);
      KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
      v3 = 0;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *((union _LARGE_INTEGER *)v9 + 68) = PerformanceCounter;
      if ( (*((_DWORD *)v9 + 16) & 8) == 0 )
      {
        v24 = (BLTQUEUE *)*((_QWORD *)v9 + 3);
        if ( !*((_DWORD *)v24 + 594) )
          v3 = BLTQUEUE::CompletePresentIndirectInternal(v24, v9, &PerformanceCounter, v23);
      }
      *((LARGE_INTEGER *)v9 + 69) = KeQueryPerformanceCounter(0LL);
      KeReleaseMutex(v22, 0);
      v7 = (struct _LIST_ENTRY *)(a1 + 16);
    }
    else
    {
      *((LARGE_INTEGER *)v9 + 68) = KeQueryPerformanceCounter(0LL);
      if ( (*((_DWORD *)v9 + 16) & 8) != 0 )
        v3 = 0;
      else
        v3 = BLTQUEUE::PresentDisplayOnly(
               *((BLTQUEUE **)v9 + 3),
               (struct _DXGKARG_PRESENT_DISPLAYONLY *)((char *)v9 + 72));
      *((LARGE_INTEGER *)v9 + 69) = KeQueryPerformanceCounter(0LL);
      if ( v3 < 0 )
      {
        v21 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdError)((LARGE_INTEGER)v20.QuadPart);
        *(_QWORD *)(v21 + 24) = v3;
        *(_QWORD *)(v21 + 32) = v9;
        WdLogEvent5_WdError(v21);
      }
      BLTENTRY::ReleasePresentDoneEvent(v9, 1u);
    }
    if ( v3 >= 0 )
    {
      v25 = *(_BYTE *)(a1 + 96) == 0;
      *(_DWORD *)(a1 + 224) = *((_DWORD *)v9 + 14);
      if ( v25 )
        v26 = *((_DWORD *)v9 + 14);
      else
        v26 = 0;
      *(_DWORD *)(a1 + 228) = v26;
    }
    BLTQUEUE::InsertQueueTail((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 32), v9);
    if ( *(_BYTE *)(a1 + 262) )
    {
      *(_BYTE *)(a1 + 262) = 0;
      BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v3);
    }
    KeReleaseMutex(v19, 0);
    if ( v3 < 0 )
      goto LABEL_15;
  }
  v10 = *(_BYTE *)(a1 + 261);
  if ( v10 )
  {
    if ( !*(_BYTE *)(a1 + 262) )
      goto LABEL_9;
    v11 = 1;
LABEL_10:
    *(_DWORD *)(a1 + 640) ^= (*(_DWORD *)(a1 + 640) ^ (2 * v11)) & 2;
    if ( v10 )
    {
      v12 = 5LL * *(unsigned int *)(a1 + 552);
      *(LARGE_INTEGER *)(a1 + 8 * v12 + 568) = KeQueryPerformanceCounter(0LL);
      *(_DWORD *)(a1 + 8 * v12 + 576) = v5;
    }
    *(_WORD *)(a1 + 261) = 0;
    BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
  }
  else if ( *(_BYTE *)(a1 + 262) )
  {
LABEL_9:
    v11 = 0;
    goto LABEL_10;
  }
LABEL_13:
  if ( v5 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
LABEL_15:
  if ( v3 < 0 )
  {
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    *(_DWORD *)(a1 + 652) = v3;
  }
  return (unsigned int)v3;
}
