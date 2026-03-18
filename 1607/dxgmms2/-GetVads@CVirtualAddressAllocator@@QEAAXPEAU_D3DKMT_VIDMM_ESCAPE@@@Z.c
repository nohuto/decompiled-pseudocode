/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0093B34
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C0088B64 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000FC84 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(struct _KTHREAD **this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  D3DKMT_VAD_ESCAPE_COMMAND Command; // edx
  UINT v5; // edi
  __int32 v6; // edx
  __int32 v7; // edx
  __int32 v8; // edx
  int v9; // edx
  CVirtualAddressAllocator *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r15
  _DWORD *v23; // r12
  UINT64 *p_IndexShift; // rbp
  UINT NumPtes; // r8d
  __int64 v26; // r10
  __int64 v27; // rcx
  struct _KTHREAD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r14
  unsigned int j; // r11d
  unsigned int v32; // r9d
  unsigned int v33; // esi
  __int64 v34; // rax
  UINT v35; // r11d
  __int64 v36; // rcx
  UINT k; // r10d
  int v38; // eax
  CVirtualAddressAllocator *v39; // rax
  UINT64 NtHandle; // rdx
  char *v41; // rsi
  bool v42; // zf
  __int64 PhysicalAdapterIndex; // rax
  __int64 v44; // rax
  CVirtualAddressAllocator **v45; // rax
  int v46; // edx
  __int64 v47; // rax
  CVirtualAddressAllocator **v48; // rsi
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // edx
  HANDLE hProcess; // rax
  _QWORD **v51; // rsi
  _QWORD *i; // rax
  _BYTE v53[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v53, this + 5);
  Command = a2->GetVads.Command;
  v5 = 0;
  a2->GetVads.Status = 0;
  if ( Command == D3DKMT_VAD_ESCAPE_GETNUMVADS )
  {
    v51 = (_QWORD **)(this + 1);
    a2->SetFault.Value = 0;
    for ( i = *v51; i != v51; i = (_QWORD *)*i )
      a2->SetFault.Value = ++v5;
    goto LABEL_83;
  }
  v6 = Command - 1;
  if ( !v6 )
  {
    v48 = this + 1;
    v10 = *v48;
    if ( *v48 != (CVirtualAddressAllocator *)v48 )
    {
      Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a2->SetFault.Value;
      while ( 1 )
      {
        ++v5;
        if ( Value == -1 )
        {
          hProcess = a2->Evict.hProcess;
          if ( (unsigned __int64)hProcess >= *((_QWORD *)v10 - 2) && (unsigned __int64)hProcess < *((_QWORD *)v10 - 1) )
          {
LABEL_75:
            a2->GetVads.GetVad.StartAddress = *((_QWORD *)v10 - 2);
            a2->GetVads.GetVad.EndAddress = *((_QWORD *)v10 - 1);
            a2->GetVads.GetVad.VadType = *((_DWORD *)v10 + 8) & 0xF;
            a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)v10 + 9);
            goto LABEL_83;
          }
        }
        else if ( Value == v5 )
        {
          goto LABEL_75;
        }
        v10 = *(CVirtualAddressAllocator **)v10;
        if ( v10 == (CVirtualAddressAllocator *)v48 )
          goto LABEL_67;
      }
    }
    goto LABEL_67;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = (CVirtualAddressAllocator *)(this + 1);
    v39 = this[1];
    if ( v39 == (CVirtualAddressAllocator *)(this + 1) )
      goto LABEL_83;
    NtHandle = a2->EvictByNtHandle.NtHandle;
    while ( 1 )
    {
      v41 = (char *)v39 - 40;
      if ( NtHandle >= *((_QWORD *)v39 - 2) && NtHandle < *((_QWORD *)v41 + 4) )
        break;
      v39 = *(CVirtualAddressAllocator **)v39;
      if ( v39 == v10 )
        goto LABEL_83;
    }
    if ( a2->GetVads.GetVadRange.PhysicalAdapterIndex < ((*((_DWORD *)v41 + 18) >> 4) & 0x7Fu) )
    {
      v42 = !EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
      PhysicalAdapterIndex = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
      v44 = v42 ? 16 * (PhysicalAdapterIndex + 6) : 32 * (PhysicalAdapterIndex + 3);
      v45 = (CVirtualAddressAllocator **)&v41[v44];
      v46 = 0;
      v10 = *v45;
      if ( *v45 != (CVirtualAddressAllocator *)v45 )
      {
        while ( v46 != a2->GetVads.GetVadRange.VaRangeIndex )
        {
          v10 = *(CVirtualAddressAllocator **)v10;
          ++v46;
          if ( v10 == (CVirtualAddressAllocator *)v45 )
            goto LABEL_67;
        }
        v10 = (CVirtualAddressAllocator *)((char *)v10 - 8);
        if ( v10 )
        {
          a2->GetVads.GetVadRange.StartAddress = *((_QWORD *)v10 + 12);
          a2->GetVads.GetVad.StartAddress = *((_QWORD *)v10 + 13);
          a2->GetVads.GetVadRange.OwnerType = (int)(*((_DWORD *)v10 + 16) << 28) >> 28;
          a2->GetVads.GetVadRange.pOwner = *((_QWORD *)v10 + 7);
          a2->GetVads.GetVadRange.Protection = *((_DWORD *)v10 + 22);
          a2->GetVads.GetVad.EndAddress = *((_QWORD *)v10 + 10);
          a2->GetVads.GetVadRange.OwnerOffset = *((_QWORD *)v10 + 9);
          goto LABEL_83;
        }
      }
    }
    goto LABEL_67;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        goto LABEL_83;
      v10 = this[8];
      v11 = a2->SetFault.Value;
      if ( (unsigned int)v11 < *((_DWORD *)v10 + 1604) )
      {
        v12 = *((_QWORD *)v10 + 5017) + 456 * v11;
        a2->Evict.AllocationHandle = *(_DWORD *)(v12 + 8);
        while ( 1 )
        {
          v13 = *(unsigned int *)(v12 + 8);
          if ( (unsigned int)v13 > 0x20 )
            v13 = 32LL;
          if ( v5 >= v13 )
            break;
          v14 = 3LL * v5;
          v15 = *(_QWORD *)(*((_QWORD *)this[8] + 464)
                          + 8LL * (v5 + *(_DWORD *)(456LL * a2->SetFault.Value + *((_QWORD *)this[8] + 5017) + 4)));
          a2->GetVads.GetSegmentCaps.SegmentCaps[v14 / 3].bAperture = *(_BYTE *)(v15 + 56) & 1;
          *(&a2->GetVads.GetVad.VadAddress + v14) = *(_QWORD *)(v15 + 40);
          *(&a2->GetVads.GetVad.NumMappedRanges + 2 * v14) = *(_DWORD *)(v15 + 368);
          *(&a2->GetVads.GetVad.VadType + 2 * v14) = *(_DWORD *)(v15 + 20);
          a2->GetVads.GetPte.PageTableIndex[2 * v14 + 5] = *(_DWORD *)(v15 + 468);
          a2->GetVads.GetSegmentCaps.SegmentCaps[v14 / 3].bReservedSysMem = (*(_DWORD *)(v15 + 56) & 0x1000) != 0;
          ++v5;
        }
        goto LABEL_83;
      }
    }
    else
    {
      v10 = this[8];
      v16 = a2->SetFault.Value;
      if ( (unsigned int)v16 < *((_DWORD *)v10 + 1604) )
      {
        v17 = *((_QWORD *)v10 + 5017) + 456 * v16;
        v18 = *(_QWORD *)(v17 + 424);
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v18 & 1;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v18 & 2) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v18 & 4) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v18 & 0x10) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v18 & 0x40) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v18 & 0x80) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v18) & 1;
        a2->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v18 + 8);
        a2->GetVads.GetVad.VadType = *(_DWORD *)(v18 + 16);
        if ( *(_DWORD *)(v18 + 16) )
        {
          do
          {
            v19 = v5++;
            v20 = 5 * v19;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v20 / 5].IndexBitCount = *(_DWORD *)(v17 + 48 * v19 + 76);
            *(&a2->GetVads.GetVad.EndAddress + v20) = *(_QWORD *)(v17 + 48 * v19 + 88);
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v20 / 5].IndexShift = *(_QWORD *)(v17 + 48 * (v19 + 2));
            *(&a2->GetVads.GetVadRange.pOwner + v20) = *(_QWORD *)(v17 + 48 * v19 + 104);
            *(&a2->GetVads.GetVadRange.OwnerOffset + v20) = *(_QWORD *)(v17 + 48 * v19 + 112);
          }
          while ( v5 < *(_DWORD *)(v18 + 16) );
        }
        goto LABEL_83;
      }
    }
    goto LABEL_67;
  }
  v10 = this[8];
  v21 = a2->SetFault.Value;
  if ( (unsigned int)v21 >= *((_DWORD *)v10 + 1604)
    || a2->GetVads.GetPte.NumPtes > 0x40
    || (v22 = *((_QWORD *)v10 + 5017) + 456 * v21, v23 = *(_DWORD **)(v22 + 424), a2->Evict.AllocationHandle >= v23[4]) )
  {
LABEL_67:
    a2->GetVads.Status = -1073741811;
LABEL_68:
    v47 = WdLogNewEntry5_WdWarning(v10);
    WdLogEvent5_WdWarning(v47);
    goto LABEL_83;
  }
  p_IndexShift = &a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[0].IndexShift;
  memset(&a2->Defrag + 1, 0, 0x400uLL);
  NumPtes = a2->GetVads.GetPte.NumPtes;
  v26 = 0LL;
  v27 = a2->SetFault.Value;
  a2->GetVads.GetPte.NumPtes = 0;
  v28 = this[12];
  LODWORD(v29) = v23[4];
  v27 *= 32LL;
  v30 = *(_QWORD *)((char *)v28 + v27);
  for ( j = *(_DWORD *)((char *)v28 + v27 + 16); (_DWORD)v29; j = *(_DWORD *)(v22 + 48LL * (unsigned int)(v29 - 1) + 72) )
  {
    v29 = (unsigned int)(v29 - 1);
    if ( !v30 || !(_DWORD)v29 && !v26 )
      break;
    v10 = (CVirtualAddressAllocator *)*(&a2->GetVads.GetVadRange.VaRangeIndex + v29);
    v32 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v29);
    if ( !(_DWORD)v29 && (*(_DWORD *)v26 & 0x40) != 0 )
      v32 >>= 4;
    if ( v32 >= j )
      goto LABEL_68;
    v33 = 0;
    if ( (_DWORD)v29 == 1 && (*v23 & 0x80u) != 0 && a2->GetVads.GetPte.b64KBPte )
      v33 = j;
    if ( (_DWORD)v29 == a2->Evict.AllocationHandle )
    {
      v35 = j - v32;
      if ( v35 < NumPtes )
        NumPtes = v35;
      if ( (_DWORD)v29 )
      {
        for ( k = 0; k < NumPtes; p_IndexShift += 2 )
        {
          *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v30 + 24) + 16LL * (v33 + v32 + k));
          if ( (_DWORD)v29 == 1 )
          {
            if ( (*v23 & 0x80u) != 0 )
              v38 = v33 != 0;
            else
              v38 = (**(_DWORD **)(v30 + 24) & 0x60000) == 0x20000LL;
            *p_IndexShift ^= (*(_DWORD *)p_IndexShift ^ (unsigned int)(v38 << 19)) & 0x80000LL;
          }
          ++k;
        }
        a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v30 + 4);
      }
      else
      {
        if ( NumPtes )
        {
          do
          {
            v36 = 2LL * (v5 + v32);
            ++v5;
            *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v26 + 24) + 8 * v36);
            p_IndexShift += 2;
          }
          while ( v5 < NumPtes );
        }
        a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v26 + 4);
        a2->GetVads.GetPte.b64KBPte = (*(_DWORD *)v26 & 0x40) != 0;
      }
      a2->GetVads.GetPte.NumPtes = NumPtes;
      break;
    }
    v34 = *(_QWORD *)(v30 + 32);
    if ( (_DWORD)v29 == 1 )
      v26 = *(_QWORD *)(v34 + 8LL * (v33 + a2->GetVads.GetVadRange.PhysicalAdapterIndex));
    else
      v30 = *(_QWORD *)(v34 + 8LL * (_QWORD)v10);
  }
LABEL_83:
  DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v53);
}
