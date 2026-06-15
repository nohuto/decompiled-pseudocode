/*
 * XREFs of ?FindStreamInstance@CSystemAudioDeviceBase@@QEAAPEAVCStreamInstance@@_K@Z @ 0x1400299F4
 * Callers:
 *     ?GetStreamOta@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140029AF0 (-GetStreamOta@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioVirtualProtectedOutput@@@Z.c)
 *     ?DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002C520 (-DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D370 (-StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D690 (-StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAAEAPEAVCStreamInstance@@AEAPEAU__POSITION@@@Z @ 0x140029AC4 (-GetNext@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 */

struct CStreamInstance *__fastcall CSystemAudioDeviceBase::FindStreamInstance(CSystemAudioDeviceBase *this, __int64 a2)
{
  struct CStreamInstance *result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  v5 = *((_QWORD *)this + 4);
  if ( !v5 )
  {
LABEL_5:
    v5 = *((_QWORD *)this + 10);
    while ( v5 )
    {
      result = *(struct CStreamInstance **)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                                             this,
                                             &v5);
      if ( *((_QWORD *)result + 2) == a2 )
        return result;
    }
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
    {
      while ( 1 )
      {
        result = *(struct CStreamInstance **)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                                               this,
                                               &v5);
        if ( *((_QWORD *)result + 2) == a2 )
          break;
        if ( !v5 )
          return 0LL;
      }
      return result;
    }
    return 0LL;
  }
  while ( 1 )
  {
    result = *(struct CStreamInstance **)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                                           this,
                                           &v5);
    if ( *((_QWORD *)result + 2) == a2 )
      return result;
    if ( !v5 )
      goto LABEL_5;
  }
}
