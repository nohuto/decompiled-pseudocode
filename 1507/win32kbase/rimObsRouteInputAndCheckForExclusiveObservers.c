/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00D1914
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D1588 (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  __int64 v2; // rdx
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v4; // edi
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *v6; // r12
  __int64 v7; // rbx
  struct _KPROCESS *v8; // rbp
  int v9; // esi
  __int64 v10; // rcx
  struct _KPROCESS *v11; // r14
  int v12; // ebp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  RIMLockExclusive((__int64)&gInputObserverLock);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimInputObserverList.Flink;
  v4 = 0;
  v5 = gObRimInputObserverList.Flink;
  v6 = 0LL;
  if ( gObRimInputObserverList.Flink != &gObRimInputObserverList )
  {
    while ( 1 )
    {
      v7 = (__int64)&v5[-1];
      if ( (HIDWORD(v5[5].Blink) & 1) != 0 )
      {
        v2 = *(_QWORD *)(a1 + 408);
        if ( *(_WORD *)(v2 + 16) == *(_WORD *)(v7 + 100) && *(_WORD *)(v2 + 18) == *(_WORD *)(v7 + 104) )
          break;
      }
      v5 = v5->Flink;
      if ( v5 == &gObRimInputObserverList )
      {
        while ( Flink != &gObRimInputObserverList )
        {
          v10 = *(_QWORD *)(a1 + 408);
          if ( *(_WORD *)(v10 + 16) == WORD2(Flink[5].Flink) && *(_WORD *)(v10 + 18) == LOWORD(Flink[5].Blink) )
          {
            v11 = (struct _KPROCESS *)Flink[1].Flink;
            v12 = 0;
            if ( v11 != (struct _KPROCESS *)PsGetCurrentProcess(v10, v2) )
            {
              KeStackAttachProcess(v11, &ApcState);
              v12 = 1;
            }
            rimObsDeliverInputToObserver(a1, (__int64)&Flink[-1]);
            if ( v12 )
              KeUnstackDetachProcess(&ApcState);
          }
          Flink = Flink->Flink;
        }
        goto LABEL_19;
      }
    }
    v8 = *(struct _KPROCESS **)(v7 + 32);
    v6 = v5 - 1;
    v9 = 0;
    if ( v8 != (struct _KPROCESS *)PsGetCurrentProcess(v5, v2) )
    {
      KeStackAttachProcess(v8, &ApcState);
      v9 = 1;
    }
    rimObsDeliverInputToObserver(a1, v7);
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_19:
  RIMUnlockExclusive((__int64)&gObListLock);
  RIMUnlockExclusive((__int64)&gInputObserverLock);
  LOBYTE(v4) = v6 != 0LL;
  return v4;
}
