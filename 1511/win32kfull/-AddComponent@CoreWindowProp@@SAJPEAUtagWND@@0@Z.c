/*
 * XREFs of ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C02263EC
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C021FBC0 (NtUserSetCoreWindowPartner.c)
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C02266AC (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 **i; // rax
  _QWORD *v11; // rdi

  v3 = 0;
  Prop = GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL);
  v8 = Prop;
  if ( Prop && *(_DWORD *)(Prop + 16) )
  {
    v9 = GetProp(v6, v7, v5);
    if ( v9 )
    {
      for ( i = *(__int64 ***)(v9 + 32); i; i = (__int64 **)*i )
      {
        if ( a2 == (struct tagWND *)i[1] )
          goto LABEL_9;
      }
    }
    i = 0LL;
LABEL_9:
    if ( !i )
    {
      v11 = (_QWORD *)Win32AllocPool(16LL);
      if ( v11 )
      {
        *v11 = *(_QWORD *)(v8 + 32);
        v11[1] = 0LL;
        HMAssignmentLock(v11 + 1, a2);
        ++*(_DWORD *)(v8 + 40);
        *(_QWORD *)(v8 + 32) = v11;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return v3;
  }
  else
  {
    UserSetLastError(5);
    return 3221225506LL;
  }
}
