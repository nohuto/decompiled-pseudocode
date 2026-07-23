/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x1401B7488
 * Callers:
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     DbgkRegisterErrorPort @ 0x14057BE30 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14061A2C4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x14061A2A0 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort();
  return result;
}
