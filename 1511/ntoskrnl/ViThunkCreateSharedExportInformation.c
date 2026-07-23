/*
 * XREFs of ViThunkCreateSharedExportInformation @ 0x1406B21F8
 * Callers:
 *     VfThunkAddTargetNotify @ 0x1406B2128 (VfThunkAddTargetNotify.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140021DFC (RtlNumberOfClearBits.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ViThunkFreeSharedThunksArray @ 0x1406B22B0 (ViThunkFreeSharedThunksArray.c)
 *     ViThunkSnapSharedExports @ 0x1406B22D8 (ViThunkSnapSharedExports.c)
 */

__int64 __fastcall ViThunkCreateSharedExportInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        _QWORD *a5)
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
