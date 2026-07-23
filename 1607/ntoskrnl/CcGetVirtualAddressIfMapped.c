/*
 * XREFs of CcGetVirtualAddressIfMapped @ 0x1400169FC
 * Callers:
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 * Callees:
 *     CcGetVacbLargeOffset @ 0x140017DC8 (CcGetVacbLargeOffset.c)
 *     CcIncrementVacbActiveCount @ 0x140018504 (CcIncrementVacbActiveCount.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall CcGetVirtualAddressIfMapped(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  volatile signed __int64 *v4; // rdi
  unsigned int v8; // r13d
  signed __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 VacbLargeOffset; // rax
  signed __int64 v13; // rax
  volatile signed __int64 v14; // rtt

  v4 = (volatile signed __int64 *)(a1 + 104);
  v8 = a2 & 0x3FFFF;
  v9 = 0LL;
  *a4 = 0x40000 - (a2 & 0x3FFFF);
  v10 = 0LL;
  v11 = KeAbPreAcquire(a1 + 104);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v11, v4);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, a2);
  else
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  *a3 = VacbLargeOffset;
  if ( VacbLargeOffset )
  {
    CcIncrementVacbActiveCount(VacbLargeOffset);
    v10 = *(_QWORD *)*a3 + v8;
  }
  _m_prefetchw((const void *)v4);
  v13 = *v4;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = v13 - 16;
  if ( (v13 & 2) != 0 || (v14 = *v4, v14 != _InterlockedCompareExchange64(v4, v9, v13)) )
    ExfReleasePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v10;
}
