/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18009CF60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUSessionDisplayStateChangedContext@@@Z0@Z @ 0x18009B7E4 (--$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManage.c)
 *     WPP_SF_ds @ 0x18009D984 (WPP_SF_ds.c)
 */

__int64 __fastcall TsSessionIdDisplayNotificationCallback(void *a1, __int64 a2, _DWORD *a3)
{
  DWORD v3; // esi
  signed int v4; // edi
  int v6; // eax
  const char *v7; // rdx
  int v8; // r8d
  const char *v9; // rax
  int v10; // eax
  int v11; // edx
  struct TSSession *v12; // rax
  __int64 v13; // rcx
  struct TSSession *v14; // rbx
  struct TSSession *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned int)a1;
  v4 = 0;
  v16 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( a3[4] == 4
    && *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4 )
  {
    v6 = TsSessionFromSessionId(v3, 0, 0LL, &v16);
    if ( v6 )
    {
      if ( v6 > 0 )
        v4 = (unsigned __int16)v6 | 0x80070000;
      else
        v4 = v6;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        if ( a3[5] == 2 )
        {
          v9 = "Dim";
        }
        else
        {
          v9 = "On";
          v7 = "Off";
          if ( a3[5] != 1 )
            v9 = "Off";
        }
        WPP_SF_ds(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)v7, v8, v3, (__int64)v9);
      }
      v10 = a3[5] != 0;
      v11 = *((_DWORD *)v16 + 57);
      *((_DWORD *)v16 + 57) = v10;
      if ( v11 != v10 )
      {
        v12 = (struct TSSession *)operator new(4uLL);
        v16 = v12;
        v14 = v12;
        if ( v12 )
          *(_DWORD *)v12 = v3;
        else
          v14 = 0LL;
        if ( v14 && (int)QueueApplicationManagerWorkItem<SessionDisplayStateChangedContext>(v13, (__int64)v14) < 0 )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x23u,
              (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids);
          }
          operator delete(v14);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v4 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids, v4);
  }
  return 0LL;
}
