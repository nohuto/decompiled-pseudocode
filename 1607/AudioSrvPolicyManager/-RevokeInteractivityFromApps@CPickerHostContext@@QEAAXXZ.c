/*
 * XREFs of ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x180017020
 * Callers:
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180019190 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800172D8 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

void __fastcall CPickerHostContext::RevokeInteractivityFromApps(CPickerHostContext *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  int v3; // eax
  int v4; // eax
  const GUID *v5; // r8
  const GUID *v6; // r9
  UINT32 v7; // [rsp+20h] [rbp-29h]
  int v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  int *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  int *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v1 = *(_QWORD **)this;
  while ( v1 )
  {
    v2 = v1[2];
    v1 = (_QWORD *)*v1;
    v3 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = 0;
    if ( v3 )
    {
      v4 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
             this,
             *(const unsigned __int16 **)v2,
             *(_DWORD *)(v2 + 8),
             0);
      v9 = v4;
      if ( v4 < 0 )
      {
        this = (CPickerHostContext *)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids, v4);
        }
        if ( (unsigned int)dword_180034030 > 2 )
        {
          v13 = 0;
          v16 = 0;
          v19 = 0;
          v11 = "__FUNC__";
          v14 = &v8;
          v17 = &v9;
          v12 = 9;
          v8 = 283;
          v15 = 4;
          v18 = 4;
          TlgWrite(this, &unk_18002D869, v5, v6, v7, &pData);
        }
      }
    }
  }
}
