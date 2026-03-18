/*
 * XREFs of CreateKernelTimer @ 0x1C00B3ED0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 */

struct _KTIMER *CreateKernelTimer()
{
  struct _KTIMER *v0; // rax
  struct _KTIMER *v1; // rbx

  v0 = (struct _KTIMER *)Win32AllocPoolNonPaged();
  v1 = v0;
  if ( v0 )
    KeInitializeTimerEx(v0, SynchronizationTimer);
  return v1;
}
