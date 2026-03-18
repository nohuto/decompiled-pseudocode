/*
 * XREFs of ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800AF994
 * Callers:
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x1800AF874 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 *     ?CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z @ 0x1800AF89C (-CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18002EAF0 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 */

CImmediateBrushRealizer *__fastcall CImmediateBrushRealizer::CImmediateBrushRealizer(CImmediateBrushRealizer *this)
{
  CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(this);
  *(_QWORD *)this = &CImmediateBrushRealizer::`vftable';
  return this;
}
