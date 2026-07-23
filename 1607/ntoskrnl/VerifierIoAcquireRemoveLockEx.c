/*
 * XREFs of VerifierIoAcquireRemoveLockEx @ 0x14070DB88
 * Callers:
 *     <none>
 * Callees:
 *     ViRemLockFindSurrogate @ 0x14070DF78 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoAcquireRemoveLockEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 Surrogate; // rax

  if ( ViRemLockInitialized && a5 != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
    return pXdvIoAcquireRemoveLockEx(Surrogate + 16, a2, a3, a4, 120);
  else
    return pXdvIoAcquireRemoveLockEx(a1, a2, a3, a4, a5);
}
