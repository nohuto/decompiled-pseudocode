/*
 * XREFs of ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001338C
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012510 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000F450 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18000FAE0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180010814 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveProcess(CApplicationManager *this, struct CProcess *a2)
{
  volatile signed __int32 *v2; // rsi
  const GUID *v4; // r8
  const GUID *v5; // r9
  _QWORD *i; // rdx
  const GUID *v7; // r8
  unsigned int v8; // ebx
  int *v10; // rbx
  UINT32 v11; // [rsp+20h] [rbp-A8h]
  int v12; // [rsp+30h] [rbp-98h] BYREF
  struct CProcess *v13; // [rsp+38h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-88h] BYREF
  char v15; // [rsp+48h] [rbp-80h]
  __int64 v16; // [rsp+50h] [rbp-78h]
  ATL::CAtlException *v17; // [rsp+58h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  const char *v19; // [rsp+80h] [rbp-48h]
  int v20; // [rsp+88h] [rbp-40h]
  int v21; // [rsp+8Ch] [rbp-3Ch]
  struct CProcess **v22; // [rsp+90h] [rbp-38h]
  int v23; // [rsp+98h] [rbp-30h]
  int v24; // [rsp+9Ch] [rbp-2Ch]
  int *v25; // [rsp+A0h] [rbp-28h]
  int v26; // [rsp+A8h] [rbp-20h]
  int v27; // [rsp+ACh] [rbp-1Ch]

  v16 = -2LL;
  v2 = (volatile signed __int32 *)a2;
  v13 = a2;
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = (_QWORD *)*((_QWORD *)this + 14); i && (volatile signed __int32 *)i[2] != v2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    v12 = 0;
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((_QWORD *)this + 14, i);
    }
    catch ( ATL::CAtlException *v17 )
    {
      v10 = (int *)v17;
      if ( *(_DWORD *)v17 == -1073741571 )
        _resetstkoflw();
      v12 = *v10;
      v2 = (volatile signed __int32 *)v13;
    }
    if ( v2 )
    {
      CProcess::CleanupProcessTerminationWatcher((CProcess *)v2, 0);
      CProcess::NotifyPLM((__int64)v2, 1, v7);
      if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      }
    }
  }
  v8 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v12);
      v8 = v12;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v19 = "__FUNC__";
      v20 = 9;
      v21 = 0;
      LODWORD(v13) = 1387;
      v22 = &v13;
      v23 = 4;
      v24 = 0;
      v25 = &v12;
      v26 = 4;
      v27 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v4, v5, v11, &pData);
      v8 = v12;
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
