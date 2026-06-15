/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18009FE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ??$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUSessionDisplayStateChangedContext@@@Z0@Z @ 0x18009E974 (--$QueueApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@YAJP8CApplicationManage.c)
 *     WPP_SF_ds @ 0x1800A0798 (WPP_SF_ds.c)
 */

__int64 __fastcall TsSessionIdDisplayNotificationCallback(void *a1, __int64 a2, _QWORD *a3)
{
  DWORD v3; // esi
  signed int v4; // edi
  __int64 v6; // rax
  int v7; // eax
  const char *v8; // rdx
  int v9; // r8d
  const char *v10; // rax
  int v11; // eax
  int v12; // edx
  struct TSSession *v13; // rax
  __int64 v14; // rcx
  struct TSSession *v15; // rbx
  struct TSSession *v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned int)a1;
  v4 = 0;
  v17 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( *((_DWORD *)a3 + 4) == 4 )
  {
    v6 = *a3 - *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1;
    if ( *a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1 )
      v6 = a3[1] - *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4;
    if ( !v6 )
    {
      v7 = TsSessionFromSessionId(v3, 0, 0LL, &v17);
      if ( v7 )
      {
        if ( v7 > 0 )
          v4 = (unsigned __int16)v7 | 0x80070000;
        else
          v4 = v7;
      }
      else
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
        {
          if ( *((_DWORD *)a3 + 5) == 2 )
          {
            v10 = "Dim";
          }
          else
          {
            v10 = "On";
            v8 = "Off";
            if ( *((_DWORD *)a3 + 5) != 1 )
              v10 = "Off";
          }
          WPP_SF_ds(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), (_DWORD)v8, v9, v3, (__int64)v10);
        }
        v11 = *((_DWORD *)a3 + 5) != 0;
        v12 = *((_DWORD *)v17 + 57);
        *((_DWORD *)v17 + 57) = v11;
        if ( v12 != v11 )
        {
          v13 = (struct TSSession *)operator new(4uLL);
          v17 = v13;
          v15 = v13;
          if ( v13 )
            *(_DWORD *)v13 = v3;
          else
            v15 = 0LL;
          if ( v15 && (int)QueueApplicationManagerWorkItem<SessionDisplayStateChangedContext>(v14, (__int64)v15) < 0 )
          {
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
            {
              WPP_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0x23u,
                (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids);
            }
            operator delete(v15);
          }
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v4 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x24u,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      v4);
  }
  return 0LL;
}
