/*
 * XREFs of GreCreateFastMutex @ 0x1C006D420
 * Callers:
 *     HmgCreate @ 0x1C006CE6C (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C00BEC70 (EngCreateFastMutex.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 */

struct _FAST_MUTEX *GreCreateFastMutex()
{
  struct _FAST_MUTEX *v0; // rax
  struct _FAST_MUTEX *v1; // rbx

  v0 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged();
  v1 = v0;
  if ( v0 )
    KeInitializeGuardedMutex(v0);
  return v1;
}
