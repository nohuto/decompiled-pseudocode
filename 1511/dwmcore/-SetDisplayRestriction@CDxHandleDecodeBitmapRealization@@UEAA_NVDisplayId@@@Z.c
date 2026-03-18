/*
 * XREFs of ?SetDisplayRestriction@CDxHandleDecodeBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18015EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleDecodeBitmapRealization::SetDisplayRestriction(__int64 a1, int a2)
{
  bool v2; // zf

  v2 = *(_DWORD *)(a1 + 464) == a2;
  *(_DWORD *)(a1 + 464) = a2;
  return !v2;
}
