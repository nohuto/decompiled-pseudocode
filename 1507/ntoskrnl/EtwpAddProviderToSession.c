/*
 * XREFs of EtwpAddProviderToSession @ 0x140466298
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpAddProviderToSession(__int64 a1, const void *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  SIZE_T v5; // r15
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 *v11; // r14
  __int64 *i; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rax

  v4 = (unsigned __int64 *)(a1 + 704);
  v5 = a3;
  v8 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (ULONG_PTR)v4, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( (unsigned int)v5 <= 0x8000 && (unsigned int)(v5 + *(_DWORD *)(a1 + 340)) <= *(_DWORD *)(a1 + 4) )
  {
    v11 = (__int64 *)(a1 + 128);
    for ( i = *(__int64 **)(a1 + 128); i != v11; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v5 && RtlCompareMemory(i + 3, a2, v5) == v5 )
        goto LABEL_16;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v5 + 24), 0x62777445u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)(a1 + 340) += v5;
      PoolWithTag[5] = v5;
      memmove(PoolWithTag + 6, a2, v5);
      v15 = *v11;
      *(_QWORD *)v14 = *v11;
      *((_QWORD *)v14 + 1) = v11;
      if ( *(__int64 **)(v15 + 8) != v11 )
        __fastfail(3u);
      *(_QWORD *)(v15 + 8) = v14;
      *v11 = (__int64)v14;
      *((_BYTE *)v14 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x8C0u);
    }
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
}
