/*
 * XREFs of ??0CVolumeUnit@@QEAA@XZ @ 0x180067E40
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x18006E890 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18006F158 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180067CF0 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x180067D6C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 */

CVolumeUnit *__fastcall CVolumeUnit::CVolumeUnit(CVolumeUnit *this, __int64 a2)
{
  CVolumeUnit::SetDBRange((__int64)this, a2, -96.0, 0.0, SLODWORD(FLOAT_1_5));
  CVolumeUnit::SetWiper(this, 0.0);
  return this;
}
