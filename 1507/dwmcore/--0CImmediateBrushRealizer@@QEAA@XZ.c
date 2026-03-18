/*
 * XREFs of ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800842A0
 * Callers:
 *     ?CreateNullBrush@CBrushRealizer@@SAJPEAPEAV1@@Z @ 0x18005E9CC (-CreateNullBrush@CBrushRealizer@@SAJPEAPEAV1@@Z.c)
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x180085114 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 * Callees:
 *     ??0CBrushRealizer@@IEAA@XZ @ 0x1800814C4 (--0CBrushRealizer@@IEAA@XZ.c)
 */

CImmediateBrushRealizer *__fastcall CImmediateBrushRealizer::CImmediateBrushRealizer(CImmediateBrushRealizer *this)
{
  CBrushRealizer::CBrushRealizer(this);
  *(_QWORD *)this = &CImmediateBrushRealizer::`vftable';
  return this;
}
