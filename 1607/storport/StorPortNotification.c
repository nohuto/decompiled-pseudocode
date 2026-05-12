/*
 * XREFs of StorPortNotification @ 0x1C0002580
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C0062320 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0002950 (RaidLogMiniportCompletion.c)
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0002CE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0002EC4 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterRequestTimer @ 0x1C000B8E4 (RaidAdapterRequestTimer.c)
 *     RaidQueueDeferredItem @ 0x1C00189D4 (RaidQueueDeferredItem.c)
 *     RaidAllocateDeferredItem @ 0x1C0019BA0 (RaidAllocateDeferredItem.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0027C58 (RaidAdapterRequestTimerDeferred.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     Template_pqq @ 0x1C002A7D0 (Template_pqq.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 *     RaidpLinkDown @ 0x1C002CF68 (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C002CFD0 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C002D1B0 (StorAsyncNotificationDeferred.c)
 *     StorPortPause @ 0x1C002DD50 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C002F1FC (StorpGetExtendedTable.c)
 *     Template_pqqcccqpp @ 0x1C002FF00 (Template_pqqcccqpp.c)
 *     RaidHandleTraceNotifyType @ 0x1C00334D8 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0037CE0 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C003A300 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C003A620 (StorEtwLogoRequestServiceTimeEventData.c)
 */

