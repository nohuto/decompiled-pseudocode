/*
 * XREFs of ?SupportsPointerType@CInteraction@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x18000D9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x18000DCD8 (-SupportsPointerType@CInteractionProcessor@@QEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTyp.c)
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18002117C (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 */

__int64 __fastcall CInteraction::SupportsPointerType(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  v2 = 0;
  if ( a2 == 6 )
  {
    v4 = *(_QWORD *)(a1 + 168);
    if ( v4 )
      LOBYTE(v2) = (unsigned int)CInputSinkStruct::GetInputQueueType(v4, 6LL) != 0;
  }
  else
  {
    return (unsigned int)CInteractionProcessor::SupportsPointerType(a1 + 408);
  }
  return v2;
}
