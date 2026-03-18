/*
 * XREFs of KeStopProfile @ 0x140204E84
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14054AC78 (EtwpDisableKernelTrace.c)
 *     ExpProfileDelete @ 0x1406F9F24 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1406FA30C (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x140156B40 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiStopProfileTarget @ 0x140205448 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context[26]; // [rsp+20h] [rbp-89h] BYREF

  memset(Context, 0, 0xC8uLL);
  HIDWORD(Context[1]) = KeNumberProcessors_0;
  Context[0] = a1;
  LODWORD(Context[1]) = KeNumberProcessors_0;
  Context[2] = 1310721LL;
  memset(&Context[3], 0, 0xA0uLL);
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget((ULONG_PTR)Context);
  else
    KeIpiGenericCall(KiStopProfileTarget, (ULONG_PTR)Context);
  if ( Context[23] )
    ExFreePoolWithTag((PVOID)Context[23], 0);
  return Context[24];
}
