/*
 * XREFs of ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0015090
 * Callers:
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00678E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

char __fastcall VIDMM_CPU_HOST_APERTURE::ReclaimRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char v4; // si
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx

  v4 = 0;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 72));
  if ( *((_QWORD *)a2 + 54) )
  {
    v6 = (_QWORD *)((char *)a2 + 440);
    v7 = *((_QWORD *)a2 + 55);
    v8 = (_QWORD *)*((_QWORD *)a2 + 56);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v7 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 440)
      || (_QWORD *)*v8 != v6 )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_QWORD *)this;
    *v6 = *(_QWORD *)this;
    *((_QWORD *)a2 + 56) = this;
    if ( *(VIDMM_CPU_HOST_APERTURE **)(v9 + 8) != this )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v6;
    v4 = 1;
    *(_QWORD *)this = v6;
  }
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
