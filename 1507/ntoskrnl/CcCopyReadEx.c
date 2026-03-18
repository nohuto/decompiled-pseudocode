/*
 * XREFs of CcCopyReadEx @ 0x140053770
 * Callers:
 *     CcCopyRead @ 0x14055B230 (CcCopyRead.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400851D0 (CcUpdateSharedCacheMapFlag.c)
 *     CcScheduleReadAheadEx @ 0x1400E4230 (CcScheduleReadAheadEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x14049D020 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCopyReadEx(_QWORD *Object, __int64 *a2, unsigned int a3, unsigned __int8 a4, void *a5, _DWORD *a6)
{
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rdx
  int v11; // eax
  _DWORD *v12; // r14
  void *v13; // rbp
  unsigned __int8 v14; // bp
  __int64 v15; // r9
  __int64 v16; // r10
  _DWORD *v17; // rax
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v6 = a3;
  LODWORD(v19) = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v11 = 0;
  if ( v11 < 2 && CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v11 = 2;
  v12 = (_DWORD *)Object[6];
  if ( v11 <= 0 )
    a4 = 1;
  if ( a3 + *a2 > *(_QWORD *)(*(_QWORD *)(Object[5] + 8LL) + 8LL) )
    KeBugCheckEx(0x34u, 0x30CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v13 = a5;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  if ( (*v12 & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object);
  if ( a4 )
    __incgsdword(0x2E54u);
  else
    __incgsdword(0x2E50u);
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  v14 = CcMapAndCopyFromCache((int)Object, *a2, v6, a4, v13, (__int64)&v19, (*v12 >> 18) & 7);
  if ( v14 )
  {
    __addgsdword(0x5E44u, (unsigned int)KeGetCurrentThread()[1].Timer.TimerListEntry.Flink);
    if ( (_DWORD)v19 && (*v12 & 0x20000) == 0 )
      CcScheduleReadAheadEx(Object);
    v15 = Object[6];
    v16 = *(_QWORD *)(Object[5] + 8LL);
    _InterlockedExchange64((volatile __int64 *)(v15 + 16), *(_QWORD *)(v15 + 32));
    _InterlockedExchange64((volatile __int64 *)(v15 + 24), *(_QWORD *)(v15 + 40));
    _InterlockedExchange64((volatile __int64 *)(v15 + 32), *a2);
    _InterlockedExchange64((volatile __int64 *)(v15 + 40), v6 + *a2);
    if ( (*(_DWORD *)(v16 + 152) & 0x200000) != 0
      && (unsigned int)((*(_DWORD *)(v15 + 32) >> 12) - (*(_DWORD *)(v15 + 24) >> 12)) > 1 )
    {
      CcUpdateSharedCacheMapFlag(v16, 0x200000LL, 0LL);
    }
    v17 = a6;
    *a6 = 0;
    *((_QWORD *)v17 + 1) = v6;
  }
  else
  {
    __incgsdword(0x2E58u);
  }
  return v14;
}
