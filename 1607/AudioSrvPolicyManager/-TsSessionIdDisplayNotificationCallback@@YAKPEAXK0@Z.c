/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18001D3D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     WPP_SF_ds @ 0x18001A42C (WPP_SF_ds.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUSessionDisplayStateChangedContext@@@Z0@Z @ 0x18001EE38 (--$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManage.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall TsSessionIdDisplayNotificationCallback(DWORD SessionId, __int64 a2, _DWORD *a3)
{
  int v5; // eax
  const char *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ecx
  const char *v9; // rax
  int v10; // eax
  int v11; // ecx
  HANDLE ProcessHeap; // rax
  struct TSSession *v13; // rax
  __int64 v14; // rcx
  struct TSSession *v15; // rbx
  HANDLE v16; // rax
  const GUID *v17; // r8
  const GUID *v18; // r9
  const struct _TlgProvider_t *v19; // rcx
  UINT32 cData; // [rsp+20h] [rbp-39h]
  unsigned int v22; // [rsp+30h] [rbp-29h] BYREF
  struct TSSession *v23; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v25; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+68h] [rbp+Fh]
  int v27; // [rsp+6Ch] [rbp+13h]
  struct TSSession **v28; // [rsp+70h] [rbp+17h]
  int v29; // [rsp+78h] [rbp+1Fh]
  int v30; // [rsp+7Ch] [rbp+23h]
  int *v31; // [rsp+80h] [rbp+27h]
  int v32; // [rsp+88h] [rbp+2Fh]
  int v33; // [rsp+8Ch] [rbp+33h]

  v22 = 0;
  v23 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( a3[4] == 4
    && *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4 )
  {
    v5 = TsSessionFromSessionId(SessionId, 0, 0LL, &v23);
    if ( v5 )
    {
      v8 = (unsigned __int16)v5 | 0x80070000;
      if ( v5 <= 0 )
        v8 = v5;
      v22 = v8;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        if ( a3[5] == 2 )
        {
          v9 = "Dim";
        }
        else
        {
          v6 = "On";
          v9 = "Off";
          if ( a3[5] == 1 )
            v9 = "On";
        }
        WPP_SF_ds(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)v6, v7, SessionId, v9);
      }
      v10 = a3[5] != 0;
      v11 = *((_DWORD *)v23 + 57);
      *((_DWORD *)v23 + 57) = v10;
      if ( v11 != v10 )
      {
        ProcessHeap = GetProcessHeap();
        v13 = (struct TSSession *)HeapAlloc(ProcessHeap, 0, 4uLL);
        v23 = v13;
        v15 = v13;
        if ( v13 )
          *(_DWORD *)v13 = SessionId;
        else
          v15 = 0LL;
        if ( v15 && (int)QueueApplicationManagerWorkItem<SessionDisplayStateChangedContext>(v14, v15) < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids);
          }
          v16 = GetProcessHeap();
          HeapFree(v16, 0, v15);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v18 = (const GUID *)v22;
  if ( (v22 & 0x80000000) != 0 )
  {
    v19 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, v22);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v25 = "__FUNC__";
      v28 = &v23;
      v31 = (int *)&v22;
      v26 = 9;
      LODWORD(v23) = 2113;
      v29 = 4;
      v32 = 4;
      TlgWrite(v19, &unk_18002D869, v17, v18, cData, &pData);
    }
  }
  return 0LL;
}
