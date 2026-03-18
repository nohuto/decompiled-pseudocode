/*
 * XREFs of DpiMiracastGetDeviceContextFromLuid @ 0x1C00243D0
 * Callers:
 *     DxgkMiracastGetNextChunkInfo @ 0x1C00267C0 (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall DpiMiracastGetDeviceContextFromLuid(__int64 a1, char a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h]

  v7 = a1;
  if ( !a2 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    LODWORD(a1) = v7;
  }
  v3 = (__int64 *)qword_1C0046F90;
  if ( (__int64 *)qword_1C0046F90 == &qword_1C0046F90 )
    goto LABEL_8;
  do
  {
    v4 = v3;
    if ( __PAIR64__(HIDWORD(v7), a1) == v3[12] )
      break;
    v3 = (__int64 *)*v3;
  }
  while ( v3 != &qword_1C0046F90 );
  if ( v3 == &qword_1C0046F90 )
  {
LABEL_8:
    v4 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v4 + 6);
    _InterlockedXor((volatile signed __int32 *)v4 + 7, (unsigned int)v4);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
