/*
 * XREFs of ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800120AC
 * Callers:
 *     PbmRegisterAppClosureNotification @ 0x180018D70 (PbmRegisterAppClosureNotification.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterAppClosureNotificationClient(
        CApplicationManager *this,
        struct CProcess *a2)
{
  CApplicationManager *v3; // rbx
  int v4; // ebx
  const GUID *v5; // r8
  const GUID *v6; // r9
  UINT32 v8; // [rsp+28h] [rbp-39h]
  int v9; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-21h] BYREF
  char v12; // [rsp+48h] [rbp-19h]
  __int64 v13; // [rsp+50h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  const char *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  int *v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]

  v13 = -2LL;
  v3 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = CApplicationManager::Register(v3, a2);
  v9 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v4);
      v4 = v9;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v15 = "__FUNC__";
      v16 = 9;
      v17 = 0;
      v10 = 731;
      v18 = &v10;
      v19 = 4;
      v20 = 0;
      v21 = &v9;
      v22 = 4;
      v23 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v5, v6, v8, &pData);
      v4 = v9;
    }
  }
  else
  {
    *((_DWORD *)a2 + 112) = 1;
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
