/*
 * XREFs of GetWindowMonitorAdapterLuid @ 0x1C000BDE4
 * Callers:
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AB30 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowMonitorAdapterLuid(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = ValidateHmonitorNoRip(*(_QWORD *)(a1 + 352));
  if ( v4 )
    return (unsigned int)DrvGetWDDMAdapterInfo(*(_QWORD *)(v4 + 160), a2, &v6);
  return v3;
}
