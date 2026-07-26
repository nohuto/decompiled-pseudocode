/*
 * XREFs of ndisHandleBindNotification @ 0x1C00B3678
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0099308 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByGuid @ 0x1C000FE64 (ndisReferenceMiniportByGuid.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C00E8720 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisHandleBindNotification(__int64 *SourceString)
{
  wchar_t *v3; // rax
  NTSTATUS v4; // esi
  Ndis::BindRegistry *v5; // rbx
  enum Ndis::ReadBindingsOptions::Flags v6; // r8d
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_Z(0x1Du, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, SourceString);
  ndisReferenceMiniportByName((PCUNICODE_STRING)SourceString);
  if ( *(_WORD *)SourceString > 0x10u
    && (v3 = (wchar_t *)(SourceString[1] + 16),
        GuidString.Length = *(_WORD *)SourceString - 16,
        GuidString.Buffer = v3,
        GuidString.MaximumLength = *((_WORD *)SourceString + 1) - 16,
        v4 = RtlGUIDFromString(&GuidString, &Guid),
        v4 >= 0)
    && (v5 = (Ndis::BindRegistry *)ndisReferenceMiniportByGuid(&Guid, 45)) != 0LL )
  {
    Ndis::BindRegistry::Reload(v5, 0LL, v6);
    ndisDereferenceMiniport((__int64)v5, 0x2Du);
  }
  else
  {
    v4 = -1073741772;
  }
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_Z(0x1Eu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, SourceString);
  return (unsigned int)v4;
}
