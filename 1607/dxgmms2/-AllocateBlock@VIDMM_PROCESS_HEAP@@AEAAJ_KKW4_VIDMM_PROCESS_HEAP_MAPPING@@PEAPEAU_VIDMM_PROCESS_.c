/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C009CF44
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C009D444 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_pxqqt @ 0x1C001FD64 (Template_pxqqt.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0020240 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C006FB3C (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C006FC04 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C009DF18 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
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
  ULONG v12; // r13d
  ULONG v13; // r14d
  VIDMM_LINEAR_POOL *v14; // r12
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  NTSTATUS inserted; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  VIDMM_LINEAR_POOL *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rsi
  __int64 v38; // rax
  int v39; // eax
  int v40; // r14d
  _QWORD *v41; // rcx
  __int64 v42; // rax
  PVOID v43; // r9
  __int64 BlockListHead; // rax
  _QWORD *v45; // r8
  __int64 v46; // rdx
  PHANDLE Handle; // [rsp+28h] [rbp-48h]
  __int64 v49; // [rsp+30h] [rbp-40h]
  __int64 v50; // [rsp+38h] [rbp-38h]
  HANDLE SecureHandle; // [rsp+40h] [rbp-30h]
  PVOID Object; // [rsp+48h] [rbp-28h] BYREF
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v54; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v55; // [rsp+60h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A8h] [rbp+38h] BYREF

  MappedBase = 0LL;
  v8 = a2 + a3;
  Object = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = (unsigned int)dword_1C00352A4;
  SecureHandle = 0LL;
  v12 = 0;
  v54 = 0LL;
  if ( v8 > (unsigned int)dword_1C00352A4 )
    v10 = v8;
  v13 = 0;
  v14 = 0LL;
  ViewSize = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( ViewSize < a2 )
    goto LABEL_37;
  if ( a4 - 3 > 3 )
  {
    if ( a4 == 2 )
    {
      v12 = 4;
      v13 = 12288;
    }
    else
    {
      v12 = 1028;
      v13 = 8400896;
    }
    if ( a6 )
      v13 |= 0x800000u;
    if ( dword_1C0035138 )
      v13 &= ~0x1000u;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &MappedBase, 0LL, &ViewSize, v13, v12) < 0 )
    {
      v13 &= ~0x800000u;
      v26 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &MappedBase, 0LL, &ViewSize, v13, v12);
      v17 = v26;
      if ( v26 < 0 )
      {
        MappedBase = 0LL;
        _InterlockedIncrement(&dword_1C00355B4);
        v18 = WdLogNewEntry5_WdLowResource(v27);
        *(_QWORD *)(v18 + 24) = v17;
        goto LABEL_9;
      }
    }
    if ( (v13 & 0x1000) != 0 )
    {
      SecureHandle = MmSecureVirtualMemory(MappedBase, ViewSize, 4u);
      if ( !SecureHandle )
      {
        v29 = WdLogNewEntry5_WdWarning(v28);
        WdLogEvent5_WdWarning(v29);
        goto LABEL_36;
      }
    }
  }
  else
  {
    v55 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v15 = 0x8000000;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
      v15 = 1207959552;
    LODWORD(v17) = MmCreateSection(&Object, 0LL, 0LL, &v55, 4, v15, 0LL, 0LL);
    if ( (int)v17 < 0 )
    {
      Object = 0LL;
      _InterlockedIncrement(&dword_1C0035664);
      v18 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v18 + 24) = 1958LL;
LABEL_9:
      WdLogEvent5_WdLowResource(v18);
LABEL_10:
      v9 = 0LL;
      goto LABEL_38;
    }
    ObfReferenceObject(Object);
    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &v54);
    v17 = inserted;
    if ( inserted < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v22 + 24) = Object;
      *(_QWORD *)(v22 + 32) = v17;
      WdLogEvent5_WdAssertion(v22);
      goto LABEL_10;
    }
    if ( a4 - 5 <= 1 )
    {
      LODWORD(v17) = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
      if ( (int)v17 < 0 )
        goto LABEL_10;
    }
  }
  v23 = (VIDMM_LINEAR_POOL *)operator new(0x140uLL, 0x37316956u, (POOL_TYPE)512);
  if ( v23 )
    v14 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v23);
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C00355B8);
    v25 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v25 + 24) = 2074LL;
    WdLogEvent5_WdLowResource(v25);
