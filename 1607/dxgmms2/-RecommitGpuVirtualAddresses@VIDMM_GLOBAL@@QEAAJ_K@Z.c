/*
 * XREFs of ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006A2E4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006A5FC (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RecommitGpuVirtualAddresses(VIDMM_GLOBAL *this, unsigned __int64 a2)
{
  char *v2; // rsi
  char *v4; // rbx
  __int64 v6; // rdi
  CVirtualAddressAllocator *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  struct VIDMM_ALLOC *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = (char *)this + 41008;
  v4 = (char *)*((_QWORD *)this + 5126);
  LODWORD(v6) = 0;
  while ( v4 != v2 )
  {
    v7 = (CVirtualAddressAllocator *)*((_QWORD *)v4 + 55);
    if ( v7 )
    {
      if ( *((_QWORD *)v4 + 2) != *((_QWORD *)this + 5040) )
      {
        v13 = 0LL;
        v8 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(v7, a2, &v13);
        v6 = v8;
        if ( v8 < 0 )
        {
          v12 = WdLogNewEntry5_WdAssertion(v10, v9);
          *(_QWORD *)(v12 + 24) = a2;
          *(_QWORD *)(v12 + 32) = v6;
          WdLogEvent5_WdAssertion(v12);
          return (unsigned int)v6;
        }
      }
    }
    v4 = *(char **)v4;
  }
  return (unsigned int)v6;
}
