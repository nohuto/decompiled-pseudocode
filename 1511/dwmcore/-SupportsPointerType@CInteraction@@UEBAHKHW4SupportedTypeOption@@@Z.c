/*
 * XREFs of ?SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x180005DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x1800052CC (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 *     ?ConvertToInputType@?A0xe8837992@@YA?AW4InputType@@K@Z @ 0x180005C30 (-ConvertToInputType@-A0xe8837992@@YA-AW4InputType@@K@Z.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@HW4SupportedTypeOption@@@Z @ 0x180005D50 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@HW4SupportedTypeOption@@@Z.c)
 */

__int64 __fastcall CInteraction::SupportsPointerType(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // r10
  int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // eax
  __int64 v9; // rcx

  v2 = 0;
  if ( a2 == 6 )
  {
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
      LOBYTE(v2) = (unsigned int)CInputSinkStruct::GetInputQueueType(v9, 6) != 0;
  }
  else
  {
    v3 = `anonymous namespace'::ConvertToInputType(a2);
    LOBYTE(v7) = CInteractionProcessor::SupportsPointerType(v4 + 224, v3, v5, v6);
    return v7;
  }
  return v2;
}
