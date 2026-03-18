/*
 * XREFs of ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C027B610
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013BD04 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreAngleArc @ 0x1C02925A8 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C0292CA0 (GrePolyBezierTo.c)
 *     GrePolyDraw @ 0x1C0292E74 (GrePolyDraw.c)
 *     GrePolylineTo @ 0x1C02935F0 (GrePolylineTo.c)
 *     NtGdiArcInternal @ 0x1C02A8B20 (NtGdiArcInternal.c)
 * Callees:
 *     <none>
 */

struct _POINTFIX __fastcall EPATHOBJ::ptfxGetCurrent(EPATHOBJ *this, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 72) & 1) != 0 )
    v3 = (_QWORD *)(v2 + 64);
  else
    v3 = (_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v2 + 40) + 20LL) - 1) + 3LL));
  *a2 = *v3;
  return (struct _POINTFIX)a2;
}
