/*
 * XREFs of KiIsPrimaryPresent @ 0x1401DBFA8
 * Callers:
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 *     NtUmsThreadYield @ 0x140650E2C (NtUmsThreadYield.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

char __fastcall KiIsPrimaryPresent(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v3; // bl
  bool v5; // r12
  _QWORD *Object; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r13
  int v12; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v5 = 0;
  Object = CurrentThread->WaitBlock[3].Object;
  v7 = Object[4];
  v8 = Object[5];
  if ( v7 && v8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v7 )
      v5 = !_interlockedbittestandset((volatile signed __int32 *)v7, 7u);
    CurrentThread->ThreadLock = 0LL;
    if ( !v5 )
      goto LABEL_17;
    if ( *(_QWORD *)(v7 + 24) == v8 && *(_DWORD *)(v8 - 72) == *((_DWORD *)Object + 6) )
    {
      if ( !a1 )
      {
LABEL_15:
        v3 = 1;
        goto LABEL_16;
      }
      if ( !*(_QWORD *)(v8 + 16) )
      {
        *(_QWORD *)(v8 + 24) = a2;
        *(_QWORD *)(v8 + 16) = a1;
        goto LABEL_15;
      }
    }
LABEL_16:
    _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
LABEL_17:
    __writecr8(CurrentIrql);
  }
  return v3;
}
