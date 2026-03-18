/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C004C568
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C004BDE8 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
        __int64 a1,
        unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = Win32FreePool();
  if ( a2 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v5 = a2++;
      result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = result;
    }
    while ( a2 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
