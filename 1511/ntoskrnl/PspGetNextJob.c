/*
 * XREFs of PspGetNextJob @ 0x1403E9A68
 * Callers:
 *     PspEnforceLimits @ 0x1403E9998 (PspEnforceLimits.c)
 *     PspGetNextSilo @ 0x1405269DC (PspGetNextSilo.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJobListShared @ 0x1403E9B04 (PspUnlockJobListShared.c)
 *     PspLockJobListShared @ 0x1403E9B3C (PspLockJobListShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v3; // rsi
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  PspLockJobListShared(CurrentThread);
  v4 = (__int64 *)PspJobList;
  if ( Object )
    v4 = (__int64 *)Object[3];
  while ( v4 != &PspJobList )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v3 = v4 - 3;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  PspUnlockJobListShared(CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
