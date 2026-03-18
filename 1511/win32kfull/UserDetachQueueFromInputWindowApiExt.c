/*
 * XREFs of UserDetachQueueFromInputWindowApiExt @ 0x1C00CF020
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00803A8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C00CF258 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void __fastcall UserDetachQueueFromInputWindowApiExt(unsigned __int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  CInputQueueProp *Prop; // rax
  CInputQueueProp *v7; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  v5 = HMValidateHandleNoSecure(a1, 1);
  if ( v5 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v5) )
    {
      Prop = (CInputQueueProp *)GetProp(v5, CInputQueueProp::s_atom, 1LL);
      v7 = Prop;
      if ( Prop )
      {
        CInputQueueProp::DetachInputQueue(Prop, a2);
        if ( !*((_DWORD *)v7 + 6) )
          CWindowProp::RemoveAndDeleteProp(v7);
      }
    }
  }
  if ( !v8 )
    UserSessionSwitchLeaveCrit(v5, v4);
}
