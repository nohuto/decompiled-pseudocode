/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0081AA4
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007BDA8 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_ppp @ 0x1C001D53C (Template_ppp.c)
 *     Template_ppqxxx @ 0x1C001DF30 (Template_ppqxxx.c)
 *     Template_pqxx @ 0x1C001DFE4 (Template_pqxx.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(
        CVirtualAddressAllocator *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned int i; // ebp
  _QWORD *v10; // r14
  _QWORD *j; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  _BYTE v17[32]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v17,
    (struct _KTHREAD **)this + 5,
    a3,
    a4);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_ppp(
      v5,
      &ReportGpuVirtualAddressAllocator,
      *(_QWORD *)(*((_QWORD *)this + 9) + 32LL),
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 8) + 24LL));
  v7 = (_QWORD *)*((_QWORD *)this + 4);
  v8 = 0LL;
  while ( v7 )
  {
    v8 = (unsigned __int64)v7;
    v7 = (_QWORD *)*v7;
  }
  while ( v8 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v15) = *(_DWORD *)(v8 + 72) & 0xF;
      Template_pqxx(
        (unsigned int)v15,
        &ReportGpuVirtualAddressRange,
        v6,
        this,
        v15,
        *(_QWORD *)(v8 + 24),
        *(_QWORD *)(v8 + 32));
    }
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 8) + 6416LL); ++i )
    {
      v10 = (_QWORD *)(v8 + 16 * (i + 6LL));
      for ( j = (_QWORD *)*v10; j != v10; j = (_QWORD *)*j )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          v12 = j[6];
          LODWORD(v16) = v12 != 0;
          Template_ppqxxx(v12 != 0, &ReportGpuVirtualAddressRangeMapping, v6, this, v12, v16, j[8], j[11], j[12]);
        }
      }
    }
    v13 = *(_QWORD **)(v8 + 8);
    v14 = v8;
    if ( v13 )
    {
      do
      {
        v8 = (unsigned __int64)v13;
        v13 = (_QWORD *)*v13;
      }
      while ( v13 );
    }
    else
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v8 || *(_QWORD *)v8 == v14 )
          break;
        v14 = v8;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
}
