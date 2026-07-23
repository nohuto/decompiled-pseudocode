/*
 * XREFs of EtwpEnqueueAvailableBuffer @ 0x1400EB050
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140086F48 (EtwpAllocateFreeBuffers.c)
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400EB628 (EtwpPrepareDirtyBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x14022AC34 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x14022AC78 (EtwpRotateCompressionTarget.c)
 *     EtwpFlushActiveBuffers @ 0x1404F3420 (EtwpFlushActiveBuffers.c)
 *     EtwpCompleteBuffer @ 0x14052870C (EtwpCompleteBuffer.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwpLockBufferList @ 0x1400E9530 (EtwpLockBufferList.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall EtwpEnqueueAvailableBuffer(__int64 a1, unsigned int *a2, unsigned int a3)
{
  signed __int64 v3; // rbx
  ULONG_PTR v5; // rcx
  unsigned __int64 result; // rax
  signed __int64 v9; // rax
  __int64 v10; // rtt
  _QWORD *v11; // rdx
  _QWORD *v12; // rsi
  bool v13; // zf
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  int v16; // eax
  unsigned __int8 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = *(unsigned int *)(a1 + 4);
  v17 = 0;
  if ( (_DWORD)v5 != *a2 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v5, *a2);
  a2[11] = a3;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 808));
  EtwpLockBufferList(a1, &v17);
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0 )
    goto LABEL_3;
  v11 = (_QWORD *)(a1 + 72);
  if ( !*(_QWORD *)(a1 + 72) || a3 == 4 )
    goto LABEL_3;
  if ( !a3 )
  {
    v12 = a2 + 8;
    *v12 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v12;
    v13 = a1 + 72 == *(_QWORD *)(a1 + 64);
    goto LABEL_18;
  }
  v14 = 0LL;
  if ( !*v11 )
    goto LABEL_3;
  do
  {
    v15 = (_QWORD *)*v11;
    if ( (!v14 && (v16 = *((_DWORD *)v15 + 3)) != 0 || (v16 = *((_DWORD *)v15 + 3), v16 == 6)) && (v14 = v11, v16 == 6) )
    {
      *v11 = *v15;
      if ( *v15 )
        *v15 = 0LL;
      else
        *(_QWORD *)(a1 + 64) = v11;
      *v15 = *(_QWORD *)(a1 + 992);
      *(_QWORD *)(a1 + 992) = v15;
    }
    else
    {
      v11 = (_QWORD *)*v11;
    }
  }
  while ( *v11 );
  if ( !v14 )
  {
LABEL_3:
    *((_QWORD *)a2 + 4) = 0LL;
    **(_QWORD **)(a1 + 64) = a2 + 8;
    *(_QWORD *)(a1 + 64) = a2 + 8;
    goto LABEL_4;
  }
  v12 = a2 + 8;
  *v12 = *v14;
  *v14 = v12;
  v13 = v14 == *(_QWORD **)(a1 + 64);
LABEL_18:
  if ( v13 )
    *(_QWORD *)(a1 + 64) = v12;
LABEL_4:
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _m_prefetchw((const void *)(a1 + 696));
    v9 = *(_QWORD *)(a1 + 696);
    if ( (v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v9 - 16;
    if ( (v9 & 2) != 0
      || (v10 = *(_QWORD *)(a1 + 696),
          v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 696), v3, v9)) )
    {
      ExfReleasePushLock((_QWORD *)(a1 + 696));
    }
    result = KeAbPostRelease(a1 + 696);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 696));
    result = v17;
    __writecr8(v17);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  return result;
}
