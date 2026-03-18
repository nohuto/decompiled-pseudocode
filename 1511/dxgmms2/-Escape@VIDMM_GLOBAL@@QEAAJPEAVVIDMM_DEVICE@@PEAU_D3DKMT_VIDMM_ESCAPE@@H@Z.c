/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C007A834
 * Callers:
 *     VidMmEscape @ 0x1C001C680 (VidMmEscape.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001C8B8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ResumeMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007BEC0 (-ResumeMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007C1A8 (-SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C007F47C (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C007F674 (-SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00815EC (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        __int64 a4)
{
  int v5; // ebp
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
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

  v5 = a4;
  v7 = -1073741811;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v22, this + 5088, (__int64)a3, a4);
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
    v20 = WdLogNewEntry5_WdWarning(v8);
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
    v19 = VIDMM_GLOBAL::ApertureCorruptionCheck((VIDMM_GLOBAL *)this, 0LL, v9, v10);
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
            *((_DWORD *)this[3] + 46),
            a3->EvictByNtHandle.NtHandle,
            a3->GetVads.GetVad.VadAddress);
          goto LABEL_29;
        case D3DKMT_VIDMMESCAPETYPE_GET_BUDGET:
          v15 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 9);
          if ( v15 )
            v15 = (VIDMM_PROCESS *)*((_QWORD *)v15 + 1);
          VIDMM_PROCESS::GetNumBytesToTrim(v15, *((_DWORD *)this[3] + 46), &a3->EvictByNtHandle.NtHandle);
          goto LABEL_29;
        case D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS:
          v12 = dword_1C002F368;
          v13 = dword_1C002F364;
          v14 = dword_1C002F35C;
          dword_1C002F368 = a3->Wake.bFlush;
          dword_1C002F364 = a3->Evict.AllocationHandle;
          dword_1C002F35C = a3->SuspendProcess.bAllowWakeOnSubmission;
          a3->Evict.AllocationHandle = v13;
          a3->GetVads.GetVadRange.VaRangeIndex = v14;
          a3->SetFault.Value = v12;
          KeSetEvent(*((PRKEVENT *)*this + 15), 0, 0);
          goto LABEL_29;
      }
      goto LABEL_27;
    }
    v17 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v17 )
      v17 = (VIDMM_PROCESS *)*((_QWORD *)v17 + 1);
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v17, *((_DWORD *)this[3] + 46), 0xFFFFFFFF);
    if ( VirtualAddressAllocator )
    {
      CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
      goto LABEL_29;
    }
    goto LABEL_30;
  }
  if ( !v5 )
  {
    v7 = -1073741790;
    goto LABEL_30;
  }
  v7 = VIDMM_GLOBAL::SuspendMemorySegmentAccess((VIDMM_GLOBAL *)this);
  if ( v7 >= 0 )
  {
    v19 = VIDMM_GLOBAL::ResumeMemorySegmentAccess((VIDMM_GLOBAL *)this);
LABEL_26:
    v7 = v19;
  }
LABEL_30:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return (unsigned int)v7;
}
