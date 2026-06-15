/*
 * XREFs of ?FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z @ 0x1800131C0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CApplicationManager::FindProcess(CApplicationManager *this, int a2, struct CProcess **a3)
{
  const GUID *v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  UINT32 v13; // [rsp+20h] [rbp-59h]
  int v14; // [rsp+30h] [rbp-49h] BYREF
  int v15; // [rsp+34h] [rbp-45h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-41h] BYREF
  char v17; // [rsp+40h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  const char *v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  int *v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  int *v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]

  v14 = -2147023728;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *a3 = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( !*(_DWORD *)(v8 + 416) && *(_DWORD *)(v8 + 168) == a2 )
    {
      v14 = 0;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, a2);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *a3 = (struct CProcess *)v8;
      break;
    }
  }
  v9 = v14;
  if ( v14 < 0 )
  {
    v10 = 2147943568LL;
    if ( v14 == -2147023728 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x21u,
          &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids,
          -2147023728);
        goto LABEL_22;
      }
    }
    else
    {
      v11 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v14);
        v9 = v14;
      }
      if ( (unsigned int)dword_180034030 > 2 )
      {
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v19 = "__FUNC__";
        v22 = &v15;
        v25 = &v14;
        v20 = 9;
        v15 = 1352;
        v23 = 4;
        v26 = 4;
        TlgWrite(v11, &unk_18002D869, v6, (LPCGUID)v10, v13, &pData);
LABEL_22:
        v9 = v14;
      }
    }
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
