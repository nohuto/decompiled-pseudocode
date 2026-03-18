/*
 * XREFs of ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C02266AC
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C021FBC0 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C02263EC (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x1C0226730 (-SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::SetHost(struct tagWND *a1, struct tagWND *a2)
{
  __int64 Prop; // rax
  int v5; // r8d
  __int64 v6; // rbx
  __int64 result; // rax

  Prop = GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL);
  v6 = Prop;
  if ( Prop && *(_DWORD *)(Prop + 20) )
  {
    result = CoreWindowProp::SetRole(a2, (unsigned int)(v5 + 1));
    if ( (int)result >= 0 )
    {
      result = CoreWindowProp::AddComponent(a2, a1);
      if ( (int)result >= 0 )
      {
        HMAssignmentLock(v6 + 24, a2);
        return 0LL;
      }
    }
  }
  else
  {
    UserSetLastError(5);
    return 3221225506LL;
  }
  return result;
}
