/*
 * XREFs of ExFetchLicenseData @ 0x14066820C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  unsigned int *v9; // rdx
  unsigned int v10; // [rsp+70h] [rbp+18h]

  v10 = 0;
  if ( !a3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_1406FBA20, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_1406FBA20, v8, (ULONG_PTR)&qword_1406FBA20);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( BYTE1(NlsMbCodePageTag) )
    goto LABEL_8;
  v9 = (unsigned int *)Data;
  if ( off_1406FB020 )
    v9 = (unsigned int *)off_1406FB020;
  if ( !v9 )
  {
LABEL_8:
    v10 = -1073741595;
  }
  else
  {
    *a3 = *v9;
    if ( a1 && a2 && a2 >= *v9 )
    {
      memmove(a1, v9, *v9);
      if ( a2 >= 0x14 )
        *((_DWORD *)a1 + 3) &= ~1u;
    }
    else
    {
      v10 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1406FBA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1406FBA20);
  KeAbPostRelease((ULONG_PTR)&qword_1406FBA20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
