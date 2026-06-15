/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCStreamGroup@@V?$CElementTraits@PEAVCStreamGroup@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140004A5C
 * Callers:
 *     ??1CStreamGroup@@QEAA@XZ @ 0x1400045B0 (--1CStreamGroup@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140004A04 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CStreamGroup *,ATL::CElementTraits<CStreamGroup *>>::RemoveAt(__int64 a1, __int64 *a2)
{
  bool v2; // zf

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (__int64 *)StreamGroupList )
    StreamGroupList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_140055460 )
    qword_140055460 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  *a2 = qword_140055478;
  v2 = qword_140055468-- == 1;
  qword_140055478 = (__int64)a2;
  if ( v2 )
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&StreamGroupList);
}
