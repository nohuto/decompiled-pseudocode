/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800A20D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180032844 (--1CDuckingNotification@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SSd @ 0x1800A104C (WPP_SF_SSd.c)
 *     ?NotificationData@CDuckingNotification@@QEAA?AV?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@XZ @ 0x1800A2548 (-NotificationData@CDuckingNotification@@QEAA-AV-$CComPtr@VCSharedNotificationData@CDuckingNotifi.c)
 *     WPP_SF_x @ 0x1800A3E40 (WPP_SF_x.c)
 *     WPP_SF_xd @ 0x1800A3E84 (WPP_SF_xd.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, CDuckingNotification *a2, __int64 a3)
{
  char v3; // r15
  int MediaEvent; // r12d
  TraceLoggingHProvider *v6; // rdx
  const wchar_t *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  TraceLoggingHProvider v12; // rcx
  unsigned __int16 v13; // dx
  bool v14; // bp
  TraceLoggingHProvider v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  MediaEvent = 0;
  LODWORD(v20) = 0;
  v6 = &WPP_GLOBAL_Control;
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 25) )
    {
      v8 = *(const wchar_t **)(a1 + 16);
      if ( v8 && !_wcsicoll(*((const wchar_t **)a2 + 2), v8) )
      {
        if ( *(_DWORD *)(*((_QWORD *)a2 + 2) - 16LL) )
        {
          v9 = CDuckingNotification::NotificationData(a2, &v20);
          ++*(_DWORD *)(*(_QWORD *)v9 + 16LL);
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v3 = 1;
            v10 = CDuckingNotification::NotificationData(a2, &v20);
            WPP_SF_xd(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, v11, *(_QWORD *)a2, *(_DWORD *)(*(_QWORD *)v10 + 16LL));
          }
          if ( (v3 & 1) != 0 && v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_15;
      }
      goto LABEL_46;
    }
    v14 = !*(_QWORD *)(a1 + 16) && !*(_DWORD *)(*((_QWORD *)a2 + 2) - 16LL);
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_xd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        a3,
        *(_QWORD *)a2,
        *(_DWORD *)(*((_QWORD *)a2 + 2) - 16LL) == 0);
      v15 = WPP_GLOBAL_Control;
    }
    goto LABEL_53;
  }
  if ( *(_BYTE *)(a1 + 25) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v3 = 2;
      v16 = CDuckingNotification::NotificationData(a2, &v20);
      WPP_SF_xd(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, v17, *(_QWORD *)a2, *(_DWORD *)(*(_QWORD *)v16 + 16LL));
    }
    if ( (v3 & 2) != 0 && v20 )
      (*(void (__fastcall **)(__int64, TraceLoggingHProvider *))(*(_QWORD *)v20 + 16LL))(v20, v6);
    v14 = *(_DWORD *)(*(_QWORD *)CDuckingNotification::NotificationData(a2, &v20) + 16LL) != 0;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( !v14 )
    {
LABEL_46:
      v15 = WPP_GLOBAL_Control;
      goto LABEL_54;
    }
    v18 = CDuckingNotification::NotificationData(a2, &v20);
    --*(_DWORD *)(*(_QWORD *)v18 + 16LL);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v15 = WPP_GLOBAL_Control;
LABEL_53:
    if ( v14 )
      goto LABEL_15;
LABEL_54:
    if ( v15 == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)v15 + 7) & 0x8000000) == 0
      || *((_BYTE *)v15 + 25) < 4u )
    {
      goto LABEL_69;
    }
    WPP_SF_SSd(
      *((_QWORD *)v15 + 2),
      0x29u,
      &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
      *(const wchar_t **)(a1 + 16),
      *((const wchar_t **)a2 + 2),
      *((_DWORD *)a2 + 2));
    goto LABEL_63;
  }
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_x(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, a3, *(_QWORD *)a2);
    v15 = WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) - 16LL) )
  {
    v14 = 0;
    goto LABEL_53;
  }
LABEL_15:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *(_QWORD *)a2;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_x(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, a3, *(_QWORD *)a2);
  }
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
  if ( !MediaEvent )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_69;
    }
    v13 = 40;
    goto LABEL_62;
  }
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v13 = 39;
LABEL_62:
    WPP_SF_D(*((_QWORD *)v12 + 2), v13, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, *((_DWORD *)a2 + 2));
LABEL_63:
    v12 = WPP_GLOBAL_Control;
  }
  if ( MediaEvent < 0
    && v12 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v12 + 7) & 0x8000000) != 0
    && *((_BYTE *)v12 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v12 + 2), 0x2Au, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, MediaEvent);
  }
LABEL_69:
  CDuckingNotification::~CDuckingNotification(a2);
  return (unsigned int)MediaEvent;
}
