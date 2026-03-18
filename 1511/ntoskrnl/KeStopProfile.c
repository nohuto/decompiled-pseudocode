/*
 * XREFs of KeStopProfile @ 0x1401C7E10
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1404B8504 (EtwpDisableKernelTrace.c)
 *     ExpProfileDelete @ 0x140675760 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140675B3C (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x14012568C (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiStopProfileTarget @ 0x1401C8324 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
