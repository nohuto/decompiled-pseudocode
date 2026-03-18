/*
 * XREFs of ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402453DC
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1401FD7B0 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x14003A3D0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402454B4 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x140245638 (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1402C89EC (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402C8A60 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402E16B4 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::xxxSetHost(struct tagWND *a1, struct tagWND *a2)
{
  struct CoreWindowProp *v4; // rsi
  struct tagWND *v5; // rcx
  int v6; // ebx
  struct CoreWindowProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a1, (__int64 *)&v8) && (v4 = v8, *((_DWORD *)v8 + 7)) )
  {
    v5 = (struct tagWND *)*((_QWORD *)v8 + 4);
    if ( !v5 || (v6 = CoreWindowProp::RemoveComponent(v5, a1), v6 >= 0) )
    {
      v8 = 0LL;
      v6 = CoreWindowProp::GetOrCreate(a2, &v8);
      if ( v6 >= 0 )
      {
        *((_DWORD *)v8 + 6) = 1;
        v6 = CoreWindowProp::AddComponent(a2, a1);
        if ( v6 >= 0 )
        {
          *((_QWORD *)v4 + 4) = a2;
          v6 = 0;
          if ( IsPwndComponentWebview(a1) )
            xxxEstablishWebviewHostComponentRelationship(a1, a2);
        }
      }
    }
  }
  else
  {
    UserSetLastError(5);
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
