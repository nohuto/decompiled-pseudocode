/*
 * XREFs of ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180016CB4
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800168F8 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180016E30 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800172D8 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CPickerHostContext::AddHostedAppInteractivityNotification(
        CPickerHostContext *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  const GUID *v7; // r8
  _BOOL8 v8; // r9
  struct CHostedAppInteractivity *v9; // rdx
  CHostedAppInteractivityManager *v10; // rcx
  int v11; // eax
  BOOL v12; // edx
  UINT32 v14; // [rsp+20h] [rbp-39h]
  int HostedAppInteractivity; // [rsp+30h] [rbp-29h] BYREF
  struct CHostedAppInteractivity *v16; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+6Ch] [rbp+13h]
  struct CHostedAppInteractivity **v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]
  int *p_HostedAppInteractivity; // [rsp+80h] [rbp+27h]
  int v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+8Ch] [rbp+33h]

  v16 = 0LL;
  HostedAppInteractivity = CPickerHostContext::GetHostedAppInteractivity(a1, a2, a3, &v16);
  if ( HostedAppInteractivity >= 0 )
  {
    if ( a4 == 1 )
    {
      v10 = (CHostedAppInteractivityManager *)*((unsigned int *)v16 + 3);
      *((_DWORD *)v16 + 3) = 0;
      v12 = (_DWORD)v10 != 0;
      v8 = 0LL;
LABEL_11:
      if ( v12 )
        HostedAppInteractivity = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(v10, a2, a3, v8);
LABEL_13:
      if ( HostedAppInteractivity >= 0 )
        return (unsigned int)HostedAppInteractivity;
      goto LABEL_14;
    }
    if ( (unsigned int)(a4 - 2) > 1 )
      goto LABEL_13;
    v9 = v16;
    v10 = (CHostedAppInteractivityManager *)*((unsigned int *)v16 + 3);
    if ( a4 == 2 )
    {
      v11 = (_DWORD)v10 + 1;
    }
    else
    {
      if ( !(_DWORD)v10 )
      {
LABEL_9:
        v8 = *((_DWORD *)v9 + 3) != 0;
        v12 = ((_DWORD)v10 != 0) != v8;
        goto LABEL_11;
      }
      v11 = (_DWORD)v10 - 1;
    }
    *((_DWORD *)v16 + 3) = v11;
    goto LABEL_9;
  }
LABEL_14:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids,
      HostedAppInteractivity);
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = "__FUNC__";
    v21 = &v16;
    p_HostedAppInteractivity = &HostedAppInteractivity;
    v19 = 9;
    LODWORD(v16) = 202;
    v22 = 4;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v7, (LPCGUID)v8, v14, &pData);
  }
  return (unsigned int)HostedAppInteractivity;
}
