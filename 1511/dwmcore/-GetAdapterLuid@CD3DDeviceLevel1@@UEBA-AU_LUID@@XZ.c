/*
 * XREFs of ?GetAdapterLuid@CD3DDeviceLevel1@@UEBA?AU_LUID@@XZ @ 0x180024500
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD3DDeviceLevel1::GetAdapterLuid(CD3DDeviceLevel1 *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 73);
  return (struct _LUID)a2;
}
