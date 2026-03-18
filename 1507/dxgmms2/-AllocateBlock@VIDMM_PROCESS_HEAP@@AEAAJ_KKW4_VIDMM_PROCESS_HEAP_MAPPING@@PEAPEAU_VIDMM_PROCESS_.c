/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C0074060
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C0074548 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_pxqqt @ 0x1C0010B08 (Template_pxqqt.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0010FE0 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C003E930 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C003E9C0 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C0074F10 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
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
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // r14
  __int64 v41; // rax
  int v42; // eax
  int v43; // esi
  _QWORD *v44; // rcx
  __int64 v45; // rax
  PVOID v46; // r9
  __int64 *BlockListHead; // rax
  __int64 *v48; // r8
  __int64 v49; // rdx
  PHANDLE Handle; // [rsp+28h] [rbp-48h]
  __int64 v52; // [rsp+30h] [rbp-40h]
  __int64 v53; // [rsp+38h] [rbp-38h]
  HANDLE SecureHandle; // [rsp+40h] [rbp-30h]
  PVOID Object; // [rsp+48h] [rbp-28h] BYREF
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v57; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v58; // [rsp+60h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A8h] [rbp+38h] BYREF

  MappedBase = 0LL;
  v8 = a2 + a3;
  Object = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = (unsigned int)dword_1C0027274;
  SecureHandle = 0LL;
  v12 = 0;
  v57 = 0LL;
  if ( v8 > (unsigned int)dword_1C0027274 )
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
    if ( dword_1C00270EC )
      v13 &= ~0x1000u;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &MappedBase, 0LL, &ViewSize, v13, v12) < 0 )
    {
      v13 &= ~0x800000u;
      v28 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &MappedBase, 0LL, &ViewSize, v13, v12);
      v17 = v28;
      if ( v28 < 0 )
      {
        MappedBase = 0LL;
        _InterlockedIncrement(&dword_1C0027524);
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
        v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
        WdLogEvent5_WdWarning(v34);
        goto LABEL_35;
      }
    }
  }
  else
  {
    v58 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v15 = 0x8000000;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
      v15 = 1207959552;
    LODWORD(v17) = MmCreateSection(&Object, 0LL, 0LL, &v58, 4, v15, 0LL, 0LL);
    if ( (int)v17 < 0 )
    {
      Object = 0LL;
      _InterlockedIncrement(&dword_1C00275D4);
      v18 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v18 + 24) = 1955LL;
      WdLogEvent5_WdLowResource(v18);
LABEL_11:
      v9 = 0LL;
      goto LABEL_37;
    }
    ObfReferenceObject(Object);
    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v57);
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
    _InterlockedIncrement(&dword_1C0027528);
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
        if ( v57 )
          ObCloseHandle(v57, ((unsigned __int64)v57 & 0xFFFFFFFF80000000uLL) == 0);
        ObfDereferenceObject(Object);
      }
      goto LABEL_51;
    }
LABEL_45:
    if ( MappedBase )
      MmUnmapViewInSystemSpace(MappedBase);
    goto LABEL_47;
  }
  v35 = VIDMM_LINEAR_POOL::Init(v14, ViewSize, 0, 0LL, 0LL);
  v17 = v35;
  if ( v35 < 0 )
  {
    _InterlockedIncrement(&dword_1C002752C);
    v37 = WdLogNewEntry5_WdLowResource(v36);
    *(_QWORD *)(v37 + 24) = v17;
    WdLogEvent5_WdLowResource(v37);
    v9 = SecureHandle;
    goto LABEL_37;
  }
  v38 = operator new(0x68uLL, 0x31316956u, PagedPool);
  v40 = v38;
  if ( !v38 )
  {
    _InterlockedIncrement(&dword_1C0027530);
    v41 = WdLogNewEntry5_WdLowResource(v39);
    *(_QWORD *)(v41 + 24) = 2093LL;
    WdLogEvent5_WdLowResource(v41);
    goto LABEL_35;
  }
  v38[6] = 0;
  *(_QWORD *)v38 = a1;
  *((_QWORD *)v38 + 4) = MappedBase;
  *((_QWORD *)v38 + 5) = ViewSize;
  v42 = 0;
  v40[12] = v12;
  *((_QWORD *)v40 + 9) = v14;
  v40[20] = a4;
  v43 = (v13 >> 23) & 1;
  if ( a4 == 2 )
    v42 = 2;
  v40[16] = v43 | v42;
  *((_QWORD *)v40 + 7) = SecureHandle;
  *((_QWORD *)v40 + 11) = Object;
  *((_QWORD *)v40 + 12) = v57;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) += *((_QWORD *)v40 + 5);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  v44 = *(_QWORD **)(a1 + 8);
  v45 = *((_QWORD *)v40 + 5);
  if ( a4 == 1 )
  {
    v44[12] += v45;
  }
  else if ( a4 == 2 )
  {
    v44[14] += v45;
  }
  else
  {
    v44[16] += v45;
  }
  if ( bTracingEnabled )
  {
    v46 = MappedBase;
    if ( a4 - 3 <= 3 )
      v46 = Object;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      LODWORD(v53) = 1;
      LODWORD(v52) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      LODWORD(Handle) = a4;
      Template_pxqqt((__int64)v44, &EventCreateProcessAllocation, 2LL, v46, ViewSize, Handle, v52, v53);
    }
  }
  BlockListHead = (__int64 *)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v40 + 2);
  v49 = *BlockListHead;
  *v48 = *BlockListHead;
  v48[1] = (__int64)BlockListHead;
  if ( *(__int64 **)(v49 + 8) != BlockListHead )
    __fastfail(3u);
  *(_QWORD *)(v49 + 8) = v48;
  *BlockListHead = (__int64)v48;
  *a5 = v40;
  return (unsigned int)v17;
}
