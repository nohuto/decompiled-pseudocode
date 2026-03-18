/*
 * XREFs of ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@PEBU_DXGK_CPUHOSTAPERTURE@@@Z @ 0x1C0012E28
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0072110 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INT.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::Init(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_MEMORY_SEGMENT *a2,
        const struct _DXGK_CPUHOSTAPERTURE *a3)
{
  unsigned __int64 SizeInPages; // r9
  SIZE_T v5; // rax
  PVOID v6; // rax
  unsigned int v7; // ecx
  __int64 v9; // rax

  SizeInPages = a3->SizeInPages;
  *((_QWORD *)this + 6) = a2;
  *((_DWORD *)this + 14) = SizeInPages;
  *((_DWORD *)this + 15) = SizeInPages;
  *((_QWORD *)this + 4) = a3->PhysicalAddress;
  v5 = 4 * SizeInPages;
  if ( !is_mul_ok(SizeInPages, 4uLL) )
    v5 = -1LL;
  v6 = operator new(v5, 0x36346956u, PagedPool);
  v7 = 0;
  *((_QWORD *)this + 5) = v6;
  if ( v6 )
  {
    if ( *((_DWORD *)this + 14) != 1 )
    {
      do
      {
        *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v7) = v7 + 1;
        ++v7;
      }
      while ( v7 < *((_DWORD *)this + 14) - 1 );
    }
    *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)(*((_DWORD *)this + 14) - 1)) = -1;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0035674);
    v9 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v9 + 24) = 111LL;
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
}
