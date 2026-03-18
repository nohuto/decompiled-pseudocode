/*
 * XREFs of ?Save@CSmartFloatingSave@@QEAAJXZ @ 0x1C01E4268
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C005D8D0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     MagpComposeDesktop @ 0x1C014A07C (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01FDB8C (MagSetLensContextInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSmartFloatingSave::Save(CSmartFloatingSave *this)
{
  *((_BYTE *)this + 4) = 1;
  return 0LL;
}
