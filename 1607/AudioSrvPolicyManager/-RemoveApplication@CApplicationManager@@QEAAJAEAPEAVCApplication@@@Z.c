/*
 * XREFs of ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x180013A04
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180010814 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveApplication(CApplicationManager *this, struct CApplication **a2)
{
  struct CApplication **v2; // rsi
  const GUID *v4; // r8
  _QWORD *v5; // rdx
  const GUID *v6; // r9
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // ebx
  int *v10; // rbx
  UINT32 v11; // [rsp+20h] [rbp-A8h]
  int v12; // [rsp+30h] [rbp-98h] BYREF
  struct CApplication **v13; // [rsp+38h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-88h] BYREF
  char v15; // [rsp+48h] [rbp-80h]
  __int64 v16; // [rsp+50h] [rbp-78h]
  ATL::CAtlException *v17; // [rsp+58h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  const char *v19; // [rsp+80h] [rbp-48h]
  int v20; // [rsp+88h] [rbp-40h]
  int v21; // [rsp+8Ch] [rbp-3Ch]
  struct CApplication ***v22; // [rsp+90h] [rbp-38h]
  int v23; // [rsp+98h] [rbp-30h]
  int v24; // [rsp+9Ch] [rbp-2Ch]
  int *v25; // [rsp+A0h] [rbp-28h]
  int v26; // [rsp+A8h] [rbp-20h]
  int v27; // [rsp+ACh] [rbp-1Ch]

  v16 = -2LL;
  v2 = a2;
  v13 = a2;
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    while ( (struct CApplication *)v5[2] != *v2 )
    {
      v5 = (_QWORD *)*v5;
      if ( !v5 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0LL;
  }
  if ( v5 )
  {
    v12 = 0;
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((_QWORD *)this + 8, v5);
    }
    catch ( ATL::CAtlException *v17 )
    {
      v10 = (int *)v17;
      if ( *(_DWORD *)v17 == -1073741571 )
        _resetstkoflw();
      v12 = *v10;
      v2 = v13;
    }
  }
  v6 = (const GUID *)(unsigned int)v12;
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v12);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v19 = "__FUNC__";
      v20 = 9;
      v21 = 0;
      LODWORD(v13) = 1507;
      v22 = &v13;
      v23 = 4;
      v24 = 0;
      v25 = &v12;
      v26 = 4;
      v27 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v4, v6, v11, &pData);
    }
  }
  v7 = (volatile signed __int32 *)*v2;
  if ( *v2 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1LL);
    }
    *v2 = 0LL;
  }
  v8 = v12;
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
