/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180005984 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAVCDuckWorkItem@@XZ @ 0x180009888 (-RemoveHead@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x18000AC50 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180010814 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??1?$CAtlList@PEAVCGainStage@@V?$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@QEAA@XZ @ 0x180010880 (--1-$CAtlList@PEAVCGainStage@@V-$CElementTraits@PEAVCGainStage@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180011AD0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180019190 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18001A7C8 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001D1F0 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DE90 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180023830 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     PickerHostContextManager::_dynamic_atexit_destructor_for__s_PickerHostContextList__ @ 0x180026360 (PickerHostContextManager--_dynamic_atexit_destructor_for__s_PickerHostContextList__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = *v2;
    *v2 = *(_QWORD *)(a1 + 32);
    v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)(a1 + 32) = v2;
    if ( v3 )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = *(_QWORD **)(a1 + 24);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      free(v4);
      v4 = v5;
    }
    while ( v5 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
