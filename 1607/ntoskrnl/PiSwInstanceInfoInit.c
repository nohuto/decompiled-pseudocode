/*
 * XREFs of PiSwInstanceInfoInit @ 0x140487C18
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwInstanceInfoFree @ 0x140483EC8 (PiSwInstanceInfoFree.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140512884 (PnpConcatPWSTR.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(__int64 a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (char)L"SWD\\");
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16)), PWSTR < 0) )
    PiSwInstanceInfoFree(a1);
  return (unsigned int)PWSTR;
}
