/*
 * XREFs of _anonymous_namespace_::ContactVisualizationWorker @ 0x1401B8710
 * Callers:
 *     EditionContactVisualization @ 0x1401B86F0 (EditionContactVisualization.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1401B8B20 (IsCurrentDesktopComposed.c)
 *     _GetPointerDeviceType @ 0x1401D8C20 (_GetPointerDeviceType.c)
 *     _anonymous_namespace_::DeferPointerCursorOperation @ 0x1401EC820 (_anonymous_namespace_--DeferPointerCursorOperation.c)
 *     DwmAsyncSendTouchContacts @ 0x1401F1270 (DwmAsyncSendTouchContacts.c)
 *     _anonymous_namespace_::PointerEventIntToDigitizerContactInfo @ 0x1401F8B30 (_anonymous_namespace_--PointerEventIntToDigitizerContactInfo.c)
 *     FeedbackGetWindowSetting @ 0x1401FFAEC (FeedbackGetWindowSetting.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x14020525C (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     _anonymous_namespace_::GetWindowBarrelVisualizationSetting @ 0x14020CA6C (_anonymous_namespace_--GetWindowBarrelVisualizationSetting.c)
 *     _anonymous_namespace_::SwitchMouseCursors @ 0x140255F04 (_anonymous_namespace_--SwitchMouseCursors.c)
 */

_BOOL8 __fastcall anonymous_namespace_::ContactVisualizationWorker(
        unsigned int a1,
        char *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rbx
  int v6; // r14d
  char *v7; // rdi
  void *v8; // r13
  __int64 v9; // r12
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 UserSessionState; // rax
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  const struct tagPOINTEREVENTINT *v16; // rdi
  char *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  int v24; // r15d
  int v25; // eax
  __int64 v26; // rax
  char v27; // si
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  BOOL v32; // esi
  __int64 v33; // r15
  BOOL v34; // edx
  int v35; // eax
  unsigned int i; // edi
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  int v42; // [rsp+30h] [rbp-38h] BYREF
  int v43; // [rsp+34h] [rbp-34h] BYREF
  int v44; // [rsp+38h] [rbp-30h]
  int v45; // [rsp+3Ch] [rbp-2Ch]
  _DWORD v46[4]; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v47[6]; // [rsp+50h] [rbp-18h] BYREF
  int v48; // [rsp+B0h] [rbp+48h] BYREF
  char *v49; // [rsp+B8h] [rbp+50h]
  __int64 v50; // [rsp+C0h] [rbp+58h]
  int v51; // [rsp+C8h] [rbp+60h]

  v51 = a4;
  v50 = a3;
  v49 = a2;
  v5 = a1;
  v6 = 0;
  v45 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v44 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v8 = (void *)Win32AllocPoolZInit(40 * v5, 1987081045LL);
  v13 = 0;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      v43 = 0;
      UserSessionState = W32GetUserSessionState(v12, v11);
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              *(CTouchProcessor **)(UserSessionState + 3256),
                                              v7,
                                              &v43);
      v16 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v17 = (char *)ContactVisualizationPointerEventInt + 8;
        v18 = *((_DWORD *)ContactVisualizationPointerEventInt + 2);
        if ( v18 == 2 )
          goto LABEL_13;
        if ( v18 == 3 )
          break;
      }
