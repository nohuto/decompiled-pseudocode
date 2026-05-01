/*
 * XREFs of __scrt_release_startup_lock @ 0x180025D90
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800257D8 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x180025910 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _scrt_release_startup_lock(char a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return _InterlockedExchange64(&_scrt_native_startup_lock, 0LL);
  return result;
}
