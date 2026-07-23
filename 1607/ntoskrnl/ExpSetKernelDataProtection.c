/*
 * XREFs of ExpSetKernelDataProtection @ 0x140497CC0
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497EE0 (ExpGenuinePolicyCacheProvider.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExGetLicenseTamperState @ 0x1406ADD6C (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1406AE358 (ExSetLicenseTamperState.c)
 *     sub_1406AF988 @ 0x1406AF988 (sub_1406AF988.c)
 *     sub_1406AFAE0 @ 0x1406AFAE0 (sub_1406AFAE0.c)
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     sub_140498310 @ 0x140498310 (sub_140498310.c)
 *     sub_14057702C @ 0x14057702C (sub_14057702C.c)
 */

__int64 __fastcall ExpSetKernelDataProtection(__int64 a1, char a2, char a3)
{
  void *v5; // rcx
  void *v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  _DWORD *PoolWithTag; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-38h]
  PVOID P; // [rsp+28h] [rbp-30h]
  PVOID v17; // [rsp+30h] [rbp-28h]
  _DWORD *v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  if ( !a1 )
  {
    v13 = -1073741811;
    goto LABEL_31;
  }
  if ( (a3 & 1) == 0 && !Data )
  {
    v13 = 0;
    goto LABEL_31;
  }
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747BF0, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140747BF0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140747BF0, v7, (ULONG_PTR)&qword_140747BF0);
  if ( v8 )
    v8[26] |= 1u;
  if ( qword_140747C68 )
  {
    v18 = *(_DWORD **)qword_140747C68;
    v15 = sub_140498310(&v18);
    if ( v15 >= 0 )
    {
      PoolWithTag = v18;
LABEL_11:
      if ( (a2 & 1) != 0 )
        *(_QWORD *)PoolWithTag = *(_QWORD *)a1;
      if ( (a2 & 2) != 0 )
        PoolWithTag[2] = *(_DWORD *)(a1 + 8);
      if ( (a2 & 4) != 0 )
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(a1 + 16);
      if ( (a2 & 8) != 0 )
        *((_QWORD *)PoolWithTag + 3) = *(_QWORD *)(a1 + 24);
      if ( (a2 & 0x10) != 0 )
        *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 32);
      if ( (a2 & 0x20) != 0 )
        *((_BYTE *)PoolWithTag + 40) = *(_BYTE *)(a1 + 40);
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
    P = PoolWithTag;
    if ( PoolWithTag
      && (v11 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u), v12 = (__int64)v11, (v17 = v11) != 0LL) )
    {
      *v11 = PoolWithTag;
      v18 = PoolWithTag;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[2] = 4;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_BYTE *)PoolWithTag + 40) = 1;
      v15 = sub_14057702C(v11);
      if ( v15 >= 0 )
      {
        qword_140747C68 = v12;
        P = 0LL;
        v17 = 0LL;
        goto LABEL_11;
      }
    }
    else
    {
      v15 = -1073741801;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747BF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747BF0);
  KeAbPostRelease((ULONG_PTR)&qword_140747BF0);
  v13 = v15;
  v5 = P;
  v6 = v17;
LABEL_31:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v13;
}
