/*
 * XREFs of EtwpReceiveNotification @ 0x14048EBE8
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     EtwpReleaseQueueEntry @ 0x14048EDEC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  signed __int64 v4; // rbx
  int v8; // ebp
  unsigned __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rdi
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  _QWORD *v14; // rdx
  _QWORD *i; // rsi
  _QWORD *v16; // rcx
  void **v17; // rax
  __int64 v18; // r14
  bool v19; // r12
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // rtt
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  signed __int32 v26; // edi
  __int64 v28; // rax
  signed __int64 v29; // rax
  __int64 v30; // rtt
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9

  v4 = 0LL;
  v8 = 0;
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[9];
  if ( v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (__int64 *)(v9 + 16);
    v12 = (_BYTE *)KeAbPreAcquire(v9 + 16, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 16), v12, v9 + 16);
    if ( v13 )
      v13[26] |= 1u;
    v14 = (_QWORD *)(v9 + 24);
    for ( i = *(_QWORD **)(v9 + 24); i != v14 && a3 != (HIBYTE(*(_WORD *)(i[3] + 98LL)) & 1); i = (_QWORD *)*i )
      ;
    if ( i == v14 )
    {
      _m_prefetchw(v11);
      v29 = *v11;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v4 = v29 - 16;
      if ( (v29 & 2) != 0 || (v30 = *v11, v30 != _InterlockedCompareExchange64(v11, v4, v29)) )
        ExfReleasePushLock((_QWORD *)(v9 + 16));
      KeAbPostRelease(v9 + 16);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v31, v32, v33);
      return (unsigned int)-2147483622;
    }
    else
    {
      v16 = (_QWORD *)*i;
      v17 = (void **)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || *v17 != i )
        __fastfail(3u);
      *v17 = v16;
      v16[1] = v17;
      v18 = i[2];
      if ( *(_DWORD *)(v18 + 4) > a2 )
      {
        v28 = *v14;
        if ( *(_QWORD **)(*v14 + 8LL) != v14 )
          __fastfail(3u);
        *i = v28;
        v8 = -1073741789;
        i[1] = v14;
        *(_QWORD *)(v28 + 8) = i;
        *v14 = i;
      }
      v19 = *v14 != (_QWORD)v14;
      *a4 = *(_DWORD *)(v18 + 4);
      _m_prefetchw(v11);
      v20 = *v11;
      v21 = *v11 - 16;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v21 = 0LL;
      if ( (v20 & 2) != 0 || (v22 = *v11, v22 != _InterlockedCompareExchange64(v11, v21, v20)) )
        ExfReleasePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
      if ( v8 >= 0 )
      {
        v26 = _InterlockedIncrement((volatile signed __int32 *)(v18 + 20));
        memmove(a1, (const void *)v18, *(unsigned int *)(v18 + 4));
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 5) = v26;
        *((_DWORD *)a1 + 6) = *((unsigned __int16 *)i + 24);
        if ( *(_BYTE *)(v18 + 12) )
          *((_DWORD *)a1 + 4) = *((unsigned __int16 *)i + 25);
        EtwpUnreferenceDataBlock(v18);
        EtwpReleaseQueueEntry(i);
        if ( v19 )
          return 261;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
