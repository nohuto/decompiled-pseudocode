/*
 * XREFs of CcCopyReadEx @ 0x1400A32F0
 * Callers:
 *     CcCopyRead @ 0x1404C3AD0 (CcCopyRead.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     CcScheduleReadAheadEx @ 0x14002E96C (CcScheduleReadAheadEx.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400E7E70 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x14047A640 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCopyReadEx(
        _QWORD *Object,
        __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        void *a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rdx
  int v12; // eax
  _DWORD *v13; // r14
  void *v14; // rbp
  unsigned __int8 v15; // bp
  __int64 v16; // r9
  __int64 v17; // r10
  _DWORD *v18; // rax
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  LODWORD(v20) = 0;
  CurrentThread = KeGetCurrentThread();
  v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v12 = 0;
  if ( v12 < 2 && CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v12 = 2;
  v13 = (_DWORD *)Object[6];
  if ( v12 <= 0 )
    a4 = 1;
  if ( a3 + *a2 > *(_QWORD *)(*(_QWORD *)(Object[5] + 8LL) + 8LL) )
    KeBugCheckEx(0x34u, 0x30CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v14 = a5;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  if ( (*v13 & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object, a2, a3, a7);
  if ( a4 )
    __incgsdword(0x2E54u);
  else
    __incgsdword(0x2E50u);
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  v15 = CcMapAndCopyFromCache((int)Object, *a2, v7, a4, v14, (__int64)&v20, (*v13 >> 18) & 7);
  if ( v15 )
  {
    __addgsdword(0x5E44u, (unsigned int)KeGetCurrentThread()[1].Timer.TimerListEntry.Flink);
    if ( (_DWORD)v20 && (*v13 & 0x20000) == 0 )
      CcScheduleReadAheadEx(Object, a2, v7, a7);
    v16 = Object[6];
    v17 = *(_QWORD *)(Object[5] + 8LL);
    _InterlockedExchange64((volatile __int64 *)(v16 + 16), *(_QWORD *)(v16 + 32));
    _InterlockedExchange64((volatile __int64 *)(v16 + 24), *(_QWORD *)(v16 + 40));
    _InterlockedExchange64((volatile __int64 *)(v16 + 32), *a2);
    _InterlockedExchange64((volatile __int64 *)(v16 + 40), v7 + *a2);
    if ( (*(_DWORD *)(v17 + 152) & 0x200000) != 0
      && (unsigned int)((*(_DWORD *)(v16 + 32) >> 12) - (*(_DWORD *)(v16 + 24) >> 12)) > 1 )
    {
      CcUpdateSharedCacheMapFlag(v17, 0x200000LL, 0LL);
    }
    v18 = a6;
    *a6 = 0;
    *((_QWORD *)v18 + 1) = v7;
  }
  else
  {
    __incgsdword(0x2E58u);
  }
  return v15;
}
