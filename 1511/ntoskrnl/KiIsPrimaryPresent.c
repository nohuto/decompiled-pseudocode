/*
 * XREFs of KiIsPrimaryPresent @ 0x1401CC4F0
 * Callers:
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 *     NtUmsThreadYield @ 0x14061BA2C (NtUmsThreadYield.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

char __fastcall KiIsPrimaryPresent(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v4; // bl
  bool v6; // r12
  _QWORD *Object; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r13
  int v13; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v6 = 0;
  Object = CurrentThread->WaitBlock[3].Object;
  v8 = Object[4];
  v9 = Object[5];
  if ( v8 && v9 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v13, a2, a3);
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v8 )
      v6 = !_interlockedbittestandset((volatile signed __int32 *)v8, 7u);
    CurrentThread->ThreadLock = 0LL;
    if ( !v6 )
      goto LABEL_17;
    if ( *(_QWORD *)(v8 + 24) == v9 && *(_DWORD *)(v9 - 72) == *((_DWORD *)Object + 6) )
    {
      if ( !a1 )
      {
LABEL_15:
        v4 = 1;
        goto LABEL_16;
      }
      if ( !*(_QWORD *)(v9 + 16) )
      {
        *(_QWORD *)(v9 + 24) = a2;
        *(_QWORD *)(v9 + 16) = a1;
        goto LABEL_15;
      }
    }
LABEL_16:
    _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
LABEL_17:
    __writecr8(CurrentIrql);
  }
  return v4;
}
