/*
 * XREFs of MiGetStandbyRepurposed @ 0x14001516C
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x140014E30 (MiComputeSystemTrimCriteria.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140015C24 (MmQuerySystemWorkingSetInformation.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14011529C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWorkingSetVeryLarge @ 0x1401D29F0 (MiWorkingSetVeryLarge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyRepurposed(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx

  result = 0LL;
  if ( a2 < 8 )
  {
    v3 = (_DWORD *)(a1 + 4LL * a2 + 3688);
    v4 = 8 - a2;
    do
    {
      result = (unsigned int)(*v3++ + result);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
