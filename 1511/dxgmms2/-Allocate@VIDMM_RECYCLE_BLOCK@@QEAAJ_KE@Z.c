/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C0059830
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C005D108 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     Template_pxqqt @ 0x1C001E214 (Template_pxqqt.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int v4; // r9d
  ULONG v5; // r15d
  ULONG AllocationType; // ebp
  PVOID *v7; // rdi
  __int64 v8; // rcx
  NTSTATUS v9; // r14d
  ULONG_PTR v10; // rdx
  PVOID *v12; // r14
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  NTSTATUS inserted; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  NTSTATUS v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int *v28; // rcx
  __int64 v29; // r8
  PVOID v30; // r9
  __int64 v31; // rcx
  ULONG Protect[2]; // [rsp+28h] [rbp-30h]
  __int64 v33; // [rsp+30h] [rbp-28h]
  __int64 v34; // [rsp+38h] [rbp-20h]
  ULONG_PTR v35; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+10h] BYREF

  RegionSize = a2;
  v4 = **((_DWORD **)this + 4);
  if ( (unsigned int)(v4 - 3) > 3 )
  {
    v5 = 1028;
    AllocationType = 8396800;
    if ( v4 == 2 )
    {
      v5 = 4;
      AllocationType = 0x2000;
    }
    if ( a3 )
      AllocationType |= 0x800000u;
    v7 = (PVOID *)((char *)this + 40);
    v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 5, 0LL, &RegionSize, AllocationType, v5);
    if ( v9 < 0 )
    {
      if ( (AllocationType & 0x800000) != 0 )
        v9 = ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v7,
               0LL,
               &RegionSize,
               AllocationType & 0xFF7FFFFF,
               v5);
      if ( v9 < 0 )
      {
        _InterlockedIncrement(&dword_1C002F534);
        v24 = WdLogNewEntry5_WdLowResource(v8);
        *(_QWORD *)(v24 + 24) = v9;
        WdLogEvent5_WdLowResource(v24);
        return (unsigned int)v9;
      }
    }
    goto LABEL_7;
  }
  v35 = a2;
  v12 = (PVOID *)((char *)this + 56);
  v13 = 0x8000000;
  if ( ((v4 - 4) & 0xFFFFFFFD) != 0 )
    v13 = 1207959552;
  v14 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v35, 4, v13, 0LL, 0LL);
  v16 = v14;
  if ( v14 < 0 )
  {
    _InterlockedIncrement(&dword_1C002F5E4);
    v25 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v25 + 24) = v16;
    WdLogEvent5_WdLowResource(v25);
    return (unsigned int)v16;
  }
  ObfReferenceObject(*v12);
  inserted = ObInsertObject(*v12, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v16 = inserted;
  if ( inserted < 0 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    *(_QWORD *)(v26 + 24) = *v12;
    *(_QWORD *)(v26 + 32) = v16;
    WdLogEvent5_WdAssertion(v26);
    return (unsigned int)v16;
  }
  v7 = (PVOID *)((char *)this + 40);
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    v10 = RegionSize;
    *v7 = 0LL;
    *((_QWORD *)this + 6) = v10;
    goto LABEL_8;
  }
  v23 = MmMapViewInSystemSpace(*v12, (PVOID *)this + 5, &RegionSize);
  if ( v23 < 0 )
  {
    _InterlockedIncrement(&dword_1C002F5E4);
    v27 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v27 + 24) = 6197LL;
    WdLogEvent5_WdLowResource(v27);
    return (unsigned int)v23;
  }
LABEL_7:
  v10 = RegionSize;
  *((_QWORD *)this + 6) = (char *)*v7 + RegionSize;
LABEL_8:
  if ( bTracingEnabled )
  {
    v28 = (unsigned int *)*((_QWORD *)this + 4);
    v29 = *v28;
    if ( (unsigned int)(v29 - 3) > 3 )
      v30 = *v7;
    else
      v30 = (PVOID)*((_QWORD *)this + 7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      LODWORD(v34) = 1;
      v31 = *(_QWORD *)(*((_QWORD *)v28 + 1) + 8LL);
      LODWORD(v33) = *(_DWORD *)(v31 + 8);
      Protect[0] = v29;
      Template_pxqqt(v31, &EventCreateProcessAllocation, v29, v30, v10, *(_QWORD *)Protect, v33, v34);
    }
  }
  return 0LL;
}
