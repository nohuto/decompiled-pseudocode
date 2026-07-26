/*
 * XREFs of WPP_SF_Zd @ 0x1C003E040
 * Callers:
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0049018 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C009C714 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisSetupDeviceStart@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C00E2B38 (-ndisSetupDeviceStart@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00E35D8 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Zd(unsigned __int16 a1, const struct _GUID *a2, __int64 *a3, int a4)
{
  __int64 v4; // r9
  const wchar_t *v5; // rax
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  if ( a3 && a3[1] )
    v4 = *(unsigned __int16 *)a3;
  else
    v4 = 10LL;
  if ( !a3 || (v5 = (const wchar_t *)a3[1]) == 0LL )
    v5 = L"NULL";
  if ( !a3 || !*(_WORD *)a3 )
    a3 = qword_1C00241B0;
  ndisWppFastTraceMessage(a2, a1, a3, 2LL, v5, v4, &v6, 4LL, 0LL);
}
