/*
 * XREFs of ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140001FB4
 * Callers:
 *     ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002310 (-StopStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002530 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140031890 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

struct CStreamInstance *__fastcall CStreamGroup::FindStream(CStreamGroup *this, __int64 a2)
{
  struct CStreamInstance *result; // rax
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 12);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    result = (struct CStreamInstance *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                          (__int64)this,
                                          &v4);
    if ( *((_QWORD *)result + 1) == a2 )
      break;
    if ( !v4 )
      return 0LL;
  }
  return result;
}
