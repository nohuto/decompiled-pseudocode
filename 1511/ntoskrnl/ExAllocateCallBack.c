/*
 * XREFs of ExAllocateCallBack @ 0x1405308A0
 * Callers:
 *     KeRegisterBoundCallback @ 0x1401C3ED8 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x14053033C (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140530408 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutine @ 0x140530488 (PsSetLoadImageNotifyRoutine.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14053058C (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405306E4 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
