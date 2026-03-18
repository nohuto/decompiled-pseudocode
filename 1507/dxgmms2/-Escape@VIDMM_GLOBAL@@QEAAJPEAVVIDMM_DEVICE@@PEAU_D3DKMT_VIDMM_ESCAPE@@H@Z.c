/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C004CC98
 * Callers:
 *     VidMmEscape @ 0x1C000E640 (VidMmEscape.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C000EB0C (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?ResumeMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0053470 (-ResumeMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00539AC (-SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C0058198 (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C005865C (-SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00603BC (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        int a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  D3DKMT_VIDMMESCAPETYPE Type; // eax
  ULONG v12; // ecx
  D3DKMT_HANDLE v13; // edx
  UINT v14; // r8d
  VIDMM_PROCESS *v15; // rcx
  VIDMM_PROCESS *v16; // rcx
  VIDMM_PROCESS *v17; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  int v19; // eax
  __int64 v20; // rax
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = -1073741811;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v22, (VIDMM_GLOBAL *)((char *)this + 40648));
  Type = a3->Type;
  if ( a3->Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    VIDMM_GLOBAL::_Config = a3->SetFault.0;
    gVidMmGlobalFault = a3->SetFault.Value;
    goto LABEL_29;
  }
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
LABEL_27:
    v20 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    WdLogEvent5_WdWarning(v20);
    goto LABEL_30;
  }
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_RUN_UNMAP_TO_DUMMY_PAGE_TEST )
  {
LABEL_29:
    v7 = 0;
    goto LABEL_30;
  }
  if ( Type == D3DKMT_VIDMMESCAPETYPE_APERTURE_CORRUPTION_CHECK )
  {
    v19 = VIDMM_GLOBAL::ApertureCorruptionCheck(this, 0LL);
    goto LABEL_26;
  }
  if ( Type != D3DKMT_VIDMMESCAPETYPE_SUSPEND_CPU_ACCESS_TEST )
  {
    if ( Type != D3DKMT_VIDMMESCAPETYPE_GET_VAD_INFO )
    {
      switch ( Type )
      {
        case D3DKMT_VIDMMESCAPETYPE_SET_BUDGET:
          v16 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 9);
          if ( v16 )
            v16 = (VIDMM_PROCESS *)*((_QWORD *)v16 + 1);
          VIDMM_PROCESS::SetMemoryBudgetOverride(
            v16,
            *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
            a3->EvictByNtHandle.NtHandle,
            a3->GetVads.GetVad.VadAddress);
          goto LABEL_29;
        case D3DKMT_VIDMMESCAPETYPE_GET_BUDGET:
          v15 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 9);
          if ( v15 )
            v15 = (VIDMM_PROCESS *)*((_QWORD *)v15 + 1);
          VIDMM_PROCESS::GetNumBytesToTrim(
            v15,
            *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
            &a3->EvictByNtHandle.NtHandle);
          goto LABEL_29;
        case D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS:
          v12 = dword_1C0027340;
          v13 = dword_1C002733C;
          v14 = dword_1C0027334;
          dword_1C0027340 = a3->Wake.bFlush;
          dword_1C002733C = a3->Evict.AllocationHandle;
          dword_1C0027334 = a3->SuspendProcess.bAllowWakeOnSubmission;
          a3->Evict.AllocationHandle = v13;
          a3->GetVads.GetVadRange.VaRangeIndex = v14;
          a3->SetFault.Value = v12;
          KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 120LL), 0, 0);
          goto LABEL_29;
      }
      goto LABEL_27;
    }
    v17 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v17 )
      v17 = (VIDMM_PROCESS *)*((_QWORD *)v17 + 1);
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                v17,
                                *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                                0xFFFFFFFF);
    if ( VirtualAddressAllocator )
    {
      CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
      goto LABEL_29;
    }
    goto LABEL_30;
  }
  if ( !a4 )
  {
    v7 = -1073741790;
    goto LABEL_30;
  }
  v7 = VIDMM_GLOBAL::SuspendMemorySegmentAccess(this);
  if ( v7 >= 0 )
  {
    v19 = VIDMM_GLOBAL::ResumeMemorySegmentAccess(this);
LABEL_26:
    v7 = v19;
  }
LABEL_30:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return (unsigned int)v7;
}
