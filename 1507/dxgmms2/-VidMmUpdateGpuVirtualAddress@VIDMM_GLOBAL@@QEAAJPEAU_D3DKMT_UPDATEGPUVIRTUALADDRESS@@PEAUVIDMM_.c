/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C005613C
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C000E910 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C000EA58 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C000F228 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C001D890 (VidSchWaitForSingleSyncObject.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C004E8A4 (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0062644 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C0062DD4 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 AllocationOffsetInBytes; // r9
  __int64 v13; // rax
  struct _VIDSCH_SYNC_OBJECT *v15; // r13
  UINT64 FenceValue; // rbx
  UINT64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  UINT64 v24; // rax
  unsigned __int64 v25; // rdx
  struct VIDMM_VAD *v26; // r12
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA *v27; // rdi
  UINT v28; // r14d
  unsigned int v29; // ebx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 BaseAddress; // r12
  unsigned __int64 v34; // r13
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v35; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // r9
  char v42; // dl
  int v43; // eax
  unsigned __int64 *v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r8
  D3DGPU_SIZE_T v50; // rdx
  __int64 v51; // r8
  struct _VIDMM_MULTI_ALLOC *v52; // rbx
  D3DGPU_SIZE_T AllocationSizeInBytes; // rcx
  D3DGPU_SIZE_T SizeInBytes; // r8
  D3DGPU_SIZE_T v55; // r10
  __int64 Value; // rbx
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int64 v61; // r10
  D3DGPU_SIZE_T v62; // r8
  char v63; // dl
  int v64; // ecx
  _OWORD **v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  VIDMM_MAPPED_VA_RANGE *v75; // rcx
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  struct _EPROCESS ***v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rcx
  struct VIDMM_VAD *v84; // rbx
  __int64 v85; // r8
  __int64 v86; // rax
  char *v87; // rax
  struct VIDMM_VAD *v88; // rcx
  struct VIDMM_VAD **v89; // rdx
  char **v90; // rdx
  char *v91; // rcx
  __int128 *i; // rdx
  bool v93; // zf
  unsigned int j; // r8d
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int128 v97; // [rsp+38h] [rbp-D0h] BYREF
  int v98; // [rsp+48h] [rbp-C0h]
  int v99; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v100; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v101; // [rsp+58h] [rbp-B0h]
  __int64 v102; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v103; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v104; // [rsp+70h] [rbp-98h]
  unsigned __int64 v105; // [rsp+78h] [rbp-90h]
  unsigned __int64 v106; // [rsp+80h] [rbp-88h]
  UINT64 DriverProtection; // [rsp+88h] [rbp-80h]
  CVirtualAddressAllocator *v108; // [rsp+90h] [rbp-78h]
  __int64 v109; // [rsp+98h] [rbp-70h]
  PRKSEMAPHORE Semaphore; // [rsp+A0h] [rbp-68h]
  D3DGPU_SIZE_T v111; // [rsp+A8h] [rbp-60h]
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp-58h] BYREF
  struct _VIDMM_MULTI_ALLOC *v113; // [rsp+B8h] [rbp-50h]
  _BYTE v114[24]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v115[13]; // [rsp+E0h] [rbp-28h] BYREF
  char v119; // [rsp+188h] [rbp+80h]

  v7 = a3;
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    WdLogEvent5_WdWarning(v13);
    return 3223191810LL;
  }
  v15 = a6;
  FenceValue = a2->FenceValue;
  v17 = *((_QWORD *)v7 + 7);
  if ( *((_BYTE *)a6 + 29) )
  {
    if ( FenceValue < v17 )
    {
      v18 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v18 + 24) = FenceValue;
      *(_QWORD *)(v18 + 32) = v17;
LABEL_10:
      WdLogEvent5_WdWarning(v18);
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = a2->FenceValue;
      WdLogEvent5_WdWarning(v23);
      return 3221225485LL;
    }
    if ( FenceValue == v17 )
    {
      v19 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v19 + 24) = FenceValue;
