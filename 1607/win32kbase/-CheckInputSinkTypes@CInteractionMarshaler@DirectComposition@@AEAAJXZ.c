/*
 * XREFs of ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C004B77C
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C004B958 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C004BA90 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0048994 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C004C07C (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C004C654 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
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
  if ( (*((_BYTE *)this + 240) & 1) == 0 )
    return 0LL;
  v3 = (CompositionInputObject *)*((_QWORD *)this + 23);
  v4 = 0;
  if ( v3 )
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(v3, (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)v6);
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
    *((_DWORD *)this + 4) |= 0x200u;
  }
  return (unsigned int)InputQueueTypes;
}
