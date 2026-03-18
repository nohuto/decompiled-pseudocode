/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C007D870
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C001C830 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006F20 (VidSchWaitForSingleSyncObject.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0015194 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C001C898 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C007B1BC (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0081784 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C0081A24 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        int a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  struct VIDMM_COMPANION_CONTEXT *v7; // rsi
  __int64 v9; // rcx
  unsigned __int64 AllocationOffsetInBytes; // r9
  __int64 v11; // rax
  struct _VIDSCH_SYNC_OBJECT *v13; // r13
  UINT64 FenceValue; // rbx
  UINT64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  UINT64 v20; // rax
  unsigned __int64 v21; // rdx
  struct VIDMM_VAD *v22; // r12
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA *v23; // rdi
  UINT v24; // r14d
  unsigned int v25; // ebx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 BaseAddress; // r12
  unsigned __int64 v30; // r13
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v31; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  _QWORD *v33; // rax
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v34; // rcx
  _QWORD *v35; // r9
  char v36; // dl
  int v37; // eax
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r8
  struct _VIDMM_MULTI_ALLOC *v43; // rbx
  D3DGPU_SIZE_T AllocationSizeInBytes; // rcx
  D3DGPU_SIZE_T SizeInBytes; // r8
  D3DGPU_SIZE_T v46; // r10
  __int64 Value; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // r10
  D3DGPU_SIZE_T v51; // r8
  char v52; // dl
  int v53; // ecx
  _OWORD **v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  VIDMM_MAPPED_VA_RANGE *v64; // rcx
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  CVirtualAddressAllocator *v70; // r14
  __int64 v71; // rcx
  struct VIDMM_VAD *v72; // rbx
  __int64 v73; // rax
  char *v74; // rax
  struct VIDMM_VAD *v75; // rcx
  struct VIDMM_VAD **v76; // rdx
  char **v77; // rdx
  char *v78; // rcx
  __int128 *i; // rdx
  bool v80; // zf
  unsigned int j; // r8d
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int128 v86; // [rsp+38h] [rbp-D0h] BYREF
  int v87; // [rsp+48h] [rbp-C0h]
  int v88; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v89; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v90; // [rsp+58h] [rbp-B0h]
  __int64 v91; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v92; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+70h] [rbp-98h]
  unsigned __int64 v94; // [rsp+78h] [rbp-90h]
  unsigned __int64 v95; // [rsp+80h] [rbp-88h]
  UINT64 DriverProtection; // [rsp+88h] [rbp-80h]
  CVirtualAddressAllocator *v97; // [rsp+90h] [rbp-78h]
  __int64 v98; // [rsp+98h] [rbp-70h]
  PRKSEMAPHORE Semaphore; // [rsp+A0h] [rbp-68h]
  D3DGPU_SIZE_T v100; // [rsp+A8h] [rbp-60h]
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp-58h] BYREF
  struct _VIDMM_MULTI_ALLOC *v102; // [rsp+B8h] [rbp-50h]
  _BYTE v103[24]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v104[13]; // [rsp+E0h] [rbp-28h] BYREF
  char v108; // [rsp+188h] [rbp+80h]

  v7 = a3;
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    v11 = WdLogNewEntry5_WdWarning(v9);
    WdLogEvent5_WdWarning(v11);
    return 3223191810LL;
  }
  v13 = a6;
  FenceValue = a2->FenceValue;
  v15 = *((_QWORD *)v7 + 7);
  if ( *((_BYTE *)a6 + 29) )
  {
    if ( FenceValue < v15 )
    {
      v16 = WdLogNewEntry5_WdWarning(v9);
      *(_QWORD *)(v16 + 24) = FenceValue;
      *(_QWORD *)(v16 + 32) = v15;
LABEL_10:
      WdLogEvent5_WdWarning(v16);
      v19 = WdLogNewEntry5_WdWarning(v18);
      *(_QWORD *)(v19 + 24) = a2->FenceValue;
      WdLogEvent5_WdWarning(v19);
      return 3221225485LL;
    }
    if ( FenceValue == v15 )
    {
      v17 = WdLogNewEntry5_WdWarning(v9);
      *(_QWORD *)(v17 + 24) = FenceValue;
LABEL_13:
      WdLogEvent5_WdWarning(v17);
    }
  }
  else
  {
    if ( (int)v15 - (int)FenceValue > 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(v9);
      *(_QWORD *)(v16 + 24) = (unsigned int)FenceValue;
      *(_QWORD *)(v16 + 32) = (unsigned int)v15;
      goto LABEL_10;
    }
    if ( (_DWORD)v15 == (_DWORD)FenceValue )
    {
      v17 = WdLogNewEntry5_WdWarning(v9);
      *(_QWORD *)(v17 + 24) = (unsigned int)FenceValue;
      goto LABEL_13;
    }
  }
  v20 = a2->FenceValue;
  v21 = 0LL;
  v95 = 0LL;
  v22 = 0LL;
  *((_QWORD *)v7 + 7) = v20;
  v23 = 0LL;
  v24 = 0;
  v97 = *(CVirtualAddressAllocator **)v7;
  v25 = -1073741811;
  v87 = -1073741811;
  v90 = 0LL;
  v26 = *(_QWORD *)v97;
  v27 = *((_QWORD *)v7 + 1);
  v92 = *(_QWORD *)v97;
  v108 = 0;
  v28 = -1LL;
  v88 = *(unsigned __int16 *)(*(_QWORD *)(v27 + 96) + 6LL);
  *((_QWORD *)&v86 + 1) = &v86;
  *(_QWORD *)&v86 = &v86;
  v89 = -1LL;
  v94 = -1LL;
  if ( a2->NumOperations )
  {
    BaseAddress = (unsigned __int64)a3;
    v30 = (unsigned __int64)a3;
    while ( 1 )
    {
      v31 = &a2->Operations[(unsigned __int64)v24];
      OperationType = v31->OperationType;
      if ( v31->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        BaseAddress = v31->Map.BaseAddress;
        v30 = BaseAddress + v31->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v30, v26, AllocationOffsetInBytes) )
          goto LABEL_70;
        v43 = a5[v31->Map.hAllocation];
        AllocationSizeInBytes = v31->Map.AllocationSizeInBytes;
        v102 = v43;
        if ( (AllocationSizeInBytes & 0xFFF) != 0
          || (AllocationOffsetInBytes = v31->Map.AllocationOffsetInBytes, (AllocationOffsetInBytes & 0xFFF) != 0) )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
          v61[3] = v24;
          v61[4] = 22636LL;
          goto LABEL_69;
        }
        SizeInBytes = v31->Map.SizeInBytes;
        if ( AllocationSizeInBytes )
        {
          if ( AllocationSizeInBytes > SizeInBytes )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
            v61[3] = v24;
            goto LABEL_69;
          }
          if ( SizeInBytes % AllocationSizeInBytes )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
            v61[3] = v24;
            v61[4] = 22659LL;
            goto LABEL_69;
          }
        }
        else
        {
          v31->Map.AllocationSizeInBytes = SizeInBytes;
        }
        v46 = v31->Map.AllocationSizeInBytes;
        if ( AllocationOffsetInBytes + v46 < AllocationOffsetInBytes
          || (AllocationSizeInBytes = *(_QWORD *)v43,
              AllocationOffsetInBytes + v46 > *(_QWORD *)(**(_QWORD **)v43 + 16LL)) )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
          v61[3] = *(_QWORD *)(**(_QWORD **)v43 + 16LL);
          v61[4] = v24;
          v61[5] = 22670LL;
          goto LABEL_69;
        }
        v100 = SizeInBytes / v46;
        if ( SizeInBytes / v46 >= 0xFFFFFFFF )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(0xFFFFFFFFLL);
          v61[3] = v24;
          v61[4] = 22676LL;
          goto LABEL_69;
        }
        v93 = BaseAddress;
        DriverProtection = 0LL;
        if ( v31->OperationType )
        {
          Value = v31->MapProtect.Protection.Value;
          DriverProtection = v31->MapProtect.DriverProtection;
        }
        else
        {
          Value = 1LL;
        }
        LODWORD(v91) = 0;
        v98 = Value;
        if ( (unsigned int)(SizeInBytes / v46) )
        {
          while ( 1 )
          {
            v48 = operator new(0x78uLL, 0x39346956u, PagedPool);
            v50 = v93;
            if ( !v48 )
              break;
            v51 = v31->Map.AllocationOffsetInBytes;
            AllocationOffsetInBytes = v93 + v31->Map.AllocationSizeInBytes;
            *v48 = 0LL;
            v52 = v88;
            v48[7] = v102;
            v53 = *((_DWORD *)v48 + 16);
            v48[9] = v51;
            v48[11] = Value;
            v48[12] = v50;
            v48[13] = AllocationOffsetInBytes;
            v48[10] = DriverProtection;
            *((_DWORD *)v48 + 16) = v53 & 0xFFFFE001 | (16 * (v52 & 0x3F)) | 1;
            *((_DWORD *)v48 + 28) = 1;
            v48[1] = 0LL;
            v48[2] = 0LL;
            v48[3] = 0LL;
            v48[4] = 0LL;
            v48[5] = 0LL;
            v48[6] = 0LL;
            v54 = (_OWORD **)*((_QWORD *)&v86 + 1);
            v55 = v48 + 1;
            v55[1] = *((_QWORD *)&v86 + 1);
            *v55 = &v86;
            if ( *v54 != &v86 )
              __fastfail(3u);
            *v54 = v55;
            *((_QWORD *)&v86 + 1) = v55;
            v93 = v31->Map.AllocationSizeInBytes + v50;
            LODWORD(v91) = v91 + 1;
            if ( (unsigned int)v91 >= (unsigned int)v100 )
              goto LABEL_55;
          }
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v49);
          v61[3] = 22704LL;
