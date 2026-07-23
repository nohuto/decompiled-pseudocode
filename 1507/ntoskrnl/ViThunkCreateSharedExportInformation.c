/*
 * XREFs of ViThunkCreateSharedExportInformation @ 0x140732268
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140732198 (VfThunkAddTargetNotify.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x1400EF684 (RtlNumberOfClearBits.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ViThunkFreeSharedThunksArray @ 0x1407320A4 (ViThunkFreeSharedThunksArray.c)
 *     ViThunkSnapSharedExports @ 0x140732320 (ViThunkSnapSharedExports.c)
 */

__int64 __fastcall ViThunkCreateSharedExportInformation(__int64 a1, __int64 a2, __int64 a3, _RTL_BITMAP *a4, void **a5)
{
  unsigned int v9; // ebx
  ULONG v10; // eax
  ULONG v11; // esi
  PVOID PoolWithTag; // rax

  v9 = 1;
  v10 = RtlNumberOfClearBits(a4);
  v11 = v10;
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v10, 0x54496656u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned int)ViThunkSnapSharedExports(a1, a2, a3, a4, v11, PoolWithTag) )
        ViThunkFreeSharedThunksArray(a5);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return v9;
}
