/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0086CD0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     sub_1C00D2C7C @ 0x1C00D2C7C (sub_1C00D2C7C.c)
 *     sub_1C00D2CB0 @ 0x1C00D2CB0 (sub_1C00D2CB0.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D3280 (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v3; // edi
  struct _LIST_ENTRY *v4; // r12
  struct _LIST_ENTRY *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KPROCESS *v9; // rbp
  int v10; // ebx
  struct _LIST_ENTRY *i; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KPROCESS *v14; // r14
  int v15; // ebp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  RIMLockExclusive((__int64)&gInputObserverLock);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimInputObserverList.Flink;
  v3 = 0;
  v4 = 0LL;
  if ( gObRimInputObserverList.Flink != &gObRimInputObserverList )
  {
    do
    {
      v6 = Flink - 1;
      if ( ((__int64)Flink[6].Flink & 2) != 0
        && (unsigned int)sub_1C00D2C7C(&Flink[-1], a1)
        && (unsigned int)sub_1C00D2CB0() )
      {
        v4 = Flink - 1;
        if ( ((__int64)v6[7].Flink & 1) != 0 )
        {
          v9 = (struct _KPROCESS *)v6[2].Flink;
          v10 = 0;
          if ( v9 != (struct _KPROCESS *)PsGetCurrentProcess(v8, v7) )
          {
            KeStackAttachProcess(v9, &ApcState);
            v10 = 1;
          }
          rimObsDeliverInputToObserver(a1, v6);
          if ( v10 )
            KeUnstackDetachProcess(&ApcState);
        }
        goto LABEL_2;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimInputObserverList );
    for ( i = gObRimInputObserverList.Flink; i != &gObRimInputObserverList; i = i->Flink )
    {
      if ( (unsigned int)sub_1C00D2C7C(&i[-1], a1) && (unsigned int)sub_1C00D2CB0() )
      {
        v14 = (struct _KPROCESS *)i[1].Flink;
        v15 = 0;
        if ( v14 != (struct _KPROCESS *)PsGetCurrentProcess(v13, v12) )
        {
          KeStackAttachProcess(v14, &ApcState);
          v15 = 1;
        }
        rimObsDeliverInputToObserver(a1, &i[-1]);
        if ( v15 )
          KeUnstackDetachProcess(&ApcState);
      }
    }
  }
LABEL_2:
  RIMUnlockExclusive((__int64)&gObListLock);
  RIMUnlockExclusive((__int64)&gInputObserverLock);
  LOBYTE(v3) = v4 != 0LL;
  return v3;
}
