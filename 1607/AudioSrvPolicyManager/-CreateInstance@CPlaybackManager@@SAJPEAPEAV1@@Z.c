/*
 * XREFs of ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180017C30
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x18000414C (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CPlaybackManager::CreateInstance(struct CPlaybackManager **a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  const GUID *v4; // r9
  __int64 v5; // r8
  UINT32 v7; // [rsp+20h] [rbp-29h]
  LPCGUID pActivityId; // [rsp+30h] [rbp-19h] BYREF
  _DWORD *v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  _QWORD *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  LPCGUID *p_pActivityId; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  LODWORD(pActivityId) = 0;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v9 = v3;
  if ( v3 )
  {
    v3[6] = 0;
    *(_QWORD *)v3 = &CPlaybackManager::`vftable'{for `CUnknown'};
    *((_QWORD *)v3 + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
    v3[2] = 1;
    LODWORD(v5) = 0;
    *a1 = (struct CPlaybackManager *)v3;
  }
  else
  {
    v5 = 2147942414LL;
    LODWORD(pActivityId) = -2147024882;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_9a8bf233b577350336875a646611b6e3_Traceguids, -2147024882);
      v5 = (unsigned int)pActivityId;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v11 = "__FUNC__";
      v14 = &v9;
      p_pActivityId = &pActivityId;
      v12 = 9;
      LODWORD(v9) = 59;
      v15 = 4;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, (LPCGUID)v5, v4, v7, &pData);
      LODWORD(v5) = (_DWORD)pActivityId;
    }
  }
  return (unsigned int)v5;
}
