/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00881D0
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00886B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_pxqqt @ 0x1C001E214 (Template_pxqqt.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C001E6F0 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C0069CD0 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C0069D9C (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C0089080 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateBlock(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        char a6)
{
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  unsigned __int64 v10; // rax
  ULONG v12; // r12d
  ULONG v13; // esi
  VIDMM_LINEAR_POOL *v14; // r15
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  NTSTATUS inserted; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  VIDMM_LINEAR_POOL *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // r14
  __int64 v39; // rax
  int v40; // eax
  int v41; // esi
  _QWORD *v42; // rcx
  __int64 v43; // rax
  PVOID v44; // r9
  __int64 *BlockListHead; // rax
  __int64 *v46; // r8
  __int64 v47; // rdx
  PHANDLE Handle; // [rsp+28h] [rbp-48h]
  __int64 v50; // [rsp+30h] [rbp-40h]
  __int64 v51; // [rsp+38h] [rbp-38h]
  HANDLE SecureHandle; // [rsp+40h] [rbp-30h]
  PVOID Object; // [rsp+48h] [rbp-28h] BYREF
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v55; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v56; // [rsp+60h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A8h] [rbp+38h] BYREF

  MappedBase = 0LL;
  v8 = a2 + a3;
  Object = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = (unsigned int)dword_1C002F294;
  SecureHandle = 0LL;
  v12 = 0;
  v55 = 0LL;
  if ( v8 > (unsigned int)dword_1C002F294 )
    v10 = v8;
  v13 = 0;
  v14 = 0LL;
  ViewSize = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( ViewSize < a2 )
    goto LABEL_36;
  if ( a4 - 3 > 3 )
  {
    if ( a4 == 2 )
    {
      v13 = 12288;
      v12 = 4;
    }
    else
    {
      v13 = 8400896;
      v12 = 1028;
    }
    if ( a6 )
      v13 |= 0x800000u;
    if ( dword_1C002F10C )
      v13 &= ~0x1000u;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &MappedBase, 0LL, &ViewSize, v13, v12) < 0 )
    {
      v13 &= ~0x800000u;
      v28 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &MappedBase, 0LL, &ViewSize, v13, v12);
      v17 = v28;
      if ( v28 < 0 )
      {
        MappedBase = 0LL;
        _InterlockedIncrement(&dword_1C002F534);
        v30 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v30 + 24) = v17;
        WdLogEvent5_WdLowResource(v30);
        v9 = 0LL;
        goto LABEL_37;
      }
    }
    if ( (v13 & 0x1000) != 0 )
    {
      SecureHandle = MmSecureVirtualMemory(MappedBase, ViewSize, 4u);
      if ( !SecureHandle )
      {
        v32 = WdLogNewEntry5_WdWarning(v31);
        WdLogEvent5_WdWarning(v32);
        goto LABEL_35;
      }
    }
  }
  else
  {
    v56 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v15 = 0x8000000;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
      v15 = 1207959552;
    LODWORD(v17) = MmCreateSection(&Object, 0LL, 0LL, &v56, 4, v15, 0LL, 0LL);
    if ( (int)v17 < 0 )
    {
      Object = 0LL;
      _InterlockedIncrement(&dword_1C002F5E4);
      v18 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v18 + 24) = 1955LL;
      WdLogEvent5_WdLowResource(v18);
LABEL_11:
      v9 = 0LL;
      goto LABEL_37;
    }
    ObfReferenceObject(Object);
    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v55);
    v17 = inserted;
    if ( inserted < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      *(_QWORD *)(v24 + 24) = Object;
      *(_QWORD *)(v24 + 32) = v17;
      WdLogEvent5_WdAssertion(v24);
      goto LABEL_11;
    }
    if ( a4 - 5 <= 1 )
    {
      LODWORD(v17) = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
      if ( (int)v17 < 0 )
        goto LABEL_11;
    }
  }
  v25 = (VIDMM_LINEAR_POOL *)operator new(0x140uLL, 0x37316956u, (POOL_TYPE)512);
  if ( v25 )
    v14 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v25);
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C002F538);
    v27 = WdLogNewEntry5_WdLowResource(v26);
    *(_QWORD *)(v27 + 24) = 2071LL;
    WdLogEvent5_WdLowResource(v27);
