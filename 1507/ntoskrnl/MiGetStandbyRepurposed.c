/*
 * XREFs of MiGetStandbyRepurposed @ 0x14011374C
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140113204 (MmQuerySystemWorkingSetInformation.c)
 *     MiComputeSystemTrimCriteria @ 0x14011341C (MiComputeSystemTrimCriteria.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14014B610 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWorkingSetVeryLarge @ 0x140213D20 (MiWorkingSetVeryLarge.c)
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
    v3 = (_DWORD *)(a1 + 4LL * a2 + 3496);
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
