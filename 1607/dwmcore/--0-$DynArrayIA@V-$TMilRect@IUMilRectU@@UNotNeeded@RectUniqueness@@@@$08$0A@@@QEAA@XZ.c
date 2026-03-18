/*
 * XREFs of ??0?$DynArrayIA@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$08$0A@@@QEAA@XZ @ 0x1800A32B0
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

_DWORD *__fastcall DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>::DynArrayIA<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>,9,0>(
        _DWORD *a1)
{
  TemporaryConfiguration *v2; // rcx

  v2 = (TemporaryConfiguration *)(a1 + 8);
  a1[6] = 0;
  *(_QWORD *)a1 = v2;
  *((_QWORD *)a1 + 1) = v2;
  a1[4] = 9;
  a1[5] = 9;
  `vector constructor iterator'(
    v2,
    16LL,
    9LL,
    (void (__fastcall *)(TemporaryConfiguration *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  return a1;
}
