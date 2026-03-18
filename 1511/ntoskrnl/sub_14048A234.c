/*
 * XREFs of sub_14048A234 @ 0x14048A234
 * Callers:
 *     sub_140489CE0 @ 0x140489CE0 (sub_140489CE0.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     sub_140488708 @ 0x140488708 (sub_140488708.c)
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_14052ECEC @ 0x14052ECEC (sub_14052ECEC.c)
 *     sub_140669904 @ 0x140669904 (sub_140669904.c)
 */

__int64 sub_14048A234()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rbx
  int v2; // ecx
  unsigned int v3; // ebx
  struct _KTHREAD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v9; // rbx
  int v10; // edi
  unsigned int v11; // eax
  int v12; // [rsp+30h] [rbp-68h]
  _BYTE v13[8]; // [rsp+38h] [rbp-60h] BYREF
  int v14; // [rsp+40h] [rbp-58h]
  char v15; // [rsp+A0h] [rbp+8h]
  char v16; // [rsp+A8h] [rbp+10h]

  v12 = 0;
  v16 = 0;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBA20, v1, (ULONG_PTR)&qword_1406FBA20);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    v12 = -1073741762;
  }
  else if ( BYTE6(NlsMbCodePageTag) )
  {
    v2 = 0;
    if ( !(_DWORD)NumOfElements )
      v2 = -1073741772;
    v12 = v2;
  }
  else
  {
    v16 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v3 = v12;
  if ( v12 >= 0 && v16 == 1 )
  {
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1406FBA20, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1406FBA20, v6, (ULONG_PTR)&qword_1406FBA20);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    if ( BYTE6(NlsMbCodePageTag) == 1 )
      goto LABEL_39;
    v9 = off_1406FB020;
    if ( off_1406FB020 )
    {
      v10 = sub_14052ECEC();
      v12 = v10;
      if ( v10 < 0 )
        goto LABEL_39;
    }
    else
    {
      v9 = Data;
      if ( !Data )
        goto LABEL_38;
      v10 = v12;
    }
    if ( (v9[3] & 1) != 0 )
    {
      dword_1406FB0F4 = 2;
      v14 = 2;
      sub_140489880((__int64)v13, 2, 0);
    }
    v11 = NumOfElements;
    if ( !(_DWORD)NumOfElements )
    {
      v10 = sub_140488708((__int64)v9, 1, qword_140701300, 0x923u, (unsigned int *)&NumOfElements);
      v12 = v10;
      v11 = NumOfElements;
    }
    if ( v10 >= 0 )
    {
      if ( v11 )
      {
        qsort(qword_140701300, v11, 0x10uLL, (int (__cdecl *)(const void *, const void *))PtFuncCompare);
        BYTE6(NlsMbCodePageTag) = 1;
      }
      else
      {
        BYTE6(NlsMbCodePageTag) = 1;
        v12 = -1073741772;
      }
      goto LABEL_39;
    }
    if ( v10 != -1073741789 )
    {
LABEL_39:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1406FBA20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1406FBA20);
      KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v3 = v12;
      goto LABEL_16;
    }
LABEL_38:
    v12 = -1073741762;
    BYTE1(NlsMbCodePageTag) = 1;
    v15 = 1;
    goto LABEL_39;
  }
LABEL_16:
  if ( v15 )
    sub_140669904(&KernelLicensingCacheCorrupt);
  return v3;
}
