/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800073E0
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180008DD0 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_SSd @ 0x180005BCC (WPP_SF_SSd.c)
 *     WPP_SF_x @ 0x180005F14 (WPP_SF_x.c)
 *     WPP_SF_xd @ 0x180005F50 (WPP_SF_xd.c)
 *     ?NotificationData@CDuckingNotification@@QEAA?AV?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@XZ @ 0x18000A118 (-NotificationData@CDuckingNotification@@QEAA-AV-$CComPtr@VCSharedNotificationData@CDuckingNotifi.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v3; // si
  int MediaEvent; // r14d
  _UNKNOWN **v6; // rdx
  const wchar_t *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  _UNKNOWN **v11; // rcx
  _UNKNOWN **v12; // rcx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rdx
  bool v16; // di
  __int64 v17; // r8
  int v18; // esi
  __int64 v19; // rax
  USHORT v20; // dx
  int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+20h] [rbp-58h]
  _QWORD v23[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h] BYREF
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  MediaEvent = 0;
  LODWORD(v24) = 0;
  v6 = &WPP_GLOBAL_Control;
  if ( !*(_BYTE *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 25) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v22 = *(_DWORD *)(*(_QWORD *)CDuckingNotification::NotificationData(a2, &v26) + 16LL);
        WPP_SF_xd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, v17, *a2, v22);
        v3 = 2;
      }
      if ( (v3 & 2) != 0 && v26 )
        (*(void (__fastcall **)(__int64, _UNKNOWN **))(*(_QWORD *)v26 + 16LL))(v26, v6);
      v18 = *(_DWORD *)(*(_QWORD *)CDuckingNotification::NotificationData(a2, &v27) + 16LL);
      v16 = v18 != 0;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      if ( v18 )
      {
        v19 = CDuckingNotification::NotificationData(a2, v23);
        --*(_DWORD *)(*(_QWORD *)v19 + 16LL);
        if ( v23[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
      }
      goto LABEL_53;
    }
    v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_x(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, a3, *a2);
      v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    v16 = *(_DWORD *)(a2[2] - 16LL) == 0;
LABEL_59:
    if ( v16 )
      goto LABEL_60;
LABEL_16:
    if ( v11 == &WPP_GLOBAL_Control || (*((_DWORD *)v11 + 7) & 0x8000000) == 0 || *((_BYTE *)v11 + 25) < 4u )
      goto LABEL_27;
    WPP_SF_SSd(
      (TRACEHANDLE)v11[2],
      0x29u,
      &WPP_f0c26e893d54393037413041046a80ee_Traceguids,
      *(const wchar_t **)(a1 + 16),
      (const wchar_t *)a2[2],
      *((_DWORD *)a2 + 2));
    goto LABEL_20;
  }
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v16 = !*(_QWORD *)(a1 + 16) && !*(_DWORD *)(a2[2] - 16LL);
    v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_xd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x23u,
        *(_DWORD *)(a2[2] - 16LL) == 0,
        *a2,
        *(_DWORD *)(a2[2] - 16LL) == 0);
LABEL_53:
      v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
      goto LABEL_59;
    }
    goto LABEL_59;
  }
  v8 = *(const wchar_t **)(a1 + 16);
  if ( !v8 || _wcsicoll((const wchar_t *)a2[2], v8) )
  {
    v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_16;
  }
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
      v21 = *(_DWORD *)(*(_QWORD *)CDuckingNotification::NotificationData(a2, &v25) + 16LL);
      WPP_SF_xd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, v10, *a2, v21);
      v3 = 1;
    }
    if ( (v3 & 1) != 0 && v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
LABEL_60:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_x(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, a3, *a2);
  }
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
  if ( !MediaEvent )
  {
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_27;
    }
    v20 = 40;
    goto LABEL_69;
  }
  v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v20 = 39;
LABEL_69:
    WPP_SF_D((TRACEHANDLE)v12[2], v20, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, *((_DWORD *)a2 + 2));
LABEL_20:
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( MediaEvent < 0 )
  {
    if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x8000000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v12[2], 0x2Au, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, MediaEvent);
    AudPolicyLogError("CGenerateDuckingNotification::Invoke", 788, MediaEvent);
  }
LABEL_27:
  v13 = a2[3];
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (volatile signed __int32 *)(a2[2] - 24LL);
  if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14);
  return (unsigned int)MediaEvent;
}
