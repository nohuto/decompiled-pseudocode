/*
 * XREFs of ?AreActiveResources@CD3DResourceManager@@QEAA_NXZ @ 0x18002832C
 * Callers:
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180028198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CD3DResourceManager::AreActiveResources(CD3DResourceManager **this)
{
  return this[4] != (CD3DResourceManager *)(this + 4)
      || this[6] != (CD3DResourceManager *)(this + 6)
      || this[8] != (CD3DResourceManager *)(this + 8)
      || this[10] != (CD3DResourceManager *)(this + 10);
}
