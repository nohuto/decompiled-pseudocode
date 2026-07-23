/*
 * XREFs of VerifierIoReleaseRemoveLockEx @ 0x14070DDA4
 * Callers:
 *     <none>
 * Callees:
 *     ViRemLockFindSurrogate @ 0x14070DF78 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoReleaseRemoveLockEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Surrogate; // rax
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( ViRemLockInitialized && a3 != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
  {
    v7 = Surrogate + 16;
    v8 = 120LL;
  }
  else
  {
    v8 = a3;
    v7 = a1;
  }
  return pXdvIoReleaseRemoveLockEx(v7, a2, v8);
}
