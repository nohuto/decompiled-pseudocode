/*
 * XREFs of VerifierIoReleaseRemoveLockAndWaitEx @ 0x1407434F4
 * Callers:
 *     <none>
 * Callees:
 *     ViRemLockFindSurrogate @ 0x140743758 (ViRemLockFindSurrogate.c)
 */

void __fastcall VerifierIoReleaseRemoveLockAndWaitEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  __int64 Surrogate; // rax
  struct _IO_REMOVE_LOCK *v7; // rcx
  ULONG v8; // r8d

  if ( ViRemLockInitialized && RemlockSize != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
  {
    v7 = (struct _IO_REMOVE_LOCK *)(Surrogate + 16);
    v8 = 120;
  }
  else
  {
    v8 = RemlockSize;
    v7 = RemoveLock;
  }
  pXdvIoReleaseRemoveLockAndWaitEx(v7, Tag, v8);
}
