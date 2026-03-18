/*
 * XREFs of ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C001CC70
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@IEAAJPEAXPEA_N@Z @ 0x1C001CBC0 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@IEAAJPEAXPEA_N@Z.c)
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C001CE90 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C001D0B0 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C001D614 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY@@@Z @ 0x1C0020788 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(
        DirectComposition::CInteractionMarshaler *this)
{
  int InputQueueTypes; // ebx
  CompositionInputObject *v3; // rcx
  char v4; // bp
  _BYTE v6[4]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  int v9; // [rsp+30h] [rbp-18h]

  InputQueueTypes = 0;
  if ( (*((_BYTE *)this + 216) & 1) == 0 )
    return 0LL;
  v3 = (CompositionInputObject *)*((_QWORD *)this + 23);
  v4 = 0;
  if ( v3 )
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(v3, (struct COMPOSITION_INPUT_SINK_QUERY *)v6);
  else
    v4 = 1;
  if ( InputQueueTypes >= 0 )
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
      (char *)this + 56,
      0LL);
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
      (char *)this + 80,
      0LL);
    *((_DWORD *)this + 26) = 0;
    *((_DWORD *)this + 25) = 0;
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 13) |= 0xFu;
    if ( v4 || v9 > 1 )
      InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 3LL);
    if ( InputQueueTypes >= 0 )
    {
      if ( v4 || v7 > 1 )
        InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 4LL);
      if ( InputQueueTypes >= 0 && (v4 || v8 > 1) )
      {
        InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 1LL);
        if ( InputQueueTypes >= 0 )
          InputQueueTypes = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll(
                              (char *)this + 40,
                              2LL);
      }
    }
    *((_DWORD *)this + 4) |= 0x400u;
  }
  return (unsigned int)InputQueueTypes;
}
