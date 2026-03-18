/*
 * XREFs of KiFlushCurrentTbWorker @ 0x1400EA0B4
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140154B20 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbWorker(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h]

  if ( KiFlushPcid )
  {
    v7 = 2uLL;
    _EAX = 1;
    __asm { invpcid eax, [rsp+48h+var_28] }
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( !Process->AddressPolicy )
      return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, 0LL, a3);
  }
  else
  {
    v6 = __readcr4();
    if ( (v6 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v6 ^ 0x80);
      __writecr4(v6 ^ 0x80);
      __writecr4(v6);
    }
    else
    {
      result = (struct _KTHREAD *)__readcr3();
      __writecr3((unsigned __int64)result);
    }
  }
  return result;
}
