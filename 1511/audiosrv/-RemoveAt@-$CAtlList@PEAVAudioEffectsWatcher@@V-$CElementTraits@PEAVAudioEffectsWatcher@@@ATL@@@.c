/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800314B8
 * Callers:
 *     s_afxCloseAudioEffectsWatcher @ 0x180030A30 (s_afxCloseAudioEffectsWatcher.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180066524 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180031460 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::RemoveAt(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v3; // rax
  bool v4; // zf

  v2 = a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (__int64 *)*a1 )
    a1 = (__int64 *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == (__int64 *)v2[1] )
    v2[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  *a2 = v2[4];
  v4 = v2[2]-- == 1;
  v2[4] = (__int64)a2;
  if ( v4 )
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(v2);
}
