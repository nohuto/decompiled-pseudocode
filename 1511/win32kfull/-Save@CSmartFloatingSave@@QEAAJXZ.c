/*
 * XREFs of ?Save@CSmartFloatingSave@@QEAAJXZ @ 0x1C01E46F8
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C006AFE0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     MagpComposeDesktop @ 0x1C00D22B4 (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01FE00C (MagSetLensContextInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSmartFloatingSave::Save(CSmartFloatingSave *this)
{
  *((_BYTE *)this + 4) = 1;
  return 0LL;
}
