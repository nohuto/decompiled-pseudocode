/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AE3C
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0054A50 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v2; // edi
  NTSTATUS v4; // ebp
  int v5; // edx
  VIDMM_GLOBAL *v6; // r8
  int v7; // ecx
  PVOID *v8; // rsi
  PVOID v9; // rcx
  VIDMM_GLOBAL *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = this;
  v2 = 0;
  v4 = 0;
  v5 = **((_DWORD **)a2 + 63);
  if ( (v5 & 0x20000008) == 0 )
  {
LABEL_14:
    *((_DWORD *)a2 + 23) |= 1u;
    goto LABEL_15;
  }
  if ( (v5 & 0x400000) != 0 )
  {
    v8 = (PVOID *)((char *)a2 + 368);
    ObfReferenceObject(*((PVOID *)a2 + 46));
  }
  else
  {
    v6 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 1);
    v7 = 0x8000000;
    v11 = v6;
    if ( (v5 & 4) == 0 )
      v7 = 1207959552;
    if ( (*((_DWORD *)a2 + 20) & 0x100) != 0 )
    {
      v7 |= 0x80000u;
      v11 = (VIDMM_GLOBAL *)(((unsigned __int64)v6 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
    }
    v8 = (PVOID *)((char *)a2 + 368);
    v4 = MmCreateSection((char *)a2 + 368, 0LL, 0LL, &v11, 4, v7, 0LL, 0LL);
    if ( (**((_DWORD **)a2 + 63) & 0x20000000) != 0 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        *((_BYTE *)a2 + 88) |= 1u;
        ObfReferenceObject(v9);
      }
    }
    if ( v4 < 0 )
      goto LABEL_17;
  }
  if ( (**((_DWORD **)a2 + 63) & 8) != 0 )
    v4 = MmMapViewInSystemSpace(*v8, (PVOID *)a2 + 47, (PSIZE_T)a2 + 1);
  if ( v4 >= 0 )
    goto LABEL_14;
LABEL_17:
  if ( *v8 )
  {
    ObfDereferenceObject(*v8);
    if ( (*((_BYTE *)a2 + 88) & 1) != 0 )
    {
      ObfDereferenceObject(*v8);
      *((_BYTE *)a2 + 88) &= ~1u;
    }
  }
LABEL_15:
  LOBYTE(v2) = (**((_DWORD **)a2 + 63) & 0x4000003A) == 0;
  *((_DWORD *)a2 + 21) ^= (*((_DWORD *)a2 + 21) ^ (8 * v2)) & 8;
  return (unsigned int)v4;
}
