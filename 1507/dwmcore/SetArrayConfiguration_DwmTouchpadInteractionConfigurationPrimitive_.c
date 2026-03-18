/*
 * XREFs of SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x180059428
 * Callers:
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18005A964 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
        void *Src,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  int v9; // eax

  v3 = a2;
  if ( !Src && a2 )
  {
    v8 = -2147024809;
LABEL_10:
    *(_DWORD *)(a3 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)a3, 0xCu);
    return v8;
  }
  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)a3, 0xCu);
  v6 = *(unsigned int *)(a3 + 24);
  v7 = v6 + v3;
  if ( (int)v6 + (int)v3 < (unsigned int)v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_10;
  }
  v8 = 0;
  if ( v7 <= *(_DWORD *)(a3 + 20) )
  {
    memcpy_0((void *)(*(_QWORD *)a3 + 12 * v6), Src, 12 * v3);
    *(_DWORD *)(a3 + 24) = v7;
    return v8;
  }
  v9 = DynArrayImpl<0>::AddMultipleAndSet(a3, 0xCu, v3, Src);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  if ( (v8 & 0x80000000) != 0 )
    goto LABEL_10;
  return v8;
}
