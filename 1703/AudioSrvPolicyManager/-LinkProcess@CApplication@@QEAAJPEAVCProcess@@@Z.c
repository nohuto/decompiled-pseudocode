/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AB60
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180011548 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18000AE10 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18000FD8C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // rsi
  CApplication *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 result; // rax
  int *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]
  struct CProcess *v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h]

  v12 = a2;
  v2 = a2;
  v3 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)v3 + 138) = *((_DWORD *)v2 + 105);
  v4 = *((_DWORD *)v2 + 106);
  *((_DWORD *)v3 + 139) = v4;
  if ( !v4 )
  {
    *((_DWORD *)v3 + 42) |= 1u;
    *((_DWORD *)v3 + 44) = 2;
    *((_DWORD *)v3 + 71) = 2;
    *((_DWORD *)v3 + 72) = 2;
  }
  if ( !CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 143) = 1;
  v5 = 0;
  try
  {
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (char *)v3 + 72,
      &v12);
  }
  catch ( ATL::CAtlException *v8 )
  {
    v7 = (int *)v8;
    if ( *(_DWORD *)v8 == -1073741571 )
      _o__resetstkoflw();
    v13 = *v7;
    v5 = v13;
    if ( v13 >= 0 )
    {
      v3 = this;
      v2 = v12;
      goto LABEL_8;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, v13);
    }
    AudPolicyLogError("CApplication::LinkProcess", 331, v5);
LABEL_14:
    if ( v10 )
      LeaveCriticalSection(lpCriticalSection);
    result = v5;
  }
LABEL_8:
  *((_QWORD *)v2 + 28) = v3;
  goto LABEL_14;
}
