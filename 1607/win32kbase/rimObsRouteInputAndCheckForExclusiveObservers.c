/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C001121C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     rimObsIsObserverTarget @ 0x1C00DFA7C (rimObsIsObserverTarget.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C00DFAB0 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C00E0080 (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v3; // edi
  struct _LIST_ENTRY *v4; // r12
  struct _LIST_ENTRY *v6; // rsi
  struct _KPROCESS *v7; // rbp
  int v8; // ebx
  struct _LIST_ENTRY *i; // rbx
  struct _KPROCESS *v10; // r14
  int v11; // ebp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  RIMLockExclusive(&gInputObserverLock);
  RIMLockExclusive(&gObListLock);
  Flink = gObRimInputObserverList.Flink;
  v3 = 0;
  v4 = 0LL;
  if ( gObRimInputObserverList.Flink != &gObRimInputObserverList )
  {
    do
    {
      v6 = Flink - 1;
      if ( ((__int64)Flink[6].Flink & 2) != 0
        && (unsigned int)rimObsIsObserverTarget(&Flink[-1], a1)
        && (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v4 = Flink - 1;
        if ( ((__int64)v6[7].Flink & 1) != 0 )
        {
          v7 = (struct _KPROCESS *)v6[2].Flink;
          v8 = 0;
          if ( v7 != (struct _KPROCESS *)PsGetCurrentProcess() )
          {
            KeStackAttachProcess(v7, &ApcState);
            v8 = 1;
          }
          rimObsDeliverInputToObserver(a1, v6);
          if ( v8 )
            KeUnstackDetachProcess(&ApcState);
        }
        goto LABEL_2;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimInputObserverList );
    for ( i = gObRimInputObserverList.Flink; i != &gObRimInputObserverList; i = i->Flink )
    {
      if ( (unsigned int)rimObsIsObserverTarget(&i[-1], a1) && (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v10 = (struct _KPROCESS *)i[1].Flink;
        v11 = 0;
        if ( v10 != (struct _KPROCESS *)PsGetCurrentProcess() )
        {
          KeStackAttachProcess(v10, &ApcState);
          v11 = 1;
        }
        rimObsDeliverInputToObserver(a1, &i[-1]);
        if ( v11 )
          KeUnstackDetachProcess(&ApcState);
      }
    }
  }
LABEL_2:
  RIMUnlockExclusive(&gObListLock);
  RIMUnlockExclusive(&gInputObserverLock);
  LOBYTE(v3) = v4 != 0LL;
  return v3;
}