void StorPortNotification(int a1, _QWORD **a2, ...)
{
  char v2; // r15
  _QWORD **v3; // r8
  __int64 v4; // rdi
  va_list v5; // r9
  __int64 *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  PKDEFERRED_ROUTINE v9; // r10
  __int64 v10; // rcx
  PRKDPC v11; // rbx
  char *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  struct _KDPC *v15; // rcx
  void *v16; // rdx
  _QWORD *v17; // rax
  _SINGLE_LIST_ENTRY *p_DpcListEntry; // rcx
  _DWORD *v19; // rbx
  int v20; // ecx
  PRKDPC v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r9d
  PKDEFERRED_ROUTINE v25; // rbx
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  PRKDPC v28; // rsi
  unsigned int v29; // ebx
  int v30; // ebx
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
  int v47; // eax
  __int64 v48; // rcx
  PKDEFERRED_ROUTINE v49; // rsi
  int v50; // edx
  _DWORD *v51; // r10
  __int64 v52; // r11
  int v53; // r14d
  _DWORD *v54; // rbx
  unsigned __int8 v55; // r15
  unsigned __int8 v56; // r12
  unsigned __int8 v57; // r13
  _BYTE v58[96]; // [rsp+C4h] [rbp+C8h] BYREF
  _QWORD **v59; // [rsp+13Ch] [rbp+140h]
  PRKDPC v60; // [rsp+144h] [rbp+148h] BYREF
  va_list va; // [rsp+144h] [rbp+148h]
  PKDEFERRED_ROUTINE v62; // [rsp+14Ch] [rbp+150h] BYREF
  va_list va1; // [rsp+14Ch] [rbp+150h]
  _DWORD *v64; // [rsp+154h] [rbp+158h]
  _DWORD *v65; // [rsp+15Ch] [rbp+160h] BYREF
  va_list va2; // [rsp+15Ch] [rbp+160h]
  __int64 v67; // [rsp+164h] [rbp+168h]
  _DWORD *v68; // [rsp+16Ch] [rbp+170h]
  va_list va3; // [rsp+174h] [rbp+178h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v60 = va_arg(va1, PRKDPC);
  va_copy(va2, va1);
  v62 = va_arg(va2, PKDEFERRED_ROUTINE);
  v64 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v65 = va_arg(va3, _DWORD *);
  v67 = va_arg(va3, _QWORD);
  v68 = va_arg(va3, _DWORD *);
  v59 = a2;
  v2 = 0;
  v3 = a2;
  v4 = 0LL;
  if ( a2 )
    v4 = **(a2 - 2);
  va_copy(v5, va);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 4100:
        v17 = *(a2 - 2);
        if ( v60->TargetInfoAsUlong == 2 )
        {
          p_DpcListEntry = &v60->DpcListEntry;
          if ( !*(_DWORD *)(*v17 + 688LL) )
          {
            RaidAdapterReleaseInterruptLock(*v17, LOBYTE(p_DpcListEntry->Next));
            return;
          }
        }
        else
        {
          if ( v60->TargetInfoAsUlong != 1 )
          {
            if ( v60->TargetInfoAsUlong == 3 )
              RaidAdapterReleaseInterruptLock(*v17, LOBYTE(v60->DeferredRoutine));
            return;
          }
          p_DpcListEntry = &v60->DpcListEntry;
        }
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
        return;
      case 4099:
        v6 = *(a2 - 2);
        v7 = (unsigned int)v60;
        v8 = v64;
        v9 = v62;
        v10 = *v6;
        *v64 = (_DWORD)v60;
        if ( (_DWORD)v7 == 2 )
        {
          if ( *(_DWORD *)(v10 + 688) )
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 680), (PKLOCK_QUEUE_HANDLE)(v8 + 2));
          else
            *((_BYTE *)v8 + 8) = RaidAdapterAcquireInterruptLock(v10, v7, v3, (PRKDPC *)va);
        }
        else
        {
          v22 = (unsigned int)(v7 - 1);
          if ( (_DWORD)v22 )
          {
            if ( (_DWORD)v22 == 2 )
              *((_BYTE *)v8 + 24) = RaidAdapterAcquireInterruptLock(v10, v22, v3, (PRKDPC *)va);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9 + 8, (PKLOCK_QUEUE_HANDLE)(v8 + 2));
          }
        }
        return;
      case 4098:
        v19 = v65;
        *v19 = KeInsertQueueDpc(v60, v62, v64);
        return;
    }
    if ( a1 > 4096 )
    {
      v20 = a1 - 4097;
      if ( v20 )
      {
        v36 = v20 - 4;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 == 1 )
            {
              v38 = v60;
              v39 = (unsigned __int64)v62;
              *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = va2;
              v40 = v64;
              if ( v4 && v38 && LOWORD(v38->TargetInfoAsUlong) == 1 && (v39 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
              {
                *(_BYTE *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v38->DpcListEntry.Next;
                *(_BYTE *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 5) = BYTE1(v38->DpcListEntry.Next);
                *(_BYTE *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 6) = BYTE2(v38->DpcListEntry.Next);
                v41 = *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                Unit = RaidAdapterFindUnit(v4, v41);
                if ( Unit && (*(_DWORD *)(Unit + 1536) & 4) != 0 )
                {
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1592), 1, 0) == 1 )
                  {
                    *v40 = -1056964596;
                  }
                  else if ( KeGetCurrentIrql() > 2u )
                  {
                    v43 = StorAsyncNotificationDeferred(v4, Unit, v41, v39);
                    v44 = -1056964596;
                    if ( v43 )
                      v44 = 0;
                    *v40 = v44;
                  }
                  else
                  {
                    *(_QWORD *)(Unit + 1584) = v39;
                    *v40 = RaidUnitProcessAsyncNotification(v4, v41);
                  }
                }
                else
                {
                  *v40 = -1056964601;
                }
              }
              else
              {
                *v64 = -1056964602;
              }
            }
          }
          else if ( StorEtwLoggingEnabled )
          {
            v45 = v60;
            if ( v62 )
            {
              v46 = *((_BYTE *)v62 + 2) == 40 ? *((_QWORD *)v62 + 12) : *((_QWORD *)v62 + 6);
              if ( v46 )
              {
                v47 = Microsoft_Windows_StorPortEnableBits;
                if ( (Microsoft_Windows_StorPortEnableBits & 0x2000100) != 0 )
                {
                  *(_QWORD *)(v46 + 720) = v60;
                  v47 = Microsoft_Windows_StorPortEnableBits;
                }
                if ( (v47 & 0x100) != 0 )
                {
                  LOBYTE(a2) = 1;
                  StorEtwIORequestServiceTimeEventData(v46, a2, v45, (PRKDPC *)va);
                  v47 = Microsoft_Windows_StorPortEnableBits;
                }
                v48 = *(_QWORD *)(v46 + 224);
                if ( v48 && *(_DWORD *)(v48 + 1524) && (v47 & 0x2000000) != 0 )
                {
                  LOBYTE(a2) = 1;
                  StorEtwLogoRequestServiceTimeEventData(v46, a2, v45, v5);
                }
              }
            }
          }
        }
        else if ( v4 )
        {
          v49 = v62;
          v50 = (int)v64;
          v51 = v65;
          v52 = v67;
          v53 = (int)v60;
          *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = (_DWORD)v64;
          *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v51;
          *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v52;
          v54 = v68;
          *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = va3;
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
          if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
          {
            Template_pqqcccqpp(0, v50, 0, (_DWORD)v3, *(_DWORD *)(v4 + 56), v53, v55, v56, v57, v50, (char)v51, v52);
            v50 = *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            v51 = *(_DWORD **)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v52 = *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
          if ( v49
            && *(_WORD *)v49 == 1
            && v55 <= *(_BYTE *)(v4 + 376)
            && ((v53 & 3) == 0 || v56 <= *(_BYTE *)(v4 + 401))
            && ((v53 & 1) == 0 || v57 <= *(_BYTE *)(v4 + 450))
            && (v53 & 7) != 0 )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4920), 1, 0) == 1 )
            {
              if ( v54 )
                *v54 = -1056964607;
            }
            else
            {
              *(_BYTE *)(v4 + 104) |= 0x40u;
              *(_DWORD *)(v4 + 4928) = v50;
              *(_BYTE *)(v4 + 105) = 1;
              *(_DWORD *)(v4 + 4924) = v53;
              *(_QWORD *)(v4 + 4936) = v49;
              *(_QWORD *)(v4 + 4944) = v51;
              *(_QWORD *)(v4 + 4952) = v52;
              KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
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
        v21 = v60;
        KeInitializeDpc(v60, v62, a2);
        KeInitializeSpinLock((PKSPIN_LOCK)&v21[1].TargetInfoAsUlong);
      }
      return;
    }
    if ( a1 != 4096 )
    {
      v23 = (unsigned int)(a1 - 3);
      switch ( (int)v23 )
      {
        case 0:
          if ( v4 )
          {
            v30 = *(_DWORD *)(v4 + 520);
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
            {
              Template_pqq(
                v23,
                (unsigned int)&EventResetDetected,
                0,
                (_DWORD)a2,
                *(_DWORD *)(v4 + 56),
                *(_DWORD *)(v4 + 520));
              v3 = v59;
            }
            if ( v30 )
              StorPortPause(v3);
          }
          return;
        case 3:
          v28 = v60;
          v29 = (unsigned int)v62;
          if ( v4 )
          {
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              Template_pqq(v23, (unsigned int)&EventRequestTimerCall, 0, (_DWORD)a2, *(_DWORD *)(v4 + 56), (char)v62);
            if ( KeGetCurrentIrql() > 2u )
              RaidAdapterRequestTimerDeferred(v4, v28, v29, v5);
            else
              RaidAdapterRequestTimer(v4, v28, v29, v5);
          }
          return;
        case 4:
          if ( !v4 )
            return;
          if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
            Template_pq(v23, &EventBusChangeDetected, 0LL, a2, *(_DWORD *)(v4 + 56));
          *(_WORD *)(v4 + 105) = 257;
          v15 = (struct _KDPC *)(v4 + 1992);
          break;
        case 5:
          v31 = (char)v62;
          v32 = 0;
          v33 = v60;
          if ( (_BYTE)v62 != 0xFF )
          {
            v2 = (char)v64;
            v32 = (char)v65;
          }
          if ( v60 )
          {
            if ( v60->TargetInfoAsUlong <= 0x80 )
            {
              if ( v4 )
              {
                DeferredItem = (_BYTE *)RaidAllocateDeferredItem(v4 + 1472);
                v35 = DeferredItem;
                if ( DeferredItem )
                {
                  DeferredItem[32] = v31;
                  if ( v31 != -1 )
                  {
                    DeferredItem[33] = v2;
                    DeferredItem[34] = v32;
                  }
                  memmove(DeferredItem + 40, v33, v33->TargetInfoAsUlong);
                  RaidQueueDeferredItem(v4 + 1472, v35);
                }
              }
            }
          }
          return;
        case 7:
          if ( v4 )
            RaidpLinkUp(v4);
          return;
        case 8:
          if ( v4 )
            RaidpLinkDown(v4);
          return;
        case 9:
          *(_QWORD *)&v60->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
          return;
        case 10:
          KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
        case 11:
          RaidHandleTraceNotifyType(v23, (unsigned int)v60, v62);
          return;
        case 12:
          StorpGetExtendedTable(a2, v60);
          return;
        default:
          return;
      }
      goto LABEL_23;
    }
    v25 = v62;
    v26 = **(a2 - 2);
    if ( (*(_BYTE *)(v26 + 104) & 0x10) != 0 )
    {
      *(_QWORD *)(v26 + 4408) = v60;
      v27 = 1;
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
          &WPP_adf5a490639137350fe391398fd0549f_Traceguids,
          (PRKDPC *)va);
      }
      v27 = 0;
    }
    *(_DWORD *)v25 = v27;
  }
  else
  {
    v11 = v60;
    *(_QWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = va1;
    if ( v4 && v11 )
    {
      v12 = (char *)(LOBYTE(v11->Number) == 40 ? v11[1].DeferredContext : v11->SystemArgument2);
      if ( v12 )
      {
        if ( (*(_BYTE *)(v4 + 544) & 2) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 5208));
        if ( (qword_1C004F2A0 & 8) != 0 )
          RaidLogMiniportCompletion(v12, a2, a2);
        if ( (*(_BYTE *)(v4 + 524) & 0x10) == 0 || _InterlockedExchange((volatile __int32 *)v12 + 194, 4) != 1 )
        {
          v13 = *((_QWORD *)v12 + 20);
          if ( v13 )
            *(_BYTE *)(v13 + 141) = -85;
          v12[16] = v12[16] & 0xE3 | 0x10;
          v14 = *(_DWORD *)(v12 + 18);
          *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v14;
          if ( (_WORD)v14 != 0xFFFF )
          {
            if ( (*(_BYTE *)(v4 + 4451) & 2) != 0 )
            {
              KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 4));
              v14 = *(_DWORD *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            }
            if ( (unsigned __int16)v14 < (unsigned int)g_RaidPerfRedirectGroupCount )
            {
              v24 = *(unsigned __int8 *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 6);
              if ( v24 < *((_DWORD *)g_RaidDPCRedirectionProcessors + (unsigned __int16)v14) )
              {
                if ( ExpInterlockedPushEntrySList(
                       (PSLIST_HEADER)g_RaidPerProcessorState
                     + 8 * (__int64)(int)(v24 + ((unsigned __int16)v14 << 6))
                     + 4,
                       (PSLIST_ENTRY)v12 + 2) )
                {
                  return;
                }
                v15 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                                     + 128
                                     * (__int64)(*(unsigned __int8 *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL) + 6)
                                               + (*(unsigned __int16 *)(((unsigned __int64)v58 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 4) << 6)));
                if ( LODWORD(v15[1].ProcessorHistory) == 2 )
                  return;
                v16 = *(void **)(v4 + 8);
LABEL_24:
                KeInsertQueueDpc(v15, v16, 0LL);
                return;
              }
            }
          }
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 224), (PSLIST_ENTRY)v12 + 2);
          v15 = (struct _KDPC *)(*(_QWORD *)(v4 + 8) + 200LL);
LABEL_23:
          v16 = 0LL;
          goto LABEL_24;
        }
      }
    }
  }
}
