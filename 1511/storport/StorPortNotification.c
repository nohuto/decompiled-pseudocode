/*
 * XREFs of StorPortNotification @ 0x1C00059D0
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C005A320 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0005D00 (RaidLogMiniportCompletion.c)
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C00068A8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A2C (RaidAdapterAcquireInterruptLock.c)
 *     RaidAllocateDeferredItem @ 0x1C00077C0 (RaidAllocateDeferredItem.c)
 *     RaidQueueDeferredItem @ 0x1C0014994 (RaidQueueDeferredItem.c)
 *     StorPortPause @ 0x1C0014D30 (StorPortPause.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C00248CC (RaidAdapterRequestTimerDeferred.c)
 *     Template_pq @ 0x1C002700C (Template_pq.c)
 *     Template_pqq @ 0x1C0027150 (Template_pqq.c)
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 *     RaidpLinkDown @ 0x1C00296DC (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C0029744 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C00297B8 (StorAsyncNotificationDeferred.c)
 *     StorpGetExtendedTable @ 0x1C002B6BC (StorpGetExtendedTable.c)
 *     Template_pqqcccqpp @ 0x1C002C1EC (Template_pqqcccqpp.c)
 *     RaidHandleTraceNotifyType @ 0x1C0030368 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0034ACC (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C0037054 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0037374 (StorEtwLogoRequestServiceTimeEventData.c)
 */

void StorPortNotification(__int64 a1, _QWORD **a2, ...)
{
  unsigned int *v2; // rbp
  char v3; // r15
  _QWORD **v4; // r8
  __int64 v5; // rdi
  va_list v6; // r9
  _DWORD *v7; // rbx
  PRKDPC v8; // rbx
  char *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // eax
  struct _KDPC *v12; // rcx
  void *v13; // rdx
  __int64 *v14; // rax
  int v15; // edx
  _DWORD *v16; // rbx
  PKDEFERRED_ROUTINE v17; // r10
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _SINGLE_LIST_ENTRY *p_DpcListEntry; // rcx
  PRKDPC v21; // rsi
  __int64 v22; // rbx
  struct _KTIMER *v23; // rcx
  int v24; // ecx
  PRKDPC v25; // rbx
  PKDEFERRED_ROUTINE v26; // rbx
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  int v29; // ebx
  __int64 v30; // rcx
  char v31; // r14
  char v32; // r12
  PRKDPC v33; // rsi
  _BYTE *DeferredItem; // rax
  _BYTE *v35; // rbx
  int v36; // ecx
  int v37; // ecx
  PRKDPC v38; // rcx
  unsigned __int64 v39; // r14
  int *v40; // rsi
  unsigned int v41; // ebx
  __int64 Unit; // rax
  char v43; // al
  int v44; // ecx
  PRKDPC v45; // rdi
  __int64 v46; // rbx
  int DpcData; // eax
  __int64 v48; // rcx
  PKDEFERRED_ROUTINE v49; // rsi
  unsigned int v50; // edx
  _DWORD *v51; // r10
  __int64 v52; // r11
  int v53; // r14d
  _DWORD *v54; // rbx
  unsigned __int8 v55; // r15
  unsigned __int8 v56; // r12
  unsigned __int8 v57; // r13
  int v58; // edx
  unsigned int v59; // r9d
  __int64 v60; // r8
  _BYTE v61[96]; // [rsp+C8h] [rbp+C8h] BYREF
  _QWORD **v62; // [rsp+140h] [rbp+140h]
  PRKDPC v63; // [rsp+148h] [rbp+148h] BYREF
  va_list va; // [rsp+148h] [rbp+148h]
  PKDEFERRED_ROUTINE v65; // [rsp+150h] [rbp+150h] BYREF
  va_list va1; // [rsp+150h] [rbp+150h]
  _DWORD *v67; // [rsp+158h] [rbp+158h]
  _DWORD *v68; // [rsp+160h] [rbp+160h] BYREF
  va_list va2; // [rsp+160h] [rbp+160h]
  __int64 v70; // [rsp+168h] [rbp+168h]
  _DWORD *v71; // [rsp+170h] [rbp+170h]
  va_list va3; // [rsp+178h] [rbp+178h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v63 = va_arg(va1, PRKDPC);
  va_copy(va2, va1);
  v65 = va_arg(va2, PKDEFERRED_ROUTINE);
  v67 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v68 = va_arg(va3, _DWORD *);
  v70 = va_arg(va3, _QWORD);
  v71 = va_arg(va3, _DWORD *);
  v62 = a2;
  v2 = (unsigned int *)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = 0;
  v4 = a2;
  v5 = 0LL;
  if ( a2 )
    v5 = **(a2 - 2);
  va_copy(v6, va);
  switch ( (_DWORD)a1 )
  {
    case 0:
      v8 = v63;
      *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = va1;
      if ( !v5 || !v8 )
        return;
      v9 = (char *)(LOBYTE(v8->Number) == 40 ? v8[1].DeferredContext : v8->SystemArgument2);
      if ( !v9 )
        return;
      if ( (*(_BYTE *)(v5 + 544) & 2) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 5208));
      if ( (qword_1C0048010 & 8) != 0 )
        RaidLogMiniportCompletion(v9, a2, a2);
      if ( (v9[17] & 4) != 0 && _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, 0, 1) == 1 )
      {
        v9[16] = v9[16] & 0xE3 | 0x14;
        return;
      }
      v10 = *((_QWORD *)v9 + 20);
      if ( v10 )
        *(_BYTE *)(v10 + 141) = -85;
      v9[16] = v9[16] & 0xE3 | 0x10;
      v11 = *(_DWORD *)(v9 + 18);
      *v2 = v11;
      if ( (_WORD)v11 != 0xFFFF )
      {
        if ( (*(_BYTE *)(v5 + 4451) & 2) != 0 )
        {
          KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL));
          v11 = *v2;
        }
        if ( (unsigned __int16)v11 < (unsigned int)g_RaidPerfRedirectGroupCount )
        {
          v59 = *(unsigned __int8 *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 2);
          if ( v59 < *((_DWORD *)g_RaidDPCRedirectionProcessors + (unsigned __int16)v11) )
          {
            if ( ExpInterlockedPushEntrySList(
                   (PSLIST_HEADER)g_RaidPerProcessorState + 8 * (__int64)(int)(v59 + ((unsigned __int16)v11 << 6)) + 4,
                   (PSLIST_ENTRY)v9 + 2) )
            {
              return;
            }
            v60 = *(unsigned __int8 *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 2);
            if ( *((_DWORD *)g_RaidPerProcessorState + 2048 * (unsigned __int64)(unsigned __int16)*v2 + 32 * v60 + 20) == 2 )
              return;
            v13 = *(void **)(v5 + 8);
            v12 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                                 + 128 * (__int64)((unsigned __int8)v60 + ((unsigned __int16)*v2 << 6)));
LABEL_23:
            KeInsertQueueDpc(v12, v13, 0LL);
            return;
          }
        }
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 224), (PSLIST_ENTRY)v9 + 2);
      v12 = (struct _KDPC *)(*(_QWORD *)(v5 + 8) + 200LL);
