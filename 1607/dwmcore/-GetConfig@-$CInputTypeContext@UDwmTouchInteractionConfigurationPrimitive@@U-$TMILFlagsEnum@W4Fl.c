/*
 * XREFs of ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18016E80C
 * Callers:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18016D6F8 (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmTouchInteractionConfigurationPri.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x18000DE50 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // r9d
  __int64 v10; // r8
  int v11; // eax
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)a2 = a3;
  *(_DWORD *)(a2 + 4) = a3;
  v7 = 0LL;
  *(_DWORD *)(v4 + 8) = 0;
  if ( a3 )
  {
    v9 = *(_DWORD *)(a1 + 112);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 88);
      while ( a3 >= *(_DWORD *)(v10 + 12 * v7) )
      {
        if ( a3 <= *(_DWORD *)(v10 + 12 * v7 + 4) )
        {
          v11 = *(_DWORD *)(v10 + 12 * v7 + 8);
          *(_QWORD *)v4 = *(_QWORD *)(v10 + 12 * v7);
          *(_DWORD *)(v4 + 8) = v11;
          break;
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v9 )
          break;
      }
    }
    anonymous_namespace_::GetTemporaryConfigWithMask(a4, &v13, &v14);
    v8 = v13 & v14 | *(_DWORD *)(v4 + 8) & ~v14;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)v4 = *(_QWORD *)(a1 + 8);
  }
  *(_DWORD *)(v4 + 8) = v8;
  return v4;
}
