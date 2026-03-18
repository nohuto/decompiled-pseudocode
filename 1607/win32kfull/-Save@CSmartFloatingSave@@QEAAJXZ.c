/*
 * XREFs of ?Save@CSmartFloatingSave@@QEAAJXZ @ 0x1C01DAFDC
 * Callers:
 *     MagpComposeDesktop @ 0x1C0093C90 (MagpComposeDesktop.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00D5C54 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     MagSetLensContextInformation @ 0x1C01F5668 (MagSetLensContextInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSmartFloatingSave::Save(CSmartFloatingSave *this)
{
  *((_BYTE *)this + 4) = 1;
  return 0LL;
}
