/*
 * XREFs of ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800AC534
 * Callers:
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x1800AC364 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 *     ?CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z @ 0x1800AC38C (-CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18008A5FC (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 */

CImmediateBrushRealizer *__fastcall CImmediateBrushRealizer::CImmediateBrushRealizer(CImmediateBrushRealizer *this)
{
  CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(this);
  *(_QWORD *)this = &CImmediateBrushRealizer::`vftable';
  return this;
}
