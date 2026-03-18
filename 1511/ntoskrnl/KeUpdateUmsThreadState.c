/*
 * XREFs of KeUpdateUmsThreadState @ 0x14061B43C
 * Callers:
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     KiResumeUmsThread @ 0x14061B53C (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x14061B590 (KiSuspendUmsThread.c)
 *     PspUmsInitThread @ 0x1406411DC (PspUmsInitThread.c)
 *     PspUmsUnInitThread @ 0x140641318 (PspUmsUnInitThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140643914 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x14061B2C0 (KeRemoveUmsThreadCidOwnership.c)
 *     KiUmsExceptionFilter @ 0x14061BA0C (KiUmsExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KeUpdateUmsThreadState(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // edx
  int v6; // edx
  PVOID Object; // r8
  unsigned __int64 v8; // rax
  signed __int64 *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  struct _KEVENT *Event; // [rsp+28h] [rbp-10h]

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
    v8 = *((_QWORD *)Object + 1);
    if ( (v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v8 + 8 > MmUserProbeAddress || v8 + 8 < v8 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v9 = (signed __int64 *)*((_QWORD *)Object + 1);
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
      Event = (struct _KEVENT *)*((_QWORD *)Object + 2);
  }
  if ( Event )
    KeSetEvent(Event, 0, 0);
  return 0LL;
}
