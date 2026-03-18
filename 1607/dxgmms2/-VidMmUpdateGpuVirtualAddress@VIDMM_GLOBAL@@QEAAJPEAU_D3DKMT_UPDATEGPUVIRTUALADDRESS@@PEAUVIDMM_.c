/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C008CCF4
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C001D6F0 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00013B0 (VidSchSubmitDeviceCommand.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0006320 (VidSchWaitForSingleSyncObject.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x1C001D768 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C001D828 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C008979C (-IsRangeValid@@YAE_K00@Z.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C00925FC (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C009477C (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C0094A1C (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
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
  struct _VIDSCH_SYNC_OBJECT *v7; // r13
  struct VIDMM_COMPANION_CONTEXT *v8; // r12
  UINT64 FenceValue; // rbx
  UINT64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // ebx
  struct VIDMM_VAD *v21; // rsi
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA *v22; // rdi
  UINT v23; // r14d
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 BaseAddress; // r12
  unsigned __int64 v28; // r13
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v29; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  void *v33; // r10
  __int64 v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r8
  struct _VIDMM_MULTI_ALLOC *v41; // rbx
  D3DGPU_SIZE_T AllocationSizeInBytes; // rcx
  unsigned __int64 AllocationOffsetInBytes; // r10
  D3DGPU_SIZE_T SizeInBytes; // r8
  D3DGPU_SIZE_T v45; // r9
  unsigned __int64 v46; // rcx
  bool v47; // zf
  __int64 v48; // rax
  __int64 Value; // rbx
  void *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  VIDMM_MAPPED_VA_RANGE *v62; // rcx
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _KTHREAD **v66; // r14
  __int64 v67; // rcx
  struct VIDMM_VAD *v68; // r14
  __int64 v69; // rax
  char *v70; // rax
  struct VIDMM_VAD *v71; // rcx
  struct VIDMM_VAD **v72; // rdx
  char **v73; // rdx
  char *v74; // rcx
  __int128 *i; // rbx
  _QWORD *v76; // rsi
  unsigned int j; // r8d
  __int64 v78; // rcx
  __int64 v79; // rcx
  char v80; // [rsp+78h] [rbp-90h]
  __int128 v81; // [rsp+80h] [rbp-88h] BYREF
  int v82; // [rsp+90h] [rbp-78h]
  unsigned __int64 v83; // [rsp+98h] [rbp-70h]
  unsigned __int64 v84; // [rsp+A0h] [rbp-68h]
  int v85; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v86; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v87; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v88; // [rsp+C0h] [rbp-48h]
  CVirtualAddressAllocator *v89; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v90; // [rsp+D0h] [rbp-38h]
  UINT64 DriverProtection; // [rsp+D8h] [rbp-30h]
  D3DGPU_SIZE_T v92; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v93; // [rsp+E8h] [rbp-20h]
  __int64 v94; // [rsp+F0h] [rbp-18h]
  D3DGPU_SIZE_T v95; // [rsp+F8h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+100h] [rbp-8h] BYREF
  __int64 v97; // [rsp+108h] [rbp+0h]
  struct _VIDMM_MULTI_ALLOC *v98; // [rsp+110h] [rbp+8h]
  PRKSEMAPHORE Semaphore; // [rsp+120h] [rbp+18h]
  _BYTE v100[32]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v101[24]; // [rsp+148h] [rbp+40h] BYREF
  bool v103; // [rsp+220h] [rbp+118h]

  v7 = a6;
  v8 = a3;
  FenceValue = a2->FenceValue;
  v11 = *((_QWORD *)a3 + 7);
  if ( *((_BYTE *)a6 + 29) )
  {
    if ( FenceValue < v11 )
    {
      v12 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v12 + 24) = FenceValue;
      *(_QWORD *)(v12 + 32) = v11;
LABEL_8:
      WdLogEvent5_WdWarning(v12);
      v15 = WdLogNewEntry5_WdWarning(v14);
      *(_QWORD *)(v15 + 24) = a2->FenceValue;
      WdLogEvent5_WdWarning(v15);
      return 3221225485LL;
    }
    if ( FenceValue == v11 )
    {
      v13 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v13 + 24) = FenceValue;
LABEL_11:
      WdLogEvent5_WdWarning(v13);
    }
  }
  else
  {
    if ( (int)v11 - (int)FenceValue > 0 )
    {
      v12 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v12 + 24) = (unsigned int)FenceValue;
      *(_QWORD *)(v12 + 32) = (unsigned int)v11;
      goto LABEL_8;
    }
    if ( (_DWORD)v11 == (_DWORD)FenceValue )
    {
      v13 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v13 + 24) = (unsigned int)FenceValue;
      goto LABEL_11;
    }
  }
  Semaphore = (PRKSEMAPHORE)((char *)v8 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)v8 + 24);
  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject((char *)v8 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    v18 = WdLogNewEntry5_WdWarning(v17);
    WdLogEvent5_WdWarning(v18);
    return 3223191810LL;
  }
  *((_QWORD *)v8 + 7) = a2->FenceValue;
  v19 = 0LL;
  v20 = -1073741811;
  v89 = *(CVirtualAddressAllocator **)v8;
  v21 = 0LL;
  v22 = 0LL;
  v83 = 0LL;
  v87 = 0LL;
  v23 = 0;
  v24 = *(_QWORD *)v89;
  v25 = *((_QWORD *)v8 + 1);
  v86 = *(_QWORD *)v89;
  v80 = 0;
  v26 = -1LL;
  v82 = *(unsigned __int16 *)(*(_QWORD *)(v25 + 96) + 6LL);
  *((_QWORD *)&v81 + 1) = &v81;
  *(_QWORD *)&v81 = &v81;
  v84 = -1LL;
  v88 = -1LL;
  if ( a2->NumOperations )
  {
    BaseAddress = (unsigned __int64)a3;
    v28 = (unsigned __int64)a3;
    while ( 1 )
    {
      v29 = &a2->Operations[(unsigned __int64)v23];
      OperationType = v29->OperationType;
      if ( v29->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        BaseAddress = v29->Map.BaseAddress;
        v28 = BaseAddress + v29->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v28, v24) )
          goto LABEL_79;
        v41 = a5[v29->Map.hAllocation];
        AllocationSizeInBytes = v29->Map.AllocationSizeInBytes;
        v98 = v41;
        if ( (AllocationSizeInBytes & 0xFFF) != 0
          || (AllocationOffsetInBytes = v29->Map.AllocationOffsetInBytes,
              v90 = AllocationOffsetInBytes,
              (AllocationOffsetInBytes & 0xFFF) != 0) )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
          v59[3] = v23;
          v59[4] = 23746LL;
          goto LABEL_78;
        }
        SizeInBytes = v29->Map.SizeInBytes;
        if ( AllocationSizeInBytes )
        {
          if ( AllocationSizeInBytes > SizeInBytes )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
            v59[3] = v23;
            goto LABEL_78;
          }
          if ( SizeInBytes % AllocationSizeInBytes )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
            v59[3] = v23;
            v59[4] = 23769LL;
            goto LABEL_78;
          }
        }
        else
        {
          v29->Map.AllocationSizeInBytes = SizeInBytes;
        }
        v45 = v29->Map.AllocationSizeInBytes;
        v95 = v45;
        if ( AllocationOffsetInBytes + v45 < AllocationOffsetInBytes
          || (AllocationSizeInBytes = *(_QWORD *)v41,
              AllocationOffsetInBytes + v45 > *(_QWORD *)(**(_QWORD **)v41 + 16LL)) )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
          v59[3] = *(_QWORD *)(**(_QWORD **)v41 + 16LL);
          v59[4] = v23;
          v59[5] = 23780LL;
          goto LABEL_78;
        }
        if ( (*((_BYTE *)this + 40873) & 2) != 0 )
        {
          v47 = SizeInBytes == v45;
          v95 = SizeInBytes;
          v46 = 1LL;
          v45 = SizeInBytes;
          v103 = !v47;
          v94 = 1LL;
        }
        else
        {
          v103 = 0;
          v90 = 0LL;
          v46 = SizeInBytes / v45;
          v94 = SizeInBytes / v45;
        }
        if ( v46 >= 0xFFFFFFFF )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v46);
          v59[3] = v23;
          v59[4] = 23803LL;
          goto LABEL_78;
        }
        DriverProtection = 0LL;
        v48 = BaseAddress;
        v93 = BaseAddress;
        if ( v29->OperationType )
        {
          Value = v29->MapProtect.Protection.Value;
          DriverProtection = v29->MapProtect.DriverProtection;
        }
        else
        {
          Value = 1LL;
        }
        v97 = Value;
        v85 = 0;
        if ( (_DWORD)v46 )
        {
          while ( 1 )
          {
            v92 = v45 + v48;
            v50 = VIDMM_MAPPED_VA_RANGE::operator new(v46);
            if ( v50 )
            {
              v52 = v103 ? v29->Map.AllocationSizeInBytes >> 12 : 0LL;
              v53 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                      (__int64)v50,
                      0LL,
                      v93,
                      v92,
                      v82,
                      (__int64)v98,
                      v29->Map.AllocationOffsetInBytes,
                      1,
                      Value,
                      DriverProtection,
                      v52,
                      v90,
                      0);
            }
            else
            {
              v53 = 0LL;
            }
            if ( !v53 )
              break;
            v54 = (_QWORD *)*((_QWORD *)&v81 + 1);
            v55 = (_QWORD *)(v53 + 8);
            if ( **((__int128 ***)&v81 + 1) != &v81 )
              __fastfail(3u);
            v45 = v95;
            v55[1] = *((_QWORD *)&v81 + 1);
            *v55 = &v81;
            *v54 = v55;
            v46 = (unsigned int)(v85 + 1);
            *((_QWORD *)&v81 + 1) = v55;
            v48 = v92;
            v93 = v92;
            v85 = v46;
            if ( (unsigned int)v46 >= (unsigned int)v94 )
              goto LABEL_64;
          }
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v51);
          v59[3] = 23835LL;
