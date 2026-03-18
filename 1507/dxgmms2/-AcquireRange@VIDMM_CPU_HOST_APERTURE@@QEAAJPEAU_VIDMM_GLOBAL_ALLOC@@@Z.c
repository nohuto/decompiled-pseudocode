/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001133C
 * Callers:
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C004B9E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C006F690 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011BDC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011C90 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  VIDMM_CPU_HOST_APERTURE *v8; // r14
  VIDMM_CPU_HOST_APERTURE *v9; // rsi
  unsigned int v10; // edx
  VIDMM_CPU_HOST_APERTURE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // [rsp+50h] [rbp+8h]

  v3 = *((_QWORD *)this + 6);
  if ( *((_QWORD *)a2 + 27) )
    v5 = *((_QWORD *)a2 + 26);
  else
    v5 = *((_QWORD *)a2 + 17);
  v6 = *(unsigned int *)(v3 + 368);
  v7 = (~(unsigned __int64)(unsigned int)(*(_DWORD *)(v3 + 368) - 1) & ((unsigned int)(*(_DWORD *)(v3 + 368) - 1)
                                                                      + v5
                                                                      + *((_QWORD *)a2 + 2)
                                                                      - (v5 & ~(unsigned __int64)(unsigned int)(*(_DWORD *)(v3 + 368) - 1))))
     / v6;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 96));
  if ( *((_DWORD *)this + 15) < (unsigned int)v7 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 72));
    v8 = (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16);
    v9 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 2);
    v10 = *((_DWORD *)this + 15);
    v11 = v9;
    if ( v9 != (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    {
      do
      {
        v10 += *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)v11 + 5));
        if ( v10 >= (unsigned int)v7 )
          break;
        v11 = *(VIDMM_CPU_HOST_APERTURE **)v11;
      }
      while ( v11 != v8 );
    }
    if ( *((_DWORD *)this + 15) < (unsigned int)v7 )
    {
      *((_DWORD *)a2 + 114) = -1;
      *((_DWORD *)a2 + 115) = -1;
      *((_QWORD *)this + 10) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)this + 13) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
      KeLeaveCriticalRegion();
      v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
      v14[3] = (unsigned int)v7;
      v14[4] = *((unsigned int *)this + 15);
      v14[5] = v6;
      WdLogEvent5_WdEvent(v14);
      return 3221225495LL;
    }
    while ( v9 != v8 )
    {
      VIDMM_CPU_HOST_APERTURE::UnmapRange(this, (VIDMM_CPU_HOST_APERTURE *)((char *)v9 - 440));
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(this, (VIDMM_CPU_HOST_APERTURE *)((char *)v9 - 440));
      if ( *((_DWORD *)this + 15) >= (unsigned int)v7 )
        break;
      v9 = *(VIDMM_CPU_HOST_APERTURE **)v9;
    }
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  v16 = *((unsigned int *)this + 16);
  v17 = v7 - 1;
  LODWORD(v19) = *((_DWORD *)this + 16);
  if ( (_DWORD)v7 != 1 )
  {
    do
    {
      v16 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v16);
      --v17;
    }
    while ( v17 );
  }
  v18 = *((_QWORD *)this + 5);
  HIDWORD(v19) = v16;
  *((_DWORD *)this + 16) = *(_DWORD *)(v18 + 4 * v16);
  *(_DWORD *)(v18 + 4LL * (unsigned int)v16) = v7;
  *((_DWORD *)this + 15) -= v7;
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)a2 + 57) = v19;
  return 0LL;
}
