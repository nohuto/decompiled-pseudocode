/*
 * XREFs of KiIsPrimaryPresent @ 0x14020B6B0
 * Callers:
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 *     NtUmsThreadYield @ 0x14069A5B0 (NtUmsThreadYield.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiIsPrimaryPresent(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v3; // bl
  bool v5; // r13
  _QWORD *Object; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r15d
  unsigned __int8 CurrentIrql; // [rsp+70h] [rbp+18h]

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
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v7 )
      v5 = !_interlockedbittestandset((volatile signed __int32 *)v7, 7u);
    CurrentThread->ThreadLock = 0LL;
    if ( !v5 )
      goto LABEL_21;
    if ( *(_QWORD *)(v7 + 24) == v8 && *(_DWORD *)(v8 - 72) == *((_DWORD *)Object + 6) )
    {
      if ( !a1 )
      {
LABEL_19:
        v3 = 1;
        goto LABEL_20;
      }
      if ( !*(_QWORD *)(v8 + 16) )
      {
        *(_QWORD *)(v8 + 24) = a2;
        *(_QWORD *)(v8 + 16) = a1;
        goto LABEL_19;
      }
    }
LABEL_20:
    _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
LABEL_21:
    __writecr8(CurrentIrql);
  }
  return v3;
}
