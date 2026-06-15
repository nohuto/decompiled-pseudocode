/*
 * XREFs of ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000D100
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180013DD8 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x18001461C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800147A0 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180015360 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18001662C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180020390 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CApplication::HasBackgroundAudioTask(CApplication *this)
{
  _QWORD *v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)*((_QWORD *)this + 8);
  v3 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[2];
      v2 = (_QWORD *)*v2;
      if ( !*(_DWORD *)(v4 + 416)
        && (*(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 != *(_QWORD *)(v4 + 484)
         || *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 != *(_QWORD *)(v4 + 492)) )
      {
        break;
      }
      if ( !v2 )
        goto LABEL_6;
    }
    v3 = 1;
  }
LABEL_6:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