LABEL_69:
          WdLogEvent5_WdWarning(v61);
LABEL_70:
          v25 = -1073741811;
LABEL_71:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( v23 )
            VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(v23);
          while ( 1 )
          {
            v62 = v86;
            if ( (__int128 *)v86 == &v86 )
              break;
            v63 = *(_QWORD *)v86;
            if ( *(__int128 **)(v86 + 8) != &v86 || *(_QWORD *)(v63 + 8) != (_QWORD)v86 )
              __fastfail(3u);
            *(_QWORD *)&v86 = *(_QWORD *)v86;
            v64 = (VIDMM_MAPPED_VA_RANGE *)(v62 - 8);
            *(_QWORD *)(v63 + 8) = &v86;
            *((_QWORD *)v64 + 1) = 0LL;
            *((_QWORD *)v64 + 2) = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v64);
          }
          return v25;
        }
      }
      else if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        BaseAddress = v31->Map.BaseAddress;
        v30 = BaseAddress + v31->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v30, v26, AllocationOffsetInBytes) )
          goto LABEL_70;
        v33 = operator new(0x78uLL, 0x39346956u, PagedPool);
        v35 = v33;
        if ( v33 )
        {
          v34 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)v31->Unmap.Protection.Value;
          v33[11] = v34;
          v33[12] = BaseAddress;
          v33[13] = v30;
          v36 = v88;
          *v33 = 0LL;
          v33[7] = 0LL;
          v37 = *((_DWORD *)v33 + 16);
          v35[9] = 0LL;
          v35[10] = 0LL;
          *((_DWORD *)v35 + 16) = v37 & 0xFFFFE000 | ((*(_BYTE *)&v34 & 8) == 0 ? 6 : 0) | (16 * (v36 & 0x3F));
          *((_DWORD *)v35 + 28) = 1;
          v35[1] = 0LL;
          v35[2] = 0LL;
          v35[3] = 0LL;
          v35[4] = 0LL;
          v35[5] = 0LL;
          v35[6] = 0LL;
        }
        else
        {
          v35 = 0LL;
        }
        if ( !v35 )
        {
          v61 = (_QWORD *)((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdWarning)(v34);
          v61[3] = 22733LL;
          goto LABEL_69;
        }
        v38 = (unsigned __int64 *)*((_QWORD *)&v86 + 1);
        AllocationOffsetInBytes = (unsigned __int64)(v35 + 1);
        *(_QWORD *)(AllocationOffsetInBytes + 8) = *((_QWORD *)&v86 + 1);
        *(_QWORD *)AllocationOffsetInBytes = &v86;
        if ( (__int128 *)*v38 != &v86 )
          __fastfail(3u);
        *v38 = AllocationOffsetInBytes;
        *((_QWORD *)&v86 + 1) = AllocationOffsetInBytes;
      }
      else
      {
        if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
          goto LABEL_56;
        BaseAddress = v31->Unmap.Protection.Value;
        v30 = BaseAddress + v31->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v30, v26, AllocationOffsetInBytes) )
          goto LABEL_70;
        v39 = v31->Map.BaseAddress;
        v40 = v39 + v31->Map.SizeInBytes;
        if ( v40 <= v39 )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v39);
          v61[3] = v24;
          v61[4] = 22753LL;
          goto LABEL_69;
        }
        if ( (v39 & 0xFFF) != 0 || (v40 & 0xFFF) != 0 )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v39);
          v61[3] = v24;
          v61[4] = 22758LL;
          goto LABEL_69;
        }
        if ( BaseAddress < v40 && v30 > v39 )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v39);
          v61[3] = v24;
          v61[4] = 22764LL;
          goto LABEL_69;
        }
        v41 = v94;
        v108 = 1;
        if ( v94 > v39 )
          v41 = v31->Map.BaseAddress;
        v94 = v41;
        v42 = v95;
        if ( v95 < v40 )
          v42 = v40;
        v95 = v42;
      }
