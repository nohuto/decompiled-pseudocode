/*
 * XREFs of EtwpAddProviderToSession @ 0x1404B49F0
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall EtwpAddProviderToSession(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned __int64 *v3; // rdi
  SIZE_T v4; // r15
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  __int64 *v9; // rsi
  __int64 *i; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rbx
  __int64 v13; // rax

  v3 = (unsigned __int64 *)(a1 + 688);
  v4 = a3;
  v7 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (ULONG_PTR)v3);
  if ( v8 )
    v8[26] |= 1u;
  if ( (unsigned int)v4 <= 0x8000 && (unsigned int)(v4 + *(_DWORD *)(a1 + 324)) <= *(_DWORD *)(a1 + 4) )
  {
    v9 = (__int64 *)(a1 + 112);
    for ( i = *(__int64 **)(a1 + 112); i != v9; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
        goto LABEL_16;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v4 + 24), 0x62777445u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)(a1 + 324) += v4;
      PoolWithTag[5] = v4;
      memmove(PoolWithTag + 6, a2, v4);
      v13 = *v9;
      if ( *(__int64 **)(*v9 + 8) != v9 )
        __fastfail(3u);
      *(_QWORD *)v12 = v13;
      *((_QWORD *)v12 + 1) = v9;
      *(_QWORD *)(v13 + 8) = v12;
      *v9 = (__int64)v12;
      *((_BYTE *)v12 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 820), 0x8C0u);
    }
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}
