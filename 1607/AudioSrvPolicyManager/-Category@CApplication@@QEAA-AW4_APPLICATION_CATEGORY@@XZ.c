/*
 * XREFs of ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000B40C
 * Callers:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000F450 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x18001461C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800147A0 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180015360 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x1800213D0 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::Category(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // r8d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 4;
  if ( *(_DWORD *)(a1 + 460) )
  {
    v2 = *(_DWORD *)(a1 + 464);
  }
  else
  {
    v3 = *(_QWORD **)(a1 + 64);
    while ( v3 )
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( !*(_DWORD *)(v4 + 416) || *(_QWORD *)(v4 + 360) )
      {
        v5 = *(_DWORD *)(v4 + 456);
        v6 = v5 ? *(_DWORD *)(v4 + 460) : *(_DWORD *)(v4 + 312);
        if ( v6 < v2 )
        {
          if ( v5 )
            v2 = *(_DWORD *)(v4 + 460);
          else
            v2 = *(_DWORD *)(v4 + 312);
        }
      }
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
