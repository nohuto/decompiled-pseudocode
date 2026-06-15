/*
 * XREFs of ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18006DA2C
 * Callers:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005A730 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x18005072C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180064468 (-FreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x18006BFDC (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x18006D9F0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 */

__int64 __fastcall CPolicyConfig::ReleaseAudioSessionPropertyStore(CPolicyConfig *this, const unsigned __int16 *a2)
{
  CPolicyConfig *v2; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  LPCRITICAL_SECTION v13; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+28h] [rbp-20h]
  _QWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = this;
  v2 = g_PolicyConfig;
  v4 = -2147023728;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v13,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_PolicyConfig + 32));
  v6 = (_QWORD *)((char *)v2 + 72);
  v7 = *((_QWORD *)v2 + 11);
  v8 = (_QWORD *)*v6;
  v15 = (_QWORD *)*v6;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v5, &v15);
      if ( CAudioSessionStore::IsEqual((PCNZWCH *)v9, a2) )
        break;
      if ( !--v7 )
        goto LABEL_15;
      v8 = v15;
    }
    v4 = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 40), 0xFFFFFFFF) == 1 )
    {
      if ( !v8 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = *v8;
      if ( v8 == (_QWORD *)*v6 )
        *v6 = v10;
      else
        *(_QWORD *)v8[1] = v10;
      v11 = v8[1];
      if ( v8 == (_QWORD *)v6[1] )
        v6[1] = v11;
      else
        *(_QWORD *)(*v8 + 8LL) = v11;
      ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::FreeNode((__int64)v6, v8);
      CAudioSessionStore::Release((CAudioSessionStore *)v9);
    }
  }
  else
  {
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ReleaseAudioSessionPropertyStore", 4489, -2147023728);
  }
  if ( v14 )
    ATL::CCritSecLock::Unlock(&v13);
  return v4;
}
