/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0094CEC
 * Callers:
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008AA3C (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_ppp @ 0x1C001E8B0 (Template_ppp.c)
 *     Template_ppxxxxxqxx @ 0x1C001FA40 (Template_ppxxxxxqxx.c)
 *     Template_pqxx @ 0x1C001FB3C (Template_pqxx.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebp
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 **v10; // r14
  __int64 *j; // rsi
  __int64 **v12; // r14
  __int64 *i; // rsi
  _QWORD *v14; // rax
  _QWORD *k; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+50h] [rbp-58h]
  _BYTE v19[32]; // [rsp+70h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 5);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    Template_ppp(
      v2,
      &ReportGpuVirtualAddressAllocator,
      *(_QWORD *)(*((_QWORD *)this + 9) + 32LL),
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 56LL),
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
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    {
      LODWORD(v17) = *(_DWORD *)(v5 + 72);
      Template_pqxx(v2, &ReportGpuVirtualAddressRange, v3, this, v17, *(_QWORD *)(v5 + 24), *(_QWORD *)(v5 + 32));
    }
    v6 = 0;
    v7 = !EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
    v9 = *((_QWORD *)this + 8);
    if ( v7 )
    {
      if ( *(_DWORD *)(v9 + 6416) )
      {
        do
        {
          v12 = (__int64 **)(v5 + 16 * (v6 + 6LL));
          for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
            {
              LODWORD(v18) = *((_DWORD *)i + 14);
              Template_ppxxxxxqxx(
                v8,
                &ReportGpuVirtualAddressRangeMapping,
                v3,
                this,
                i[6],
                i[8],
                i[11],
                i[12],
                i[10],
                i[9],
                v18,
                i[13],
                i[14]);
            }
          }
          ++v6;
        }
        while ( v6 < *(_DWORD *)(*((_QWORD *)this + 8) + 6416LL) );
      }
    }
    else if ( *(_DWORD *)(v9 + 6416) )
    {
      do
      {
        v10 = (__int64 **)(v5 + 32 * (v6 + 3LL));
        for ( j = *v10; j != (__int64 *)v10; j = (__int64 *)*j )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
          {
            LODWORD(v18) = *((_DWORD *)j + 14);
            Template_ppxxxxxqxx(
              v8,
              &ReportGpuVirtualAddressRangeMapping,
              v3,
              this,
              j[6],
              j[8],
              j[11],
              j[12],
              j[10],
              j[9],
              v18,
              j[13],
              j[14]);
          }
        }
        ++v6;
      }
      while ( v6 < *(_DWORD *)(*((_QWORD *)this + 8) + 6416LL) );
    }
    v14 = *(_QWORD **)(v5 + 8);
    v2 = v5;
    if ( v14 )
    {
      do
      {
        v5 = (unsigned __int64)v14;
        v14 = (_QWORD *)*v14;
      }
      while ( v14 );
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v2 )
          break;
        v2 = v5;
      }
    }
  }
  for ( k = (_QWORD *)*((_QWORD *)this + 3); k; k = (_QWORD *)*k )
    v5 = (unsigned __int64)k;
  while ( v5 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    {
      LODWORD(v17) = *(_DWORD *)(v5 + 72);
      Template_pqxx(v2, &ReportGpuVirtualAddressRange, v3, this, v17, *(_QWORD *)(v5 + 24), *(_QWORD *)(v5 + 32));
    }
    v16 = *(_QWORD **)(v5 + 8);
    v2 = v5;
    if ( v16 )
    {
      do
      {
        v5 = (unsigned __int64)v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v2 )
          break;
        v2 = v5;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
}
