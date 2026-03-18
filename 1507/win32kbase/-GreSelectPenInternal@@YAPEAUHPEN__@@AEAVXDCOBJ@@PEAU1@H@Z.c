/*
 * XREFs of ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00AF000
 * Callers:
 *     GreSelectPen @ 0x1C00AF3F0 (GreSelectPen.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C005B290 (GreDCSelectPen.c)
 */

__int64 __fastcall GreSelectPenInternal(struct BRUSH ***a1, __int64 a2, int a3)
{
  __int64 v3; // r9

  v3 = 0LL;
  if ( a3
    || (*(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)*a1 + 8) & 0xFFFFFFFE) != 0 )
  {
    return GreDCSelectPen(*a1, a2);
  }
  return v3;
}
