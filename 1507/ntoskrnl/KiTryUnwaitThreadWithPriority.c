/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x14000D710
 * Callers:
 *     KiWakePriQueueWaiter @ 0x14000C440 (KiWakePriQueueWaiter.c)
 *     ExpQueueWorkItemNode @ 0x14000D530 (ExpQueueWorkItemNode.c)
 * Callees:
 *     KiSignalThread @ 0x14000D8F0 (KiSignalThread.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // bp
  unsigned int v6; // ebx
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  bool v14; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v16; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  char v18; // al
  __int64 v19; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) == 5 )
  {
    v10 = a4;
    v11 = (unsigned __int8)*(_DWORD *)(v4 + 540);
    if ( (_DWORD)v11 != a4 )
    {
      v12 = *(_DWORD *)(v4 + 540) & 0x100;
      if ( !v12 )
      {
        v13 = *(_QWORD *)(v4 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 4 * v11 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 4LL * (int)a4 + 536));
        v10 = a4;
      }
      *(_DWORD *)(v4 + 540) = v12 | (unsigned __int8)v10;
    }
    v5 = KiSignalThread(a1, v4, a3, a2);
    if ( v5 )
    {
      v14 = KiAbEnabled == 0;
      *(_BYTE *)(v4 + 645) = 0;
      if ( !v14 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = a4;
        if ( (char)a4 < *(char *)(v4 + 563) )
        {
          if ( *(_BYTE *)(v4 + 1419) )
          {
            v16 = (struct _SINGLE_LIST_ENTRY *)(v4 + 1384);
            if ( *(_QWORD *)(v4 + 1384) == 1LL )
            {
              p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
              if ( CurrentPrcb != (struct _KPRCB *)-25648LL )
              {
                v16->Next = p_AbSelfIoBoostsList->Next;
                p_AbSelfIoBoostsList->Next = v16;
                _InterlockedIncrement16((volatile signed __int16 *)(v4 + 1416));
                KiAbQueueAutoBoostDpc(CurrentPrcb);
                v10 = a4;
              }
            }
          }
        }
      }
      v18 = *(_BYTE *)(v4 + 564);
      *(_BYTE *)(v4 + 563) = v10;
      if ( v18 )
      {
        if ( (v18 & 0xF) != 0 )
        {
          v10 = a4;
          *(_DWORD *)(v4 + 1420) = MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(v4 + 564) = 0;
      }
      if ( v10 != *(char *)(v4 + 195) )
      {
        v19 = *(_QWORD *)(v4 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v4 + 651);
        if ( (*(_DWORD *)(v4 + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 4u);
        *(_QWORD *)(v4 + 32) = v19;
        KiSetPriorityThread(v4, 0LL, a4);
      }
    }
  }
  result = v5;
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
