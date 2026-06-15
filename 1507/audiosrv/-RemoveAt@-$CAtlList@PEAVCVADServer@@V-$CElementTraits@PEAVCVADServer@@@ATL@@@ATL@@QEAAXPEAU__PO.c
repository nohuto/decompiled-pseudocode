/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180008F64
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180005290 (AUDIOSERVER_rundown.c)
 *     AudioServerDisconnect @ 0x180009790 (AudioServerDisconnect.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180008F0C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt(__int64 a1, __int64 *a2)
{
  bool v2; // zf

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (__int64 *)g_VADServerList )
    g_VADServerList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_1800E74C8 )
    qword_1800E74C8 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  *a2 = qword_1800E74E0;
  v2 = qword_1800E74D0-- == 1;
  qword_1800E74E0 = (__int64)a2;
  if ( v2 )
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
}