LABEL_36:
    v9 = SecureHandle;
LABEL_37:
    LODWORD(v17) = -1073741801;
LABEL_38:
    if ( a4 - 3 > 1 )
    {
      if ( a4 == 5 )
        goto LABEL_46;
      if ( a4 != 6 )
      {
        if ( v9 )
          MmUnsecureVirtualMemory(v9);
        if ( MappedBase )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &MappedBase, &ViewSize, 0x8000u);
          MappedBase = 0LL;
        }
LABEL_52:
        if ( v14 )
          VIDMM_LINEAR_POOL::`scalar deleting destructor'(v14);
        return (unsigned int)v17;
      }
    }
    if ( a4 - 5 > 1 )
    {
LABEL_48:
      if ( Object )
      {
        if ( v54 )
          ObCloseHandle(v54, ((unsigned __int64)v54 & 0xFFFFFFFF80000000uLL) == 0);
        ObfDereferenceObject(Object);
      }
      goto LABEL_52;
    }
LABEL_46:
    if ( MappedBase )
      MmUnmapViewInSystemSpace(MappedBase);
    goto LABEL_48;
  }
  v30 = VIDMM_LINEAR_POOL::Init(v14, ViewSize, 0, 0LL, 0LL);
  v17 = v30;
  if ( v30 < 0 )
  {
    _InterlockedIncrement(&dword_1C00355BC);
    v32 = WdLogNewEntry5_WdLowResource(v31);
    *(_QWORD *)(v32 + 24) = v17;
    WdLogEvent5_WdLowResource(v32);
    v9 = SecureHandle;
    goto LABEL_38;
  }
  v33 = operator new(0x68uLL, 0x31316956u, PagedPool);
  v37 = v33;
  if ( !v33 )
  {
    _InterlockedIncrement(&dword_1C00355C0);
    v38 = WdLogNewEntry5_WdLowResource(v34);
    *(_QWORD *)(v38 + 24) = 2096LL;
    WdLogEvent5_WdLowResource(v38);
    goto LABEL_36;
  }
  v33[6] = 0;
  *(_QWORD *)v33 = a1;
  *((_QWORD *)v33 + 4) = MappedBase;
  *((_QWORD *)v33 + 5) = ViewSize;
  v39 = 0;
  v40 = (v13 >> 23) & 1;
  v37[12] = v12;
  *((_QWORD *)v37 + 9) = v14;
  v37[20] = a4;
  if ( a4 == 2 )
    v39 = 2;
  v37[16] = v40 | v39;
  *((_QWORD *)v37 + 7) = SecureHandle;
  *((_QWORD *)v37 + 11) = Object;
  *((_QWORD *)v37 + 12) = v54;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v34, 2LL, v35, v36) + 24) = v37;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) += *((_QWORD *)v37 + 5);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 104LL);
  v41 = *(_QWORD **)(a1 + 8);
  v42 = *((_QWORD *)v37 + 5);
  if ( a4 == 1 )
  {
    v41[15] += v42;
  }
  else if ( a4 == 2 )
  {
    v41[17] += v42;
  }
  else
  {
    v41[19] += v42;
  }
  if ( bTracingEnabled )
  {
    v43 = MappedBase;
    if ( a4 - 3 <= 3 )
      v43 = Object;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v50) = 1;
      LODWORD(v49) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      LODWORD(Handle) = a4;
      Template_pxqqt((__int64)v41, &EventCreateProcessAllocation, v35, v43, ViewSize, Handle, v49, v50);
    }
  }
  BlockListHead = VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v37 + 2);
  v46 = *(_QWORD *)BlockListHead;
  if ( *(_QWORD *)(*(_QWORD *)BlockListHead + 8LL) != BlockListHead )
    __fastfail(3u);
  v45[1] = BlockListHead;
  *v45 = v46;
  *(_QWORD *)(v46 + 8) = v45;
  *(_QWORD *)BlockListHead = v45;
  *a5 = v37;
  return (unsigned int)v17;
}
