/*
 * XREFs of EtwpAddWinRtProviderToSession @ 0x1406EAB2C
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpAddWinRtProviderToSession(__int64 a1, const void **a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 *v11; // r14
  __int64 *v12; // rbx
  SIZE_T v13; // rdi
  char *PoolWithTag; // rax
  char *v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rcx
  char *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  void **v24; // rax

  v4 = (unsigned __int64 *)(a1 + 704);
  v8 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (ULONG_PTR)v4, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 340) + (unsigned int)*(unsigned __int16 *)a2 > *(_DWORD *)(a1 + 4) )
    goto LABEL_27;
  v11 = (__int64 *)(a1 + 872);
  v12 = *(__int64 **)(a1 + 872);
  if ( v12 == (__int64 *)(a1 + 872) )
  {
LABEL_11:
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)*(unsigned __int16 *)a2 + 42, 0x62777445u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_27;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
    *((_DWORD *)PoolWithTag + 4) = *(unsigned __int16 *)a2 + 2;
    memmove(PoolWithTag + 40, a2[1], *(unsigned __int16 *)a2);
    *(_WORD *)&v15[2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 40] = 0;
    *(_DWORD *)(a1 + 340) += *((_DWORD *)v15 + 4) + 16;
LABEL_13:
    v16 = *v11;
    *(_QWORD *)v15 = *v11;
    *((_QWORD *)v15 + 1) = v11;
    if ( *(__int64 **)(v16 + 8) != v11 )
      __fastfail(3u);
    *(_QWORD *)(v16 + 8) = v15;
    *v11 = (__int64)v15;
    _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x80u);
    goto LABEL_27;
  }
  v13 = *(unsigned __int16 *)a2;
  while ( 1 )
  {
    if ( *((_DWORD *)v12 + 4) == v13 + 2 )
    {
      v13 = *(unsigned __int16 *)a2;
      if ( RtlCompareMemory(&v12[2 * *((unsigned int *)v12 + 5) + 3], a2[1], v13) == v13 )
        break;
    }
    v12 = (__int64 *)*v12;
    if ( v12 == v11 )
      goto LABEL_11;
  }
  v17 = *((_DWORD *)v12 + 5);
  v18 = 0;
  if ( !v17 )
  {
LABEL_20:
    if ( v17 >= 0x10 )
      goto LABEL_27;
    v21 = (char *)ExAllocatePoolWithTag(PagedPool, *((_DWORD *)v12 + 4) + 40 + 16 * v17, 0x62777445u);
    v15 = v21;
    if ( !v21 )
      goto LABEL_27;
    memmove(v21 + 24, v12 + 3, 16LL * *((unsigned int *)v12 + 5));
    *(_OWORD *)&v15[16 * *((unsigned int *)v12 + 5) + 24] = *(_OWORD *)a3;
    v22 = (unsigned int)(*((_DWORD *)v12 + 5) + 1);
    *((_DWORD *)v15 + 5) = v22;
    *((_DWORD *)v15 + 4) = *((_DWORD *)v12 + 4);
    memmove(&v15[16 * v22 + 24], &v12[2 * *((unsigned int *)v12 + 5) + 3], *((unsigned int *)v12 + 4));
    v23 = (_QWORD *)*v12;
    v24 = (void **)v12[1];
    if ( *(__int64 **)(*v12 + 8) != v12 || *v24 != v12 )
      __fastfail(3u);
    *v24 = v23;
    v23[1] = v24;
    ExFreePoolWithTag(v12, 0);
    goto LABEL_13;
  }
  while ( 1 )
  {
    v19 = 2LL * v18;
    v20 = *(_QWORD *)a3 - v12[v19 + 3];
    if ( *(_QWORD *)a3 == v12[v19 + 3] )
      v20 = *(_QWORD *)(a3 + 8) - v12[v19 + 4];
    if ( !v20 )
      break;
    if ( ++v18 >= v17 )
      goto LABEL_20;
  }
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
}
