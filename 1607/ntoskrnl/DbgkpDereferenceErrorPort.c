/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x1401B75A4
 * Callers:
 *     PspExitProcess @ 0x140460564 (PspExitProcess.c)
 *     DbgkRegisterErrorPort @ 0x14057B984 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14061A210 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x14061A1EC (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort();
  return result;
}
