/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C004F4D0
 * Callers:
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C004F020 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00DA0F0 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C004F5D8 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  int v3; // edi
  __int64 v5; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // r10

  v3 = 0;
  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 12)
    || (v3 = CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Grow(),
        v3 >= 0) )
  {
    v7 = Win32AllocPoolZInit(0xCuLL);
    if ( !v7 )
      v3 = -1073741801;
    if ( v3 < 0 )
    {
      if ( v7 )
        Win32FreePool();
    }
    else
    {
      *(_QWORD *)v7 = *(_QWORD *)a2;
      *(_DWORD *)(v7 + 8) = *(_DWORD *)(a2 + 8);
      v8 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v8 > (unsigned int)v5 )
      {
        v10 = 8 * v8;
        do
        {
          v8 = (unsigned int)(v8 - 1);
          *(_QWORD *)(v10 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v8);
          v10 -= 8LL;
        }
        while ( (unsigned int)v8 > (unsigned int)v5 );
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v7;
      ++*(_DWORD *)(a1 + 8);
    }
  }
  return (unsigned int)v3;
}
