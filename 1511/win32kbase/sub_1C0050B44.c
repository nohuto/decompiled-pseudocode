/*
 * XREFs of sub_1C0050B44 @ 0x1C0050B44
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0050464 (DrvChangeDisplaySettings.c)
 * Callees:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C00526EC (--0AUTO_TGO@@IEAA@XZ.c)
 */

AUTO_TGO *__fastcall sub_1C0050B44(AUTO_TGO *a1)
{
  AUTO_TGO::AUTO_TGO(a1);
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *(_QWORD *)a1 = `DrvChangeDisplaySettings'::`4'::_AUTO_KM::`vftable';
  return a1;
}
