/*
 * XREFs of CcAllocateInitializeBcb @ 0x1400F1B2C
 * Callers:
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400F2B04 (CcAdjustVacbLevelLockCount.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExDisableResourceBoostLite @ 0x1401397D0 (ExDisableResourceBoostLite.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char *__fastcall CcAllocateInitializeBcb(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  char *result; // rax
  signed __int64 v9; // rbx
  char *v10; // r14
  __int64 v11; // rax
  signed __int64 *v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbp
  _QWORD *v16; // rdx
  char *v17; // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rtt

  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x63426343u);
  v9 = 0LL;
  v10 = result;
  if ( result )
  {
    memset(result, 0, 0xC0uLL);
    *(_WORD *)v10 = 765;
    *((_QWORD *)v10 + 1) = *a3;
    *((_DWORD *)v10 + 1) = *a4;
    v11 = *(_QWORD *)a4 + *a3;
    ++*((_DWORD *)v10 + 16);
    *((_QWORD *)v10 + 4) = v11;
    *((_QWORD *)v10 + 22) = a1;
    ExInitializeResourceLite((PERESOURCE)(v10 + 72));
    v12 = (signed __int64 *)(a1 + 104);
    v14 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, v13);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 104, v14, a1 + 104);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = *(_QWORD **)(a2 + 24);
    v17 = v10 + 16;
    *((_QWORD *)v10 + 2) = a2 + 16;
    *((_QWORD *)v10 + 3) = v16;
    if ( *v16 != a2 + 16 )
      __fastfail(3u);
    *v16 = v17;
    *(_QWORD *)(a2 + 24) = v17;
    if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(a1, *a3, 1LL);
    _m_prefetchw(v12);
    v18 = *v12;
    if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v9 = v18 - 16;
    if ( (v18 & 2) != 0 || (v19 = *v12, v19 != _InterlockedCompareExchange64(v12, v9, v18)) )
      ExfReleasePushLock(a1 + 104);
    KeAbPostRelease(a1 + 104);
    if ( (*(_DWORD *)(a1 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v10 + 72));
    return v10;
  }
  return result;
}
