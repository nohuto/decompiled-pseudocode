/*
 * XREFs of KiFlushProcessTbWorker @ 0x1401DB9DC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

unsigned __int64 KiFlushProcessTbWorker()
{
  unsigned __int64 result; // rax
  __int128 v1; // [rsp+0h] [rbp-28h]

  if ( KiFlushPcid )
  {
    v1 = 2uLL;
    result = 1LL;
    __asm { invpcid eax, [rsp+28h+var_28] }
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
