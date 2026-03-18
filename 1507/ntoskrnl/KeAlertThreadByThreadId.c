/*
 * XREFs of KeAlertThreadByThreadId @ 0x1400F33C0
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadId @ 0x140511594 (NtAlertThreadByThreadId.c)
 * Callees:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeAlertThreadByThreadId(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v4; // ebx
  unsigned __int8 v5; // bp
  char v6; // cl
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || *(_BYTE *)(a1 + 643) != 37 )
    {
      goto LABEL_35;
    }
    v6 = 0;
    v7 = *(_BYTE *)(a1 + 112) & 7;
    if ( v7 == 1 || v7 == 4 )
    {
      v8 = *(_QWORD *)(a1 + 232);
      if ( v8 )
      {
        if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
        {
          v9 = (unsigned __int8)*(_DWORD *)(a1 + 540);
          *(_DWORD *)(a1 + 540) = v9;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 4 * v9 + 536));
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 40));
        }
      }
      v10 = *(_QWORD *)(a1 + 712);
      if ( v10 )
      {
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 22672), 0LL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v11);
          }
          while ( *(_QWORD *)(v10 + 22672) );
        }
        if ( *(_QWORD *)(a1 + 712) )
        {
          v12 = *(_QWORD *)(a1 + 216);
          v13 = *(_QWORD **)(a1 + 224);
          if ( *(_QWORD *)(v12 + 8) != a1 + 216 || *v13 != a1 + 216 )
            __fastfail(3u);
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          *(_QWORD *)(a1 + 712) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 22672), 0LL);
      }
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
      CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(a1 + 216);
      v6 = 1;
      *(_QWORD *)(a1 + 200) = 257LL;
    }
    *(_BYTE *)(a1 + 112) |= 0x80u;
    if ( !v6 )
LABEL_35:
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 3u);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 2u, CurrentIrql);
  return v5;
}
