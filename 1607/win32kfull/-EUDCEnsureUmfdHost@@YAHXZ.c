/*
 * XREFs of ?EUDCEnsureUmfdHost@@YAHXZ @ 0x1C02892A0
 * Callers:
 *     GreEnableEUDC @ 0x1C0107E88 (GreEnableEUDC.c)
 *     GreEudcLoadLinkW @ 0x1C028937C (GreEudcLoadLinkW.c)
 * Callees:
 *     ?UseUmfd@@YAHPEBG@Z @ 0x1C002291C (-UseUmfd@@YAHPEBG@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z @ 0x1C02BBEA0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z.c)
 */

_BOOL8 __fastcall EUDCEnsureUmfdHost(const unsigned __int16 *a1)
{
  return !UseUmfd(a1) || UmfdHostLifeTimeManager::EnsureUmfdHost(1);
}
