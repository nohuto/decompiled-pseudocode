/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x140225FE8
 * Callers:
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140042840 (MiQueryAddressSpan.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
