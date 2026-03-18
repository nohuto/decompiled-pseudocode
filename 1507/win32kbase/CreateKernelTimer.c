/*
 * XREFs of CreateKernelTimer @ 0x1C00A61B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
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
