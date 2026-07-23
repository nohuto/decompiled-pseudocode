/*
 * XREFs of KiFlushCurrentTbWorker @ 0x14009DFB4
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14015EE60 (KiSetUserTbFlushPending.c)
 */

unsigned __int64 KiFlushCurrentTbWorker()
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h]

  if ( KiFlushPcid )
  {
    v3 = 2uLL;
    _EAX = 1;
    __asm { invpcid eax, [rsp+48h+var_28] }
    result = (unsigned __int64)PsGetCurrentProcess();
    if ( !*(_BYTE *)(result + 703) )
      return KiSetUserTbFlushPending();
  }
  else
  {
    v2 = __readcr4();
    if ( (v2 & 0x20080) != 0 )
    {
      result = v2 ^ 0x80;
      __writecr4(v2 ^ 0x80);
      __writecr4(v2);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  return result;
}
