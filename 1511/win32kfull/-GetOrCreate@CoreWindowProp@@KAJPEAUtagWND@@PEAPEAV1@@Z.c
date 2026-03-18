/*
 * XREFs of ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C0226540
 * Callers:
 *     ?SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x1C0226730 (-SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0080330 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreWindowProp::GetOrCreate(struct tagWND *a1, struct CoreWindowProp **a2)
{
  unsigned int v3; // ebx
  struct CoreWindowProp *Prop; // rax
  struct CoreWindowProp *v6; // rax

  *a2 = 0LL;
  v3 = 0;
  Prop = (struct CoreWindowProp *)GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL);
  *a2 = Prop;
  if ( !Prop )
  {
    v6 = (struct CoreWindowProp *)Win32AllocPoolZInit(48LL, 1920430933LL);
    if ( v6 )
    {
      *a2 = v6;
      *(_QWORD *)v6 = &CoreWindowProp::`vftable';
      if ( !(unsigned int)CWindowProp::SetProp(v6, (__int64)a1) )
      {
        (**(void (__fastcall ***)(_QWORD))*a2)(*a2);
        *a2 = 0LL;
        return (unsigned int)-1073741790;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
