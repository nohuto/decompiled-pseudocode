/*
 * XREFs of ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C
 * Callers:
 *     ExQueryLicenseValueInternal @ 0x14051C4C0 (ExQueryLicenseValueInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     sub_1404960F0 @ 0x1404960F0 (sub_1404960F0.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     sub_140575DE4 @ 0x140575DE4 (sub_140575DE4.c)
 *     sub_1406AF0C0 @ 0x1406AF0C0 (sub_1406AF0C0.c)
 */

__int64 ExpLoadAndSortLicensingCacheDescriptors()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rbx
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  struct _KTHREAD *v8; // rcx
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  _DWORD *v12; // rbx
  int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+30h] [rbp-68h]
  _BYTE v19[8]; // [rsp+38h] [rbp-60h] BYREF
  int v20; // [rsp+40h] [rbp-58h]
  char v21; // [rsp+A0h] [rbp+8h]
  char v22; // [rsp+A8h] [rbp+10h]

  v18 = 0;
  v22 = 0;
  v21 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747B20, v1, (ULONG_PTR)&qword_140747B20);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    v18 = -1073741762;
  }
  else if ( BYTE6(NlsMbCodePageTag) )
  {
    v2 = 0;
    if ( !(_DWORD)NumOfElements )
      v2 = -1073741772;
    v18 = v2;
  }
  else
  {
    v22 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
  KeAbPostRelease((ULONG_PTR)&qword_140747B20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  v6 = v18;
  if ( v18 >= 0 && v22 == 1 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140747B20, v9, (ULONG_PTR)&qword_140747B20);
    if ( v10 )
      v10[26] |= 1u;
    if ( BYTE6(NlsMbCodePageTag) == 1 )
      goto LABEL_39;
    v12 = off_140747028;
    if ( off_140747028 )
    {
      v13 = sub_140575DE4();
      v18 = v13;
      if ( v13 < 0 )
        goto LABEL_39;
    }
    else
    {
      v12 = Data;
      if ( !Data )
        goto LABEL_38;
      v13 = v18;
    }
    if ( (v12[3] & 1) != 0 )
    {
      dword_1407470B4 = 2;
      v20 = 2;
      ExpSetKernelDataProtection((__int64)v19, 2, 0);
    }
    v14 = NumOfElements;
    if ( !(_DWORD)NumOfElements )
    {
      v13 = sub_1404960F0((__int64)v12, 1, qword_1407494C0, 0x923u, (unsigned int *)&NumOfElements);
      v18 = v13;
      v14 = NumOfElements;
    }
    if ( v13 >= 0 )
    {
      if ( v14 )
      {
        qsort(qword_1407494C0, v14, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpLicensingDescriptorCompare);
        BYTE6(NlsMbCodePageTag) = 1;
      }
      else
      {
        BYTE6(NlsMbCodePageTag) = 1;
        v18 = -1073741772;
      }
      goto LABEL_39;
    }
    if ( v13 != -1073741789 )
    {
LABEL_39:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
      KeAbPostRelease((ULONG_PTR)&qword_140747B20);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
      v6 = v18;
      goto LABEL_16;
    }
LABEL_38:
    v18 = -1073741762;
    BYTE1(NlsMbCodePageTag) = 1;
    v21 = 1;
    goto LABEL_39;
  }
LABEL_16:
  if ( v21 )
    sub_1406AF0C0(&KernelLicensingCacheCorrupt);
  return v6;
}
