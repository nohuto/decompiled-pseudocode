/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001370C
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0056800 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00678E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0013530 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C001365C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rbp
  unsigned int v7; // ebx
  VIDMM_CPU_HOST_APERTURE *v8; // r15
  VIDMM_CPU_HOST_APERTURE *v9; // r14
  VIDMM_CPU_HOST_APERTURE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct _VIDMM_GLOBAL_ALLOC *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+50h] [rbp+8h]
  __int64 v22; // [rsp+50h] [rbp+8h]

  v4 = *(unsigned int *)(*((_QWORD *)this + 6) + 368LL);
  if ( *((_QWORD *)a2 + 27) )
    v5 = *((_QWORD *)a2 + 26);
  else
    v5 = *((_QWORD *)a2 + 17);
  v21 = v4;
  v6 = (~(unsigned __int64)(unsigned int)(v4 - 1) & ((unsigned int)(v4 - 1)
                                                   + v5
                                                   + *((_QWORD *)a2 + 2)
                                                   - (v5 & ~(unsigned __int64)(unsigned int)(v4 - 1))))
     / v4;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 96));
  if ( *((_DWORD *)this + 15) < (unsigned int)v6 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 72));
    v7 = *((_DWORD *)this + 15);
    v8 = (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16);
    v9 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 2);
    v10 = v9;
    if ( v9 == (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    {
LABEL_8:
      if ( v7 < (unsigned int)v6 )
      {
        *((_DWORD *)a2 + 114) = -1;
        *((_DWORD *)a2 + 115) = -1;
        *((_QWORD *)this + 10) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
        KeLeaveCriticalRegion();
        *((_QWORD *)this + 13) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
        KeLeaveCriticalRegion();
        v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
        v13[3] = (unsigned int)v6;
        v13[4] = v7;
        v13[5] = v21;
        WdLogEvent5_WdEvent(v13);
        return 3221225495LL;
      }
    }
    else
    {
      while ( 1 )
      {
        v7 += *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)v10 + 5));
        if ( v7 >= (unsigned int)v6 )
          break;
        v10 = *(VIDMM_CPU_HOST_APERTURE **)v10;
        if ( v10 == v8 )
          goto LABEL_8;
      }
    }
    do
    {
      if ( v9 == v8 )
        break;
      v15 = (VIDMM_CPU_HOST_APERTURE *)((char *)v9 - 440);
      v9 = *(VIDMM_CPU_HOST_APERTURE **)v9;
      VIDMM_CPU_HOST_APERTURE::UnmapRange(this, v15, 1);
      LOBYTE(v16) = 1;
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(this, v15, v16, v17);
    }
    while ( *((_DWORD *)this + 15) < (unsigned int)v6 );
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  v18 = *((unsigned int *)this + 16);
  v19 = v6 - 1;
  LODWORD(v22) = *((_DWORD *)this + 16);
  if ( (_DWORD)v6 != 1 )
  {
    do
    {
      v18 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v18);
      --v19;
    }
    while ( v19 );
  }
  v20 = *((_QWORD *)this + 5);
  HIDWORD(v22) = v18;
  *((_DWORD *)this + 16) = *(_DWORD *)(v20 + 4 * v18);
  *(_DWORD *)(v20 + 4LL * (unsigned int)v18) = v6;
  *((_DWORD *)this + 15) -= v6;
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)a2 + 57) = v22;
  return 0LL;
}
