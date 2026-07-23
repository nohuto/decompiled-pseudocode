/*
 * XREFs of TtmiCreateTerminal @ 0x140677844
 * Callers:
 *     TtmInitCurrentSession @ 0x14067879C (TtmInitCurrentSession.c)
 *     TtmpDispatchCreateTerminal @ 0x1406799F4 (TtmpDispatchCreateTerminal.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140678268 (TtmpSetTerminalPendingCleanup.c)
 *     TtmiUpdateActiveTerminalCount @ 0x140678E18 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogTerminalCreated @ 0x14067C3A4 (TtmiLogTerminalCreated.c)
 */

__int64 __fastcall TtmiCreateTerminal(__int64 a1, ACCESS_MASK a2, char a3, HANDLE *a4, PVOID Object, _QWORD *a6)
{
  _DWORD *v6; // r14
  ULONG ClearBitsAndSet; // esi
  unsigned int v12; // ebx
  int v13; // r9d
  int v14; // r8d
  int v15; // edx
  int v16; // eax
  char *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx
  NTSTATUS inserted; // eax
  _QWORD *v22; // rax
  _DWORD v24[12]; // [rsp+50h] [rbp-48h] BYREF

  v6 = Object;
  *a4 = 0LL;
  Object = 0LL;
  *v6 = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v12 = -1073741756;
    TtmiLogError("TtmiAcquireTerminalId", 654, -1, -1073741756);
    v13 = -1073741756;
    v14 = -1073741756;
    v15 = 581;
LABEL_3:
    TtmiLogError("TtmiCreateTerminal", v15, v14, v13);
    return v12;
  }
  memset(v24, 0, sizeof(v24));
  v24[0] = 48;
  v24[6] = a3 == 0 ? 0x200 : 0;
  v16 = ObCreateObject(0, TtmpTerminalObjectType, (__int64)v24, a3, 0, 280, 0, 0, &Object);
  v12 = v16;
  if ( v16 < 0 )
  {
    v13 = v16;
    v14 = v16;
    v15 = 614;
    _bittestandreset(*(signed __int32 **)(a1 + 64), ClearBitsAndSet);
    goto LABEL_3;
  }
  v17 = (char *)Object;
  ObfReferenceObject(Object);
  memset(v17, 0, 0x118uLL);
  *((_DWORD *)v17 + 6) = 1416459348;
  *((_DWORD *)v17 + 7) = ClearBitsAndSet;
  if ( ClearBitsAndSet )
  {
    *((_DWORD *)v17 + 9) = 1;
    *((_DWORD *)v17 + 67) = 1;
    *((_DWORD *)v17 + 11) = 2;
    *((_QWORD *)v17 + 8) = 300000000LL;
  }
  else
  {
    *((_DWORD *)v17 + 9) = 3;
    *((_DWORD *)v17 + 67) = 3;
    LOBYTE(v18) = 1;
    *((_DWORD *)v17 + 11) = 0;
    *((_DWORD *)v17 + 8) |= 0x10u;
    TtmiUpdateActiveTerminalCount(a1, v18, 26LL);
  }
  KeInitializeTimerEx((PKTIMER)(v17 + 80), NotificationTimer);
  KeInitializeDpc((PRKDPC)(v17 + 144), (PKDEFERRED_ROUTINE)TtmpScheduledEvaluationDpc, v17);
  *((_QWORD *)v17 + 26) = 0LL;
  *((_QWORD *)v17 + 28) = TtmpScheduledEvaluationWorker;
  *((_QWORD *)v17 + 29) = v17;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v19 = Object;
  *((_QWORD *)Object + 2) = a1;
  v20 = *(_QWORD **)(a1 + 48);
  if ( *v20 != a1 + 40 )
    __fastfail(3u);
  v19[1] = v20;
  *v19 = a1 + 40;
  *v20 = v19;
  *(_QWORD *)(a1 + 48) = v19;
  TtmiLogTerminalCreated(v19, ClearBitsAndSet);
  inserted = ObInsertObject(v19, 0LL, a2, 1u, 0LL, a4);
  v12 = inserted;
  if ( inserted >= 0 )
  {
    v22 = a6;
    *v6 = ClearBitsAndSet;
    if ( v22 )
      *v22 = v19;
    else
      ObfDereferenceObject(v19);
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateTerminal", 704, inserted, inserted);
    TtmpSetTerminalPendingCleanup(a1, v19);
  }
  return v12;
}
