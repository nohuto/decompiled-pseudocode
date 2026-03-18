/*
 * XREFs of CreateKernelSemaphore @ 0x1C0067CA0
 * Callers:
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 */

struct _KSEMAPHORE *__fastcall CreateKernelSemaphore(LONG Count, LONG Limit)
{
  struct _KSEMAPHORE *v4; // rax
  struct _KSEMAPHORE *v5; // rbx

  v4 = (struct _KSEMAPHORE *)Win32AllocPoolNonPaged();
  v5 = v4;
  if ( v4 )
    KeInitializeSemaphore(v4, Count, Limit);
  return v5;
}
