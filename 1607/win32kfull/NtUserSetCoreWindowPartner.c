/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C0219810
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00A5B80 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022619C (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C02263C8 (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, unsigned __int64 a3)
{
  BOOL v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rdx
  int v14; // edi
  int v15; // eax
  struct tagWND *v17; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHWNDND(a1, &v17);
  v10 = 0;
  if ( v6 )
  {
    LOBYTE(v7) = 1;
    v13 = (struct tagWND *)HMValidateHandleNoSecure(a3, v7, v8, v9);
    if ( v13 )
    {
      v14 = a2 - 1;
      if ( !v14 )
      {
        v15 = CoreWindowProp::AddComponent(v17, v13);
        goto LABEL_8;
      }
      if ( v14 == 1 )
      {
        v15 = CoreWindowProp::SetHost(v17, v13);
LABEL_8:
        LOBYTE(v10) = v15 >= 0;
        goto LABEL_9;
      }
    }
  }
  UserSetLastError(87LL);
LABEL_9:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v10;
}
