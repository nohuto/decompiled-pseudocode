/*
 * XREFs of ExAllocateCallBack @ 0x1405A72A8
 * Callers:
 *     KeRegisterBoundCallback @ 0x140200014 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A6C94 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1405A6D60 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutine @ 0x1405A6F6C (PsSetLoadImageNotifyRoutine.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1405A7070 (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A71BC (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ExAllocateCallBack(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62726243u);
  if ( result )
  {
    *result = 0LL;
    result[1] = a1;
    result[2] = a2;
  }
  return result;
}
