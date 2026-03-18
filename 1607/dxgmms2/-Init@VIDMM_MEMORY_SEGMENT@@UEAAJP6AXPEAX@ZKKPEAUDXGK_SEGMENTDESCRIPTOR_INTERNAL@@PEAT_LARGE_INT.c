/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0072110
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@PEBU_DXGK_CPUHOSTAPERTURE@@@Z @ 0x1C0012E28 (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@PEBU_DXGK_CPUHOSTAPERTURE@@@Z.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C0012EB0 (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F940 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(
        VIDMM_MEMORY_SEGMENT *this,
        void (*a2)(void *),
        __int64 a3,
        __int64 a4,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a5)
{
  int v5; // r14d
  __int64 v6; // rbp
  __int64 v9; // rax
  bool v10; // zf
  VIDMM_CPU_HOST_APERTURE *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax

  v5 = a3;
  v6 = (unsigned int)a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = v6;
    *(_QWORD *)(v9 + 32) = this;
  }
  *(_DWORD *)a5 |= 0x10u;
  if ( (*(_DWORD *)a5 & 0x40) != 0 )
  {
    v29 = *((_QWORD *)this + 1);
    v30 = *((_QWORD *)a5 + 2);
    if ( v30 > *(_QWORD *)(v29 + 6456) - 0x800000LL )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29, v30);
      *(_QWORD *)(v31 + 24) = 244LL;
      WdLogEvent5_WdAssertion(v31);
      return 3221225473LL;
    }
    *(_QWORD *)(v29 + 6456) -= v30;
  }
  v10 = (*(_DWORD *)a5 & 0x2000) == 0;
  *((_QWORD *)a5 + 3) = *((_QWORD *)a5 + 2);
  if ( v10 )
  {
LABEL_9:
    v17 = VIDMM_SEGMENT::Init(this, a2, v5, v6, a5, 0LL);
    v22 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    WdLogEvent5_WdEvent(v22);
    v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
    v27[3] = *((_QWORD *)this + 5);
    v27[4] = *((int *)this + 7);
    v27[5] = *((unsigned int *)this + 6);
    v27[6] = *((unsigned int *)this + 4);
    WdLogEvent5_WdEvent(v27);
    return v17;
  }
  v11 = (VIDMM_CPU_HOST_APERTURE *)operator new(0x48uLL, 0x35346956u, PagedPool);
  if ( v11 )
    v11 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v11);
  *((_QWORD *)this + 59) = v11;
  if ( v11 )
  {
    v13 = VIDMM_CPU_HOST_APERTURE::Init(v11, this, (const struct _DXGK_CPUHOSTAPERTURE *)((char *)a5 + 40));
    v16 = v13;
    if ( v13 >= 0 )
      goto LABEL_9;
    v33 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v33 + 24) = v16;
    WdLogEvent5_WdAssertion(v33);
    return (unsigned int)v16;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0035670);
    v32 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v32 + 24) = 274LL;
    WdLogEvent5_WdLowResource(v32);
    return 3221225495LL;
  }
}
