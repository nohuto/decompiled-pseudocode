/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCVolumeStrip@@V?$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@QEAAAEAPEAVCVolumeStrip@@AEAPEAU__POSITION@@@Z @ 0x18002BBE8
 * Callers:
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180001B20 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18002B8D0 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CVolumeStrip *,ATL::CElementTraits<CVolumeStrip *>>::GetNext(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
