/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C0065034
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C0066098 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     Template_pxqqt @ 0x1C0010B08 (Template_pxqqt.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int v4; // r9d
  ULONG v5; // r15d
  ULONG AllocationType; // ebp
  PVOID *v7; // rdi
  __int64 v8; // rcx
  NTSTATUS v9; // r14d
  __int64 v10; // rax
  PVOID *v12; // r14
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  NTSTATUS inserted; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  NTSTATUS v25; // ebp
  __int64 v26; // rax
  ULONG_PTR v27; // rdx
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
        _InterlockedIncrement(&dword_1C0027524);
        v10 = WdLogNewEntry5_WdLowResource(v8);
        *(_QWORD *)(v10 + 24) = v9;
        WdLogEvent5_WdLowResource(v10);
        return (unsigned int)v9;
      }
    }
    goto LABEL_21;
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
    _InterlockedIncrement(&dword_1C00275D4);
    v17 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v17 + 24) = v16;
    WdLogEvent5_WdLowResource(v17);
    return (unsigned int)v16;
  }
  ObfReferenceObject(*v12);
  inserted = ObInsertObject(*v12, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v16 = inserted;
  if ( inserted < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = *v12;
    *(_QWORD *)(v23 + 32) = v16;
    WdLogEvent5_WdAssertion(v23);
    return (unsigned int)v16;
  }
  v7 = (PVOID *)((char *)this + 40);
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    v27 = RegionSize;
    *v7 = 0LL;
    *((_QWORD *)this + 6) = v27;
    goto LABEL_23;
  }
  v25 = MmMapViewInSystemSpace(*v12, (PVOID *)this + 5, &RegionSize);
  if ( v25 < 0 )
  {
    _InterlockedIncrement(&dword_1C00275D4);
    v26 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v26 + 24) = 6099LL;
    WdLogEvent5_WdLowResource(v26);
    return (unsigned int)v25;
  }
LABEL_21:
  v27 = RegionSize;
  *((_QWORD *)this + 6) = (char *)*v7 + RegionSize;
LABEL_23:
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
      Template_pxqqt(v31, &EventCreateProcessAllocation, v29, v30, v27, *(_QWORD *)Protect, v33, v34);
    }
  }
  return 0LL;
}
