/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00603BC
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C004CC98 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(CVirtualAddressAllocator *this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  int v4; // r8d
  __int64 v5; // rdx
  __int64 Value; // r8
  _QWORD **v7; // rdi
  _QWORD *v8; // rax
  UINT64 NtHandle; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdi
  HANDLE hProcess; // rax
  _QWORD **v16; // rdi
  _QWORD *i; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v18,
    (CVirtualAddressAllocator *)((char *)this + 40));
  v4 = *((_DWORD *)&a2->Defrag + 18);
  v5 = 0LL;
  a2->GetVads.GetSegmentCaps.SegmentCaps[2].BudgetGroup = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
  if ( v4 )
  {
    Value = (unsigned int)(v4 - 1);
    if ( !(_DWORD)Value )
    {
      v14 = (_QWORD *)((char *)this + 8);
      v10 = (_QWORD *)*v14;
      if ( (_QWORD *)*v14 != v14 )
      {
        Value = a2->SetFault.Value;
        do
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (_DWORD)Value == -1 )
          {
            hProcess = a2->Evict.hProcess;
            if ( (unsigned __int64)hProcess >= *(v10 - 2) && (unsigned __int64)hProcess < *(v10 - 1) )
            {
LABEL_21:
              a2->GetVads.GetVad.StartAddress = *(v10 - 2);
              a2->GetVads.GetVad.EndAddress = *(v10 - 1);
              a2->GetVads.GetVad.VadType = v10[4] & 0xF;
              a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)v10 + 9);
              goto LABEL_29;
            }
          }
          else if ( (_DWORD)Value == (_DWORD)v5 )
          {
            goto LABEL_21;
          }
          v10 = (_QWORD *)*v10;
        }
        while ( v10 != v14 );
      }
LABEL_14:
      a2->GetVads.GetSegmentCaps.SegmentCaps[2].BudgetGroup = -1073741811;
      v13 = WdLogNewEntry5_WdWarning(v10, v5, Value);
      WdLogEvent5_WdWarning(v13);
      goto LABEL_29;
    }
    if ( (_DWORD)Value == 1 )
    {
      v7 = (_QWORD **)((char *)this + 8);
      v8 = *v7;
      if ( *v7 != v7 )
      {
        NtHandle = a2->EvictByNtHandle.NtHandle;
        while ( 1 )
        {
          v10 = v8 - 5;
          if ( NtHandle >= *(v8 - 2) && NtHandle < v10[4] )
            break;
          v8 = (_QWORD *)*v8;
          if ( v8 == v7 )
            goto LABEL_29;
        }
        Value = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
        if ( (unsigned int)Value < ((*((_DWORD *)v10 + 18) >> 4) & 0x7Fu) )
        {
          v11 = Value + 6;
          Value = 0LL;
          v12 = &v10[2 * v11];
          v10 = (_QWORD *)*v12;
          if ( (_QWORD *)*v12 != v12 )
          {
            while ( (_DWORD)Value != a2->GetVads.GetVadRange.VaRangeIndex )
            {
              v10 = (_QWORD *)*v10;
              Value = (unsigned int)(Value + 1);
              if ( v10 == v12 )
                goto LABEL_14;
            }
            if ( --v10 )
            {
              a2->GetVads.GetVadRange.StartAddress = v10[12];
              a2->GetVads.GetVad.StartAddress = v10[13];
              a2->GetVads.GetVadRange.OwnerType = (int)(*((_DWORD *)v10 + 16) << 28) >> 28;
              a2->GetVads.GetVadRange.pOwner = v10[7];
              a2->GetVads.GetVadRange.Protection = *((_DWORD *)v10 + 22);
              a2->GetVads.GetVad.EndAddress = v10[10];
              a2->GetVads.GetVadRange.OwnerOffset = v10[9];
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
    v16 = (_QWORD **)((char *)this + 8);
    a2->SetFault.Value = 0;
    for ( i = *v16; i != v16; i = (_QWORD *)*i )
    {
      LODWORD(v5) = v5 + 1;
      a2->SetFault.Value = v5;
    }
  }
LABEL_29:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
}