LABEL_13:
      WdLogEvent5_WdWarning(v19);
    }
  }
  else
  {
    if ( (int)v17 - (int)FenceValue > 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v18 + 24) = (unsigned int)FenceValue;
      *(_QWORD *)(v18 + 32) = (unsigned int)v17;
      goto LABEL_10;
    }
    if ( (_DWORD)v17 == (_DWORD)FenceValue )
    {
      v19 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v19 + 24) = (unsigned int)FenceValue;
      goto LABEL_13;
    }
  }
  v24 = a2->FenceValue;
  v25 = 0LL;
  v106 = 0LL;
  v26 = 0LL;
  *((_QWORD *)v7 + 7) = v24;
  v27 = 0LL;
  v28 = 0;
  v108 = *(CVirtualAddressAllocator **)v7;
  v29 = -1073741811;
  v98 = -1073741811;
  v101 = 0LL;
  v30 = *(_QWORD *)v108;
  v31 = *((_QWORD *)v7 + 1);
  v103 = *(_QWORD *)v108;
  v119 = 0;
  v32 = -1LL;
  v99 = *(unsigned __int16 *)(*(_QWORD *)(v31 + 96) + 6LL);
  *((_QWORD *)&v97 + 1) = &v97;
  *(_QWORD *)&v97 = &v97;
  v100 = -1LL;
  v105 = -1LL;
  if ( a2->NumOperations )
  {
    BaseAddress = (unsigned __int64)a3;
    v34 = (unsigned __int64)a3;
    while ( 1 )
    {
      v35 = &a2->Operations[(unsigned __int64)v28];
      OperationType = v35->OperationType;
      if ( v35->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        BaseAddress = v35->Map.BaseAddress;
        v34 = BaseAddress + v35->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v34, v30, AllocationOffsetInBytes) )
          goto LABEL_70;
        v52 = a5[v35->Map.hAllocation];
        AllocationSizeInBytes = v35->Map.AllocationSizeInBytes;
        v113 = v52;
        if ( (AllocationSizeInBytes & 0xFFF) != 0
          || (AllocationOffsetInBytes = v35->Map.AllocationOffsetInBytes, (AllocationOffsetInBytes & 0xFFF) != 0) )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes, v50, v51);
          v72[3] = v28;
          v72[4] = 22088LL;
          goto LABEL_69;
        }
        SizeInBytes = v35->Map.SizeInBytes;
        if ( AllocationSizeInBytes )
        {
          if ( AllocationSizeInBytes > SizeInBytes )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes, v50, SizeInBytes);
            v72[3] = v28;
            goto LABEL_69;
          }
          v50 = SizeInBytes % AllocationSizeInBytes;
          if ( SizeInBytes % AllocationSizeInBytes )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes, v50, SizeInBytes);
            v72[3] = v28;
            v72[4] = 22111LL;
            goto LABEL_69;
          }
        }
        else
        {
          v35->Map.AllocationSizeInBytes = SizeInBytes;
        }
        v55 = v35->Map.AllocationSizeInBytes;
        if ( AllocationOffsetInBytes + v55 < AllocationOffsetInBytes
          || (AllocationSizeInBytes = *(_QWORD *)v52,
              v50 = **(_QWORD **)v52,
              AllocationOffsetInBytes + v55 > *(_QWORD *)(v50 + 16)) )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes, v50, SizeInBytes);
          v72[3] = *(_QWORD *)(**(_QWORD **)v52 + 16LL);
          v72[4] = v28;
          v72[5] = 22122LL;
          goto LABEL_69;
        }
        v111 = SizeInBytes / v55;
        if ( SizeInBytes / v55 >= 0xFFFFFFFF )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, SizeInBytes % v55, SizeInBytes);
          v72[3] = v28;
          v72[4] = 22128LL;
          goto LABEL_69;
        }
        v104 = BaseAddress;
        DriverProtection = 0LL;
        if ( v35->OperationType )
        {
          Value = v35->MapProtect.Protection.Value;
          DriverProtection = v35->MapProtect.DriverProtection;
        }
        else
        {
          Value = 1LL;
        }
        LODWORD(v102) = 0;
        v109 = Value;
        if ( (unsigned int)(SizeInBytes / v55) )
        {
          while ( 1 )
          {
            v57 = operator new(0x78uLL, 0x39346956u, PagedPool);
            v61 = v104;
            if ( !v57 )
              break;
            v62 = v35->Map.AllocationOffsetInBytes;
            AllocationOffsetInBytes = v104 + v35->Map.AllocationSizeInBytes;
            *v57 = 0LL;
            v63 = v99;
            v57[7] = v113;
            v64 = *((_DWORD *)v57 + 16);
            v57[9] = v62;
            v57[11] = Value;
            v57[12] = v61;
            v57[13] = AllocationOffsetInBytes;
            v57[10] = DriverProtection;
            *((_DWORD *)v57 + 16) = v64 & 0xFFFFE801 | (16 * (v63 & 0x3F)) | 1;
            *((_DWORD *)v57 + 28) = 1;
            v57[1] = 0LL;
            v57[2] = 0LL;
            v57[3] = 0LL;
            v57[4] = 0LL;
            v57[5] = 0LL;
            v57[6] = 0LL;
            v65 = (_OWORD **)*((_QWORD *)&v97 + 1);
            v66 = v57 + 1;
            v66[1] = *((_QWORD *)&v97 + 1);
            *v66 = &v97;
            if ( *v65 != &v97 )
              __fastfail(3u);
            *v65 = v66;
            *((_QWORD *)&v97 + 1) = v66;
            v104 = v35->Map.AllocationSizeInBytes + v61;
            LODWORD(v102) = v102 + 1;
            if ( (unsigned int)v102 >= (unsigned int)v111 )
              goto LABEL_55;
          }
          v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60);
          v72[3] = 22156LL;
