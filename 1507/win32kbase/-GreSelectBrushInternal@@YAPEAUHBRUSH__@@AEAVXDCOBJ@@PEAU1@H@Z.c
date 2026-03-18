/*
 * XREFs of ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00AEFB0
 * Callers:
 *     GreSelectBrush @ 0x1C005AFC0 (GreSelectBrush.c)
 * Callees:
 *     GreDCSelectBrush @ 0x1C005B010 (GreDCSelectBrush.c)
 */

__int64 __fastcall GreSelectBrushInternal(struct XDCOBJ *a1, __int64 a2, int a3)
{
  __int64 v3; // r9

  v3 = 0LL;
  if ( a3
    || (*(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)**(_DWORD **)a1 + 8) & 0xFFFFFFFE) != 0 )
  {
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  }
  return v3;
}
