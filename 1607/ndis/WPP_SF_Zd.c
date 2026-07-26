/*
 * XREFs of WPP_SF_Zd @ 0x1C0042CD8
 * Callers:
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004E1B4 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A15A8 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisSetupDeviceStart@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C00E271C (-ndisSetupDeviceStart@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00E3938 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Zd(unsigned __int16 a1, const struct _GUID *a2, unsigned __int16 *a3, int a4)
{
  int v7; // r9d
  const wchar_t *v8; // rcx
  const wchar_t *v9; // r8
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = a4;
  if ( a3 )
    v7 = *a3;
  else
    v7 = 8;
  if ( a3 )
    v8 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v8 = L"NULL";
  v9 = L"\b";
  if ( a3 )
    v9 = a3;
  ndisWppFastTraceMessage(a2, a1, v9, 2LL, v8, v7, &v10, 4LL, 0LL);
}
