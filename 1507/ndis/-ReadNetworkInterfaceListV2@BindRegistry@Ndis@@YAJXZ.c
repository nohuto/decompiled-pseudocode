/*
 * XREFs of ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C009C714
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001D6A4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_Dd @ 0x1C003DC00 (WPP_SF_Dd.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     WPP_SF_Zd @ 0x1C003E040 (WPP_SF_Zd.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C009C4EC (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C009D4F8 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A55D4 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceListV2(Ndis::BindRegistry *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  unsigned int i; // edi
  int SubkeyName; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  const UNICODE_STRING *v8; // rcx
  int v9; // eax
  __int64 *v11; // r8
  struct _GUID Handle; // [rsp+28h] [rbp-59h] BYREF
  GUID Guid; // [rsp+38h] [rbp-49h] BYREF
  wchar_t Dest[64]; // [rsp+48h] [rbp-39h] BYREF

  *(_QWORD *)Handle.Data4 = 0LL;
  v1 = KRegKey::Open(
         (KRegKey *)Handle.Data4,
         8u,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces",
         0LL);
  v2 = v1;
  if ( v1 == -1073741772 )
    goto LABEL_18;
  if ( v1 < 0 )
  {
    if ( (unsigned __int8)byte_1C008531D >= 2u )
      WPP_SF_d(0x11u, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v1);
    goto LABEL_19;
  }
  for ( i = 0; ; ++i )
  {
    *(_QWORD *)&Handle.Data1 = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(Handle.Data4, i, &Handle);
    v2 = SubkeyName;
    if ( SubkeyName == -2147483622 )
      break;
    if ( SubkeyName < 0 )
    {
      if ( (unsigned __int8)byte_1C008531D >= 2u )
        WPP_SF_Dd(v6, v5, i, SubkeyName);
      if ( *(_QWORD *)&Handle.Data1 )
        ExFreePoolWithTag(*(PVOID *)&Handle.Data1, 0x7274534Bu);
      goto LABEL_19;
    }
    v7 = *(__int64 **)&Handle.Data1;
    if ( *(_QWORD *)&Handle.Data1 )
      v8 = (const UNICODE_STRING *)(*(_QWORD *)&Handle.Data1 + 8LL);
    else
      v8 = 0LL;
    if ( RtlGUIDFromString(v8, &Guid) >= 0 )
    {
      if ( (int)RtlStringCchPrintfW(Dest, 60LL, L"%s\\Kernel", v7[2]) >= 0 )
      {
        *(_QWORD *)&Handle.Data1 = 0LL;
        v9 = KRegKey::Open((KRegKey *)&Handle, 1u, Dest, *(void **)Handle.Data4);
        if ( v9 < 0 )
        {
          if ( (unsigned __int8)byte_1C008531D >= 2u )
            WPP_SF_Zd(0x14u, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v7 + 1, v9);
        }
        else
        {
          ndisLoadNetworkInterfaceFromPersistedState(&Guid, &Handle);
        }
        if ( *(_QWORD *)&Handle.Data1 )
          ZwClose(*(HANDLE *)&Handle.Data1);
      }
LABEL_14:
      ExFreePoolWithTag(v7, 0x7274534Bu);
      continue;
    }
    if ( (unsigned __int8)byte_1C008531D >= 3u )
    {
      if ( v7 )
        v11 = v7 + 1;
      else
        v11 = 0LL;
      WPP_SF_Z(0x13u, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v11);
    }
    if ( v7 )
      goto LABEL_14;
  }
  if ( *(_QWORD *)&Handle.Data1 )
    ExFreePoolWithTag(*(PVOID *)&Handle.Data1, 0x7274534Bu);
LABEL_18:
  v2 = 0;
LABEL_19:
  if ( *(_QWORD *)Handle.Data4 )
    ZwClose(*(HANDLE *)Handle.Data4);
  return v2;
}
