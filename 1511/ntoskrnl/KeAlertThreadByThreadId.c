/*
 * XREFs of KeAlertThreadByThreadId @ 0x14008E070
 * Callers:
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadId @ 0x140435FF8 (NtAlertThreadByThreadId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiIncrementConcurrencyCount @ 0x14008E774 (KiIncrementConcurrencyCount.c)
 */

__int64 __fastcall KeAlertThreadByThreadId(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v6; // si
  char v7; // cl
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v14, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || *(_BYTE *)(a1 + 643) != 37 )
    {
      goto LABEL_25;
    }
    v7 = 0;
    v8 = *(_BYTE *)(a1 + 112) & 7;
    if ( v8 == 1 || v8 == 4 )
    {
      v9 = *(_QWORD *)(a1 + 232);
      if ( v9 )
        KiIncrementConcurrencyCount(v9, a1);
      v10 = *(_QWORD *)(a1 + 712);
      if ( v10 )
      {
        v15 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 22672), 0LL) )
        {
          do
            KeYieldProcessorEx(&v15, a2, a3);
          while ( *(_QWORD *)(v10 + 22672) );
        }
        if ( *(_QWORD *)(a1 + 712) )
        {
          v11 = *(_QWORD *)(a1 + 216);
          v12 = *(_QWORD **)(a1 + 224);
          if ( *(_QWORD *)(v11 + 8) != a1 + 216 || *v12 != a1 + 216 )
            __fastfail(3u);
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          *(_QWORD *)(a1 + 712) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 22672), 0LL);
      }
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
      CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(a1 + 216);
      v7 = 1;
      *(_QWORD *)(a1 + 200) = 257LL;
    }
    *(_BYTE *)(a1 + 112) |= 0x80u;
    if ( !v7 )
LABEL_25:
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 3u);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 1LL, CurrentIrql);
  return v6;
}
