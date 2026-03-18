/*
 * XREFs of EtwTraceThreadWorkItem @ 0x14025D6D0
 * Callers:
 *     ExpWorkerThread @ 0x1400316D0 (ExpWorkerThread.c)
 *     IopProcessWorkItem @ 0x140032200 (IopProcessWorkItem.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

struct _KTHREAD *(__fastcall *__fastcall EtwTraceThreadWorkItem(
        struct _KTHREAD *(__fastcall *a1)(__int64 a1),
        unsigned __int16 a2))(__int64 a1)
{
  struct _KTHREAD *(__fastcall *result)(__int64); // rax
  struct _KTHREAD *(__fastcall **v3)(__int64); // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+3Ch] [rbp-1Ch]
  struct _KTHREAD *(__fastcall *v6)(__int64); // [rsp+60h] [rbp+8h] BYREF

  v6 = a1;
  result = IopProcessWorkItem;
  if ( a1 != IopProcessWorkItem )
  {
    v3 = &v6;
    v5 = 0;
    v4 = 8;
    return (struct _KTHREAD *(__fastcall *)(__int64))EtwTraceKernelEvent((int)&v3, 1, 0x48000000u, a2, 273684738);
  }
  return result;
}
