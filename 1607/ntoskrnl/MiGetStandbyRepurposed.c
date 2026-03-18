/*
 * XREFs of MiGetStandbyRepurposed @ 0x1400BF4A8
 * Callers:
 *     MiAllocateWsle @ 0x14003C0F0 (MiAllocateWsle.c)
 *     MiComputeSystemTrimCriteria @ 0x1400BF160 (MiComputeSystemTrimCriteria.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400C03A0 (MmQuerySystemWorkingSetInformation.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140124224 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWorkingSetVeryLarge @ 0x1401E2AAC (MiWorkingSetVeryLarge.c)
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
    v3 = (_DWORD *)(a1 + 4LL * a2 + 3816);
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
