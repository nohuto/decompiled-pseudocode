/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x140095180
 * Callers:
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x140094830 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KeUpdateThreadSchedulingProperties @ 0x140095C70 (KeUpdateThreadSchedulingProperties.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400C37A4 (KiRemoveThreadFromScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E6404 (KiAddThreadToPrcbQueue.c)
 */

volatile signed __int64 *__fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  volatile signed __int64 *result; // rax
  char v8; // bp
  __int64 v9; // rdx
  char v10; // r14
  __int64 v11; // rsi
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF
  struct _KPRCB *v14; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int64 *v15; // [rsp+68h] [rbp+20h] BYREF

  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = CurrentPrcb;
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1);
    _enable();
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v12, v5, v6);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v5) = 2;
    result = (volatile signed __int64 *)KeUpdateThreadSchedulingProperties(a1, v5, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  }
  else
  {
    v8 = 0;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v13, a2, a3);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v10 = KiAcquireThreadStateLock(a1, (__int64 *)&v14, (volatile signed __int32 **)&v15);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue(v14, *(_QWORD *)(a1 + 1488), a1, (unsigned int)*(char *)(a1 + 195));
      v8 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    v11 = (__int64)v14;
    LOBYTE(v9) = v10;
    KeUpdateThreadSchedulingProperties(a1, v9, v14);
    if ( v8 )
      KiAddThreadToPrcbQueue(v11, a1, (unsigned int)*(char *)(a1 + 195), 0LL);
    if ( v11 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
    result = v15;
    if ( v15 )
      _InterlockedAnd64(v15, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
