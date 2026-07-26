/*
 * XREFs of ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A15A8
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0017A44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_Dd @ 0x1C0042904 (WPP_SF_Dd.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     WPP_SF_Zd @ 0x1C0042CD8 (WPP_SF_Zd.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A1714 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7F90 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A8060 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceListV2(Ndis::BindRegistry *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  unsigned int i; // edi
  int SubkeyName; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rbx
  const UNICODE_STRING *v8; // rcx
  int v9; // eax
  unsigned __int16 *v11; // r8
  HANDLE Handle; // [rsp+28h] [rbp-59h] BYREF
  HANDLE v13; // [rsp+30h] [rbp-51h] BYREF
  GUID Guid; // [rsp+38h] [rbp-49h] BYREF
  wchar_t Dest[64]; // [rsp+48h] [rbp-39h] BYREF

  v13 = 0LL;
  v1 = KRegKey::Open(
         (KRegKey *)&v13,
         8u,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces",
         0LL);
  v2 = v1;
  if ( v1 == -1073741772 )
    goto LABEL_18;
  if ( v1 < 0 )
  {
    if ( (unsigned __int8)byte_1C00895DD >= 2u )
      WPP_SF_d(0x11u, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v1);
    goto LABEL_19;
  }
  for ( i = 0; ; ++i )
  {
    Handle = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&v13, i, &Handle);
    v2 = SubkeyName;
    if ( SubkeyName == -2147483622 )
      break;
    if ( SubkeyName < 0 )
    {
      if ( (unsigned __int8)byte_1C00895DD >= 2u )
        WPP_SF_Dd(v6, v5, i, SubkeyName);
      if ( Handle )
        ExFreePoolWithTag(Handle, 0x7274534Bu);
      goto LABEL_19;
    }
    v7 = (unsigned __int16 *)Handle;
    if ( Handle )
      v8 = (const UNICODE_STRING *)((char *)Handle + 8);
    else
      v8 = 0LL;
    if ( RtlGUIDFromString(v8, &Guid) >= 0 )
    {
      if ( (int)RtlStringCchPrintfW(Dest, 60LL, L"%s\\Kernel", *((_QWORD *)v7 + 2)) >= 0 )
      {
        Handle = 0LL;
        v9 = KRegKey::Open((KRegKey *)&Handle, 1u, Dest, v13);
        if ( v9 < 0 )
        {
          if ( (unsigned __int8)byte_1C00895DD >= 2u )
            WPP_SF_Zd(0x14u, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v7 + 4, v9);
        }
        else
        {
          ndisLoadNetworkInterfaceFromPersistedState(&Guid, (struct KRegKey *)&Handle);
        }
        if ( Handle )
          ZwClose(Handle);
      }
LABEL_14:
      ExFreePoolWithTag(v7, 0x7274534Bu);
      continue;
    }
    if ( (unsigned __int8)byte_1C00895DD >= 3u )
    {
      if ( v7 )
        v11 = v7 + 4;
      else
        v11 = 0LL;
      WPP_SF_Z(0x13u, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, v11);
    }
    if ( v7 )
      goto LABEL_14;
  }
  if ( Handle )
    ExFreePoolWithTag(Handle, 0x7274534Bu);
LABEL_18:
  v2 = 0;
LABEL_19:
  if ( v13 )
    ZwClose(v13);
  return v2;
}
