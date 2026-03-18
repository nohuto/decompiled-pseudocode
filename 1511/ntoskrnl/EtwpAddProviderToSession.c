/*
 * XREFs of EtwpAddProviderToSession @ 0x1404CF154
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpAddProviderToSession(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned __int64 *v3; // rdi
  SIZE_T v4; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // r14
  __int64 *i; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rbx
  __int64 v13; // rax

  v3 = (unsigned __int64 *)(a1 + 704);
  v4 = a3;
  v7 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (ULONG_PTR)v3);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( (unsigned int)v4 <= 0x8000 && (unsigned int)(v4 + *(_DWORD *)(a1 + 340)) <= *(_DWORD *)(a1 + 4) )
  {
    v9 = (__int64 *)(a1 + 128);
    for ( i = *(__int64 **)(a1 + 128); i != v9; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
        goto LABEL_16;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v4 + 24), 0x62777445u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)(a1 + 340) += v4;
      PoolWithTag[5] = v4;
      memmove(PoolWithTag + 6, a2, v4);
      v13 = *v9;
      *(_QWORD *)v12 = *v9;
      *((_QWORD *)v12 + 1) = v9;
      if ( *(__int64 **)(v13 + 8) != v9 )
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v12;
      *v9 = (__int64)v12;
      *((_BYTE *)v12 + 16) = 0;
      _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x8C0u);
    }
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
}
