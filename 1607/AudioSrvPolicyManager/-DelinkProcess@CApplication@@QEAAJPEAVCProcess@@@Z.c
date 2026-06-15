/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000B048
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012510 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180010814 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CApplication::DelinkProcess(CApplication *this, struct CProcess *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 **i; // rdx
  unsigned int v7; // ebx
  int *v9; // rbx
  UINT32 v10; // [rsp+20h] [rbp-A8h]
  int v11; // [rsp+30h] [rbp-98h] BYREF
  int v12; // [rsp+34h] [rbp-94h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-90h] BYREF
  char v14; // [rsp+40h] [rbp-88h]
  __int64 v15; // [rsp+48h] [rbp-80h]
  ATL::CAtlException *v16; // [rsp+50h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  const char *v18; // [rsp+80h] [rbp-48h]
  int v19; // [rsp+88h] [rbp-40h]
  int v20; // [rsp+8Ch] [rbp-3Ch]
  int *v21; // [rsp+90h] [rbp-38h]
  int v22; // [rsp+98h] [rbp-30h]
  int v23; // [rsp+9Ch] [rbp-2Ch]
  int *v24; // [rsp+A0h] [rbp-28h]
  int v25; // [rsp+A8h] [rbp-20h]
  int v26; // [rsp+ACh] [rbp-1Ch]

  v15 = -2LL;
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_QWORD *)a2 + 28) = 0LL;
  for ( i = (__int64 **)*((_QWORD *)this + 8); i && i[2] != (__int64 *)a2; i = (__int64 **)*i )
    ;
  if ( i )
  {
    v11 = 0;
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt();
    }
    catch ( ATL::CAtlException *v16 )
    {
      v9 = (int *)v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _resetstkoflw();
      v11 = *v9;
    }
  }
  v7 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v11);
      v7 = v11;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v18 = "__FUNC__";
      v19 = 9;
      v20 = 0;
      v12 = 349;
      v21 = &v12;
      v22 = 4;
      v23 = 0;
      v24 = &v11;
      v25 = 4;
      v26 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v4, v5, v10, &pData);
      v7 = v11;
    }
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
