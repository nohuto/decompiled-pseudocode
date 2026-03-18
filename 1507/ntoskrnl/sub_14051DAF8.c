/*
 * XREFs of sub_14051DAF8 @ 0x14051DAF8
 * Callers:
 *     sub_14051D560 @ 0x14051D560 (sub_14051D560.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_14051F71C @ 0x14051F71C (sub_14051F71C.c)
 *     sub_1405A9B50 @ 0x1405A9B50 (sub_1405A9B50.c)
 *     sub_1406ECE98 @ 0x1406ECE98 (sub_1406ECE98.c)
 */

__int64 __fastcall sub_14051DAF8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // r9
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  struct _KTHREAD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rbx
  _DWORD *v18; // rbx
  int v19; // edi
  unsigned int v20; // eax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  int v23; // [rsp+30h] [rbp-68h]
  _BYTE v24[8]; // [rsp+38h] [rbp-60h] BYREF
  int v25; // [rsp+40h] [rbp-58h]
  char v26; // [rsp+A0h] [rbp+8h]
  char v27; // [rsp+A8h] [rbp+10h]

  v23 = 0;
  v27 = 0;
  v26 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14077EA20, v5, (ULONG_PTR)&qword_14077EA20, v6);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    v23 = -1073741762;
  }
  else if ( BYTE6(NlsMbCodePageTag) )
  {
    v7 = 0;
    if ( !(_DWORD)NumOfElements )
      v7 = -1073741772;
    v23 = v7;
  }
  else
  {
    v27 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
  KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v27 == 1 && v23 >= 0 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, v8);
    v16 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14077EA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14077EA20, v13, (ULONG_PTR)&qword_14077EA20, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    if ( BYTE6(NlsMbCodePageTag) == 1 )
      goto LABEL_41;
    v18 = off_14077E020;
    if ( off_14077E020 )
    {
      v19 = sub_1405A9B50();
      v23 = v19;
      if ( v19 < 0 )
        goto LABEL_41;
    }
    else
    {
      v18 = Data;
      if ( !Data )
        goto LABEL_40;
      v19 = v23;
    }
    if ( (v18[3] & 1) != 0 )
    {
      dword_14077E0F0 = 2;
      v25 = 2;
      sub_14051D108((__int64)v24, 2, 0, v15);
    }
    v20 = NumOfElements;
    if ( !(_DWORD)NumOfElements )
    {
      LOBYTE(v14) = 1;
      v19 = sub_14051F71C(v18, v14, qword_140784300, 2339LL, &NumOfElements);
      v23 = v19;
      v20 = NumOfElements;
    }
    if ( v19 >= 0 )
    {
      if ( v20 )
      {
        qsort(qword_140784300, v20, 0x10uLL, (int (__cdecl *)(const void *, const void *))PtFuncCompare);
        BYTE6(NlsMbCodePageTag) = 1;
      }
      else
      {
        BYTE6(NlsMbCodePageTag) = 1;
        v23 = -1073741772;
      }
      goto LABEL_41;
    }
    if ( v19 != -1073741789 )
    {
LABEL_41:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14077EA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14077EA20);
      KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_17;
    }
LABEL_40:
    v23 = -1073741762;
    BYTE1(NlsMbCodePageTag) = 1;
    v26 = 1;
    goto LABEL_41;
  }
LABEL_17:
  if ( v26 )
    sub_1406ECE98(&KernelLicensingCacheCorrupt);
  return (unsigned int)v23;
}
