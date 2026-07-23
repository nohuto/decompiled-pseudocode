/*
 * XREFs of ExFetchLicenseData @ 0x1406ADBF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  unsigned int *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+70h] [rbp+18h]

  v13 = 0;
  if ( !a3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747B20, v8, (ULONG_PTR)&qword_140747B20);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( BYTE1(NlsMbCodePageTag) )
    goto LABEL_8;
  v9 = (unsigned int *)Data;
  if ( off_140747028 )
    v9 = (unsigned int *)off_140747028;
  if ( !v9 )
  {
LABEL_8:
    v13 = -1073741595;
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
      v13 = -1073741789;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
  KeAbPostRelease((ULONG_PTR)&qword_140747B20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v13;
}
