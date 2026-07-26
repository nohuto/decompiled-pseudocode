/*
 * XREFs of Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AF6C4
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A728C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C001F1DC (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_SZ @ 0x1C0042AC0 (WPP_SF_SZ.c)
 *     WPP_SF_Sd @ 0x1C0042B64 (WPP_SF_Sd.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7EA8 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::LoadNetworkInterfaceString(HANDLE *a1, wchar_t *a2, _WORD *a3)
{
  int v5; // eax
  PVOID v6; // rbx
  unsigned int v7; // edi
  __int16 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // ax
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  v5 = KRegKey::QueryValueString(a1, a2, &P);
  v6 = P;
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C00895DD >= 2u )
      WPP_SF_Sd(0x15u, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, a2, v5);
  }
  else
  {
    v8 = (__int16 *)((char *)P + 8);
    if ( ndisIsValidIfStringParts((const unsigned __int16 *)*((unsigned __int16 *)P + 4), *((unsigned __int16 *)P + 4)) )
    {
      memmove(a3 + 1, *((const void **)v6 + 2), (unsigned int)v10);
      v11 = *v8;
      v7 = 0;
      *a3 = v11;
    }
    else
    {
      if ( (unsigned __int8)byte_1C00895DD >= 2u )
        WPP_SF_SZ(v10, v9, a2, (unsigned __int16 *)v6 + 4);
      v7 = -1073741811;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7274534Bu);
  return v7;
}
