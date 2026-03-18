/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14045E458 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14043EA04 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x14044046C (PiDmObjectIsEnumerable.c)
 *     PiDmEnumObjectsWithCallback @ 0x140440A34 (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryEnumObject @ 0x140441774 (PiDqQueryEnumObject.c)
 *     _PnpStringFromGuid @ 0x14045C050 (_PnpStringFromGuid.c)
 *     PiDqQueryUnlock @ 0x14045E710 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14045E768 (PiDqQueryLock.c)
 *     PiDqQueryFreeActiveData @ 0x14045F3C8 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryAppendActionEntry @ 0x14045F450 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14045F498 (PiDqQueryActionQueueEntryCreate.c)
 *     ConstraintEval @ 0x14045F6D0 (ConstraintEval.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // ebx
  wchar_t *v6; // r12
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  unsigned int *v11; // rsi
  bool v12; // sf
  unsigned int *v14; // rsi
  unsigned int j; // r15d
  _DWORD *v16; // r13
  __int128 *v17; // rax
  __int64 v18; // r9
  __int128 v19; // xmm0
  __int64 v20; // rax
  int v21; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  const wchar_t *v24; // rsi
  __int64 v25; // rax
  const wchar_t *i; // r15
  __int64 v27; // rax
  int Object; // eax
  unsigned int *v29; // r15
  __int64 v30; // rax
  char v31; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v33; // [rsp+40h] [rbp-99h] BYREF
  int *v34[7]; // [rsp+48h] [rbp-91h] BYREF
  _BYTE v35[20]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v36; // [rsp+94h] [rbp-45h]
  int v37; // [rsp+9Ch] [rbp-3Dh]
  wchar_t v38[40]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  memset(v35, 0, sizeof(v35));
  LODWORD(v34[0]) = 0;
  v31 = *(_BYTE *)(v2 + 40) & 1;
  EnumObject = 0;
  v6 = 0LL;
  v36 = 0LL;
  v37 = 0;
  memset(&v34[1], 0, 0x30uLL);
  if ( !v31 )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&Resource[1]);
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
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 212));
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( EnumObject >= 0 )
  {
LABEL_2:
    PiDqQueryLock(a2);
    v7 = *(_QWORD *)(a2 + 24);
    v8 = *(_DWORD *)(v7 + 20);
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v24 = *(const wchar_t **)(v7 + 32);
          while ( 2 )
          {
            if ( *v24 )
            {
              v25 = -1LL;
              do
                ++v25;
              while ( v24[v25] );
              for ( i = &v24[v25 + 1]; *i; i += v27 + 1 )
              {
                if ( !wcsicmp(v24, i) )
                  goto LABEL_60;
                v27 = -1LL;
                do
                  ++v27;
                while ( i[v27] );
              }
              Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, (__int64)v24, &P);
              EnumObject = Object;
              if ( Object == -1073741772 )
              {
                EnumObject = 0;
              }
              else
              {
                if ( Object < 0 )
                  goto LABEL_14;
                v29 = (unsigned int *)P;
                if ( PiDmObjectIsEnumerable((ULONG_PTR)P) )
                  EnumObject = PiDqQueryEnumObject((struct _SECURITY_SUBJECT_CONTEXT *)a2, (__int64)v29);
                PiDmObjectRelease(v29);
                P = 0LL;
                if ( EnumObject < 0 )
                {
LABEL_14:
                  PiDqQueryUnlock(a2);
                  if ( EnumObject >= 0 )
                    goto LABEL_15;
                  goto LABEL_66;
                }
              }
LABEL_60:
              v30 = -1LL;
              do
                ++v30;
              while ( v24[v30] );
              v24 += v30 + 1;
              continue;
            }
            break;
          }
        }
        goto LABEL_11;
      }
      v10 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v7 + 24), &P);
      EnumObject = v10;
      if ( v10 == -1073741772 )
      {
LABEL_12:
        EnumObject = PiDqQueryActionQueueEntryCreate(0LL, 0LL, 0LL, &v33);
        if ( EnumObject >= 0 )
        {
          PiDqQueryAppendActionEntry(a2, v33);
          *(_DWORD *)(a2 + 216) |= 0x20u;
        }
        goto LABEL_14;
      }
      if ( v10 < 0 )
        goto LABEL_14;
      v11 = (unsigned int *)P;
      if ( PiDmObjectIsEnumerable((ULONG_PTR)P) )
        EnumObject = PiDqQueryEnumObject((struct _SECURITY_SUBJECT_CONTEXT *)a2, (__int64)v11);
      PiDmObjectRelease(v11);
    }
    else
    {
      v14 = (unsigned int *)&PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 5; ++j )
      {
        v16 = v14;
        if ( *v14 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v17 = (__int128 *)*((_QWORD *)v14 + 1);
          v18 = v14[4];
          v19 = *v17;
          *(_DWORD *)&v35[16] = *((_DWORD *)v17 + 4);
          v20 = *(_QWORD *)(a2 + 24);
          *(_OWORD *)v35 = v19;
          EnumObject = ConstraintEval(*(unsigned int *)(v20 + 80), *(_QWORD *)(v20 + 88), v35, v18, v34);
          if ( EnumObject != -1073741823 )
            break;
        }
        v14 += 8;
      }
      if ( EnumObject < 0 )
      {
        if ( EnumObject != -1073741823 )
          goto LABEL_14;
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(_DWORD *)&Resource[2].ActiveCount,
                       (__int64 (__fastcall *)(unsigned int *, __int64, char *))PiDqEnumQueryObjectsCallback,
                       a2);
        v12 = EnumObject < 0;
        goto LABEL_10;
      }
      if ( LODWORD(v34[5]) != v16[5] )
        goto LABEL_11;
      if ( LODWORD(v34[5]) == 13 )
      {
        EnumObject = PnpStringFromGuid(v34[6], v38);
        if ( EnumObject < 0 )
          goto LABEL_14;
        v6 = v38;
      }
      else if ( LODWORD(v34[5]) == 18 )
      {
        v6 = (wchar_t *)v34[6];
      }
      v21 = PiDmGetObject((unsigned int)v16[6], (__int64)v6, &P);
      EnumObject = v21;
      if ( v21 == -1073741772 )
        goto LABEL_12;
      if ( v21 < 0 )
        goto LABEL_14;
      EnumObject = PiDmListEnumObjectsWithCallback(
                     v16[7],
                     (volatile signed __int64 *)P,
                     PiDqEnumQueryObjectsCallback,
                     a2);
      PiDmObjectRelease((unsigned int *)P);
    }
    v12 = EnumObject < 0;
LABEL_10:
    if ( v12 )
      goto LABEL_14;
LABEL_11:
    if ( EnumObject < 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
LABEL_66:
  PiDqQueryLock(a2);
  *(_DWORD *)(a2 + 216) |= 1u;
  PiDqQueryFreeActiveData(a2);
  PiDqQueryUnlock(a2);
LABEL_15:
  if ( v31 )
  {
    ExReleaseResourceLite(Resource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)EnumObject;
}
