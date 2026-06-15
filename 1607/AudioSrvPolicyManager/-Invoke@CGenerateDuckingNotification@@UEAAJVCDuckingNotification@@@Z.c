/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180007060
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180009044 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_SSd @ 0x180005404 (WPP_SF_SSd.c)
 *     WPP_SF_x @ 0x18000576C (WPP_SF_x.c)
 *     WPP_SF_xd @ 0x1800057B0 (WPP_SF_xd.c)
 *     ?NotificationData@CDuckingNotification@@QEAA?AV?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@XZ @ 0x18000A3DC (-NotificationData@CDuckingNotification@@QEAA-AV-$CComPtr@VCSharedNotificationData@CDuckingNotifi.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, _QWORD *a2, const GUID *a3, const GUID *a4)
{
  _UNKNOWN **v5; // rdx
  char v7; // r14
  const wchar_t *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  bool v11; // di
  _UNKNOWN **v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edi
  volatile signed __int32 *v18; // rdx
  USHORT v20; // dx
  UINT32 cData; // [rsp+20h] [rbp-69h]
  int MediaEvent; // [rsp+30h] [rbp-59h] BYREF
  int v23; // [rsp+34h] [rbp-55h] BYREF
  __int64 v24; // [rsp+38h] [rbp-51h] BYREF
  __int64 v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  __int64 v28; // [rsp+58h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  const char *v30; // [rsp+80h] [rbp-9h]
  __int64 v31; // [rsp+88h] [rbp-1h]
  int *v32; // [rsp+90h] [rbp+7h]
  __int64 v33; // [rsp+98h] [rbp+Fh]
  int *p_MediaEvent; // [rsp+A0h] [rbp+17h]
  __int64 v35; // [rsp+A8h] [rbp+1Fh]

  v23 = 0;
  v5 = &WPP_GLOBAL_Control;
  v7 = 0;
  MediaEvent = 0;
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 25) )
    {
      v8 = *(const wchar_t **)(a1 + 16);
      if ( v8 && !_wcsicoll((const wchar_t *)a2[2], v8) )
      {
        if ( *(_DWORD *)(a2[2] - 16LL) )
        {
          v9 = CDuckingNotification::NotificationData(a2, &v24);
          ++*(_DWORD *)(*(_QWORD *)v9 + 16LL);
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v7 = 1;
            cData = *(_DWORD *)(*(_QWORD *)CDuckingNotification::NotificationData(a2, &v25) + 16LL);
            WPP_SF_xd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, v10, *a2);
          }
          if ( (v7 & 1) != 0 && v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        goto LABEL_61;
      }
      goto LABEL_37;
    }
    v11 = !*(_QWORD *)(a1 + 16) && !*(_DWORD *)(a2[2] - 16LL);
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v13 = a2[2];
      cData = *(_DWORD *)(v13 - 16) == 0;
      WPP_SF_xd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, *(_DWORD *)(v13 - 16) == 0, *a2);
LABEL_36:
      v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 25) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v7 = 2;
        cData = *(_DWORD *)(*(_QWORD *)CDuckingNotification::NotificationData(a2, &v26) + 16LL);
        WPP_SF_xd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, v14, *a2);
      }
      if ( (v7 & 2) != 0 && v26 )
        (*(void (__fastcall **)(__int64, _UNKNOWN **))(*(_QWORD *)v26 + 16LL))(v26, v5);
      v11 = *(_DWORD *)(*(_QWORD *)CDuckingNotification::NotificationData(a2, &v27) + 16LL) != 0;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      if ( !v11 )
      {
LABEL_37:
        v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_38:
        if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x8000000) != 0 && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_SSd(
            (TRACEHANDLE)v12[2],
            0x29u,
            &WPP_f0c26e893d54393037413041046a80ee_Traceguids,
            *(const wchar_t **)(a1 + 16),
            (const wchar_t *)a2[2]);
LABEL_42:
          v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
          goto LABEL_43;
        }
        goto LABEL_43;
      }
      v15 = CDuckingNotification::NotificationData(a2, &v28);
      --*(_DWORD *)(*(_QWORD *)v15 + 16LL);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      goto LABEL_36;
    }
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_x(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)a3, *a2);
      v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    v11 = *(_DWORD *)(a2[2] - 16LL) == 0;
  }
  if ( !v11 )
    goto LABEL_38;
LABEL_61:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_x(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)a3, *a2);
  }
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
  if ( !MediaEvent )
  {
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_50;
    }
    v20 = 40;
    goto LABEL_70;
  }
  v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v20 = 39;
LABEL_70:
    WPP_SF_D((TRACEHANDLE)v12[2], v20, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, *((_DWORD *)a2 + 2));
    goto LABEL_42;
  }
LABEL_43:
  if ( MediaEvent < 0 )
  {
    if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x8000000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v12[2], 0x2Au, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, MediaEvent);
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v31 = 9LL;
      v30 = "__FUNC__";
      v32 = &v23;
      p_MediaEvent = &MediaEvent;
      v23 = 788;
      v33 = 4LL;
      v35 = 4LL;
      TlgWrite((TraceLoggingHProvider)v12, &unk_18002D869, a3, a4, cData, &pData);
    }
  }
LABEL_50:
  v16 = a2[3];
  v17 = MediaEvent;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v18 = (volatile signed __int32 *)(a2[2] - 24LL);
  if ( _InterlockedExchangeAdd(v18 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18);
  return v17;
}