LABEL_78:
          WdLogEvent5_WdWarning(v59);
LABEL_79:
          v20 = -1073741811;
LABEL_80:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( v22 )
            VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(v22);
          while ( 1 )
          {
            v60 = v81;
            if ( (__int128 *)v81 == &v81 )
              break;
            v61 = *(_QWORD *)v81;
            if ( *(__int128 **)(v81 + 8) != &v81 || *(_QWORD *)(v61 + 8) != (_QWORD)v81 )
              __fastfail(3u);
            *(_QWORD *)&v81 = *(_QWORD *)v81;
            v62 = (VIDMM_MAPPED_VA_RANGE *)(v60 - 8);
            *(_QWORD *)(v61 + 8) = &v81;
            *((_QWORD *)v62 + 1) = 0LL;
            *((_QWORD *)v62 + 2) = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v62);
          }
          return (unsigned int)v20;
        }
      }
      else if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        BaseAddress = v29->Map.BaseAddress;
        v28 = BaseAddress + v29->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v28, v24) )
          goto LABEL_79;
        v33 = VIDMM_MAPPED_VA_RANGE::operator new(v31);
        if ( v33 )
          v34 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                  (__int64)v33,
                  0LL,
                  BaseAddress,
                  v28,
                  v82,
                  0LL,
                  0LL,
                  (v29->Copy.DestAddress & 8) == 0 ? 6 : 0,
                  v29->Unmap.Protection.Value,
                  0LL,
                  0LL,
                  0LL,
                  0);
        else
          v34 = 0LL;
        if ( !v34 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v32);
          v59[3] = 23866LL;
          goto LABEL_78;
        }
        v35 = (_QWORD *)*((_QWORD *)&v81 + 1);
        v36 = (_QWORD *)(v34 + 8);
        if ( **((__int128 ***)&v81 + 1) != &v81 )
          __fastfail(3u);
        v36[1] = *((_QWORD *)&v81 + 1);
        *v36 = &v81;
        *v35 = v36;
        *((_QWORD *)&v81 + 1) = v36;
      }
      else
      {
        if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
          goto LABEL_65;
        BaseAddress = v29->Unmap.Protection.Value;
        v28 = BaseAddress + v29->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v28, v24) )
          goto LABEL_79;
        v37 = v29->Map.BaseAddress;
        v38 = v37 + v29->Map.SizeInBytes;
        if ( v38 <= v37 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v37);
          v59[3] = v23;
          v59[4] = 23886LL;
          goto LABEL_78;
        }
        if ( (v37 & 0xFFF) != 0 || (v38 & 0xFFF) != 0 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v37);
          v59[3] = v23;
          v59[4] = 23891LL;
          goto LABEL_78;
        }
        if ( BaseAddress < v38 && v28 > v37 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v37);
          v59[3] = v23;
          v59[4] = 23897LL;
          goto LABEL_78;
        }
        v39 = v88;
        v80 = 1;
        if ( v88 > v37 )
          v39 = v37;
        v88 = v39;
        v40 = v87;
        if ( v87 < v38 )
          v40 = v38;
        v87 = v40;
      }
