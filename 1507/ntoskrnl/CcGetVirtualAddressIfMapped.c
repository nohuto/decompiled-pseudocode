/*
 * XREFs of CcGetVirtualAddressIfMapped @ 0x140113B48
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcGetVacbLargeOffset @ 0x1400855D0 (CcGetVacbLargeOffset.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall CcGetVirtualAddressIfMapped(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned __int64 *v4; // rdi
  unsigned int v8; // r13d
  signed __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 VacbLargeOffset; // rcx
  signed __int64 v15; // rax
  unsigned __int64 v16; // rtt

  v4 = (unsigned __int64 *)(a1 + 104);
  v8 = a2 & 0x3FFFF;
  v9 = 0LL;
  *a4 = 0x40000 - (a2 & 0x3FFFF);
  v10 = 0LL;
  v12 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, (__int64)a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v12, (ULONG_PTR)v4, v13);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, a2);
  else
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  *a3 = VacbLargeOffset;
  if ( VacbLargeOffset )
  {
    if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(VacbLargeOffset + 16)) )
      KeBugCheckEx(0x34u, 0x96AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v10 = *(_QWORD *)*a3 + v8;
  }
  _m_prefetchw(v4);
  v15 = *v4;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = v15 - 16;
  if ( (v15 & 2) != 0 || (v16 = *v4, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v9, v15)) )
    ExfReleasePushLock(v4, v11);
  KeAbPostRelease((ULONG_PTR)v4);
  return v10;
}
