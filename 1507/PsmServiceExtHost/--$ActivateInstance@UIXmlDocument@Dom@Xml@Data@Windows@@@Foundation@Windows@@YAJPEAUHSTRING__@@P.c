/*
 * XREFs of ??$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIXmlDocument@Dom@Xml@Data@1@@Z @ 0x18004810C
 * Callers:
 *     ?GetToastXml@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18004A0F0 (-GetToastXml@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Data::Xml::Dom::IXmlDocument>(__int64 a1, _QWORD *a2)
{
  int v3; // esi
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  return (unsigned int)v3;
}
