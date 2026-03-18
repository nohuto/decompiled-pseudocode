/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0062FE4
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0052F68 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_ppp @ 0x1C000FB18 (Template_ppp.c)
 *     Template_ppqxxx @ 0x1C00106E0 (Template_ppqxxx.c)
 *     Template_pqxx @ 0x1C0010794 (Template_pqxx.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbx
  unsigned int i; // ebp
  _QWORD *v7; // r14
  _QWORD *j; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  _BYTE v14[32]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
    (CVirtualAddressAllocator *)((char *)this + 40));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_ppp(
      v2,
      &ReportGpuVirtualAddressAllocator,
      *(_QWORD *)(*((_QWORD *)this + 9) + 32LL),
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 8) + 24LL));
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v5 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v12) = *(_DWORD *)(v5 + 72) & 0xF;
      Template_pqxx(
        (unsigned int)v12,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v12,
        *(_QWORD *)(v5 + 24),
        *(_QWORD *)(v5 + 32));
    }
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 8) + 6416LL); ++i )
    {
      v7 = (_QWORD *)(v5 + 16 * (i + 6LL));
      for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          v9 = j[6];
          LODWORD(v13) = v9 != 0;
          Template_ppqxxx(v9 != 0, &ReportGpuVirtualAddressRangeMapping, v3, this, v9, v13, j[8], j[11], j[12]);
        }
      }
    }
    v10 = *(_QWORD **)(v5 + 8);
    v11 = v5;
    if ( v10 )
    {
      do
      {
        v5 = (unsigned __int64)v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v11 )
          break;
        v11 = v5;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
}
