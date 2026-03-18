/*
 * XREFs of UserDetachQueueFromInputWindowApiExt @ 0x1C01F6B40
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0064FD8 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C007F108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00E9F18 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C0226438 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindowApiExt(unsigned __int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  CInputQueueProp *v6; // rbx
  int v7; // [rsp+40h] [rbp+18h] BYREF
  CInputQueueProp *v8; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  v5 = HMValidateHandleNoSecure(a1, 1);
  if ( v5 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v5) )
    {
      if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(v5, &v8) )
      {
        v6 = v8;
        CInputQueueProp::DetachInputQueue(v8, a2);
        if ( !*((_DWORD *)v6 + 6) )
          CWindowProp::RemoveAndDeleteProp(v6);
      }
    }
  }
  if ( !v7 )
    UserSessionSwitchLeaveCrit(v5, v4);
}
