/*
 * XREFs of GetWindowMonitorAdapterLuid @ 0x1C007FA30
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C01019F4 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
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
