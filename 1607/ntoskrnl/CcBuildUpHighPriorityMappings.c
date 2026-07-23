/*
 * XREFs of CcBuildUpHighPriorityMappings @ 0x140148130
 * Callers:
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     CcInitializeVacbs @ 0x1407B499C (CcInitializeVacbs.c)
 * Callees:
 *     MmReserveViewInSystemCache @ 0x140575A08 (MmReserveViewInSystemCache.c)
 */

__int64 __fastcall CcBuildUpHighPriorityMappings(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // r14
  unsigned int v4; // ebx
  unsigned int i; // edi

  result = (unsigned int)CcMinimumFreeHighPriorityVacbs;
  if ( CcNumberOfFreeHighPriorityVacbs < (unsigned int)CcMinimumFreeHighPriorityVacbs )
  {
    v3 = (__int64 *)(a1 + 16);
    v4 = CcMinimumFreeHighPriorityVacbs - CcNumberOfFreeHighPriorityVacbs;
    if ( CcMinimumFreeHighPriorityVacbs - CcNumberOfFreeHighPriorityVacbs <= (unsigned int)CcMinimumFreeHighPriorityVacbs )
    {
      for ( i = 0; i < v4; v3 += 5 )
      {
        if ( i >= 0xCCC )
          break;
        result = MmReserveViewInSystemCache();
        *v3 = result;
        if ( !result )
          break;
        ++*(_DWORD *)(a1 + 4);
        ++i;
      }
    }
  }
  return result;
}
