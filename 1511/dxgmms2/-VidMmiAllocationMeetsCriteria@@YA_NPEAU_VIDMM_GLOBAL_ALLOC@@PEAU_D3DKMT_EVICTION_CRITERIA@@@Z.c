/*
 * XREFs of ?VidMmiAllocationMeetsCriteria@@YA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C007E27C
 * Callers:
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C007D218 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmiAllocationMeetsCriteria(struct _VIDMM_GLOBAL_ALLOC *a1, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  bool result; // al
  UINT64 v3; // rax

  result = 1;
  if ( a2 )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( v3 < a2->MinimumSize
      || v3 > a2->MaximumSize
      || (a2->Value & 1) != 0 && ((**((_DWORD **)a1 + 59) | (**((_DWORD **)a1 + 59) >> 1)) & 0x40000000) == 0 )
    {
      return 0;
    }
  }
  return result;
}
