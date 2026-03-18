/*
 * XREFs of KeInsertPriQueue @ 0x1401015B0
 * Callers:
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
 *     ExpQueueWorkItemNode @ 0x14010075C (ExpQueueWorkItemNode.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KeInsertPriQueue(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  unsigned __int8 v9; // di
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbx
  unsigned int v12; // ecx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  __int64 v14; // rdx
  int Next_high; // eax
  __int64 *v16; // r15
  __int64 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rcx
  char v23; // al
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  struct _KPRCB *v30; // r10
  bool v31; // zf
  struct _KPRCB *v32; // rcx
  struct _SINGLE_LIST_ENTRY *v33; // rdx
  char v34; // al
  __int64 v35; // rdx
  char v36; // dl
  __int64 v37; // rcx
  __int64 **v38; // rax
  _DWORD v40[4]; // [rsp+30h] [rbp-58h] BYREF
  struct _KPRCB *v41; // [rsp+40h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-40h]
  int v43; // [rsp+90h] [rbp+8h] BYREF
  int v44; // [rsp+A8h] [rbp+20h] BYREF

  v5 = (int)a3;
  v6 = a1 + 8;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v44 = 0;
  v41 = CurrentPrcb;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v44, (__int64)a2, a3);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  if ( *(_QWORD *)(v6 + 8) != v6
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v12 = 0;
    p_AbSelfIoBoostsList = (_SINGLE_LIST_ENTRY *)(a1 + 664);
    v14 = 32LL;
    do
    {
      Next_high = HIDWORD(p_AbSelfIoBoostsList[-1].Next);
      p_AbSelfIoBoostsList = (_SINGLE_LIST_ENTRY *)((char *)p_AbSelfIoBoostsList - 4);
      v12 += Next_high;
      --v14;
      if ( v12 >= *(_DWORD *)(a1 + 664) )
        goto LABEL_64;
    }
    while ( v14 > v5 );
    if ( v12 < *(_DWORD *)(a1 + 664) )
    {
      v16 = *(__int64 **)(a1 + 16);
      while ( 1 )
      {
        v17 = v16;
        v16 = (__int64 *)v16[1];
        v18 = *v17;
        if ( *(__int64 **)(*v17 + 8) != v17 || (__int64 *)*v16 != v17 )
          __fastfail(3u);
        *v16 = v18;
        v9 = 0;
        *(_QWORD *)(v18 + 8) = v16;
        v19 = v17[3];
        v40[2] = v5;
        v43 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v43, v18, (__int64)p_AbSelfIoBoostsList);
          while ( *(_QWORD *)(v19 + 64) );
        }
        if ( *(_BYTE *)(v19 + 388) == 5 )
          break;
LABEL_61:
        *(_QWORD *)(v19 + 64) = 0LL;
        ++*((_BYTE *)v17 + 17);
        if ( v9 )
        {
          v36 = a5;
          CurrentPrcb = v41;
          goto LABEL_71;
        }
        if ( v16 == (__int64 *)(a1 + 8) )
        {
          CurrentPrcb = v41;
          goto LABEL_64;
        }
      }
      v20 = (unsigned __int8)*(_DWORD *)(v19 + 540);
      if ( (_DWORD)v20 != (_DWORD)v5 )
      {
        v21 = *(_DWORD *)(v19 + 540) & 0x100;
        if ( !v21 )
        {
          v22 = *(_QWORD *)(v19 + 232);
          _InterlockedDecrement((volatile signed __int32 *)(v22 + 4 * v20 + 536));
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 4 * v5 + 536));
        }
        *(_DWORD *)(v19 + 540) = v21 | (unsigned __int8)v5;
      }
      v23 = *(_BYTE *)(v19 + 112);
      v9 = 0;
      v24 = v23 & 7;
      if ( v24 == 1 || v24 == 4 )
      {
        v25 = *(_QWORD *)(v19 + 232);
        if ( v25 )
        {
          if ( (*(_BYTE *)v25 & 0x7F) == 0x15 )
          {
            v26 = (unsigned __int8)*(_DWORD *)(v19 + 540);
            *(_DWORD *)(v19 + 540) = v26;
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 4 * v26 + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 40));
          }
        }
        v27 = *(_QWORD *)(v19 + 712);
        if ( v27 )
        {
          v40[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 22672), 0LL) )
          {
            do
              KeYieldProcessorEx(v40, v25, (__int64)p_AbSelfIoBoostsList);
            while ( *(_QWORD *)(v27 + 22672) );
          }
          if ( *(_QWORD *)(v19 + 712) )
          {
            v28 = *(_QWORD *)(v19 + 216);
            v29 = *(_QWORD **)(v19 + 224);
            if ( *(_QWORD *)(v28 + 8) != v19 + 216 || *v29 != v19 + 216 )
              __fastfail(3u);
            *v29 = v28;
            *(_QWORD *)(v28 + 8) = v29;
            *(_QWORD *)(v19 + 712) = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 22672), 0LL);
        }
        v30 = v41;
        *(_BYTE *)(v19 + 388) = 7;
        v9 = 1;
        *(_QWORD *)(v19 + 216) = v30->DeferredReadyListHead.Next;
        v30->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v19 + 216);
        *(_QWORD *)(v19 + 200) = a2;
      }
      else
      {
        if ( (*(_BYTE *)(v19 + 112) & 7) == 0 )
        {
          v9 = 1;
          *(_BYTE *)(v19 + 112) = v23 & 0xF8 | 2;
          *(_QWORD *)(v19 + 200) = a2;
          *((_BYTE *)v17 + 17) = 0;
LABEL_47:
          v31 = KiAbEnabled == 0;
          *(_BYTE *)(v19 + 645) = 0;
          if ( !v31 )
          {
            v32 = KeGetCurrentPrcb();
            if ( (char)v5 < *(char *)(v19 + 563) )
            {
              if ( *(_BYTE *)(v19 + 1419) )
              {
                v33 = (struct _SINGLE_LIST_ENTRY *)(v19 + 1384);
                if ( *(_QWORD *)(v19 + 1384) == 1LL )
                {
                  p_AbSelfIoBoostsList = &v32->AbSelfIoBoostsList;
                  if ( v32 != (struct _KPRCB *)-25648LL )
                  {
                    v33->Next = p_AbSelfIoBoostsList->Next;
                    p_AbSelfIoBoostsList->Next = v33;
                    _InterlockedIncrement16((volatile signed __int16 *)(v19 + 1416));
                    KiAbQueueAutoBoostDpc(v32);
                  }
                }
              }
            }
          }
          v34 = *(_BYTE *)(v19 + 564);
          *(_BYTE *)(v19 + 563) = v5;
          if ( v34 )
          {
            if ( (v34 & 0xF) != 0 )
              *(_DWORD *)(v19 + 1420) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v19 + 564) = 0;
          }
          if ( (_DWORD)v5 != *(char *)(v19 + 195) )
          {
            v35 = *(_QWORD *)(v19 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v19 + 651);
            if ( (*(_DWORD *)(v19 + 120) & 0x10) != 0 )
              _interlockedbittestandreset((volatile signed __int32 *)(v19 + 120), 4u);
            *(_QWORD *)(v19 + 32) = v35;
            KiSetPriorityThread(v19, 0LL, v5);
          }
          goto LABEL_61;
        }
        if ( v24 == 5 )
        {
          *(_BYTE *)(v19 + 112) = v23 & 0xF8 | 6;
          goto LABEL_61;
        }
        if ( v24 == 3 )
          *((_BYTE *)v17 + 17) = 2;
      }
      if ( !v9 )
        goto LABEL_61;
      goto LABEL_47;
    }
  }
LABEL_64:
  v36 = a5;
  if ( (a5 & 2) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    v37 = 16 * v5 + a1 + 24;
    v38 = *(__int64 ***)(v37 + 8);
    *a2 = v37;
    a2[1] = (__int64)v38;
    if ( *v38 != (__int64 *)v37 )
      __fastfail(3u);
    *v38 = a2;
    *(_QWORD *)(v37 + 8) = a2;
  }
LABEL_71:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, (v36 & 1) != 0 ? 3 : 0, 1LL, 0LL, CurrentIrql);
  return v9;
}
