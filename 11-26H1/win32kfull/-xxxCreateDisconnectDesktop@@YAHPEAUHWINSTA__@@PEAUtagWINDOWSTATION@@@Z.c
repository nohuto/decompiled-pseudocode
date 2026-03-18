/*
 * XREFs of ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x14018AF90
 * Callers:
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x14001843C (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     ?SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z @ 0x14018B254 (-SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z.c)
 *     _CloseDesktop @ 0x14018B418 (_CloseDesktop.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall xxxCreateDisconnectDesktop(HWINSTA a1, struct tagWINDOWSTATION *a2)
{
  __int64 EmptyRgnPublic; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  PVOID v13; // rcx
  __int64 v14; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void **v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  NTSTATUS v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v30[2]; // [rsp+50h] [rbp-30h] BYREF
  HWINSTA v31; // [rsp+58h] [rbp-28h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v33; // [rsp+68h] [rbp-18h]
  int v34; // [rsp+6Ch] [rbp-14h]
  __int128 v35; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  v30[1] = 0;
  DestinationString = 0LL;
  v34 = 0;
  Handle = 0LL;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  if ( !EmptyRgnPublic )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"Disconnect");
  p_DestinationString = &DestinationString;
  v30[0] = 48;
  v31 = a1;
  v33 = 192;
  v35 = 0LL;
  if ( (int)xxxCreateDesktopEx((unsigned int)v30, 0, 0x2000000, 0, (__int64)&Handle, 1) < 0 )
  {
    GreDeleteObject(EmptyRgnPublic);
    return 0LL;
  }
  if ( (int)SetDisconnectDesktopSecurity((HDESK)Handle) < 0
    || (UserSessionState = W32GetUserSessionState(v6, v5),
        Object = 0LL,
        v11 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL),
        v13 = Object,
        *(_QWORD *)(UserSessionState + 62976) = Object,
        v11 < 0) )
  {
    GreDeleteObject(EmptyRgnPublic);
    CloseDesktop(Handle);
    *(_QWORD *)(W32GetUserSessionState(v8, v7) + 62976) = 0LL;
    return 0LL;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 62976) + 8LL) + 24LL);
  *(_QWORD *)(*(_QWORD *)(v14 + 40) + 168LL) = EmptyRgnPublic;
  UserGdiSessionState = W32GetUserGdiSessionState(v14);
  KeAttachProcess(*(PRKPROCESS *)(UserGdiSessionState + 40));
  v18 = (void **)(W32GetUserSessionState(v17, v16) + 68880);
  v21 = W32GetUserSessionState(v20, v19);
  v24 = ObOpenObjectByPointer(*(PVOID *)(v21 + 62976), 0x200u, 0LL, 0x1F0003u, 0LL, 0, v18);
  if ( v24 >= 0 )
  {
    v27 = W32GetUserSessionState(v23, v22);
    v24 = ObOpenObjectByPointer(a2, 0, 0LL, 0x1F0003u, 0LL, 0, (PHANDLE)(v27 + 68888));
  }
  KeDetachProcess();
  if ( v24 < 0 )
  {
    v28 = W32GetUserSessionState(v26, v25);
    tagWND::ClearClipRgnOrMaxClip(*(tagWND **)(*(_QWORD *)(*(_QWORD *)(v28 + 62976) + 8LL) + 24LL));
    if ( *v18 )
    {
      ObCloseHandle(*v18, 0);
      *v18 = 0LL;
    }
    CloseDesktop(Handle);
    return 0LL;
  }
  return 1LL;
}
