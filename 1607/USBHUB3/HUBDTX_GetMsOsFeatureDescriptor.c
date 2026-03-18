/*
 * XREFs of HUBDTX_GetMsOsFeatureDescriptor @ 0x1C00203A8
 * Callers:
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C0018F10 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C0018F90 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C00190A0 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C0019170 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C0019930 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C001B6C0 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C001B740 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x1C0027038 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetMsOsFeatureDescriptor(__int64 a1, char a2, __int64 a3, __int16 a4, __int64 a5, __int64 a6)
{
  char v6; // al

  *(_BYTE *)(a1 + 384) = a2 & 3 | 0xC0;
  v6 = *(_BYTE *)(a1 + 2036);
  *(_WORD *)(a1 + 386) = 0;
  *(_BYTE *)(a1 + 385) = v6;
  *(_WORD *)(a1 + 390) = a6;
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
