/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14048BEF8 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ConstraintEval @ 0x140489ED0 (ConstraintEval.c)
 *     PiDqQueryUnlock @ 0x14048C1B0 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14048C208 (PiDqQueryLock.c)
 *     PiDqQueryAppendActionEntry @ 0x14048CEA0 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14048CEE8 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryFreeActiveData @ 0x14048D088 (PiDqQueryFreeActiveData.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     PiDqQueryEnumObject @ 0x1404DC1E8 (PiDqQueryEnumObject.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1404E3A48 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1404E4210 (PiDmObjectIsEnumerable.c)
 *     PiDmEnumObjectsWithCallback @ 0x1404E4280 (PiDmEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // ebx
  _BYTE *v6; // r12
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  PVOID v11; // rsi
  bool v12; // sf
  _DWORD *v14; // rsi
  unsigned int j; // r15d
  _DWORD *v16; // r13
  __int128 *v17; // rax
  int v18; // r9d
  __int128 v19; // xmm0
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  const wchar_t *v27; // rsi
  __int64 v28; // rax
  const wchar_t *i; // r15
  __int64 v30; // rax
  int Object; // eax
  PVOID v32; // r15
  __int64 v33; // rax
  char v34; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v37[7]; // [rsp+48h] [rbp-91h] BYREF
  _BYTE v38[20]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v39; // [rsp+94h] [rbp-45h]
  int v40; // [rsp+9Ch] [rbp-3Dh]
  _BYTE v41[80]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  memset(v38, 0, sizeof(v38));
  LODWORD(v37[0]) = 0;
  v34 = *(_BYTE *)(v2 + 40) & 1;
  EnumObject = 0;
  v6 = 0LL;
  v39 = 0LL;
  v40 = 0;
  memset(&v37[1], 0, 0x30uLL);
  if ( !v34 )
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
    if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
      __fastfail(3u);
    *(_QWORD *)a2 = (char *)Resource + 192;
    *(_QWORD *)(a2 + 8) = SpinLock;
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
          v27 = *(const wchar_t **)(v7 + 32);
          while ( 2 )
          {
            if ( *v27 )
            {
              v28 = -1LL;
              do
                ++v28;
              while ( v27[v28] );
              for ( i = &v27[v28 + 1]; *i; i += v30 + 1 )
              {
                if ( !wcsicmp(v27, i) )
                  goto LABEL_57;
                v30 = -1LL;
                do
                  ++v30;
                while ( i[v30] );
              }
              Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, v27, &P);
              EnumObject = Object;
              if ( Object == -1073741772 )
              {
                EnumObject = 0;
              }
              else
              {
                if ( Object < 0 )
                  goto LABEL_14;
                v32 = P;
                if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
                  EnumObject = PiDqQueryEnumObject(a2, v32);
                PiDmObjectRelease(v32);
                P = 0LL;
                if ( EnumObject < 0 )
                {
LABEL_14:
                  PiDqQueryUnlock(a2);
                  if ( EnumObject >= 0 )
                    goto LABEL_15;
                  goto LABEL_65;
                }
              }
LABEL_57:
              v33 = -1LL;
              do
                ++v33;
              while ( v27[v33] );
              v27 += v33 + 1;
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
        EnumObject = PiDqQueryActionQueueEntryCreate(0LL, 0LL, 0LL, &v36);
        if ( EnumObject >= 0 )
        {
          PiDqQueryAppendActionEntry(a2, v36);
          *(_DWORD *)(a2 + 216) |= 0x20u;
        }
        goto LABEL_14;
      }
      if ( v10 < 0 )
        goto LABEL_14;
      v11 = P;
      if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
        EnumObject = PiDqQueryEnumObject(a2, v11);
      PiDmObjectRelease(v11);
    }
    else
    {
      v14 = &PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 5; ++j )
      {
        v16 = v14;
        if ( *v14 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v17 = (__int128 *)*((_QWORD *)v14 + 1);
          v18 = v14[4];
          v19 = *v17;
          *(_DWORD *)&v38[16] = *((_DWORD *)v17 + 4);
          v20 = *(_QWORD *)(a2 + 24);
          *(_OWORD *)v38 = v19;
          EnumObject = ConstraintEval(*(_DWORD *)(v20 + 80), *(_DWORD **)(v20 + 88), (__int64)v38, v18, (__int64)v37);
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
                       *(unsigned int *)&Resource[2].ActiveCount,
                       PiDqEnumQueryObjectsCallback,
                       a2);
        v12 = EnumObject < 0;
        goto LABEL_10;
      }
      if ( LODWORD(v37[5]) != v16[5] )
        goto LABEL_11;
      if ( LODWORD(v37[5]) == 13 )
      {
        EnumObject = PnpStringFromGuid(v37[6], v41);
        if ( EnumObject < 0 )
          goto LABEL_14;
        v6 = v41;
      }
      else if ( LODWORD(v37[5]) == 18 )
      {
        v6 = (_BYTE *)v37[6];
      }
      v26 = PiDmGetObject((unsigned int)v16[6], v6, &P);
      EnumObject = v26;
      if ( v26 == -1073741772 )
        goto LABEL_12;
      if ( v26 < 0 )
        goto LABEL_14;
      EnumObject = PiDmListEnumObjectsWithCallback((unsigned int)v16[7], P, PiDqEnumQueryObjectsCallback, a2);
      PiDmObjectRelease(P);
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
LABEL_65:
  PiDqQueryLock(a2);
  *(_DWORD *)(a2 + 216) |= 1u;
  PiDqQueryFreeActiveData(a2);
  PiDqQueryUnlock(a2);
LABEL_15:
  if ( v34 )
  {
    ExReleaseResourceLite(Resource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
  }
  return (unsigned int)EnumObject;
}
