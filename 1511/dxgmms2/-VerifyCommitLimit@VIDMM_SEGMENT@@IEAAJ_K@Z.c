/*
 * XREFs of ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C00559E0
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0055DC0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00856A4 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::VerifyCommitLimit(VIDMM_SEGMENT *this, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *((_QWORD *)this + 26);
  if ( v2 + a2 > *((_QWORD *)this + 25)
    || v2 + a2 < v2
    || (*((_DWORD *)this + 14) & 0x1001) != 0
    && (VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture + a2 > *(_QWORD *)(*((_QWORD *)this + 1) + 6456LL)
     || VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture + a2 < VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture) )
  {
    return 3221225773LL;
  }
  else
  {
    return 0LL;
  }
}
