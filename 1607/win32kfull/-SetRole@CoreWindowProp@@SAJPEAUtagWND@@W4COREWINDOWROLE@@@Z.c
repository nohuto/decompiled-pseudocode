/*
 * XREFs of ?SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x1C022644C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C02263C8 (-SetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0099960 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C022613C (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::SetRole(unsigned __int64 a1, int a2)
{
  CWindowProp *v4; // rbx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  CWindowProp *Prop; // [rsp+40h] [rbp+18h] BYREF

  Prop = (CWindowProp *)GetProp(a1, CoreWindowProp::s_atom, 1LL);
  v4 = Prop;
  if ( Prop )
  {
    v5 = 0;
LABEL_7:
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          *((_DWORD *)v4 + 4) = 1;
        }
        else
        {
          UserSetLastError(87LL);
          return (unsigned int)-1073741811;
        }
      }
      else
      {
        *((_DWORD *)v4 + 5) = 1;
      }
    }
    return (unsigned int)v5;
  }
  v6 = CWindowProp::CreateWindowProp<CoreWindowProp>(&Prop);
  v4 = Prop;
  v5 = v6;
  if ( v6 >= 0 && !(unsigned int)CWindowProp::SetProp(Prop, a1) )
  {
    (**(void (__fastcall ***)(CWindowProp *))v4)(v4);
    v4 = 0LL;
    v5 = -1073741790;
  }
  if ( v5 >= 0 )
    goto LABEL_7;
  return (unsigned int)v5;
}
