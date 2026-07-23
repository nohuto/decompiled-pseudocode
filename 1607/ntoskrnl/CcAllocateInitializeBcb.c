/*
 * XREFs of CcAllocateInitializeBcb @ 0x14006C544
 * Callers:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcAdjustVacbLevelLockCount @ 0x14006C6CC (CcAdjustVacbLevelLockCount.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExDisableResourceBoostLite @ 0x140111E58 (ExDisableResourceBoostLite.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall CcAllocateInitializeBcb(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  char *result; // rax
  signed __int64 v9; // rbx
  char *v10; // rsi
  __int64 v11; // rax
  signed __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt

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
    v13 = KeAbPreAcquire(a1 + 104, 0LL, 0);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 104, v13, a1 + 104);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = *(_QWORD **)(a2 + 24);
    v16 = v10 + 16;
    if ( *v15 != a2 + 16 )
      __fastfail(3u);
    *v16 = a2 + 16;
    *((_QWORD *)v10 + 3) = v15;
    *v15 = v16;
    *(_QWORD *)(a2 + 24) = v16;
    if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(a1, *a3, 1LL);
    _m_prefetchw(v12);
    v17 = *v12;
    if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v9 = v17 - 16;
    if ( (v17 & 2) != 0 || (v18 = *v12, v18 != _InterlockedCompareExchange64(v12, v9, v17)) )
      ExfReleasePushLock(a1 + 104);
    KeAbPostRelease(a1 + 104);
    if ( (*(_DWORD *)(a1 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v10 + 72));
    return v10;
  }
  return result;
}
