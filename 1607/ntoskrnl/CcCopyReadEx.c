/*
 * XREFs of CcCopyReadEx @ 0x1400327F0
 * Callers:
 *     CcCopyRead @ 0x1404D0D00 (CcCopyRead.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14006AD1C (CcUpdateSharedCacheMapFlag.c)
 *     IoReferenceIoAttributionFromThread @ 0x14006E890 (IoReferenceIoAttributionFromThread.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x140446260 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCopyReadEx(
        _QWORD *Object,
        __int64 *a2,
        unsigned int a3,
        char a4,
        void *a5,
        _DWORD *a6,
        struct _KTHREAD *a7)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // r11d
  _DWORD *v12; // r15
  __int64 v13; // rdi
  void *v14; // r14
  struct _KTHREAD *v15; // r12
  __int64 v16; // r10
  __int64 v17; // rax
  _DWORD *v18; // rax
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v21; // [rsp+48h] [rbp-40h]
  unsigned __int8 v22; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h]

  v24 = a3;
  LODWORD(v23) = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v11 = 0;
  if ( v11 < 2 && CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
    v11 = 2;
  v20 = 0LL;
  v12 = (_DWORD *)Object[6];
  if ( v11 <= 0 )
    a4 = 1;
  v13 = a3;
  if ( a3 + *a2 > *(_QWORD *)(*(_QWORD *)(Object[5] + 8LL) + 8LL) )
    KeBugCheckEx(0x34u, 0x314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v14 = a5;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  v15 = a7;
  if ( (*v12 & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object);
  if ( a4 )
    __incgsdword(0x2E54u);
  else
    __incgsdword(0x2E50u);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  if ( v15 && v15 != KeGetCurrentThread() )
    IoReferenceIoAttributionFromThread(v15, &v20);
  v22 = CcMapAndCopyFromCache((int)Object, v14, (__int64)&v23, (*v12 >> 18) & 7, v20);
  if ( v22 )
  {
    v21 = KeGetCurrentThread();
    __addgsdword(0x5E44u, HIDWORD(v21[1].Timer.Header.WaitListHead.Blink));
    if ( (_DWORD)v23 && (*v12 & 0x20000) == 0 )
      CcScheduleReadAheadEx(Object);
    v16 = *(_QWORD *)(Object[5] + 8LL);
    v17 = Object[6];
    _InterlockedExchange64((volatile __int64 *)(v17 + 16), *(_QWORD *)(v17 + 32));
    _InterlockedExchange64((volatile __int64 *)(v17 + 24), *(_QWORD *)(v17 + 40));
    _InterlockedExchange64((volatile __int64 *)(v17 + 32), *a2);
    _InterlockedExchange64((volatile __int64 *)(v17 + 40), v13 + *a2);
    if ( (*(_DWORD *)(v16 + 152) & 0x200000) != 0
      && (unsigned int)((*(_DWORD *)(v17 + 32) >> 12) - (*(_DWORD *)(v17 + 24) >> 12)) > 1 )
    {
      CcUpdateSharedCacheMapFlag(v16, 0x200000LL, 0LL);
    }
    v18 = a6;
    *a6 = 0;
    *((_QWORD *)v18 + 1) = v13;
  }
  else
  {
    __incgsdword(0x2E58u);
  }
  if ( v20 )
    IoDiskIoAttributionDereference(v20);
  return v22;
}
