/*
 * XREFs of PiSwInstanceInfoInit @ 0x1404E4A1C
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     PiSwInstanceInfoFree @ 0x140494E5C (PiSwInstanceInfoFree.c)
 *     PnpConcatPWSTR @ 0x1404E55A0 (PnpConcatPWSTR.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(__int64 a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (char)L"SWD\\");
  if ( PWSTR < 0
    || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0xC8uLL, 0x57706E50u, (PVOID *)(a1 + 8)), PWSTR < 0) )
  {
    PiSwInstanceInfoFree(a1);
  }
  return (unsigned int)PWSTR;
}
