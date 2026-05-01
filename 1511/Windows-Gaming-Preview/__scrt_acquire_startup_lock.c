/*
 * XREFs of __scrt_acquire_startup_lock @ 0x180025B18
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800256A8 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x1800257E0 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

char _scrt_acquire_startup_lock()
{
  PVOID StackBase; // rcx
  signed __int64 v1; // rax

  StackBase = NtCurrentTeb()->NtTib.StackBase;
  do
  {
    v1 = _InterlockedCompareExchange64(&_scrt_native_startup_lock, (signed __int64)StackBase, 0LL);
    if ( !v1 )
      return 0;
  }
  while ( StackBase != (PVOID)v1 );
  return 1;
}
