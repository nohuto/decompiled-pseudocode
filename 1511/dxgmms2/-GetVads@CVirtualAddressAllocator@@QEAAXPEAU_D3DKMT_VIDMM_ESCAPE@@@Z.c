/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00815EC
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C007A834 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(
        struct _KTHREAD **this,
        struct _D3DKMT_VIDMM_ESCAPE *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  _QWORD **v9; // rdi
  _QWORD *v10; // rax
  UINT64 NtHandle; // r8
  _QWORD *v12; // rcx
  __int64 PhysicalAdapterIndex; // r8
  __int64 v14; // rax
  int v15; // r8d
  _QWORD *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdi
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r8d
  HANDLE hProcess; // rax
  _QWORD **v21; // rdi
  _QWORD *i; // rax
  _BYTE v23[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, this + 5, a3, a4);
  v6 = *((_DWORD *)&a2->Defrag + 18);
  v7 = 0;
  a2->GetVads.GetSegmentCaps.SegmentCaps[2].BudgetGroup = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( !v8 )
    {
      v18 = this + 1;
      v12 = (_QWORD *)*v18;
      if ( (_QWORD *)*v18 != v18 )
      {
        Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a2->SetFault.Value;
        do
        {
          ++v7;
          if ( Value == -1 )
          {
            hProcess = a2->Evict.hProcess;
            if ( (unsigned __int64)hProcess >= *(v12 - 2) && (unsigned __int64)hProcess < *(v12 - 1) )
            {
LABEL_21:
              a2->GetVads.GetVad.StartAddress = *(v12 - 2);
              a2->GetVads.GetVad.EndAddress = *(v12 - 1);
              a2->GetVads.GetVad.VadType = v12[4] & 0xF;
              a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)v12 + 9);
              goto LABEL_29;
            }
          }
          else if ( Value == v7 )
          {
            goto LABEL_21;
          }
          v12 = (_QWORD *)*v12;
        }
        while ( v12 != v18 );
      }
LABEL_14:
      a2->GetVads.GetSegmentCaps.SegmentCaps[2].BudgetGroup = -1073741811;
      v17 = WdLogNewEntry5_WdWarning(v12);
      WdLogEvent5_WdWarning(v17);
      goto LABEL_29;
    }
    if ( v8 == 1 )
    {
      v9 = (_QWORD **)(this + 1);
      v10 = *v9;
      if ( *v9 != v9 )
      {
        NtHandle = a2->EvictByNtHandle.NtHandle;
        while ( 1 )
        {
          v12 = v10 - 5;
          if ( NtHandle >= *(v10 - 2) && NtHandle < v12[4] )
            break;
          v10 = (_QWORD *)*v10;
          if ( v10 == v9 )
            goto LABEL_29;
        }
        PhysicalAdapterIndex = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
        if ( (unsigned int)PhysicalAdapterIndex < ((*((_DWORD *)v12 + 18) >> 4) & 0x7Fu) )
        {
          v14 = PhysicalAdapterIndex + 6;
          v15 = 0;
          v16 = &v12[2 * v14];
          v12 = (_QWORD *)*v16;
          if ( (_QWORD *)*v16 != v16 )
          {
            while ( v15 != a2->GetVads.GetVadRange.VaRangeIndex )
            {
              v12 = (_QWORD *)*v12;
              ++v15;
              if ( v12 == v16 )
                goto LABEL_14;
            }
            if ( --v12 )
            {
              a2->GetVads.GetVadRange.StartAddress = v12[12];
              a2->GetVads.GetVad.StartAddress = v12[13];
              a2->GetVads.GetVadRange.OwnerType = (int)(*((_DWORD *)v12 + 16) << 28) >> 28;
              a2->GetVads.GetVadRange.pOwner = v12[7];
              a2->GetVads.GetVadRange.Protection = *((_DWORD *)v12 + 22);
              a2->GetVads.GetVad.EndAddress = v12[10];
              a2->GetVads.GetVadRange.OwnerOffset = v12[9];
              goto LABEL_29;
            }
          }
        }
        goto LABEL_14;
      }
    }
  }
  else
  {
    v21 = (_QWORD **)(this + 1);
    a2->SetFault.Value = 0;
    for ( i = *v21; i != v21; i = (_QWORD *)*i )
      a2->SetFault.Value = ++v7;
  }
LABEL_29:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
}
