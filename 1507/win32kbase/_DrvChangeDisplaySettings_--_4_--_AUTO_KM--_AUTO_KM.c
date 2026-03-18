/*
 * XREFs of _DrvChangeDisplaySettings_::_4_::_AUTO_KM::_AUTO_KM @ 0x1C001BD2C
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 * Callees:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C001CA34 (--0AUTO_TGO@@IEAA@XZ.c)
 */

AUTO_TGO *__fastcall DrvChangeDisplaySettings_::_4_::_AUTO_KM::_AUTO_KM(AUTO_TGO *a1)
{
  AUTO_TGO::AUTO_TGO(a1);
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *(_QWORD *)a1 = `DrvChangeDisplaySettings'::`4'::_AUTO_KM::`vftable';
  return a1;
}
