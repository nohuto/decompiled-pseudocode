/*
 * XREFs of ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0049610
 * Callers:
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004713C (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0049D18 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0049964 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v4; // r14d
  __int64 v8; // rbx
  unsigned int v10; // r10d
  __int64 v11; // rsi
  __int64 v12; // r8
  char v13; // dl
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  bool v17; // dl
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v8 = *(_QWORD *)(a1 + 40048) + 456LL * (*(_DWORD *)(a2 + 76) & 0x3F);
  v10 = -1071775488;
  if ( *(_DWORD *)(v8 + 8) )
  {
    while ( 1 )
    {
      v11 = (unsigned int)(v4 + *(_DWORD *)(v8 + 4));
      LOBYTE(v20) = a4;
      v10 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, (unsigned int)v11, a3, v20);
      if ( (v10 & 0x80000000) != 0 )
        goto LABEL_23;
      v13 = *(_BYTE *)(v8 + 420);
      if ( (v13 & 3) == 0 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11) + 56LL) & 1) == 0 )
        goto LABEL_9;
      if ( (**(_DWORD **)(a2 + 472) & 0x8000) == 0 )
        goto LABEL_8;
      if ( a4 )
        break;
LABEL_11:
      if ( (_DWORD)v11 != *(unsigned __int16 *)(v8 + 12) || (**(_DWORD **)(a2 + 472) & 0x8000) == 0 )
      {
        v17 = ((a3 - 3) & 0xFFFFFFFA) == 0
           && a3 != 8
           && ((v16 = **(_DWORD **)(a2 + 472), (v16 & 0x20000000) == 0) || v16 >= 0)
           && (v16 & 0x80000) == 0;
        LOBYTE(v12) = 1;
        LOBYTE(v20) = v17;
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11);
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, unsigned int))(*(_QWORD *)v18 + 16LL))(
                v18,
                a2,
                v12,
                0LL,
                v20,
                a3);
LABEL_22:
        v10 = v15;
        if ( v15 >= 0 )
          return v10;
        goto LABEL_23;
      }
      v10 = -1071775488;
LABEL_23:
      if ( (unsigned int)++v4 >= *(_DWORD *)(v8 + 8) )
        return v10;
    }
    if ( (v13 & 4) != 0 )
LABEL_8:
      v11 = *(unsigned __int16 *)(v8 + 12);
LABEL_9:
    if ( a4 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11);
      v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 80LL))(v14, a2);
      goto LABEL_22;
    }
    goto LABEL_11;
  }
  return v10;
}
