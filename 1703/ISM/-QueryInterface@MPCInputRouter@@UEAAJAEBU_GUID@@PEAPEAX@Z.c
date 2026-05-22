/*
 * XREFs of ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084340
 * Callers:
 *     ?QueryInterface@MPCInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085650 (-QueryInterface@MPCInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085660 (-QueryInterface@MPCInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085680 (-QueryInterface@MPCInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085690 (-QueryInterface@MPCInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800856A0 (-QueryInterface@MPCInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800856B0 (-QueryInterface@MPCInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800856C0 (-QueryInterface@MPCInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800856D0 (-QueryInterface@MPCInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCInputRouter::QueryInterface(MPCInputRouter *this, const struct _GUID *a2, void **a3)
{
  return DWMInputRouter::QueryInterface(this, a2, a3);
}
