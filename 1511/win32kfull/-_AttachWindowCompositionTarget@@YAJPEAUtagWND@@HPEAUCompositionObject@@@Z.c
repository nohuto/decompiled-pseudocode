/*
 * XREFs of ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00D1FE0
 * Callers:
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C00D1F08 (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0080330 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00803A8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, int a2, struct CompositionObject *a3)
{
  char v6; // si
  __int64 Prop; // rax
  CWindowProp *v8; // rdi
  int v9; // ebx

  v6 = 0;
  Prop = GetProp((__int64)a1, CHwndTargetProp::s_atom, 1LL);
  v8 = (CWindowProp *)Prop;
  if ( Prop )
  {
    if ( a2 )
    {
      if ( !*(_QWORD *)(Prop + 16) )
        goto LABEL_6;
    }
    else if ( !*(_QWORD *)(Prop + 24) )
    {
      goto LABEL_6;
    }
    return (unsigned int)-1073741790;
  }
  v9 = 0;
  v8 = (CWindowProp *)Win32AllocPoolZInit(40LL, 1835299669LL);
  if ( !v8 )
    return (unsigned int)-1073741801;
  *(_QWORD *)v8 = &CHwndTargetProp::`vftable';
  if ( (unsigned int)CWindowProp::SetProp(v8, (__int64)a1) )
  {
    v6 = 1;
  }
  else
  {
    (**(void (__fastcall ***)(CWindowProp *))v8)(v8);
    v8 = 0LL;
    v9 = -1073741790;
  }
  if ( v9 >= 0 )
  {
LABEL_6:
    v9 = CHwndTargetProp::SetSystemVisual(v8, a2, a3);
    if ( v9 >= 0 )
      return (unsigned int)v9;
  }
  if ( v6 )
    CWindowProp::RemoveAndDeleteProp(v8);
  return (unsigned int)v9;
}
