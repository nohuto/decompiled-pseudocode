/*
 * XREFs of ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0098600
 * Callers:
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C0098528 (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C0098398 (--$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C009991C (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0099960 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, int a2, struct CompositionObject *a3)
{
  char v6; // si
  CWindowProp *Prop; // rax
  CHwndTargetProp *v8; // rdi
  int v9; // ebx
  CWindowProp *v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  Prop = (CWindowProp *)GetProp((__int64)a1, CHwndTargetProp::s_atom, 1LL);
  v11 = Prop;
  v8 = Prop;
  if ( Prop )
  {
    if ( a2 )
    {
      if ( *((_QWORD *)Prop + 2) )
        return (unsigned int)-1073741790;
    }
    else if ( *((_QWORD *)Prop + 3) )
    {
      return (unsigned int)-1073741790;
    }
LABEL_6:
    v9 = CHwndTargetProp::SetSystemVisual(v8, a2, a3);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_14;
  }
  v9 = CWindowProp::CreateWindowProp<CHwndTargetProp>(&v11);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v8 = v11;
  if ( (unsigned int)CWindowProp::SetProp(v11, a1) )
  {
    v6 = 1;
  }
  else
  {
    (**(void (__fastcall ***)(CHwndTargetProp *))v8)(v8);
    v8 = 0LL;
    v9 = -1073741790;
  }
  if ( v9 >= 0 )
    goto LABEL_6;
LABEL_14:
  if ( v6 )
    CWindowProp::RemoveAndDeleteProp(v8);
  return (unsigned int)v9;
}
