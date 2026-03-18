/*
 * XREFs of ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C0064308
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0064640 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C009A780 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::VerifyCommitLimit(VIDMM_SEGMENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v4 = *((_QWORD *)this + 26);
  v7 = v4 + a2;
  if ( v4 + a2 > *((_QWORD *)this + 25) || v7 < v4 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, a2, a3, a4);
      v11[3] = this;
      v11[4] = a2;
      v11[5] = *((_QWORD *)this + 26);
      v11[6] = *((_QWORD *)this + 25);
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 14) & 0x1001) == 0 )
      return 0LL;
    v8 = VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture + a2;
    if ( v8 <= *(_QWORD *)(*((_QWORD *)this + 1) + 6456LL) && v8 >= VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture )
      return 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture, v8, a3, a4);
      v10[3] = this;
      v10[4] = a2;
      v10[5] = VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture;
      v10[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 6456LL);
      v10[7] = VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture;
    }
  }
  return 3221225773LL;
}
