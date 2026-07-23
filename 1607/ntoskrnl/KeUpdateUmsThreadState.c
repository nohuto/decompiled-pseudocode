/*
 * XREFs of KeUpdateUmsThreadState @ 0x140650830
 * Callers:
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 *     KiResumeUmsThread @ 0x14065093C (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x140650990 (KiSuspendUmsThread.c)
 *     PspUmsInitThread @ 0x14067F6A4 (PspUmsInitThread.c)
 *     PspUmsUnInitThread @ 0x14067F7E0 (PspUmsUnInitThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x1406506B4 (KeRemoveUmsThreadCidOwnership.c)
 *     KiUmsExceptionFilter @ 0x140650E0C (KiUmsExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KeUpdateUmsThreadState(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // edx
  int v6; // edx
  _QWORD *Object; // rdx
  unsigned __int64 v8; // rax
  signed __int64 *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  struct _KEVENT *Event; // [rsp+28h] [rbp-10h]
  _QWORD *v14; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Event = 0LL;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 1u);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 3u);
    }
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 1u);
  }
  if ( a3 )
  {
    KeRemoveUmsThreadCidOwnership(a1, 0);
    Object = CurrentThread->WaitBlock[3].Object;
    v14 = Object;
    v8 = Object[1];
    if ( (v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v8 + 8 > 0x7FFFFFFF0000LL || v8 + 8 < v8 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v9 = (signed __int64 *)Object[1];
    _m_prefetchw(v9);
    v10 = *v9;
    do
    {
      *(_QWORD *)a1 = v10;
      v11 = v10;
      v10 = _InterlockedCompareExchange64(v9, a1, v10);
    }
    while ( v10 != v11 );
    if ( !v10 )
      Event = (struct _KEVENT *)v14[2];
  }
  if ( Event )
    KeSetEvent(Event, 0, 0);
  return 0LL;
}
