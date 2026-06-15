/*
 * XREFs of ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstanceNew@@_K@Z @ 0x140012C8C
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400117A0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

struct CStreamInstanceNew *__fastcall CStreamGroup::FindStream(CStreamGroup *this, __int64 a2)
{
  struct CStreamInstanceNew *result; // rax
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 12);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    result = (struct CStreamInstanceNew *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                             (__int64)this,
                                             &v4);
    if ( *((_QWORD *)result + 1) == a2 )
      break;
    if ( !v4 )
      return 0LL;
  }
  return result;
}