LABEL_64:
      v24 = v86;
      v19 = v83;
      v26 = v84;
LABEL_65:
      if ( v28 <= BaseAddress )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v26);
        v59[3] = v23;
        v59[4] = 23917LL;
        goto LABEL_78;
      }
      if ( ((BaseAddress | v28) & 0xFFF) != 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v26);
        v59[3] = v23;
        v59[4] = 23922LL;
        goto LABEL_78;
      }
      if ( v26 > BaseAddress )
        v26 = BaseAddress;
      v84 = v26;
      if ( v19 < v28 )
        v19 = v28;
      ++v23;
      v83 = v19;
      if ( v23 >= a2->NumOperations )
      {
        v8 = a3;
        v20 = -1073741811;
        v7 = a6;
        v21 = 0LL;
        break;
      }
    }
  }
  if ( (a2->Flags.Value & 1) == 0 )
  {
    *((_BYTE *)v7 + 25) = 0;
    v20 = VidSchWaitForSingleSyncObject(*((_QWORD *)v8 + 1), (__int64)v7, a2->FenceValue);
    if ( v20 < 0 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v57, v56);
      *(_QWORD *)(v58 + 24) = 23945LL;
      WdLogEvent5_WdAssertion(v58);
      goto LABEL_80;
    }
  }
  v63 = (VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)operator new(0xB8uLL, 0x39346956u, PagedPool);
  v22 = v63;
  if ( v63 )
  {
    memset(v63, 0, 0xB8uLL);
    *((_QWORD *)v22 + 13) = (char *)v22 + 96;
    *((_QWORD *)v22 + 12) = (char *)v22 + 96;
    *((_QWORD *)v22 + 7) = (char *)v22 + 48;
    *((_QWORD *)v22 + 6) = (char *)v22 + 48;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v65 = WdLogNewEntry5_WdWarning(v64);
    WdLogEvent5_WdWarning(v65);
    goto LABEL_80;
  }
  v66 = (struct _KTHREAD **)v89;
  *((_QWORD *)v22 + 1) = this;
  *((_DWORD *)v22 + 5) = a2->NumOperations;
  *((_QWORD *)v22 + 10) = a2->FenceValue + 1;
  *((_DWORD *)v22 + 4) = v82;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v100, v66 + 5);
  v68 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v66, v84, v83);
  if ( !v68 || v80 && (v21 = CVirtualAddressAllocator::ReferenceReservedZeroVad(v89, v88, v87)) == 0LL )
  {
    v69 = WdLogNewEntry5_WdWarning(v67);
    WdLogEvent5_WdWarning(v69);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
    goto LABEL_80;
  }
  *((_QWORD *)v22 + 15) = v21;
  *((_QWORD *)v22 + 21) = (char *)v22 + 120;
  v70 = (char *)v68 + 80;
  *((_QWORD *)v22 + 14) = v68;
  *((_QWORD *)v22 + 18) = (char *)v22 + 112;
  v71 = (VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)((char *)v22 + 128);
  v72 = (struct VIDMM_VAD **)*((_QWORD *)v68 + 11);
  if ( *v72 != (struct VIDMM_VAD *)((char *)v68 + 80) )
    __fastfail(3u);
  *(_QWORD *)v71 = v70;
  *((_QWORD *)v22 + 17) = v72;
  *v72 = v71;
  *((_QWORD *)v68 + 11) = v71;
  if ( v21 )
  {
    v73 = (char **)*((_QWORD *)v68 + 11);
    v74 = (char *)v22 + 152;
    if ( *v73 != v70 )
      __fastfail(3u);
    *(_QWORD *)v74 = v70;
    *((_QWORD *)v22 + 20) = v73;
    *v73 = v74;
    *((_QWORD *)v68 + 11) = v74;
    *((_BYTE *)v22 + 176) = 1;
  }
  for ( i = (__int128 *)v81; i != &v81; i = *(__int128 **)i )
  {
    v47 = *((_QWORD *)i + 9) == 0LL;
    *((_QWORD *)i - 1) = v68;
    if ( v47 )
    {
      v76 = (_QWORD *)((char *)v68 + 96);
      if ( (_QWORD *)*v76 != v76 )
      {
        EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a);
        *((_QWORD *)i + 9) = *(_QWORD *)(*v76 - 8LL + 80);
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
  *((_QWORD *)v22 + 8) = a5;
  *((_DWORD *)v22 + 8) = a4;
  *((_QWORD *)v22 + 3) = a2->Operations;
  a2->Operations = 0LL;
  *((_QWORD *)v22 + 9) = v7;
  *((_QWORD *)v22 + 11) = v8;
  *(_QWORD *)v22 = *((_QWORD *)v8 + 1);
  if ( (__int128 *)v81 == &v81 )
  {
    *((_QWORD *)v22 + 13) = (char *)v22 + 96;
    *((_QWORD *)v22 + 12) = (char *)v22 + 96;
  }
  else
  {
    *((_OWORD *)v22 + 6) = v81;
    *(_QWORD *)(*((_QWORD *)v22 + 12) + 8LL) = (char *)v22 + 96;
    **((_QWORD **)v22 + 13) = (char *)v22 + 96;
  }
  *((_QWORD *)&v81 + 1) = &v81;
  *(_QWORD *)&v81 = &v81;
  _InterlockedIncrement((volatile signed __int32 *)v7 + 8);
  for ( j = 0; j < *((_DWORD *)v22 + 8); ++j )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v22 + 8) + 8LL * j) + 176LL));
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
    this,
    **((struct _EPROCESS ***)v89 + 9),
    a2->NumOperations,
    v7,
    a2->FenceValue);
  memset(v101, 0, 0x80uLL);
  v78 = *((_QWORD *)v8 + 1);
  LODWORD(v101[5]) = 2;
  LODWORD(v101[0]) = 2;
  v101[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
  v79 = *(_QWORD *)(v78 + 104);
  v101[6] = v22;
  v101[4] = 0LL;
  VidSchSubmitDeviceCommand(v79, (__int64)v101);
  return 0LL;
}
