/*
 * XREFs of ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C0084C6C
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0057B10 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066940 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C0069948 (-ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MakeRangeNonPageable(VIDMM_SEGMENT *this, unsigned __int64 a2, __int64 a3, void **a4)
{
  _QWORD *i; // rbx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax

  for ( i = (_QWORD *)*((_QWORD *)this + 10); i != (_QWORD *)((char *)this + 80); i = (_QWORD *)*i )
  {
    v9 = i[2];
    if ( a2 < v9 + i[3] && a2 + a3 > v9 )
    {
      v15 = WdLogNewEntry5_WdAssertion(this, v9, a3, a4);
      *(_QWORD *)(v15 + 24) = 3320LL;
      WdLogEvent5_WdAssertion(v15);
      return 3221225473LL;
    }
    if ( a2 < v9 )
      break;
  }
  v10 = operator new(0x20uLL, 0x37306956u, PagedPool);
  v12 = v10;
  if ( v10 )
  {
    v10[2] = a2;
    v10[3] = a3;
    v16 = (_QWORD *)i[1];
    *v12 = i;
    v12[1] = v16;
    if ( (_QWORD *)*v16 != i )
      __fastfail(3u);
    *v16 = v12;
    i[1] = v12;
    VIDMM_SEGMENT::ComputeBaseAddressAndSizeOfPageableRegion(this);
    result = 0LL;
    *a4 = v12;
  }
  else
  {
    _InterlockedIncrement(&dword_1C002F5A4);
    v13 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v13 + 24) = 3342LL;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
  return result;
}
