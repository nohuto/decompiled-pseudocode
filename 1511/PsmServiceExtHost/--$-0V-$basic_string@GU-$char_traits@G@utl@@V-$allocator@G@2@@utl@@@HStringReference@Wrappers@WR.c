/*
 * XREFs of ??$?0V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@UDummy@Details@23@@Z @ 0x18004F05C
 * Callers:
 *     ?GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180050C18 (-GetTargetAppDisplayName@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$a.c)
 *     ?GetToastXml@EnergyToastMessage@@QEBAJAEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180050F88 (-GetToastXml@EnergyToastMessage@@QEBAJAEAV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800501B8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        const WCHAR **a2)
{
  unsigned __int64 v3; // rax
  const WCHAR *v4; // rdx

  v3 = -1LL;
  hstringHeader[1].Reserved.Reserved1 = 0LL;
  v4 = *a2;
  do
    ++v3;
  while ( v4[v3] );
  if ( v3 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
  }
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, v4, v3 + 1, v3);
  return hstringHeader;
}
