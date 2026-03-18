/*
 * XREFs of ResolveDCompInputHandleToPwnd @ 0x1C000C718
 * Callers:
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C000C814 (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     ResolveInputSinkToPwnd @ 0x1C000C8E0 (ResolveInputSinkToPwnd.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0224340 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0224398 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 */

InputTransform *ResolveDCompInputHandleToPwnd(__int64 a1, struct tagWND *a2, unsigned int a3, ...)
{
  struct tagWND *v3; // rsi
  __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  struct tagWND *v8; // r14
  __int64 v9; // rax
  InputTransform *v10; // rdi
  unsigned int v11; // ebp
  unsigned __int64 *v12; // r9
  void *v13; // r8
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
  v6 = HMValidateHandleNoSecure(a1, a2);
  v7 = 0LL;
  v8 = (struct tagWND *)v6;
  if ( v6 && *(char *)(v6 + 43) >= 0 )
  {
    v15[0] = 0;
    v9 = ResolveInputSinkToPwnd(v3, a3, v15);
    v10 = (InputTransform *)v9;
    if ( v9 && *(char *)(v9 + 43) < 0 )
      v10 = 0LL;
    v11 = 0;
    if ( v10 )
    {
      if ( a3 && (unsigned int)SetCompositionInputWindowUIOwner(v10, v8) && !v15[0] )
      {
        v11 = 1;
        if ( InputTransform::StoreTransform(v10, v18, (const struct tagINPUT_TRANSFORM *)va, v12) )
          InputTransform::SetCompositionInput(v10, v3, v13);
        else
          v11 = 0;
      }
      v7 = *(_QWORD *)v10;
    }
    EtwTraceDITResolveDCompInputHandleToHwnd(v3, v7, v4, v11);
    NtClose(v3);
    return v10;
  }
  else
  {
    NtClose(v3);
    return 0LL;
  }
}
