/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F500
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C00112E4 (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@PEBU_DXGK_CPUHOSTAPERTURE@@@Z @ 0x1C0011734 (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@PEBU_DXGK_CPUHOSTAPERTURE@@@Z.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C003D580 (-Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_GLOBAL *a2,
        void (*a3)(void *),
        __int64 a4,
        unsigned int a5,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a6)
{
  int v6; // r14d
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  bool v14; // zf
  VIDMM_CPU_HOST_APERTURE *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax

  v6 = a4;
  *(_DWORD *)a6 |= 0x10u;
  if ( (*(_DWORD *)a6 & 0x40) != 0 )
  {
    v10 = *((_QWORD *)a2 + 807);
    v11 = *((_QWORD *)a6 + 2);
    if ( v11 > v10 - 0x800000 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11, a2, a3, a4);
      *(_QWORD *)(v12 + 24) = 235LL;
      WdLogEvent5_WdAssertion(v12);
      return 3221225473LL;
    }
    *((_QWORD *)a2 + 807) = v10 - v11;
  }
  v14 = (*(_DWORD *)a6 & 0x2000) == 0;
  *((_QWORD *)a6 + 3) = *((_QWORD *)a6 + 2);
  if ( v14 )
    goto LABEL_12;
  v15 = (VIDMM_CPU_HOST_APERTURE *)operator new(0x78uLL, 0x35346956u, PagedPool);
  if ( v15 )
    v15 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v15);
  *((_QWORD *)this + 55) = v15;
  if ( !v15 )
  {
    _InterlockedIncrement(&dword_1C00275E0);
    v17 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v17 + 24) = 265LL;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
  v18 = VIDMM_CPU_HOST_APERTURE::Init(v15, this, (const struct _DXGK_CPUHOSTAPERTURE *)((char *)a6 + 40));
  v23 = v18;
  if ( v18 >= 0 )
  {
LABEL_12:
    v25 = VIDMM_SEGMENT::Init(this, a2, a3, v6, a5, a6, 0LL);
    v28 = WdLogNewEntry5_WdEvent(v27, v26);
    WdLogEvent5_WdEvent(v28);
    v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v30, v29);
    v31[3] = *((_QWORD *)this + 5);
    v31[4] = *((int *)this + 7);
    v31[5] = *((unsigned int *)this + 6);
    v31[6] = *((unsigned int *)this + 4);
    WdLogEvent5_WdEvent(v31);
    return v25;
  }
  else
  {
    v24 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdAssertion(v24);
    return (unsigned int)v23;
  }
}
