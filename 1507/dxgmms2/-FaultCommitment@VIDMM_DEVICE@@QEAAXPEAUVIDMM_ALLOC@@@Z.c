/*
 * XREFs of ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0058AF4
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050D60 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::FaultCommitment(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // r8
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 **v6; // r8

  v2 = *((_QWORD *)a2 + 1);
  v3 = (__int64 *)((char *)a2 + 56);
  v4 = (__int64 *)(v2 + 120);
  if ( (*(_DWORD *)(**(_QWORD **)a2 + 76LL) & 0x4000000) != 0 )
  {
    v5 = *v4;
    *v3 = *v4;
    *((_QWORD *)a2 + 8) = v4;
    if ( *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = v3;
    *v4 = (__int64)v3;
  }
  else
  {
    v6 = *(__int64 ***)(v2 + 128);
    *v3 = (__int64)v4;
    *((_QWORD *)a2 + 8) = v6;
    if ( *v6 != v4 )
      __fastfail(3u);
    *v6 = v3;
    v4[1] = (__int64)v3;
  }
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 1;
}
