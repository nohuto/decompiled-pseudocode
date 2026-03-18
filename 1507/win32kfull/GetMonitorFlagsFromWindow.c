/*
 * XREFs of GetMonitorFlagsFromWindow @ 0x1C0057520
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C0058A40 (UpdateWindowSpriteDPI.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMonitorFlagsFromWindow(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 344);
  if ( v1 == 2 )
    return 32LL;
  result = 64LL;
  if ( v1 == 1 )
    return 128LL;
  return result;
}
