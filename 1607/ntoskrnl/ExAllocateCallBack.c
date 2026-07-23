/*
 * XREFs of ExAllocateCallBack @ 0x14054D210
 * Callers:
 *     KeRegisterBoundCallback @ 0x1401D28AC (KeRegisterBoundCallback.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14054D184 (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575E94 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdRegisterCallback @ 0x14057D260 (DbgkLkmdRegisterCallback.c)
 *     PsSetLoadImageNotifyRoutine @ 0x14057DC24 (PsSetLoadImageNotifyRoutine.c)
 *     PsEstablishWin32Callouts @ 0x140581884 (PsEstablishWin32Callouts.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
