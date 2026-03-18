/*
 * XREFs of ResolveDCompInputHandleToPwnd @ 0x1C000776C
 * Callers:
 *     DCESpeedHitTest @ 0x1C0065270 (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C008D450 (SpeedHitTest.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B488 (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     ResolveInputSinkToPwnd @ 0x1C0007858 (ResolveInputSinkToPwnd.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0064FD8 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C02264A0 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0227F54 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0227FAC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
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
  unsigned __int64 *v12; // r9
  void *v13; // r8
  int v14; // [rsp+20h] [rbp-38h] BYREF
  CInputQueueProp *v15; // [rsp+28h] [rbp-30h] BYREF
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
    v14 = 0;
    v9 = ResolveInputSinkToPwnd(v3, a3, &v14);
    v10 = (InputTransform *)v9;
    v11 = 0;
    if ( v9 )
    {
      if ( a3 )
      {
        if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(v9, &v15) )
        {
          if ( *((_DWORD *)v15 + 6) )
          {
            CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v15, v8);
            if ( !v14 )
            {
              v11 = 1;
              if ( InputTransform::StoreTransform(v10, v18, (const struct tagINPUT_TRANSFORM *)va, v12) )
                InputTransform::SetCompositionInput(v10, v3, v13);
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
