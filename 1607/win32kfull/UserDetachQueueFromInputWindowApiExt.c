/*
 * XREFs of UserDetachQueueFromInputWindowApiExt @ 0x1C0099CB0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C007CE28 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C009991C (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C0099EB8 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void __fastcall UserDetachQueueFromInputWindowApiExt(unsigned __int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  CWindowProp *v9; // rbx
  int v10; // [rsp+40h] [rbp+18h] BYREF
  CWindowProp *v11; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  LOBYTE(v4) = 1;
  v8 = HMValidateHandleNoSecure(a1, v4, v5, v6);
  if ( v8 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v8) )
    {
      if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(v8, &v11) )
      {
        v9 = v11;
        CInputQueueProp::DetachInputQueue(v11, a2);
        if ( !*((_DWORD *)v9 + 6) )
          CWindowProp::RemoveAndDeleteProp((void (__fastcall ***)(CWindowProp *))v9);
      }
    }
  }
  if ( !v10 )
    UserSessionSwitchLeaveCrit(v8, v7);
}