LABEL_69:
          WdLogEvent5_WdWarning(v72);
LABEL_70:
          v29 = -1073741811;
LABEL_71:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( v27 )
            VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(v27);
          while ( 1 )
          {
            v73 = v97;
            if ( (__int128 *)v97 == &v97 )
              break;
            v74 = *(_QWORD *)v97;
            if ( *(__int128 **)(v97 + 8) != &v97 || *(_QWORD *)(v74 + 8) != (_QWORD)v97 )
              __fastfail(3u);
            *(_QWORD *)&v97 = *(_QWORD *)v97;
            v75 = (VIDMM_MAPPED_VA_RANGE *)(v73 - 8);
            *(_QWORD *)(v74 + 8) = &v97;
            *((_QWORD *)v75 + 1) = 0LL;
            *((_QWORD *)v75 + 2) = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v75);
          }
          return v29;
        }
      }
      else if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        BaseAddress = v35->Map.BaseAddress;
        v34 = BaseAddress + v35->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v34, v30, AllocationOffsetInBytes) )
          goto LABEL_70;
        v37 = operator new(0x78uLL, 0x39346956u, PagedPool);
        v41 = v37;
        if ( v37 )
        {
          v39 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)v35->Unmap.Protection.Value;
          v37[11] = v39;
          v37[12] = BaseAddress;
          v37[13] = v34;
          v42 = v99;
          *v37 = 0LL;
          v37[7] = 0LL;
          v43 = *((_DWORD *)v37 + 16);
          v41[9] = 0LL;
          v41[10] = 0LL;
          v40 = (*(_BYTE *)&v39 & 8) == 0 ? 6 : 0;
          v38 = (unsigned int)v40 | v43 & 0xFFFFE800 | (16 * (v42 & 0x3F));
          *((_DWORD *)v41 + 16) = v38;
          *((_DWORD *)v41 + 28) = 1;
          v41[1] = 0LL;
          v41[2] = 0LL;
          v41[3] = 0LL;
          v41[4] = 0LL;
          v41[5] = 0LL;
          v41[6] = 0LL;
        }
        else
        {
          v41 = 0LL;
        }
        if ( !v41 )
        {
          v72 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(v39, v38, v40);
          v72[3] = 22185LL;
          goto LABEL_69;
        }
        v44 = (unsigned __int64 *)*((_QWORD *)&v97 + 1);
        AllocationOffsetInBytes = (unsigned __int64)(v41 + 1);
        *(_QWORD *)(AllocationOffsetInBytes + 8) = *((_QWORD *)&v97 + 1);
        *(_QWORD *)AllocationOffsetInBytes = &v97;
        if ( (__int128 *)*v44 != &v97 )
          __fastfail(3u);
        *v44 = AllocationOffsetInBytes;
        *((_QWORD *)&v97 + 1) = AllocationOffsetInBytes;
      }
      else
      {
        if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
          goto LABEL_56;
        BaseAddress = v35->Unmap.Protection.Value;
        v34 = BaseAddress + v35->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v34, v30, AllocationOffsetInBytes) )
          goto LABEL_70;
        v46 = v35->Map.BaseAddress;
        v47 = v46 + v35->Map.SizeInBytes;
        if ( v47 <= v46 )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v47, v45);
          v72[3] = v28;
          v72[4] = 22205LL;
          goto LABEL_69;
        }
        if ( (v46 & 0xFFF) != 0 || (v47 & 0xFFF) != 0 )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v47, v45);
          v72[3] = v28;
          v72[4] = 22210LL;
          goto LABEL_69;
        }
        if ( BaseAddress < v47 && v34 > v46 )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v47, v45);
          v72[3] = v28;
          v72[4] = 22216LL;
          goto LABEL_69;
        }
        v48 = v105;
        v119 = 1;
        if ( v105 > v46 )
          v48 = v35->Map.BaseAddress;
        v105 = v48;
        v49 = v106;
        if ( v106 < v47 )
          v49 = v47;
        v106 = v49;
      }
