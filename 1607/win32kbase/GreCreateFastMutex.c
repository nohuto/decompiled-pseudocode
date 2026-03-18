/*
 * XREFs of GreCreateFastMutex @ 0x1C0053C9C
 * Callers:
 *     HmgCreate @ 0x1C00533A4 (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C00CA940 (EngCreateFastMutex.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
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
