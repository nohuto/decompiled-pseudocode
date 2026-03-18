/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1404420E4 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140438E44 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiDmObjectIsEnumerable @ 0x14043BBF4 (PiDmObjectIsEnumerable.c)
 *     PiDmEnumObjectsWithCallback @ 0x14043BDF4 (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryEnumObject @ 0x14043E924 (PiDqQueryEnumObject.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     PiDqQueryAppendActionEntry @ 0x1404407A4 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1404407EC (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryUnlock @ 0x14044239C (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x140442428 (PiDqQueryLock.c)
 *     PiDqQueryFreeActiveData @ 0x14053D550 (PiDqQueryFreeActiveData.c)
 *     ConstraintEval @ 0x140547464 (ConstraintEval.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // ebx
  wchar_t *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v16; // rsi
  bool v17; // sf
  unsigned int *v19; // rsi
  unsigned int i; // r14d
  _DWORD *v21; // r13
  __int128 *v22; // rax
  __int64 v23; // r9
  __int128 v24; // xmm0
  __int64 v25; // rax
  int Object; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int8 CurrentIrql; // r13
  PERESOURCE *SpinLock; // rcx
  unsigned __int8 OwnerThread; // r14
  signed __int32 v34; // eax
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  const wchar_t *v37; // rsi
  __int64 v38; // rax
  const wchar_t *j; // r14
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  char v47; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 *v49; // [rsp+40h] [rbp-99h] BYREF
  int *v50[7]; // [rsp+48h] [rbp-91h] BYREF
  _BYTE v51[20]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v52; // [rsp+94h] [rbp-45h]
  int v53; // [rsp+9Ch] [rbp-3Dh]
  wchar_t v54[40]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  memset(v51, 0, sizeof(v51));
  LODWORD(v50[0]) = 0;
  v47 = *(_BYTE *)(v2 + 40) & 1;
  EnumObject = 0;
  v6 = 0LL;
  v52 = 0LL;
  v53 = 0;
  memset(&v50[1], 0, 0x30uLL);
  if ( v47 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(Resource, 1u);
    v29 = KeAbPreAcquire((ULONG_PTR)&Resource[1], 0LL, 0LL, v28);
    v30 = v29;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&Resource[1], 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&Resource[1], v29);
    if ( v30 )
      *(_BYTE *)(v30 + 26) |= 1u;
    Resource[1].SystemResourcesList.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    LODWORD(Resource[1].OwnerEntry.OwnerThread) = CurrentIrql;
    if ( (HIDWORD(Resource[2].OwnerTable) & 2) != 0 )
    {
      EnumObject = -1073741670;
    }
    else
    {
      SpinLock = (PERESOURCE *)Resource[1].SpinLock;
      *(_QWORD *)a2 = (char *)Resource + 192;
      *(_QWORD *)(a2 + 8) = SpinLock;
      if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
        __fastfail(3u);
      *SpinLock = (PERESOURCE)a2;
      Resource[1].SpinLock = a2;
      ++LODWORD(Resource[2].OwnerTable);
      _InterlockedAdd((volatile signed __int32 *)(a2 + 212), 1u);
    }
    OwnerThread = Resource[1].OwnerEntry.OwnerThread;
    Resource[1].SystemResourcesList.Blink = 0LL;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)&Resource[1], 1, 0);
    if ( v34 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&Resource[1], v34);
    __writecr8(OwnerThread);
    KeAbPostRelease((ULONG_PTR)&Resource[1]);
    if ( EnumObject < 0 )
      goto LABEL_74;
  }
  PiDqQueryLock(a2, v7, v8, v9);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *(_DWORD *)(v10 + 20);
  if ( !v11 )
  {
    v19 = (unsigned int *)&PiDqQueryConstraintData;
    EnumObject = -1073741823;
    for ( i = 0; i < 5; ++i )
    {
      v21 = v19;
      if ( *v19 == *(_DWORD *)&Resource[2].ActiveCount )
      {
        v22 = (__int128 *)*((_QWORD *)v19 + 1);
        v23 = v19[4];
        v24 = *v22;
        *(_DWORD *)&v51[16] = *((_DWORD *)v22 + 4);
        v25 = *(_QWORD *)(a2 + 24);
        *(_OWORD *)v51 = v24;
        EnumObject = ConstraintEval(*(unsigned int *)(v25 + 80), *(_QWORD *)(v25 + 88), v51, v23, v50);
        if ( EnumObject != -1073741823 )
          break;
      }
      v19 += 8;
    }
    if ( EnumObject < 0 )
    {
      if ( EnumObject != -1073741823 )
        goto LABEL_14;
      EnumObject = PiDmEnumObjectsWithCallback(
                     *(_DWORD *)&Resource[2].ActiveCount,
                     (__int64 (__fastcall *)(unsigned int *, __int64, _BYTE *))PiDqEnumQueryObjectsCallback,
                     a2);
      v17 = EnumObject < 0;
      goto LABEL_10;
    }
    if ( LODWORD(v50[5]) != v21[5] )
      goto LABEL_11;
    if ( LODWORD(v50[5]) == 13 )
    {
      EnumObject = PnpStringFromGuid(v50[6], v54);
      if ( EnumObject < 0 )
        goto LABEL_14;
      v6 = v54;
    }
    else if ( LODWORD(v50[5]) == 18 )
    {
      v6 = (wchar_t *)v50[6];
    }
    Object = PiDmGetObject((unsigned int)v21[6], (__int64)v6, &P);
    EnumObject = Object;
    if ( Object == -1073741772 )
      goto LABEL_12;
    if ( Object < 0 )
      goto LABEL_14;
    EnumObject = PiDmListEnumObjectsWithCallback(v21[7], (__int64 *)P, PiDqEnumQueryObjectsCallback, a2);
    PiDmObjectRelease((unsigned int *)P);
LABEL_9:
    v17 = EnumObject < 0;
LABEL_10:
    if ( v17 )
      goto LABEL_14;
LABEL_11:
    if ( EnumObject < 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v37 = *(const wchar_t **)(v10 + 32);
      if ( *v37 )
      {
        while ( 2 )
        {
          v38 = -1LL;
          do
            ++v38;
          while ( v37[v38] );
          for ( j = &v37[v38 + 1]; *j; j += v40 + 1 )
          {
            if ( !wcsicmp(v37, j) )
              goto LABEL_69;
            v40 = -1LL;
            do
              ++v40;
            while ( j[v40] );
          }
          v41 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, (__int64)v37, &P);
          EnumObject = v41;
          if ( v41 == -1073741772 )
          {
            EnumObject = 0;
          }
          else
          {
            if ( v41 < 0 )
              goto LABEL_14;
            v44 = (unsigned int *)P;
            if ( PiDmObjectIsEnumerable((ULONG_PTR)P, v10, v42, v43) )
              EnumObject = PiDqQueryEnumObject((_QWORD *)a2, (__int64)v44);
            PiDmObjectRelease(v44);
            P = 0LL;
            if ( EnumObject < 0 )
              goto LABEL_14;
          }
LABEL_69:
          v45 = -1LL;
          do
            ++v45;
          while ( v37[v45] );
          v37 += v45 + 1;
          if ( *v37 )
            continue;
          break;
        }
      }
    }
    goto LABEL_11;
  }
  v13 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v10 + 24), &P);
  EnumObject = v13;
  if ( v13 != -1073741772 )
  {
    if ( v13 < 0 )
      goto LABEL_14;
    v16 = (unsigned int *)P;
    if ( PiDmObjectIsEnumerable((ULONG_PTR)P, v10, v14, v15) )
      EnumObject = PiDqQueryEnumObject((_QWORD *)a2, (__int64)v16);
    PiDmObjectRelease(v16);
    goto LABEL_9;
  }
LABEL_12:
  EnumObject = PiDqQueryActionQueueEntryCreate(0, 0LL, 0LL, (__int64)&v49);
  if ( EnumObject >= 0 )
  {
    PiDqQueryAppendActionEntry(a2, v49);
    *(_DWORD *)(a2 + 216) |= 0x20u;
  }
LABEL_14:
  PiDqQueryUnlock(a2, v10);
  if ( EnumObject < 0 )
  {
LABEL_74:
    PiDqQueryLock(a2, v7, v8, v9);
    *(_DWORD *)(a2 + 216) |= 1u;
    PiDqQueryFreeActiveData(a2);
    PiDqQueryUnlock(a2, v46);
  }
  if ( v47 )
  {
    ExReleaseResourceLite(Resource);
    v35 = KeGetCurrentThread();
    v36 = v35->KernelApcDisable + 1;
    v35->KernelApcDisable = v36;
    if ( !v36
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
      && !v35->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)EnumObject;
}
