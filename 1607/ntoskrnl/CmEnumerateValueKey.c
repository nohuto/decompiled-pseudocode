/*
 * XREFs of CmEnumerateValueKey @ 0x140436E40
 * Callers:
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140401954 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyValueData @ 0x14043F230 (CmpQueryKeyValueData.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x140603F38 (CmpUpgradeKcbLockToExclusive.c)
 */

__int64 __fastcall CmEnumerateValueKey(__int64 a1, unsigned int a2, int a3, void *a4, int a5, __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r14
  ULONG_PTR v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int KeyValueData; // esi
  __int64 v19; // rdx
  unsigned int v21; // ebx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // edi
  _DWORD v27[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v28[2]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v29[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v30[3]; // [rsp+58h] [rbp-28h] BYREF
  int v31; // [rsp+B0h] [rbp+30h] BYREF
  int v32; // [rsp+B4h] [rbp+34h]
  int v33; // [rsp+C0h] [rbp+40h]
  void *Src; // [rsp+C8h] [rbp+48h]

  Src = a4;
  v33 = a3;
  v6 = -1;
  v7 = a2;
  v31 = -1;
  v27[0] = -1;
  v32 = 0;
  v27[1] = 0;
  v29[0] = -1;
  v29[1] = 0;
  v30[0] = 0LL;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
    LODWORD(a4) = (_DWORD)Src;
    a3 = v33;
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(v10 + 58) )
  {
    v21 = CmEnumerateValueFromLayeredKey(a1, v7, a3, (_DWORD)a4, a5, a6);
    CmpUnlockRegistry();
    return v21;
  }
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    goto LABEL_6;
  CmpLockKcbShared(v10);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v22 = -1073741444;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      v22 = -1073740763;
    CmpUnlockKcb((PVOID)v10);
    goto LABEL_33;
  }
  CmpUnlockKcb((PVOID)v10);
  v22 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, v30);
  if ( v22 < 0 )
  {
LABEL_33:
    CmpUnlockRegistry();
    return (unsigned int)v22;
  }
LABEL_6:
  if ( (*(_DWORD *)(v10 + 4) & 0x100000) != 0 )
    *(_DWORD *)(v10 + 60) = CmpLockTableAdd(v10, 0);
  v11 = KeAbPreAcquire(v10 + 40, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 40), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v10 + 40), v11, v10 + 40);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
  while ( 1 )
  {
    v12 = v30[0];
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v30[0]) )
    {
      v26 = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        v26 = -1073740763;
      CmpUnlockKcb((PVOID)v10);
      CmpUnlockRegistry();
      return v26;
    }
    v13 = *(_QWORD *)(v10 + 24);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 2848), 1u);
    v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v13 + 8))(v13, *(unsigned int *)(v10 + 32), &v31);
    v15 = v14;
    if ( !v14 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
LABEL_49:
      CmpUnlockKcb((PVOID)v10);
      CmpUnlockRegistry();
      return 3221225626LL;
    }
    if ( (*(_DWORD *)(v13 + 144) & 0x8001) == 0
      && (*(_BYTE *)(v14 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
      && (unsigned __int8)HvpMarkCellDirty(v13, *(unsigned int *)(v10 + 32)) )
    {
      *(_BYTE *)(v15 + 12) |= CmpAccessBitForPhase;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
    if ( v12 && *(_QWORD *)(v10 + 280) == v12 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v31);
      if ( (unsigned int)v7 < *(_DWORD *)(v10 + 272) )
      {
        v23 = *(unsigned int *)(v10 + 276);
        v28[0] = -1;
        v28[1] = 0;
        v24 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v13 + 8))(v13, v23, v28);
        if ( !v24 )
          goto LABEL_47;
        v6 = *(_DWORD *)(v24 + 4 * v7);
        v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v13 + 8))(v13, v6, v27);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v13 + 16))(v13, v28);
        if ( v17 )
        {
LABEL_22:
          KeyValueData = CmpQueryKeyValueData(v10, v6, v17, v33, Src, a5, a6);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v13 + 16))(v13, v27);
        }
        else
        {
          KeyValueData = -1073741670;
        }
        goto LABEL_23;
      }
LABEL_27:
      CmpUnlockKcb((PVOID)v10);
      CmpUnlockRegistry();
      return 2147483674LL;
    }
    if ( (unsigned int)v7 >= *(_DWORD *)(v10 + 88) )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v31);
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(v10 + 4) & 8) == 0 )
      goto LABEL_20;
    if ( *(struct _KTHREAD **)(v10 + 48) == KeGetCurrentThread() || CmpTryConvertKcbLockSharedToExclusive(v10) )
      break;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v31);
    CmpUpgradeKcbLockToExclusive(v10);
  }
  CmpCleanUpKcbValueCache(v10);
  v25 = *(_DWORD *)(v15 + 36);
  *(_QWORD *)(v10 + 96) = *(unsigned int *)(v15 + 40);
  *(_DWORD *)(v10 + 88) = v25;
LABEL_20:
  (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v31);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v10 + 24) + 8LL))(
          *(_QWORD *)(v10 + 24),
          *(unsigned int *)(v10 + 96),
          v29);
  if ( !v16 )
    goto LABEL_49;
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v10 + 24) + 8LL))(
          *(_QWORD *)(v10 + 24),
          *(unsigned int *)(v16 + 4 * v7),
          v27);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v10 + 24) + 16LL))(*(_QWORD *)(v10 + 24), v29);
  if ( v17 )
    goto LABEL_22;
LABEL_47:
  KeyValueData = -1073741670;
LABEL_23:
  CmpUnlockKcb((PVOID)v10);
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite(&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v19) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v19);
  }
  return KeyValueData;
}
