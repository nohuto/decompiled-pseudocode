/*
 * XREFs of ResolveDCompInputHandleToPwnd @ 0x1C0008CE0
 * Callers:
 *     DCESpeedHitTest @ 0x1C0066310 (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B78C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C0008DA8 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 *     ResolveInputSinkToPwnd @ 0x1C0008E18 (ResolveInputSinkToPwnd.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0228250 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C02282A8 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 */

__int64 ResolveDCompInputHandleToPwnd(__int64 a1, struct tagWND *a2, unsigned int a3, ...)
{
  struct tagWND *v3; // rsi
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v7; // rbx
  struct tagWND *v8; // r15
  __int64 v9; // rax
  InputTransform *v10; // rdi
  unsigned int v11; // ebp
  CInputQueueProp *Prop; // rax
  unsigned __int64 *v13; // r9
  void *v14; // r8
  _DWORD v15[14]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  struct tagWND *v18; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, struct tagWND *);
  v3 = a2;
  v4 = v16;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  v7 = 0LL;
  v8 = (struct tagWND *)result;
  if ( result )
  {
    v15[0] = 0;
    v9 = ResolveInputSinkToPwnd(v3, a3, v15);
    v10 = (InputTransform *)v9;
    v11 = 0;
    if ( v9 )
    {
      if ( a3 )
      {
        Prop = (CInputQueueProp *)GetProp(v9, CInputQueueProp::s_atom, 1LL);
        if ( Prop )
        {
          if ( *((_DWORD *)Prop + 6) )
          {
            CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(Prop, v8);
            if ( !v15[0] )
            {
              v11 = 1;
              if ( InputTransform::StoreTransform(v10, v18, (const struct tagINPUT_TRANSFORM *)va, v13) )
                InputTransform::SetCompositionInput(v10, v3, v14);
              else
                v11 = 0;
            }
          }
        }
      }
      v7 = *(_QWORD *)v10;
    }
    EtwTraceDITResolveDCompInputHandleToHwnd(v3, v7, v4, v11);
    NtClose(v3);
    return (__int64)v10;
  }
  return result;
}
