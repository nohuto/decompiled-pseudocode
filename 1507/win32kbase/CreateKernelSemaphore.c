/*
 * XREFs of CreateKernelSemaphore @ 0x1C007B838
 * Callers:
 *     DriverEntry @ 0x1C01372C0 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 */

struct _KSEMAPHORE *CreateKernelSemaphore()
{
  struct _KSEMAPHORE *v0; // rax
  struct _KSEMAPHORE *v1; // rbx

  v0 = (struct _KSEMAPHORE *)Win32AllocPoolNonPaged();
  v1 = v0;
  if ( v0 )
    KeInitializeSemaphore(v0, 0, 0x7FFFFFFF);
  return v1;
}
