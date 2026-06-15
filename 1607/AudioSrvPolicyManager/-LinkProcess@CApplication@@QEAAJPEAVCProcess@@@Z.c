/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AE50
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18000B288 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18001070C (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // r14
  CApplication *v3; // rbx
  int v4; // eax
  unsigned int v5; // esi
  const GUID *v6; // r8
  const GUID *v7; // r9
  ATL::CAtlException *v9; // rbx
  UINT32 v10; // [rsp+20h] [rbp-B8h]
  int v11; // [rsp+30h] [rbp-A8h] BYREF
  struct CProcess *v12; // [rsp+38h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-98h] BYREF
  char v14; // [rsp+48h] [rbp-90h]
  CApplication *v15; // [rsp+50h] [rbp-88h]
  __int64 v16; // [rsp+58h] [rbp-80h]
  ATL::CAtlException *v17; // [rsp+60h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-68h] BYREF
  const char *v19; // [rsp+90h] [rbp-48h]
  int v20; // [rsp+98h] [rbp-40h]
  int v21; // [rsp+9Ch] [rbp-3Ch]
  struct CProcess **v22; // [rsp+A0h] [rbp-38h]
  int v23; // [rsp+A8h] [rbp-30h]
  int v24; // [rsp+ACh] [rbp-2Ch]
  int *v25; // [rsp+B0h] [rbp-28h]
  int v26; // [rsp+B8h] [rbp-20h]
  int v27; // [rsp+BCh] [rbp-1Ch]

  v16 = -2LL;
  v2 = a2;
  v3 = this;
  v15 = this;
  v12 = a2;
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)v3 + 124) = *((_DWORD *)v2 + 105);
  v4 = *((_DWORD *)v2 + 106);
  *((_DWORD *)v3 + 125) = v4;
  if ( !v4 )
  {
    *((_DWORD *)v3 + 28) |= 1u;
    *((_DWORD *)v3 + 30) = 2;
    *((_DWORD *)v3 + 57) = 2;
    *((_DWORD *)v3 + 58) = 2;
  }
  if ( !CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 129) = 1;
  v11 = 0;
  try
  {
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (char *)v3 + 64,
      &v12);
  }
  catch ( ATL::CAtlException *v17 )
  {
    v9 = v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      _resetstkoflw();
    v11 = *(_DWORD *)v9;
    v3 = v15;
    v2 = v12;
  }
  v5 = v11;
  if ( v11 < 0 || (*((_QWORD *)v2 + 28) = v3, v5 = v11, v11 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v5);
      v5 = v11;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v19 = "__FUNC__";
      v20 = 9;
      v21 = 0;
      LODWORD(v12) = 318;
      v22 = &v12;
      v23 = 4;
      v24 = 0;
      v25 = &v11;
      v26 = 4;
      v27 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v6, v7, v10, &pData);
      v5 = v11;
    }
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
