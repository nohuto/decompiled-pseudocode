/*
 * XREFs of HUBDTX_GetMsOsFeatureDescriptor @ 0x1C001F6E8
 * Callers:
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C0018480 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C0018500 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C0018610 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C00186E0 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C0018F20 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C001AB90 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C001AC10 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetMsOsFeatureDescriptor(__int64 a1, char a2, __int64 a3, __int16 a4, __int64 a5, __int64 a6)
{
  *(_BYTE *)(a1 + 384) = a2 & 3 | 0xC0;
  *(_BYTE *)(a1 + 385) = *(_BYTE *)(a1 + 2036);
  *(_WORD *)(a1 + 390) = a6;
  *(_WORD *)(a1 + 386) = 0;
  *(_WORD *)(a1 + 388) = a4;
  return HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 232,
           (__int64)HUBDTX_ControlTransferComplete,
           a5,
           a6,
           1,
           *(_BYTE *)(a1 + 1496));
}
