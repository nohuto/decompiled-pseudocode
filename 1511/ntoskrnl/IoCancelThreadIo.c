/*
 * XREFs of IoCancelThreadIo @ 0x1403F1DC4
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 *     IopDisassociateThreadIrp @ 0x1401B6F8C (IopDisassociateThreadIrp.c)
 */

__int64 __fastcall IoCancelThreadIo(LARGE_INTEGER a1)
{
  void **p_FirstArgument; // rbx
  unsigned __int8 CurrentIrql; // si
  void **i; // rdi
  unsigned int v4; // edi
  unsigned int v5; // ebp
  __int64 result; // rax
  bool v7; // zf
  unsigned int v8; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  Interval = a1;
  p_FirstArgument = &KeGetCurrentThread()[1].FirstArgument;
  if ( *p_FirstArgument != p_FirstArgument )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    for ( i = (void **)*p_FirstArgument; p_FirstArgument != i; i = (void **)*i )
      IoCancelIrp((PIRP)(i - 4));
    v4 = 0;
    Interval.QuadPart = -100000LL;
    v5 = 100 * IopIrpCompletionTimeoutInSeconds;
    __writecr8(CurrentIrql);
    while ( 1 )
    {
      LOBYTE(result) = KeGetCurrentIrql();
      __writecr8(1uLL);
      result = (unsigned __int8)result;
      v7 = *p_FirstArgument == p_FirstArgument;
      __writecr8((unsigned __int8)result);
      if ( v7 )
        break;
      KeDelayExecutionThread(0, 0, &Interval);
      v8 = v4++;
      if ( v8 > v5 )
        IopDisassociateThreadIrp();
    }
  }
  return result;
}
