/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800A4D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x180007BE8 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?Release@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180007D90 (-Release@CBackgroundSessionCallbacks@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SSd @ 0x1800A3CDC (WPP_SF_SSd.c)
 *     ?NotificationData@CDuckingNotification@@QEAA?AV?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@XZ @ 0x1800A521C (-NotificationData@CDuckingNotification@@QEAA-AV-$CComPtr@VCSharedNotificationData@CDuckingNotifi.c)
 *     WPP_SF_x @ 0x1800A6B00 (WPP_SF_x.c)
 *     WPP_SF_xd @ 0x1800A6B44 (WPP_SF_xd.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, CDuckingNotification *a2, __int64 a3)
{
  char v3; // r14
  int MediaEvent; // r15d
  const wchar_t *v7; // rdx
  __int64 v8; // rax
  unsigned int (__fastcall *v9)(CBackgroundSessionCallbacks *); // r15
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int (__fastcall *v12)(CBackgroundSessionCallbacks *); // rsi
  __int64 v13; // rcx
  unsigned __int16 v14; // dx
  bool v15; // si
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int (__fastcall *v19)(CBackgroundSessionCallbacks *); // rsi
  unsigned int (__fastcall *v20)(CBackgroundSessionCallbacks *); // r14
  __int64 v21; // rax
  unsigned int (__fastcall *v22)(CBackgroundSessionCallbacks *); // r14
  CBackgroundSessionCallbacks *v24; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  MediaEvent = 0;
  LODWORD(v24) = 0;
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 25) )
    {
      v7 = *(const wchar_t **)(a1 + 16);
      if ( v7 && !_wcsicoll(*((const wchar_t **)a2 + 2), v7) )
      {
        if ( *(_DWORD *)(*((_QWORD *)a2 + 2) - 16LL) )
        {
          v8 = CDuckingNotification::NotificationData(a2, &v24);
          ++*(_DWORD *)(*(_QWORD *)v8 + 16LL);
          if ( v24 )
          {
            v9 = *(unsigned int (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)v24 + 16LL);
            if ( v9 == CBackgroundSessionCallbacks::Release )
              CBackgroundSessionCallbacks::Release(v24);
            else
              v9(v24);
          }
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            v3 = 1;
            v10 = CDuckingNotification::NotificationData(a2, &v24);
            WPP_SF_xd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              34LL,
              v11,
              *(_QWORD *)a2,
              *(_DWORD *)(*(_QWORD *)v10 + 16LL));
          }
          if ( (v3 & 1) != 0 && v24 )
          {
            v12 = *(unsigned int (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)v24 + 16LL);
            if ( v12 == CBackgroundSessionCallbacks::Release )
              CBackgroundSessionCallbacks::Release(v24);
            else
              v12(v24);
          }
        }
        goto LABEL_18;
      }
      goto LABEL_56;
    }
    v15 = !*(_QWORD *)(a1 + 16) && !*(_DWORD *)(*((_QWORD *)a2 + 2) - 16LL);
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_xd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        35LL,
        a3,
        *(_QWORD *)a2,
        *(_DWORD *)(*((_QWORD *)a2 + 2) - 16LL) == 0);
      v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    goto LABEL_63;
  }
  if ( *(_BYTE *)(a1 + 25) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      v3 = 2;
      v17 = CDuckingNotification::NotificationData(a2, &v24);
      WPP_SF_xd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        36LL,
        v18,
        *(_QWORD *)a2,
        *(_DWORD *)(*(_QWORD *)v17 + 16LL));
    }
    if ( (v3 & 2) != 0 && v24 )
    {
      v19 = *(unsigned int (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)v24 + 16LL);
      if ( v19 == CBackgroundSessionCallbacks::Release )
        CBackgroundSessionCallbacks::Release(v24);
      else
        v19(v24);
    }
    v15 = *(_DWORD *)(*(_QWORD *)CDuckingNotification::NotificationData(a2, &v24) + 16LL) != 0;
    if ( v24 )
    {
      v20 = *(unsigned int (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)v24 + 16LL);
      if ( v20 == CBackgroundSessionCallbacks::Release )
        CBackgroundSessionCallbacks::Release(v24);
      else
        v20(v24);
    }
    if ( !v15 )
    {
LABEL_56:
      v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      goto LABEL_64;
    }
    v21 = CDuckingNotification::NotificationData(a2, &v24);
    --*(_DWORD *)(*(_QWORD *)v21 + 16LL);
    if ( v24 )
    {
      v22 = *(unsigned int (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)v24 + 16LL);
      if ( v22 == CBackgroundSessionCallbacks::Release )
        CBackgroundSessionCallbacks::Release(v24);
      else
        v22(v24);
    }
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_63:
    if ( v15 )
      goto LABEL_18;
LABEL_64:
    if ( (struct _GUID *)v16 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(v16 + 28) & 0x8000000) == 0
      || *(_BYTE *)(v16 + 25) < 4u )
    {
      goto LABEL_79;
    }
    WPP_SF_SSd(
      *(_QWORD *)(v16 + 16),
      0x29u,
      &WPP_7126b4a398f34fc137826d3414d4a173_Traceguids,
      *(const wchar_t **)(a1 + 16),
      *((const wchar_t **)a2 + 2),
      *((_DWORD *)a2 + 2));
    goto LABEL_73;
  }
  v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_x(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 37LL, a3, *(_QWORD *)a2);
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) - 16LL) )
  {
    v15 = 0;
    goto LABEL_63;
  }
LABEL_18:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *(_QWORD *)a2;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_x(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 38LL, a3, *(_QWORD *)a2);
  }
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
  if ( !MediaEvent )
  {
    v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_79;
    }
    v14 = 40;
    goto LABEL_72;
  }
  v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x8000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v14 = 39;
LABEL_72:
    WPP_SF_D(*(_QWORD *)(v13 + 16), v14, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, *((_DWORD *)a2 + 2));
LABEL_73:
    v13 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( MediaEvent < 0
    && (struct _GUID *)v13 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v13 + 28) & 0x8000000) != 0
    && *(_BYTE *)(v13 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v13 + 16), 0x2Au, (__int64)&WPP_7126b4a398f34fc137826d3414d4a173_Traceguids, MediaEvent);
  }
LABEL_79:
  CDuckingNotification::~CDuckingNotification(a2);
  return (unsigned int)MediaEvent;
}
