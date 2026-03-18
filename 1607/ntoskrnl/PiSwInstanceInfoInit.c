/*
 * XREFs of PiSwInstanceInfoInit @ 0x1404C7390
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpConcatPWSTR @ 0x140487108 (PnpConcatPWSTR.c)
 *     PiSwInstanceInfoFree @ 0x1404C3AE8 (PiSwInstanceInfoFree.c)
 *     PnpAllocatePWSTR @ 0x140501D70 (PnpAllocatePWSTR.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2uLL);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16)), PWSTR < 0) )
    PiSwInstanceInfoFree((__int64)a1);
  return (unsigned int)PWSTR;
}
