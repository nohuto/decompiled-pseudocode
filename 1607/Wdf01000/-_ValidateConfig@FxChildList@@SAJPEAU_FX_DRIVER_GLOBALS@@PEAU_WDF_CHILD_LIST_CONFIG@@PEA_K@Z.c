/*
 * XREFs of ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C002CBB4
 * Callers:
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C002CC20 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfChildListCreate @ 0x1C006C0B0 (imp_WdfChildListCreate.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 */

__int64 __fastcall FxChildList::_ValidateConfig(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_CHILD_LIST_CONFIG *Config,
        unsigned __int64 *TotalDescriptionSize)
{
  unsigned __int16 v4; // r9

  if ( !Config )
  {
    v4 = 52;
LABEL_8:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, v4, WPP_FxChildList_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  if ( Config->Size == 96 )
  {
    if ( Config->IdentificationDescriptionSize )
    {
      if ( Config->EvtChildListCreateDevice )
        return FxChildList::_ComputeTotalDescriptionSize(FxDriverGlobals, Config, TotalDescriptionSize);
      v4 = 55;
    }
    else
    {
      v4 = 54;
    }
    goto LABEL_8;
  }
  WPP_IFR_SF_DDd(
    FxDriverGlobals,
    (unsigned __int8)Config,
    0xCu,
    0x35u,
    WPP_FxChildList_cpp_Traceguids,
    96,
    Config->Size,
    -1073741820);
  return 3221225476LL;
}