LABEL_55:
      v26 = v92;
      v21 = v90;
      v28 = v89;
LABEL_56:
      if ( v30 <= BaseAddress )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v28);
        v61[3] = v24;
        v61[4] = 22784LL;
        goto LABEL_69;
      }
      if ( ((BaseAddress | v30) & 0xFFF) != 0 )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v28);
        v61[3] = v24;
        v61[4] = 22789LL;
        goto LABEL_69;
      }
      if ( v28 > BaseAddress )
        v28 = BaseAddress;
      v89 = v28;
      if ( v21 < v30 )
        v21 = v30;
      ++v24;
      v90 = v21;
      if ( v24 >= a2->NumOperations )
      {
        v7 = a3;
        v25 = -1073741811;
        v13 = a6;
        v22 = 0LL;
        break;
      }
    }
  }
  if ( (a2->Flags.Value & 1) == 0 )
  {
    *((_BYTE *)v13 + 25) = 0;
    v87 = VidSchWaitForSingleSyncObject(*((_QWORD *)v7 + 1), (__int64)v13, a2->FenceValue, AllocationOffsetInBytes);
    v25 = v87;
    if ( v87 < 0 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
      *(_QWORD *)(v60 + 24) = 22812LL;
      WdLogEvent5_WdAssertion(v60);
      goto LABEL_71;
    }
  }
  v65 = (VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)operator new(0xB8uLL, 0x39346956u, PagedPool);
  v23 = v65;
  if ( v65 )
  {
    memset(v65, 0, 0xB8uLL);
    *((_QWORD *)v23 + 13) = (char *)v23 + 96;
    *((_QWORD *)v23 + 12) = (char *)v23 + 96;
    *((_QWORD *)v23 + 7) = (char *)v23 + 48;
    *((_QWORD *)v23 + 6) = (char *)v23 + 48;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v23 )
  {
    v69 = WdLogNewEntry5_WdWarning(v66);
    WdLogEvent5_WdWarning(v69);
    goto LABEL_71;
  }
  v70 = v97;
  *((_QWORD *)v23 + 1) = this;
  *((_DWORD *)v23 + 5) = a2->NumOperations;
  *((_QWORD *)v23 + 10) = a2->FenceValue + 1;
  *((_DWORD *)v23 + 4) = v88;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v103,
    (struct _KTHREAD **)v70 + 5,
    v67,
    v68);
  v72 = CVirtualAddressAllocator::ReferenceReservedZeroVad(v70, v89, v90);
  if ( !v72 || v108 && (v22 = CVirtualAddressAllocator::ReferenceReservedZeroVad(v70, v94, v95)) == 0LL )
  {
    v73 = WdLogNewEntry5_WdWarning(v71);
    WdLogEvent5_WdWarning(v73);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v103);
    v25 = v87;
    goto LABEL_71;
  }
  *((_QWORD *)v23 + 15) = v22;
  *((_QWORD *)v23 + 21) = (char *)v23 + 120;
  v74 = (char *)v72 + 80;
  *((_QWORD *)v23 + 14) = v72;
  *((_QWORD *)v23 + 18) = (char *)v23 + 112;
  v75 = (VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)((char *)v23 + 128);
  v76 = (struct VIDMM_VAD **)*((_QWORD *)v72 + 11);
  *((_QWORD *)v23 + 16) = (char *)v72 + 80;
  *((_QWORD *)v23 + 17) = v76;
  if ( *v76 != (struct VIDMM_VAD *)((char *)v72 + 80) )
    __fastfail(3u);
  *v76 = v75;
  *((_QWORD *)v72 + 11) = v75;
  if ( v22 )
  {
    v77 = (char **)*((_QWORD *)v72 + 11);
    v78 = (char *)v23 + 152;
    *((_QWORD *)v23 + 19) = v74;
    *((_QWORD *)v23 + 20) = v77;
    if ( *v77 != v74 )
      __fastfail(3u);
    *v77 = v78;
    *((_QWORD *)v72 + 11) = v78;
    *((_BYTE *)v23 + 176) = 1;
  }
  for ( i = (__int128 *)v86; i != &v86; i = *(__int128 **)i )
  {
    v80 = *((_QWORD *)i + 9) == 0LL;
    *((_QWORD *)i - 1) = v72;
    if ( v80 )
      *((_QWORD *)i + 9) = *(_QWORD *)(*((_QWORD *)v72 + 12) + 72LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v103);
  *((_QWORD *)v23 + 8) = a5;
  *((_DWORD *)v23 + 8) = a4;
  *((_QWORD *)v23 + 3) = a2->Operations;
  a2->Operations = 0LL;
  *((_QWORD *)v23 + 9) = v13;
  *((_QWORD *)v23 + 11) = v7;
  *(_QWORD *)v23 = *((_QWORD *)v7 + 1);
  if ( (__int128 *)v86 == &v86 )
  {
    *((_QWORD *)v23 + 13) = (char *)v23 + 96;
    *((_QWORD *)v23 + 12) = (char *)v23 + 96;
  }
  else
  {
    *((_OWORD *)v23 + 6) = v86;
    *(_QWORD *)(*((_QWORD *)v23 + 12) + 8LL) = (char *)v23 + 96;
    **((_QWORD **)v23 + 13) = (char *)v23 + 96;
  }
  *((_QWORD *)&v86 + 1) = &v86;
  *(_QWORD *)&v86 = &v86;
  _InterlockedIncrement((volatile signed __int32 *)v13 + 8);
  for ( j = 0; j < *((_DWORD *)v23 + 8); ++j )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v23 + 8) + 8LL * j) + 160LL));
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
    this,
    **((struct _EPROCESS ***)v70 + 9),
    a2->NumOperations,
    v13,
    a2->FenceValue);
  memset(v104, 0, 0x38uLL);
  v82 = *((_QWORD *)v7 + 1);
  v104[4] = v23;
  LODWORD(v104[6]) = 2;
  LODWORD(v104[0]) = 2;
  v83 = *(_QWORD *)(v82 + 104);
  v104[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
  v104[5] = 0LL;
  VidSchSubmitDeviceCommand(v83, (__int64)v104, v84, v85);
  return 0LL;
}
