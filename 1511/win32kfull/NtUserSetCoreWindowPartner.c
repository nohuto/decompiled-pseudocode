/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C021FBC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C007576C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C02263EC (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C02266AC (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, unsigned __int64 a3)
{
  BOOL v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rdx
  int v11; // edi
  int v12; // eax
  struct tagWND *v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHWNDND(a1, &v14);
  v7 = 0;
  if ( v6 )
  {
    v10 = (struct tagWND *)HMValidateHandleNoSecure(a3, 1);
    if ( v10 )
    {
      v11 = a2 - 1;
      if ( !v11 )
      {
        v12 = CoreWindowProp::AddComponent(v14, v10);
        goto LABEL_8;
      }
      if ( v11 == 1 )
      {
        v12 = CoreWindowProp::SetHost(v14, v10);
LABEL_8:
        LOBYTE(v7) = v12 >= 0;
        goto LABEL_9;
      }
    }
  }
  UserSetLastError(87);
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
