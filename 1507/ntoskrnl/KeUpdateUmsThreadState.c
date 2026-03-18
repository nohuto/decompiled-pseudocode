/*
 * XREFs of KeUpdateUmsThreadState @ 0x140699F78
 * Callers:
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 *     KiResumeUmsThread @ 0x14069A078 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x14069A0CC (KiSuspendUmsThread.c)
 *     PspUmsInitThread @ 0x1406C374C (PspUmsInitThread.c)
 *     PspUmsUnInitThread @ 0x1406C3888 (PspUmsUnInitThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x140699DD0 (KeRemoveUmsThreadCidOwnership.c)
 *     KiUmsExceptionFilter @ 0x14069A590 (KiUmsExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
