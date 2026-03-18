/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C0088B64
 * Callers:
 *     VidMmEscape @ 0x1C001D530 (VidMmEscape.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C000FC70 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001D8A0 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C005C6D0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C008A468 (-PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z.c)
 *     ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008FC30 (-Flush@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C00906FC (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C00909F0 (-SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0093B34 (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        int a4)
{
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 *v10; // r9
  __int64 Type; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  VIDMM_PROCESS *v14; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  VIDMM_PROCESS *v18; // rcx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  __int64 v22; // rax
  PRKEVENT *v23; // rcx
  ULONG v24; // ecx
  D3DKMT_HANDLE v25; // edx
  UINT v26; // r8d
  __int64 v27; // rcx
  VIDMM_PROCESS *v28; // rcx
  unsigned __int64 *v30; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v31; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v32; // [rsp+30h] [rbp-38h]
  _BYTE v33[32]; // [rsp+40h] [rbp-28h] BYREF

  v7 = -1073741811;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v33, (VIDMM_GLOBAL *)((char *)this + 40968));
  Type = (unsigned int)a3->Type;
  if ( (int)Type > 8 )
  {
    v19 = Type - 11;
    if ( !v19 )
    {
      v27 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
      if ( v27 )
        v28 = *(VIDMM_PROCESS **)(v27 + 8);
      else
        v28 = 0LL;
      VIDMM_PROCESS::GetNumBytesToTrim(v28, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), &a3->EvictByNtHandle.NtHandle);
      goto LABEL_37;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v24 = dword_1C0035378;
      v25 = dword_1C0035374;
      v26 = dword_1C003536C;
      dword_1C0035378 = a3->Wake.bFlush;
      dword_1C0035374 = a3->Evict.AllocationHandle;
      dword_1C003536C = a3->SuspendProcess.bAllowWakeOnSubmission;
      a3->Evict.AllocationHandle = v25;
      a3->GetVads.GetVadRange.VaRangeIndex = v26;
      a3->SetFault.Value = v24;
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
      goto LABEL_37;
    }
    v21 = v20 - 2;
    if ( !v21 )
    {
      v23 = *(PRKEVENT **)this;
      if ( a3->SetFault.Value )
        VIDMM_WORKER_THREAD::Flush((VIDMM_WORKER_THREAD *)v23);
      else
        KeSetEvent(v23[19], 0, 0);
      goto LABEL_37;
    }
    if ( v21 == 1 )
    {
      VIDMM_GLOBAL::PerformDefragmentationEscape(this, a3->Defrag.Operation, v9, v10, v30, v31, v32);
      goto LABEL_37;
    }
LABEL_26:
    v22 = WdLogNewEntry5_WdWarning(v8);
    WdLogEvent5_WdWarning(v22);
    goto LABEL_38;
  }
  if ( (_DWORD)Type == 8 )
  {
    v17 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v17 )
      v18 = *(VIDMM_PROCESS **)(v17 + 8);
    else
      v18 = 0LL;
    VIDMM_PROCESS::SetMemoryBudgetOverride(
      v18,
      *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
      a3->EvictByNtHandle.NtHandle,
      a3->GetVads.GetVad.VadAddress);
    goto LABEL_37;
  }
  v12 = 0;
  if ( !(_DWORD)Type )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8, Type);
    *(_QWORD *)(v16 + 24) = 17468LL;
    WdLogEvent5_WdAssertion(v16);
    v7 = -1073741823;
    goto LABEL_38;
  }
  if ( (int)Type <= 0 )
    goto LABEL_26;
  if ( (int)Type <= 2 )
  {
LABEL_37:
    v7 = 0;
    goto LABEL_38;
  }
  if ( (_DWORD)Type == 3 )
  {
    v7 = VIDMM_GLOBAL::ApertureCorruptionCheck(this, 0LL, v9, (__int64)v10);
    goto LABEL_38;
  }
  if ( (_DWORD)Type != 4 )
  {
    if ( (_DWORD)Type == 7 )
    {
      v13 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
      if ( v13 )
        v14 = *(VIDMM_PROCESS **)(v13 + 8);
      else
        v14 = 0LL;
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  v14,
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                                  0xFFFFFFFF);
      if ( !VirtualAddressAllocator )
        goto LABEL_38;
      CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
      goto LABEL_37;
    }
    goto LABEL_26;
  }
  if ( !a4 )
  {
    v7 = -1073741790;
LABEL_38:
    v12 = v7;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v12;
}