LABEL_53:
      v7 = &v49[v50];
      v10 = v44;
      v49 += v50;
      if ( !--v9 )
      {
        v48 = v6;
        v6 = v45;
        v13 = v48;
        goto LABEL_55;
      }
    }
    if ( (unsigned int)GetPointerDeviceType(*((_QWORD *)v17 + 2)) == 1 )
    {
      v19 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 36344);
      *(_DWORD *)(v19 + 84) = (*((_DWORD *)v17 + 3) >> 1) & 1;
      v22 = *(_QWORD *)(W32GetUserSessionState(v19, v20) + 36344);
      if ( !*(_DWORD *)(v22 + 88)
        || *(_DWORD *)(W32GetUserSessionState(v22, v21) + 36372) == 2
        || (*((_DWORD *)v17 + 3) & 0x10001) != 0 )
      {
        anonymous_namespace_::SwitchMouseCursors(3LL, 0LL);
      }
      v23 = v46;
      v46[0] = *((_DWORD *)v17 + 3);
      v46[1] = *((_DWORD *)v17 + 8);
      v46[2] = *((_DWORD *)v16 + 11);
    }
    else
    {
LABEL_13:
      v12 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 36344);
      if ( *(_DWORD *)(v12 + 84) || (*((_DWORD *)v17 + 3) & 0x2000) == 0 )
        goto LABEL_38;
      v47[0] = *((_DWORD *)v17 + 3);
      v24 = 0;
      v47[1] = *((_DWORD *)v17 + 8);
      v47[2] = *((_DWORD *)v16 + 11);
      v25 = *(_DWORD *)v17;
      v48 = 0;
      if ( v25 == 2 || v25 == 3 )
      {
        v12 = *((_QWORD *)v17 + 3);
        if ( v12 )
        {
          v26 = ValidateHwnd(v12);
          if ( v26 )
          {
            if ( (unsigned int)FeedbackGetWindowSetting(v26, 13LL, 1LL, &v48) )
              v24 = v48;
          }
        }
      }
      if ( (*((_DWORD *)v17 + 3) & 0x10001) != 0 )
      {
        v27 = 0;
        if ( *((_DWORD *)v16 + 2) == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v17 + 2)) == 2 || v24 )
        {
          v30 = 4LL;
        }
        else
        {
          if ( *((_DWORD *)v16 + 2) == 2
            && (v28 = *((_QWORD *)v17 + 3)) != 0
            && (v29 = ValidateHwnd(v28)) != 0
            && (unsigned int)FeedbackGetWindowSetting(v29, 12LL, 1LL, &v48)
            && v48
            || !(unsigned int)IsCurrentDesktopComposed() )
          {
            v27 = 1;
          }
          v30 = *((unsigned int *)v16 + 2);
        }
        LOBYTE(v11) = v27;
        anonymous_namespace_::SwitchMouseCursors(v30, v11);
        v10 = v44;
      }
      if ( v24 )
        goto LABEL_38;
      v23 = v47;
    }
    anonymous_namespace_::DeferPointerCursorOperation(v17, v23);
LABEL_38:
    if ( a5 != 3 )
    {
      v42 = 0;
      if ( *((_DWORD *)v16 + 2) != 2
        || (unsigned int)anonymous_namespace_::GetWindowVisualizationSetting(
                           (_DWORD)v17,
                           v10 == 0,
                           a5 == 2,
                           v10 == 2,
                           (__int64)&v42)
        || v42 )
      {
        if ( v8 )
        {
          v31 = (unsigned int)v6;
          v32 = 1;
          ++v6;
          v33 = (__int64)v8 + 40 * v31;
          if ( *((_DWORD *)v16 + 2) == 3 )
            v32 = anonymous_namespace_::GetWindowBarrelVisualizationSetting(v17, v43 != 0) != 0;
          v34 = v51 && a5 == 2;
          anonymous_namespace_::PointerEventIntToDigitizerContactInfo((_DWORD)v16, v34, v32, v42, v33);
          v35 = *((_DWORD *)v16 + 5);
          if ( (v35 & 0x10000) != 0 )
          {
            EtwTraceContactVisualizationDown();
          }
          else if ( (v35 & 0x40000) != 0 )
          {
            EtwTraceContactVisualizationUp();
          }
        }
      }
    }
    goto LABEL_53;
  }
LABEL_55:
  if ( v8 )
  {
    for ( i = 0; i < v13; i += v37 )
    {
      v37 = v13 - i;
      if ( v13 - i > 0xB )
        v37 = 11;
      W32GetUserSessionState(v12, v11);
      v40 = (void *)ReferenceDwmApiPort(v39, v38);
      v6 = DwmAsyncSendTouchContacts(v40);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
