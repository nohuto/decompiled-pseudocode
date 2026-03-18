/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x18005ABB4
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x18005A8EC (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800594C8 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x180059508 (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v2 = *(unsigned int *)(a1 + 112);
  v11 = 0LL;
  v12 = 0;
  v5 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_9:
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease((__int64 *)a1);
    return v6;
  }
  v6 = 0;
  if ( v5 <= *(_DWORD *)(a1 + 108) )
  {
    v9 = *(_QWORD *)(a1 + 88);
    v10 = 3 * v2;
    *(_QWORD *)(v9 + 4 * v10) = v11;
    *(_DWORD *)(v9 + 4 * v10 + 8) = v12;
    *(_DWORD *)(a1 + 112) = v5;
    goto LABEL_4;
  }
  v7 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 88, 0xCu, 1, &v11);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    goto LABEL_9;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::operator=((__int64 *)a1, a2);
  return v6;
}
