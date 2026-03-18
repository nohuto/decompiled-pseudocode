/*
 * XREFs of sub_140489880 @ 0x140489880
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_14048A234 @ 0x14048A234 (sub_14048A234.c)
 *     sub_14048A7D0 @ 0x14048A7D0 (sub_14048A7D0.c)
 *     ExGetLicenseTamperState @ 0x140668388 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x140668914 (ExSetLicenseTamperState.c)
 *     sub_14066A178 @ 0x14066A178 (sub_14066A178.c)
 *     sub_14066A360 @ 0x14066A360 (sub_14066A360.c)
 *     sub_1407621B8 @ 0x1407621B8 (sub_1407621B8.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     sub_14048AC7C @ 0x14048AC7C (sub_14048AC7C.c)
 *     sub_140543D40 @ 0x140543D40 (sub_140543D40.c)
 */

__int64 __fastcall sub_140489880(__int64 a1, char a2, char a3)
{
  void *v5; // rcx
  void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
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
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBAF8, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBAF8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1406FBAF8, v7, (ULONG_PTR)&qword_1406FBAF8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( qword_1406FBB68 )
  {
    v18 = *(_DWORD **)qword_1406FBB68;
    v15 = sub_14048AC7C(&v18);
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
      v15 = sub_140543D40(v11);
      if ( v15 >= 0 )
      {
        qword_1406FBB68 = v12;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBAF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBAF8);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBAF8);
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