LABEL_55:
      v30 = v103;
      v25 = v101;
      v32 = v100;
LABEL_56:
      if ( v34 <= BaseAddress )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v25, v30);
        v72[3] = v28;
        v72[4] = 22236LL;
        goto LABEL_69;
      }
      if ( ((BaseAddress | v34) & 0xFFF) != 0 )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v25, v30);
        v72[3] = v28;
        v72[4] = 22241LL;
        goto LABEL_69;
      }
      if ( v32 > BaseAddress )
        v32 = BaseAddress;
      v100 = v32;
      if ( v25 < v34 )
        v25 = v34;
      ++v28;
      v101 = v25;
      if ( v28 >= a2->NumOperations )
      {
        v7 = a3;
        v29 = -1073741811;
        v15 = a6;
        v26 = 0LL;
        break;
      }
    }
  }
  if ( (a2->Flags.Value & 1) == 0 )
  {
    *((_BYTE *)v15 + 25) = 0;
    v98 = VidSchWaitForSingleSyncObject(*((_QWORD *)v7 + 1), (__int64)v15, a2->FenceValue, AllocationOffsetInBytes);
    v29 = v98;
    if ( v98 < 0 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v68, v67, v69, v70);
      *(_QWORD *)(v71 + 24) = 22264LL;
      WdLogEvent5_WdAssertion(v71);
      goto LABEL_71;
    }
  }
  v76 = (VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)operator new(0xB8uLL, 0x39346956u, PagedPool);
  v27 = v76;
  if ( v76 )
  {
    memset(v76, 0, 0xB8uLL);
    *((_QWORD *)v27 + 13) = (char *)v27 + 96;
    *((_QWORD *)v27 + 12) = (char *)v27 + 96;
    *((_QWORD *)v27 + 7) = (char *)v27 + 48;
    *((_QWORD *)v27 + 6) = (char *)v27 + 48;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v27 )
  {
    v80 = WdLogNewEntry5_WdWarning(v78, v77, v79);
    WdLogEvent5_WdWarning(v80);
    goto LABEL_71;
  }
  v81 = (struct _EPROCESS ***)v108;
  *((_QWORD *)v27 + 1) = this;
  *((_DWORD *)v27 + 5) = a2->NumOperations;
  *((_QWORD *)v27 + 10) = a2->FenceValue + 1;
  *((_DWORD *)v27 + 4) = v99;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v114,
    (struct DXGPUSHLOCK *const)(v81 + 5));
  v84 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v81, v100, v101);
  if ( !v84
    || v119
    && (v26 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v81, v105, v106)) == 0LL )
  {
    v86 = WdLogNewEntry5_WdWarning(v83, v82, v85);
    WdLogEvent5_WdWarning(v86);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v114);
    v29 = v98;
    goto LABEL_71;
  }
  *((_QWORD *)v27 + 15) = v26;
  *((_QWORD *)v27 + 21) = (char *)v27 + 120;
  v87 = (char *)v84 + 80;
  *((_QWORD *)v27 + 14) = v84;
  *((_QWORD *)v27 + 18) = (char *)v27 + 112;
  v88 = (VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)((char *)v27 + 128);
  v89 = (struct VIDMM_VAD **)*((_QWORD *)v84 + 11);
  *((_QWORD *)v27 + 16) = (char *)v84 + 80;
  *((_QWORD *)v27 + 17) = v89;
  if ( *v89 != (struct VIDMM_VAD *)((char *)v84 + 80) )
    __fastfail(3u);
  *v89 = v88;
  *((_QWORD *)v84 + 11) = v88;
  if ( v26 )
  {
    v90 = (char **)*((_QWORD *)v84 + 11);
    v91 = (char *)v27 + 152;
    *((_QWORD *)v27 + 19) = v87;
    *((_QWORD *)v27 + 20) = v90;
    if ( *v90 != v87 )
      __fastfail(3u);
    *v90 = v91;
    *((_QWORD *)v84 + 11) = v91;
    *((_BYTE *)v27 + 176) = 1;
  }
  for ( i = (__int128 *)v97; i != &v97; i = *(__int128 **)i )
  {
    v93 = *((_QWORD *)i + 9) == 0LL;
    *((_QWORD *)i - 1) = v84;
    if ( v93 )
      *((_QWORD *)i + 9) = *(_QWORD *)(*((_QWORD *)v84 + 12) + 72LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v114);
  *((_QWORD *)v27 + 8) = a5;
  *((_DWORD *)v27 + 8) = a4;
  *((_QWORD *)v27 + 3) = a2->Operations;
  a2->Operations = 0LL;
  *((_QWORD *)v27 + 9) = v15;
  *((_QWORD *)v27 + 11) = v7;
  *(_QWORD *)v27 = *((_QWORD *)v7 + 1);
  if ( (__int128 *)v97 == &v97 )
  {
    *((_QWORD *)v27 + 13) = (char *)v27 + 96;
    *((_QWORD *)v27 + 12) = (char *)v27 + 96;
  }
  else
  {
    *((_OWORD *)v27 + 6) = v97;
    *(_QWORD *)(*((_QWORD *)v27 + 12) + 8LL) = (char *)v27 + 96;
    **((_QWORD **)v27 + 13) = (char *)v27 + 96;
  }
  *((_QWORD *)&v97 + 1) = &v97;
  *(_QWORD *)&v97 = &v97;
  _InterlockedIncrement((volatile signed __int32 *)v15 + 8);
  for ( j = 0; j < *((_DWORD *)v27 + 8); ++j )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v27 + 8) + 8LL * j) + 160LL));
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(this, *v81[9], a2->NumOperations, v15, a2->FenceValue);
  memset(v115, 0, 0x38uLL);
  v95 = *((_QWORD *)v7 + 1);
  v115[4] = v27;
  LODWORD(v115[6]) = 2;
  LODWORD(v115[0]) = 2;
  v96 = *(_QWORD *)(v95 + 104);
  v115[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
  v115[5] = 0LL;
  VidSchSubmitDeviceCommand(v96, (__int64)v115);
  return 0LL;
}
