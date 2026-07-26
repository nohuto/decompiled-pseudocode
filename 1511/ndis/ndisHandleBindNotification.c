/*
 * XREFs of ndisHandleBindNotification @ 0x1C00C6B0C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00936F0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0013D88 (ndisReferenceMiniportByGuid.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisHandleBindNotification(__int64 *SourceString)
{
  wchar_t *v2; // rax
  NTSTATUS v3; // esi
  Ndis::BindRegistry *v4; // rbx
  enum Ndis::ReadBindingsOptions::Flags v5; // r8d
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_Z(0x1Du, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, SourceString);
  ndisReferenceMiniportByName((PCUNICODE_STRING)SourceString);
  if ( *(_WORD *)SourceString > 0x10u
    && (v2 = (wchar_t *)(SourceString[1] + 16),
        GuidString.Length = *(_WORD *)SourceString - 16,
        GuidString.Buffer = v2,
        GuidString.MaximumLength = *((_WORD *)SourceString + 1) - 16,
        v3 = RtlGUIDFromString(&GuidString, &Guid),
        v3 >= 0)
    && (v4 = (Ndis::BindRegistry *)ndisReferenceMiniportByGuid(&Guid)) != 0LL )
  {
    Ndis::BindRegistry::Reload(v4, 0LL, v5);
    ndisDereferenceMiniport((__int64)v4, 0x2Du);
  }
  else
  {
    v3 = -1073741772;
  }
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_Z(0x1Eu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, SourceString);
  return (unsigned int)v3;
}
