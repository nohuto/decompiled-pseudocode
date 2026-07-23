/*
 * XREFs of SmKmStoreDelete @ 0x1403E57A0
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140002EA4 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessCreateRequest @ 0x1403E517C (SmProcessCreateRequest.c)
 *     SmProcessDeleteRequest @ 0x14069691C (SmProcessDeleteRequest.c)
 * Callees:
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SmKmEtwLogStoreChange @ 0x140697CA4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140697DD0 (SmKmEtwLogStoreStats.c)
 */

__int64 __fastcall SmKmStoreDelete(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rax
  unsigned int v6; // edi
  _QWORD *v7; // r14
  unsigned __int64 *v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // r15
  __int16 v12; // cx
  __int64 v13; // r13
  ULONGLONG *v14; // rax
  ULONGLONG *v15; // r15
  struct _KTHREAD *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // r15
  unsigned int v21; // [rsp+68h] [rbp+10h]

  v3 = a2 >> 10;
  v21 = a2 & 0x3FF;
  v5 = SmKmStoreRefFromStoreIndex(a1, v21);
  v6 = 0;
  v7 = (_QWORD *)v5;
  if ( !v5 )
    return (unsigned int)-1073741735;
  v8 = (unsigned __int64 *)(v5 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v10, (ULONG_PTR)v8);
  if ( v11 )
    v11[26] |= 1u;
  v12 = *((_WORD *)v7 + 16);
  if ( v3 != (v12 & 0x3F) )
    goto LABEL_29;
  v13 = *v7;
  if ( (unsigned __int64)(*v7 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_29;
  if ( !a3 )
  {
LABEL_9:
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, *v7, 7LL);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v7 + 1);
    v14 = SmEtwEnabled(0);
    v15 = v14;
    if ( v14 )
    {
      SmKmEtwLogStoreStats(v14, *v7);
      SmKmEtwLogStoreChange(v15, *v7, &SmEventStoreDelete);
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v13, 2LL);
    *v7 = 0LL;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (_BYTE *)KeAbPreAcquire(a1 + 416, 0LL, 0);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), v17, a1 + 416);
    if ( v18 )
      v18[26] |= 1u;
    if ( *(_DWORD *)(a1 + 432) == v21 )
      *(_DWORD *)(a1 + 432) = -1;
    if ( (*(_DWORD *)(a1 + 424))-- == 1 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 256))(a1, 0LL, 4LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 416), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 416));
    KeAbPostRelease(a1 + 416);
    KeLeaveCriticalRegion();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 256))(a1, v13, 1LL);
    return v6;
  }
  if ( (v12 & 0x40) != 0 )
  {
LABEL_29:
    v6 = -1073741735;
  }
  else
  {
    if ( (v12 & 0x80u) == 0 )
      goto LABEL_9;
    v6 = -1073741790;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v6;
}
