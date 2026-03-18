/*
 * XREFs of ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C012F380
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 * Callees:
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     _CloseDesktop @ 0x1C00DCA48 (_CloseDesktop.c)
 *     ?SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z @ 0x1C012F504 (-SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z.c)
 */

__int64 __fastcall xxxCreateDisconnectDesktop(HWINSTA a1, struct tagWINDOWSTATION *a2)
{
  __int64 EmptyRgnPublic; // rbx
  NTSTATUS v5; // eax
  NTSTATUS v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v11; // [rsp+50h] [rbp-30h] BYREF
  HWINSTA v12; // [rsp+58h] [rbp-28h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  __int128 v15; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  EmptyRgnPublic = CreateEmptyRgnPublic(a1, a2);
  if ( EmptyRgnPublic )
  {
    RtlInitUnicodeString(&DestinationString, L"Disconnect");
    p_DestinationString = &DestinationString;
    v11 = 48;
    v12 = a1;
    v14 = 192;
    v15 = 0LL;
    if ( (int)xxxCreateDesktopEx((__int64)&v11, 0, 0x2000000LL, 0, &Handle, 1) < 0 )
    {
      GreDeleteObject(EmptyRgnPublic);
    }
    else if ( (int)SetDisconnectDesktopSecurity((HDESK)Handle) < 0
           || (v5 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL),
               gspdeskDisconnect = Object,
               v5 < 0) )
    {
      GreDeleteObject(EmptyRgnPublic);
      LOBYTE(v9) = 1;
      CloseDesktop((unsigned __int64)Handle, v9);
      gspdeskDisconnect = 0LL;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 16LL) + 200LL) = EmptyRgnPublic;
      KeAttachProcess(gpepCSRSS);
      v6 = ObOpenObjectByPointer(gspdeskDisconnect, 0x200u, 0LL, 0x1F0003u, 0LL, 0, &ghDisconnectDesk);
      if ( v6 >= 0 )
        v6 = ObOpenObjectByPointer(a2, 0, 0LL, 0x1F0003u, 0LL, 0, &ghDisconnectWinSta);
      KeDetachProcess();
      if ( v6 >= 0 )
        return 1LL;
      GreDeleteObject(EmptyRgnPublic);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)gspdeskDisconnect + 1) + 16LL) + 200LL) = 0LL;
      if ( ghDisconnectDesk )
      {
        ObCloseHandle(ghDisconnectDesk, 0);
        ghDisconnectDesk = 0LL;
      }
      LOBYTE(v8) = 1;
      CloseDesktop((unsigned __int64)Handle, v8);
    }
  }
  return 0LL;
}
