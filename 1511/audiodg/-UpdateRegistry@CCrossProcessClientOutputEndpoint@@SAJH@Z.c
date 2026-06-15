/*
 * XREFs of ?UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x140039170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::UpdateRegistry(
        ATL::CAtlModule *a1,
        __int64 a2,
        __int64 a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  return ATL::CAtlModule::UpdateRegistryFromResourceS(a1, 0x6Au, (int)a1, a4);
}