LABEL_35:
    v9 = SecureHandle;
LABEL_36:
    LODWORD(v17) = -1073741801;
LABEL_37:
    if ( a4 - 3 > 1 )
    {
      if ( a4 == 5 )
        goto LABEL_45;
      if ( a4 != 6 )
      {
        if ( v9 )
          MmUnsecureVirtualMemory(v9);
        if ( MappedBase )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &MappedBase, &ViewSize, 0x8000u);
          MappedBase = 0LL;
        }
LABEL_51:
        if ( v14 )
          VIDMM_LINEAR_POOL::`scalar deleting destructor'(v14);
        return (unsigned int)v17;
      }
    }
    if ( a4 - 5 > 1 )
    {
LABEL_47:
      if ( Object )
      {
        if ( v55 )
          ObCloseHandle(v55, ((unsigned __int64)v55 & 0xFFFFFFFF80000000uLL) == 0);
        ObfDereferenceObject(Object);
      }
      goto LABEL_51;
    }
LABEL_45:
    if ( MappedBase )
      MmUnmapViewInSystemSpace(MappedBase);
    goto LABEL_47;
  }
  v33 = VIDMM_LINEAR_POOL::Init(v14, ViewSize, 0, 0LL, 0LL);
  v17 = v33;
  if ( v33 < 0 )
  {
    _InterlockedIncrement(&dword_1C002F53C);
    v35 = WdLogNewEntry5_WdLowResource(v34);
    *(_QWORD *)(v35 + 24) = v17;
    WdLogEvent5_WdLowResource(v35);
    v9 = SecureHandle;
    goto LABEL_37;
  }
  v36 = operator new(0x68uLL, 0x31316956u, PagedPool);
  v38 = v36;
  if ( !v36 )
  {
    _InterlockedIncrement(&dword_1C002F540);
    v39 = WdLogNewEntry5_WdLowResource(v37);
    *(_QWORD *)(v39 + 24) = 2093LL;
    WdLogEvent5_WdLowResource(v39);
    goto LABEL_35;
  }
  v36[6] = 0;
  *(_QWORD *)v36 = a1;
  *((_QWORD *)v36 + 4) = MappedBase;
  *((_QWORD *)v36 + 5) = ViewSize;
  v40 = 0;
  v38[12] = v12;
  *((_QWORD *)v38 + 9) = v14;
  v38[20] = a4;
  v41 = (v13 >> 23) & 1;
  if ( a4 == 2 )
    v40 = 2;
  v38[16] = v41 | v40;
  *((_QWORD *)v38 + 7) = SecureHandle;
  *((_QWORD *)v38 + 11) = Object;
  *((_QWORD *)v38 + 12) = v55;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) += *((_QWORD *)v38 + 5);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  v42 = *(_QWORD **)(a1 + 8);
  v43 = *((_QWORD *)v38 + 5);
  if ( a4 == 1 )
  {
    v42[12] += v43;
  }
  else if ( a4 == 2 )
  {
    v42[14] += v43;
  }
  else
  {
    v42[16] += v43;
  }
  if ( bTracingEnabled )
  {
    v44 = MappedBase;
    if ( a4 - 3 <= 3 )
      v44 = Object;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      LODWORD(v51) = 1;
      LODWORD(v50) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      LODWORD(Handle) = a4;
      Template_pxqqt((__int64)v42, &EventCreateProcessAllocation, 2LL, v44, ViewSize, Handle, v50, v51);
    }
  }
  BlockListHead = (__int64 *)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v38 + 2);
  v47 = *BlockListHead;
  *v46 = *BlockListHead;
  v46[1] = (__int64)BlockListHead;
  if ( *(__int64 **)(v47 + 8) != BlockListHead )
    __fastfail(3u);
  *(_QWORD *)(v47 + 8) = v46;
  *BlockListHead = (__int64)v46;
  *a5 = v38;
  return (unsigned int)v17;
}
