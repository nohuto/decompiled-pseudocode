/*
 * XREFs of ?GetConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA?AUDwmTouchpadInteractionConfigurationPrimitive@@I@Z @ 0x18012E2C4
 * Callers:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJIW4InteractionState@@@Z @ 0x18012DB3C (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmTouchpadInteractionConfiguration.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::GetConfig(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // xmm0_8
  unsigned int v5; // eax
  unsigned int v6; // r11d
  __int64 v7; // r10

  v3 = 0LL;
  *a2 = a3;
  a2[1] = a3;
  a2[2] = 0;
  if ( a3 )
  {
    v6 = *(_DWORD *)(a1 + 112);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 88);
      while ( a3 >= *(_DWORD *)(v7 + 12 * v3) )
      {
        if ( a3 <= *(_DWORD *)(v7 + 12 * v3 + 4) )
        {
          v4 = *(_QWORD *)(v7 + 12 * v3);
          v5 = *(_DWORD *)(v7 + 12 * v3 + 8);
          goto LABEL_10;
        }
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v6 )
          return a2;
      }
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 16);
LABEL_10:
    *(_QWORD *)a2 = v4;
    a2[2] = v5;
  }
  return a2;
}
