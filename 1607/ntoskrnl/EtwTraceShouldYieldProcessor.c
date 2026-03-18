/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x1402261BC
 * Callers:
 *     MiGetPageChain @ 0x14003D480 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140042CC0 (MiQueryAddressSpan.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     KeShouldYieldProcessor @ 0x1400956C0 (KeShouldYieldProcessor.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     MiRemoveWorkingSetPages @ 0x1400FE750 (MiRemoveWorkingSetPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceShouldYieldProcessor(int a1, int a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v4[0] = a1;
  v4[1] = a2;
  v5 = v4;
  v7 = 0;
  v4[2] = a3;
  v6 = 12;
  return EtwTraceKernelEvent((int)&v5, 1, 0x24000000u, 3949, 4196866);
}
