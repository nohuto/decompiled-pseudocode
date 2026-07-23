/*
 * XREFs of KeStopProfile @ 0x1401D6C80
 * Callers:
 *     EtwpDisableKernelTrace @ 0x140496B74 (EtwpDisableKernelTrace.c)
 *     ExpProfileDelete @ 0x1406B81F0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1406B85CC (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x14012FFD4 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiStopProfileTarget @ 0x1401D717C (KiStopProfileTarget.c)
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
