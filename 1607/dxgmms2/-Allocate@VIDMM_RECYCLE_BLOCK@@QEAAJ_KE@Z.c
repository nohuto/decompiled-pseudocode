/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C005D920
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006149C (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     Template_pxqqt @ 0x1C001FD64 (Template_pxqqt.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int *v3; // rax
  int v5; // r9d
  char v6; // r10
  ULONG v7; // r12d
  ULONG AllocationType; // r14d
  PVOID *v9; // rsi
  __int64 v10; // rcx
  NTSTATUS v11; // r15d
  ULONG_PTR v12; // rdx
  int v14; // ecx
  PVOID *v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  NTSTATUS inserted; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  NTSTATUS v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int *v28; // rcx
  __int64 v29; // r8
  PVOID v30; // r9
  __int64 v31; // rcx
  ULONG Protect[2]; // [rsp+28h] [rbp-18h]
  __int64 v33; // [rsp+30h] [rbp-10h]
  __int64 v34; // [rsp+38h] [rbp-8h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp+48h] BYREF

  ViewSize = a2;
  v3 = (int *)*((_QWORD *)this + 4);
  v5 = *v3;
  v6 = *((_BYTE *)v3 + 16);
  if ( (unsigned int)(*v3 - 3) > 3 )
  {
    RegionSize = a2;
    v7 = 1028;
    if ( v5 == 2 )
    {
      v7 = 4;
    }
    else
    {
      AllocationType = 8396800;
      if ( !v6 )
      {
LABEL_5:
        if ( a3 )
          AllocationType |= 0x800000u;
        if ( v6 )
        {
          AllocationType |= 0x20400000u;
          RegionSize = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
        }
        v9 = (PVOID *)((char *)this + 40);
        v11 = ZwAllocateVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PVOID *)this + 5,
                0LL,
                &RegionSize,
                AllocationType,
                v7);
        if ( v11 < 0 )
        {
          if ( (AllocationType & 0x800000) != 0 )
            v11 = ZwAllocateVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    v9,
                    0LL,
                    &RegionSize,
                    AllocationType & 0xFF7FFFFF,
                    v7);
          if ( v11 < 0 )
          {
            _InterlockedIncrement(&dword_1C00355B4);
            v24 = WdLogNewEntry5_WdLowResource(v10);
            *(_QWORD *)(v24 + 24) = v11;
            WdLogEvent5_WdLowResource(v24);
            return (unsigned int)v11;
          }
        }
        goto LABEL_10;
      }
    }
    AllocationType = 0x2000;
    goto LABEL_5;
  }
  v37 = a2;
  v14 = 0x8000000;
  if ( ((v5 - 4) & 0xFFFFFFFD) != 0 )
    v14 = 1207959552;
  if ( v6 )
  {
    v14 |= 0x80000u;
    v37 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
  v15 = (PVOID *)((char *)this + 56);
  v16 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v37, 4, v14, 0LL, 0LL);
  v18 = v16;
  if ( v16 < 0 )
  {
    _InterlockedIncrement(&dword_1C0035664);
    v25 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v25 + 24) = v18;
    WdLogEvent5_WdLowResource(v25);
    return (unsigned int)v18;
  }
  ObfReferenceObject(*v15);
  inserted = ObInsertObject(*v15, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v18 = inserted;
  if ( inserted < 0 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v26 + 24) = *v15;
    *(_QWORD *)(v26 + 32) = v18;
    WdLogEvent5_WdAssertion(v26);
    return (unsigned int)v18;
  }
  v9 = (PVOID *)((char *)this + 40);
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    v12 = ViewSize;
    *v9 = 0LL;
    *((_QWORD *)this + 6) = v12;
    goto LABEL_11;
  }
  v23 = MmMapViewInSystemSpace(*v15, (PVOID *)this + 5, &ViewSize);
  if ( v23 < 0 )
  {
    _InterlockedIncrement(&dword_1C0035664);
    v27 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v27 + 24) = 6337LL;
    WdLogEvent5_WdLowResource(v27);
    return (unsigned int)v23;
  }
LABEL_10:
  v12 = ViewSize;
  *((_QWORD *)this + 6) = (char *)*v9 + ViewSize;
LABEL_11:
  if ( bTracingEnabled )
  {
    v28 = (unsigned int *)*((_QWORD *)this + 4);
    v29 = *v28;
    if ( (unsigned int)(v29 - 3) > 3 )
      v30 = *v9;
    else
      v30 = (PVOID)*((_QWORD *)this + 7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v34) = 1;
      v31 = *(_QWORD *)(*((_QWORD *)v28 + 1) + 8LL);
      LODWORD(v33) = *(_DWORD *)(v31 + 8);
      Protect[0] = v29;
      Template_pxqqt(v31, &EventCreateProcessAllocation, v29, v30, v12, *(_QWORD *)Protect, v33, v34);
    }
  }
  return 0LL;
}
