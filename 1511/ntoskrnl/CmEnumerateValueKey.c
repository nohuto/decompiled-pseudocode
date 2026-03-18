/*
 * XREFs of CmEnumerateValueKey @ 0x140423940
 * Callers:
 *     NtEnumerateValueKey @ 0x140423C60 (NtEnumerateValueKey.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1403F4074 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpQueryKeyValueData @ 0x140422850 (CmpQueryKeyValueData.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x1404C66EC (CmpUpgradeKcbLockToExclusive.c)
 */

__int64 __fastcall CmEnumerateValueKey(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v7; // r15
  char *v8; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int KeyValueData; // esi
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // edi
  int v23; // [rsp+40h] [rbp-58h] BYREF
  int v24; // [rsp+44h] [rbp-54h] BYREF
  int v25; // [rsp+48h] [rbp-50h] BYREF
  char *v26; // [rsp+50h] [rbp-48h] BYREF
  int v27; // [rsp+A0h] [rbp+8h] BYREF
  int v28; // [rsp+B0h] [rbp+18h]

  v28 = a3;
  v6 = -1;
  v7 = (unsigned int)a2;
  v8 = 0LL;
  v27 = -1;
  v23 = -1;
  v25 = -1;
  v26 = 0LL;
  CmpLockRegistry(a1, a2, a3, a4);
  v11 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    if ( CmRmIsKCBDeleted(*(_QWORD *)(a1 + 8), 0LL) )
    {
      v19 = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        v19 = -1073740763;
    }
    else
    {
      v19 = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, &v26);
      if ( v19 >= 0 )
      {
        v8 = v26;
        goto LABEL_3;
      }
    }
    CmpUnlockRegistry();
    return (unsigned int)v19;
  }
LABEL_3:
  CmpLockKcbShared(v11);
  while ( 1 )
  {
    if ( CmRmIsKCBDeleted(v11, (__int64)v8) )
    {
      v22 = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        v22 = -1073740763;
      CmpUnlockKcb((char *)v11);
      CmpUnlockRegistry();
      return v22;
    }
    v12 = *(_QWORD *)(v11 + 32);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 2848), 1u);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v12 + 8))(v12, *(unsigned int *)(v11 + 40), &v27);
    v14 = v13;
    if ( !v13 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 2848));
      goto LABEL_33;
    }
    CmpUpdateKeyNodeAccessBits(v12, v13, *(unsigned int *)(v11 + 40));
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 2848));
    if ( v8 && *(char **)(v11 + 280) == v8 )
    {
      (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v27);
      if ( (unsigned int)v7 < *(_DWORD *)(v11 + 272) )
      {
        v20 = *(unsigned int *)(v11 + 276);
        v24 = -1;
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(v12 + 8))(v12, v20, &v24);
        if ( !v21 )
          goto LABEL_31;
        v6 = *(_DWORD *)(v21 + 4 * v7);
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v12 + 8))(v12, v6, &v23);
        (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v24);
        if ( v16 )
        {
LABEL_11:
          KeyValueData = CmpQueryKeyValueData(v11, v6, v16, v28, a4, a5, (int *)a6);
          (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v23);
        }
        else
        {
          KeyValueData = -1073741670;
        }
        goto LABEL_12;
      }
      goto LABEL_15;
    }
    if ( (unsigned int)v7 >= *(_DWORD *)(v11 + 96) )
    {
      (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v27);
LABEL_15:
      CmpUnlockKcb((char *)v11);
      CmpUnlockRegistry();
      return 2147483674LL;
    }
    if ( (*(_DWORD *)(v11 + 4) & 8) == 0 )
      goto LABEL_9;
    if ( *(struct _KTHREAD **)(v11 + 56) == KeGetCurrentThread() || CmpTryConvertKcbLockSharedToExclusive(v11) )
      break;
    (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v27);
    CmpUpgradeKcbLockToExclusive(v11);
    v8 = v26;
  }
  CmpCleanUpKcbValueCache(v11);
  *(_DWORD *)(v11 + 96) = *(_DWORD *)(v14 + 36);
  *(_QWORD *)(v11 + 104) = *(unsigned int *)(v14 + 40);
LABEL_9:
  (*(void (__fastcall **)(__int64, int *))(v12 + 16))(v12, &v27);
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v11 + 32) + 8LL))(
          *(_QWORD *)(v11 + 32),
          *(unsigned int *)(v11 + 104),
          &v25);
  if ( v15 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v11 + 32) + 8LL))(
            *(_QWORD *)(v11 + 32),
            *(unsigned int *)(v15 + 4 * v7),
            &v23);
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v25);
    if ( v16 )
      goto LABEL_11;
LABEL_31:
    KeyValueData = -1073741670;
LABEL_12:
    CmpUnlockKcb((char *)v11);
    CmpUnlockRegistry();
    return KeyValueData;
  }
LABEL_33:
  CmpUnlockKcb((char *)v11);
  CmpUnlockRegistry();
  return 3221225626LL;
}
