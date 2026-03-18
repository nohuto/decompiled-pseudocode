/*
 * XREFs of KeStopProfile @ 0x1401D6E54
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1404960E4 (EtwpDisableKernelTrace.c)
 *     ExpProfileDelete @ 0x1406B80B8 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1406B8494 (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x14012FA64 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     KiStopProfileTarget @ 0x1401D7350 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context[26]; // [rsp+20h] [rbp-E8h] BYREF

  memset(Context, 0, 0xC8uLL);
  HIDWORD(Context[1]) = KeNumberProcessors_0;
  Context[0] = a1;
  LODWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[2]) = 1310721;
  memset((char *)&Context[2] + 4, 0, 0xA4uLL);
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget((ULONG_PTR)Context);
  else
    KeIpiGenericCall(KiStopProfileTarget, (ULONG_PTR)Context);
  if ( Context[23] )
    ExFreePoolWithTag((PVOID)Context[23], 0);
  return Context[24];
}
