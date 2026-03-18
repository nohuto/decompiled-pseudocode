/*
 * XREFs of ?QueryInterface@CD2DFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DFactory::QueryInterface(CD2DFactory *this, const struct _GUID *a2, void **a3)
{
  *a3 = 0LL;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x100u);
  return 2147500033LL;
}
