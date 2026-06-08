/*
 * XREFs of IsCppcThrottleEfficient @ 0x1C0003D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsCppcThrottleEfficient(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( IsHwpSupported
    && *(_BYTE *)(a1 + 68) == 127
    && ((*(_QWORD *)(a1 + 72) - 1906LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0
    && *(_BYTE *)(a1 + 69) == 8 )
  {
    return *(_BYTE *)(a1 + 70) == 16;
  }
  return v1;
}
