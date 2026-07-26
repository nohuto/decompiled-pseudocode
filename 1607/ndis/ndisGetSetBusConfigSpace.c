/*
 * XREFs of ndisGetSetBusConfigSpace @ 0x1C005FD7C
 * Callers:
 *     NdisReadPciSlotInformation @ 0x1C005FAC0 (NdisReadPciSlotInformation.c)
 *     NdisReadPcmciaAttributeMemory @ 0x1C005FB50 (NdisReadPcmciaAttributeMemory.c)
 *     NdisWritePciSlotInformation @ 0x1C005FBF0 (NdisWritePciSlotInformation.c)
 *     NdisWritePcmciaAttributeMemory @ 0x1C005FC80 (NdisWritePcmciaAttributeMemory.c)
 *     NdisImmediateReadPciSlotInformation @ 0x1C00F5B50 (NdisImmediateReadPciSlotInformation.c)
 *     NdisImmediateWritePciSlotInformation @ 0x1C00F5BE0 (NdisImmediateWritePciSlotInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisGetSetBusConfigSpace(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  unsigned int v10; // edi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, _QWORD, int); // rax
  __int64 v13; // rcx

  v10 = 0;
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_q(0x18u, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_q(0x19u, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, a1);
  return v10;
}