LABEL_22:
      v13 = 0LL;
      goto LABEL_23;
    case 0x1004:
      v19 = *(a2 - 2);
      if ( v63->TargetInfoAsUlong == 2 )
      {
        p_DpcListEntry = &v63->DpcListEntry;
        if ( !*(_DWORD *)(*v19 + 688LL) )
        {
          RaidAdapterReleaseInterruptLock(*v19, LOBYTE(p_DpcListEntry->Next));
          return;
        }
      }
      else
      {
        if ( v63->TargetInfoAsUlong != 1 )
        {
          if ( v63->TargetInfoAsUlong == 3 )
            RaidAdapterReleaseInterruptLock(*v19, LOBYTE(v63->DeferredRoutine));
          return;
        }
        p_DpcListEntry = &v63->DpcListEntry;
      }
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
      return;
    case 0x1003:
      v14 = *(a2 - 2);
      v15 = (int)v63;
      v16 = v67;
      v17 = v65;
      v18 = *v14;
      *v67 = (_DWORD)v63;
      if ( v15 == 2 )
      {
        if ( *(_DWORD *)(v18 + 688) )
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 680), (PKLOCK_QUEUE_HANDLE)(v16 + 2));
        else
          *((_BYTE *)v16 + 8) = RaidAdapterAcquireInterruptLock(v18);
      }
      else
      {
        v58 = v15 - 1;
        if ( v58 )
        {
          if ( v58 == 2 )
            *((_BYTE *)v16 + 24) = RaidAdapterAcquireInterruptLock(v18);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v17 + 8, (PKLOCK_QUEUE_HANDLE)(v16 + 2));
        }
      }
      break;
    case 0x1002:
      v7 = v68;
      *v7 = KeInsertQueueDpc(v63, v65, v67);
      return;
    case 6:
      v21 = v63;
      v22 = (unsigned int)v65;
      if ( v5 )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
          Template_pqq(6, (unsigned int)&EventRequestTimerCall, 0, (_DWORD)a2, *(_DWORD *)(v5 + 56), (char)v65);
        if ( KeGetCurrentIrql() > 2u )
        {
          RaidAdapterRequestTimerDeferred(v5, v21, (unsigned int)v22, v6);
        }
        else
        {
          v23 = (struct _KTIMER *)(v5 + 1664);
          if ( (_DWORD)v22 )
          {
            *(_QWORD *)(v5 + 1920) = v21;
            KeSetCoalescableTimer(v23, (LARGE_INTEGER)(-10 * v22), 0, 0, (PKDPC)(v5 + 1600));
          }
          else
          {
            KeCancelTimer(v23);
          }
        }
      }
      return;
    default:
      if ( (int)a1 > 7 )
      {
        if ( (int)a1 <= 4096 )
        {
          if ( (_DWORD)a1 == 4096 )
          {
            v26 = v65;
            v27 = **(a2 - 2);
            if ( (*(_BYTE *)(v27 + 104) & 0x10) != 0 )
            {
              *(_QWORD *)(v27 + 4408) = v63;
              v28 = 1;
            }
            else
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) )
              {
                WPP_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  23LL,
                  &WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids,
                  (PRKDPC *)va);
              }
              v28 = 0;
            }
            *(_DWORD *)v26 = v28;
          }
          else
          {
            v30 = (unsigned int)(a1 - 8);
            switch ( (int)v30 )
            {
              case 0:
                v31 = (char)v65;
                v32 = 0;
                v33 = v63;
                if ( (_BYTE)v65 != 0xFF )
                {
                  v3 = (char)v67;
                  v32 = (char)v68;
                }
                if ( v63 )
                {
                  if ( v63->TargetInfoAsUlong <= 0x80 )
                  {
                    if ( v5 )
                    {
                      DeferredItem = (_BYTE *)RaidAllocateDeferredItem(v5 + 1472);
                      v35 = DeferredItem;
                      if ( DeferredItem )
                      {
                        DeferredItem[32] = v31;
                        if ( v31 != -1 )
                        {
                          DeferredItem[33] = v3;
                          DeferredItem[34] = v32;
                        }
                        memmove(DeferredItem + 40, v33, v33->TargetInfoAsUlong);
                        RaidQueueDeferredItem(v5 + 1472, v35);
                      }
                    }
                  }
                }
                break;
              case 2:
                if ( v5 )
                  RaidpLinkUp(v5);
                break;
              case 3:
                if ( v5 )
                  RaidpLinkDown(v5);
                break;
              case 4:
                *(_QWORD *)&v63->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
                break;
              case 5:
                KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
              case 6:
                RaidHandleTraceNotifyType(v30, (unsigned int)v63, v65);
                break;
              case 7:
                StorpGetExtendedTable(a2, v63);
                break;
              default:
                return;
            }
          }
        }
        else
        {
          v24 = a1 - 4097;
          if ( v24 )
          {
            v36 = v24 - 4;
            if ( v36 )
            {
              v37 = v36 - 1;
              if ( v37 )
              {
                if ( v37 == 1 )
                {
                  v38 = v63;
                  v39 = (unsigned __int64)v65;
                  *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = va2;
                  v40 = v67;
                  if ( v5 && v38 && LOWORD(v38->TargetInfoAsUlong) == 1 && (v39 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
                  {
                    *(_BYTE *)v2 = v38->DpcListEntry.Next;
                    *(_BYTE *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = BYTE1(v38->DpcListEntry.Next);
                    *(_BYTE *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = BYTE2(v38->DpcListEntry.Next);
                    v41 = *v2;
                    Unit = RaidAdapterFindUnit(v5, *v2, a2);
                    if ( Unit && (*(_DWORD *)(Unit + 1536) & 4) != 0 )
                    {
                      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1592), 1, 0) == 1 )
                      {
                        *v40 = -1056964596;
                      }
                      else if ( KeGetCurrentIrql() > 2u )
                      {
                        v43 = StorAsyncNotificationDeferred(v5, Unit, v41, v39);
                        v44 = -1056964596;
                        if ( v43 )
                          v44 = 0;
                        *v40 = v44;
                      }
                      else
                      {
                        *(_QWORD *)(Unit + 1584) = v39;
                        *v40 = RaidUnitProcessAsyncNotification(v5, v41);
                      }
                    }
                    else
                    {
                      *v40 = -1056964601;
                    }
                  }
                  else
                  {
                    *v67 = -1056964602;
                  }
                }
              }
              else if ( StorEtwLoggingEnabled )
              {
                v45 = v63;
                if ( v65 )
                {
                  v46 = *((_BYTE *)v65 + 2) == 40 ? *((_QWORD *)v65 + 12) : *((_QWORD *)v65 + 6);
                  if ( v46 )
                  {
                    DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
                    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000100) != 0 )
                    {
                      *(_QWORD *)(v46 + 720) = v63;
                      DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
                    }
                    if ( (DpcData & 0x100) != 0 )
                    {
                      LOBYTE(a2) = 1;
                      StorEtwIORequestServiceTimeEventData(v46, a2, v45);
                      DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
                    }
                    v48 = *(_QWORD *)(v46 + 224);
                    if ( v48 && *(_DWORD *)(v48 + 1524) && (DpcData & 0x2000000) != 0 )
                    {
                      LOBYTE(a2) = 1;
                      StorEtwLogoRequestServiceTimeEventData(v46, a2, v45);
                    }
                  }
                }
              }
            }
            else if ( v5 )
            {
              v49 = v65;
              v50 = (unsigned int)v67;
              v51 = v68;
              v52 = v70;
              v53 = (int)v63;
              *v2 = (unsigned int)v67;
              *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v51;
              *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v52;
              v54 = v71;
              *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = va3;
              if ( v49 && *(_WORD *)v49 == 1 )
              {
                v55 = *((_BYTE *)v49 + 8);
                v56 = *((_BYTE *)v49 + 9);
                v57 = *((_BYTE *)v49 + 10);
              }
              else
              {
                v55 = -1;
                v56 = -1;
                v57 = -1;
              }
              if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
              {
                Template_pqqcccqpp(0, v50, 0, (_DWORD)v4, *(_DWORD *)(v5 + 56), v53, v55, v56, v57, v50, (char)v51, v52);
                v50 = *v2;
                v51 = *(_DWORD **)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                v52 = *(_QWORD *)(((unsigned __int64)v61 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              }
              if ( v49
                && *(_WORD *)v49 == 1
                && v55 <= *(_BYTE *)(v5 + 376)
                && ((v53 & 3) == 0 || v56 <= *(_BYTE *)(v5 + 401))
                && ((v53 & 1) == 0 || v57 <= *(_BYTE *)(v5 + 450))
                && (v53 & 7) != 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 4920), 1, 0) == 1 )
                {
                  if ( v54 )
                    *v54 = -1056964607;
                }
                else
                {
                  *(_BYTE *)(v5 + 104) |= 0x40u;
                  *(_DWORD *)(v5 + 4928) = v50;
                  *(_BYTE *)(v5 + 105) = 1;
                  *(_DWORD *)(v5 + 4924) = v53;
                  *(_QWORD *)(v5 + 4936) = v49;
                  *(_QWORD *)(v5 + 4944) = v51;
                  *(_QWORD *)(v5 + 4952) = v52;
                  KeInsertQueueDpc((PRKDPC)(v5 + 1992), 0LL, 0LL);
                  if ( v54 )
                    *v54 = 0;
                }
              }
              else if ( v54 )
              {
                *v54 = -1056964602;
              }
            }
          }
          else
          {
            v25 = v63;
            KeInitializeDpc(v63, v65, a2);
            KeInitializeSpinLock((PKSPIN_LOCK)&v25[1].TargetInfoAsUlong);
          }
        }
        return;
      }
      if ( (_DWORD)a1 == 7 )
      {
        if ( !v5 )
          return;
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
          Template_pq(a1, &EventBusChangeDetected, 0LL, a2, *(_DWORD *)(v5 + 56));
        *(_WORD *)(v5 + 105) = 257;
        v12 = (struct _KDPC *)(v5 + 1992);
        goto LABEL_22;
      }
      if ( (_DWORD)a1 == 3 && v5 )
      {
        v29 = *(_DWORD *)(v5 + 520);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
        {
          Template_pqq(3, (unsigned int)&EventResetDetected, 0, (_DWORD)a2, *(_DWORD *)(v5 + 56), *(_DWORD *)(v5 + 520));
          v4 = v62;
        }
        if ( v29 )
          StorPortPause(v4);
      }
      break;
  }
}
