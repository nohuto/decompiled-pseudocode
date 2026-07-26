/*
 * XREFs of ndisHandleBindNotification @ 0x1C00CC5AC
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00AD7C4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0011BA8 (ndisReferenceMiniportByGuid.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AAD08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisHandleBindNotification(PCUNICODE_STRING SourceString)
{
  wchar_t *v2; // rax
  NTSTATUS v3; // esi
  Ndis::BindRegistry *v4; // rbx
  enum Ndis::ReadBindingsOptions::Flags v5; // r8d
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_Z(0x1Du, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, &SourceString->Length);
  ndisReferenceMiniportByName(SourceString);
  if ( SourceString->Length > 0x10u
    && (v2 = SourceString->Buffer + 8,
        GuidString.Length = SourceString->Length - 16,
        GuidString.Buffer = v2,
        GuidString.MaximumLength = SourceString->MaximumLength - 16,
        v3 = RtlGUIDFromString(&GuidString, &Guid),
        v3 >= 0)
    && (v4 = (Ndis::BindRegistry *)ndisReferenceMiniportByGuid(&Guid, 0x2Fu)) != 0LL )
  {
    Ndis::BindRegistry::Reload(v4, 0LL, v5);
    ndisDereferenceMiniport((__int64)v4);
  }
  else
  {
    v3 = -1073741772;
  }
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_Z(0x1Eu, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, &SourceString->Length);
  return (unsigned int)v3;
}
