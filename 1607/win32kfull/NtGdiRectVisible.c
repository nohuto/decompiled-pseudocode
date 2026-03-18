/*
 * XREFs of NtGdiRectVisible @ 0x1C004C9E0
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C004C688 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1, struct _RECTL *a2)
{
  struct _RECTL v3; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (struct _RECTL *)W32UserProbeAddress;
  v3 = *a2;
  return GreRectVisible(a1, &v3);
}
