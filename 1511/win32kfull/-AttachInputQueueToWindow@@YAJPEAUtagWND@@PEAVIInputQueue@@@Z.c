/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00CF1A4
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C00CF0B8 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0080330 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00803A8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C00CF2C0 (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  __int64 Prop; // rbx
  int v5; // edi

  Prop = GetProp((__int64)a1, CInputQueueProp::s_atom, 1LL);
  if ( Prop )
    goto LABEL_2;
  Prop = Win32AllocPoolZInit(48LL, 1902736213LL);
  if ( !Prop )
    return (unsigned int)-1073741801;
  *(_QWORD *)Prop = &CInputQueueProp::`vftable';
  *(_QWORD *)(Prop + 16) = 0LL;
  v5 = 0;
  *(_DWORD *)(Prop + 24) = 0;
  *(_DWORD *)(Prop + 28) = 0;
  if ( !(unsigned int)CWindowProp::SetProp((CWindowProp *)Prop, (__int64)a1) )
  {
    (**(void (__fastcall ***)(__int64))Prop)(Prop);
    Prop = 0LL;
    v5 = -1073741790;
  }
  if ( v5 >= 0 )
  {
LABEL_2:
    v5 = CInputQueueProp::AttachInputQueue((CInputQueueProp *)Prop, a2);
    if ( v5 < 0 && !*(_DWORD *)(Prop + 24) )
      CWindowProp::RemoveAndDeleteProp((CWindowProp *)Prop);
  }
  return (unsigned int)v5;
}
