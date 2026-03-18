/*
 * XREFs of EtwpAddWinRtProviderToSession @ 0x140667800
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpAddWinRtProviderToSession(__int64 a1, const void **a2, __int64 a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // r14
  __int64 *v10; // rbx
  SIZE_T v11; // rdi
  char *PoolWithTag; // rax
  char *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  void **v22; // rax

  v3 = (unsigned __int64 *)(a1 + 704);
  v7 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (ULONG_PTR)v3);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 340) + (unsigned int)*(unsigned __int16 *)a2 > *(_DWORD *)(a1 + 4) )
    goto LABEL_27;
  v9 = (__int64 *)(a1 + 872);
  v10 = *(__int64 **)(a1 + 872);
  if ( v10 == (__int64 *)(a1 + 872) )
  {
LABEL_11:
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)*(unsigned __int16 *)a2 + 42, 0x62777445u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_27;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
    *((_DWORD *)PoolWithTag + 4) = *(unsigned __int16 *)a2 + 2;
    memmove(PoolWithTag + 40, a2[1], *(unsigned __int16 *)a2);
    *(_WORD *)&v13[2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 40] = 0;
    *(_DWORD *)(a1 + 340) += *((_DWORD *)v13 + 4) + 16;
LABEL_13:
    v14 = *v9;
    *(_QWORD *)v13 = *v9;
    *((_QWORD *)v13 + 1) = v9;
    if ( *(__int64 **)(v14 + 8) != v9 )
      __fastfail(3u);
    *(_QWORD *)(v14 + 8) = v13;
    *v9 = (__int64)v13;
    _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x80u);
    goto LABEL_27;
  }
  v11 = *(unsigned __int16 *)a2;
  while ( 1 )
  {
    if ( *((_DWORD *)v10 + 4) == v11 + 2 )
    {
      v11 = *(unsigned __int16 *)a2;
      if ( RtlCompareMemory(&v10[2 * *((unsigned int *)v10 + 5) + 3], a2[1], v11) == v11 )
        break;
    }
    v10 = (__int64 *)*v10;
    if ( v10 == v9 )
      goto LABEL_11;
  }
  v15 = *((_DWORD *)v10 + 5);
  v16 = 0;
  if ( !v15 )
  {
LABEL_20:
    if ( v15 >= 0x10 )
      goto LABEL_27;
    v19 = (char *)ExAllocatePoolWithTag(PagedPool, *((_DWORD *)v10 + 4) + 40 + 16 * v15, 0x62777445u);
    v13 = v19;
    if ( !v19 )
      goto LABEL_27;
    memmove(v19 + 24, v10 + 3, 16LL * *((unsigned int *)v10 + 5));
    *(_OWORD *)&v13[16 * *((unsigned int *)v10 + 5) + 24] = *(_OWORD *)a3;
    v20 = (unsigned int)(*((_DWORD *)v10 + 5) + 1);
    *((_DWORD *)v13 + 5) = v20;
    *((_DWORD *)v13 + 4) = *((_DWORD *)v10 + 4);
    memmove(&v13[16 * v20 + 24], &v10[2 * *((unsigned int *)v10 + 5) + 3], *((unsigned int *)v10 + 4));
    v21 = (_QWORD *)*v10;
    v22 = (void **)v10[1];
    if ( *(__int64 **)(*v10 + 8) != v10 || *v22 != v10 )
      __fastfail(3u);
    *v22 = v21;
    v21[1] = v22;
    ExFreePoolWithTag(v10, 0);
    goto LABEL_13;
  }
  while ( 1 )
  {
    v17 = 2LL * v16;
    v18 = *(_QWORD *)a3 - v10[v17 + 3];
    if ( *(_QWORD *)a3 == v10[v17 + 3] )
      v18 = *(_QWORD *)(a3 + 8) - v10[v17 + 4];
    if ( !v18 )
      break;
    if ( ++v16 >= v15 )
      goto LABEL_20;
  }
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
}
