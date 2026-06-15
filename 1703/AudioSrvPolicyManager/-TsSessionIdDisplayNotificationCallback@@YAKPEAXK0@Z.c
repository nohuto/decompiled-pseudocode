/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18001B400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x180005B4C (WPP_SF_.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_ds @ 0x1800184FC (WPP_SF_ds.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUSessionDisplayStateChangedContext@@@Z0@Z @ 0x18001CA00 (--$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManage.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall TsSessionIdDisplayNotificationCallback(DWORD SessionId, __int64 a2, _DWORD *a3)
{
  signed int v4; // edi
  int v6; // eax
  const char *v7; // rdx
  __int64 v8; // r8
  const char *v9; // rax
  int v10; // eax
  int v11; // ecx
  HANDLE ProcessHeap; // rax
  struct TSSession *v13; // rax
  __int64 v14; // rcx
  struct TSSession *v15; // rbx
  struct TSSession *v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v17 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( a3[4] == 4
    && *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4 )
  {
    v6 = TsSessionFromSessionId(SessionId, 0, 0LL, &v17);
    if ( v6 )
    {
      v4 = (unsigned __int16)v6 | 0x80070000;
      if ( v6 <= 0 )
        v4 = v6;
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
          v7 = "On";
          v9 = "Off";
          if ( a3[5] == 1 )
            v9 = "On";
        }
        WPP_SF_ds(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)v7, v8, SessionId, v9);
      }
      v10 = a3[5] != 0;
      v11 = *((_DWORD *)v17 + 57);
      *((_DWORD *)v17 + 57) = v10;
      if ( v11 != v10 )
      {
        ProcessHeap = GetProcessHeap();
        v13 = (struct TSSession *)HeapAlloc(ProcessHeap, 0, 4uLL);
        v17 = v13;
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
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids);
          }
          operator delete(v15, 4uLL);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, v4);
    }
    AudPolicyLogError("TsSessionIdDisplayNotificationCallback", 2181, v4);
  }
  return 0LL;
}
