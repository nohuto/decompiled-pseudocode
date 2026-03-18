/*
 * XREFs of sub_14051D108 @ 0x14051D108
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     sub_14051DAF8 @ 0x14051DAF8 (sub_14051DAF8.c)
 *     sub_14051DFA0 @ 0x14051DFA0 (sub_14051DFA0.c)
 *     ExGetLicenseTamperState @ 0x1406EB74C (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1406EBE90 (ExSetLicenseTamperState.c)
 *     sub_1406ED774 @ 0x1406ED774 (sub_1406ED774.c)
 *     sub_1406ED95C @ 0x1406ED95C (sub_1406ED95C.c)
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_14051E44C @ 0x14051E44C (sub_14051E44C.c)
 *     sub_1405BAB54 @ 0x1405BAB54 (sub_1405BAB54.c)
 */

__int64 __fastcall sub_14051D108(__int64 a1, char a2, char a3, __int64 a4)
{
  void *v6; // rcx
  void *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  _DWORD *PoolWithTag; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-38h]
  PVOID P; // [rsp+28h] [rbp-30h]
  PVOID v19; // [rsp+30h] [rbp-28h]
  _DWORD *v20; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  if ( !a1 )
  {
    v15 = -1073741811;
    goto LABEL_31;
  }
  if ( (a3 & 1) == 0 && !Data )
  {
    v15 = 0;
    goto LABEL_31;
  }
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_14077EAF0, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EAF0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_14077EAF0, v8, (ULONG_PTR)&qword_14077EAF0, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( qword_14077EB68 )
  {
    v20 = *(_DWORD **)qword_14077EB68;
    v17 = sub_14051E44C(&v20);
    if ( v17 >= 0 )
    {
      PoolWithTag = v20;
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
      && (v13 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u), v14 = (__int64)v13, (v19 = v13) != 0LL) )
    {
      *v13 = PoolWithTag;
      v20 = PoolWithTag;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[2] = 4;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_BYTE *)PoolWithTag + 40) = 1;
      v17 = sub_1405BAB54(v13);
      if ( v17 >= 0 )
      {
        qword_14077EB68 = v14;
        P = 0LL;
        v19 = 0LL;
        goto LABEL_11;
      }
    }
    else
    {
      v17 = -1073741801;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EAF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EAF0);
  KeAbPostRelease((ULONG_PTR)&qword_14077EAF0);
  v15 = v17;
  v6 = P;
  v7 = v19;
LABEL_31:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v15;
}
