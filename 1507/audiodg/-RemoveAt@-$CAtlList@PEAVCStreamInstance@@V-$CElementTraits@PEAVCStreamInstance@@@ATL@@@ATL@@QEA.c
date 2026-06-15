/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140029BB8
 * Callers:
 *     ?RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x140029C50 (-RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAt(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(_QWORD **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode(v2, a2);
}
