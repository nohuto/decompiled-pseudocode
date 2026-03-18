/*
 * XREFs of ?SetDisplayId@CDxHandleYUVBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x1801913E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::SetDisplayId(__int64 a1, int a2)
{
  bool v2; // zf

  v2 = *(_DWORD *)(a1 + 432) == a2;
  *(_DWORD *)(a1 + 432) = a2;
  return !v2;
}
