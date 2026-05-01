/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004920C
 * Callers:
 *     ??$?0V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@UDummy@Details@23@@Z @ 0x1800480AC (--$-0V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@HStringReference@Wrappers@WR.c)
 *     ?GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180049D80 (-GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$a.c)
 *     ?GetToastXml@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18004A0F0 (-GetToastXml@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    RaiseException(StringReference, 1u, 0, 0LL);
    __debugbreak();
  }
}
