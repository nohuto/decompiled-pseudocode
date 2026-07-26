/*
 * XREFs of ndisGetSetBusConfigSpace @ 0x1C005C20C
 * Callers:
 *     NdisReadPciSlotInformation @ 0x1C005BF50 (NdisReadPciSlotInformation.c)
 *     NdisReadPcmciaAttributeMemory @ 0x1C005BFE0 (NdisReadPcmciaAttributeMemory.c)
 *     NdisWritePciSlotInformation @ 0x1C005C080 (NdisWritePciSlotInformation.c)
 *     NdisWritePcmciaAttributeMemory @ 0x1C005C110 (NdisWritePcmciaAttributeMemory.c)
 *     NdisImmediateReadPciSlotInformation @ 0x1C00F4D40 (NdisImmediateReadPciSlotInformation.c)
 *     NdisImmediateWritePciSlotInformation @ 0x1C00F4DD0 (NdisImmediateWritePciSlotInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisGetSetBusConfigSpace(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  unsigned int v10; // edi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, _QWORD, int); // rax
  __int64 v13; // rcx

  v10 = 0;
  if ( (unsigned __int8)byte_1C008530E >= 4u )
    WPP_SF_q(0x18u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a1);
  if ( a6 && (*(_DWORD *)(a1 + 3736) & 0x40) != 0 || (*(_DWORD *)(a1 + 3736) & 0x80u) != 0 )
    return 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 3744);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 3760);
    if ( v13 )
    {
      if ( a6 )
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 3752);
      v10 = v12(v13, a5, a3, a2, a4);
    }
  }
  if ( (unsigned __int8)byte_1C008530E >= 4u )
    WPP_SF_q(0x19u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a1);
  return v10;
}
