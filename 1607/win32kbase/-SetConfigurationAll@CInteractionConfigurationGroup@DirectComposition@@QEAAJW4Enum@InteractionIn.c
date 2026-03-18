/*
 * XREFs of ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C004C07C
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C004B77C (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C004C59C (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C004C654 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll(_DWORD *a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+24h] [rbp-14h]
  int v10; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          a1[16] = -1;
          a1[3] |= 1u;
        }
        else
        {
          return (unsigned int)-1073741811;
        }
      }
      else
      {
        a1[15] = -1;
        a1[3] |= 2u;
      }
    }
    else
    {
      CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
        a1 + 10,
        0LL);
      v9 = -1;
      v10 = -1;
      v8 = 1;
      v3 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
             a1 + 10,
             &v8,
             0LL);
      if ( v3 >= 0 )
      {
        a1[14] = 0;
        a1[3] |= 8u;
      }
    }
  }
  else
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
      a1 + 4,
      0LL);
    v9 = -1;
    v10 = -1;
    v8 = 1;
    v3 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
           a1 + 4,
           &v8,
           0LL);
    if ( v3 >= 0 )
    {
      a1[8] = 0;
      a1[3] |= 4u;
    }
  }
  return (unsigned int)v3;
}
