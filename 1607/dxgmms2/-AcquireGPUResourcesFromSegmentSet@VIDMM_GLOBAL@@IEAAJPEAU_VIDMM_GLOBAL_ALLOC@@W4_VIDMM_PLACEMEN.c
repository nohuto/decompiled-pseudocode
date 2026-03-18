/*
 * XREFs of ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0051A64
 * Callers:
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FAA8 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0052220 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0051E08 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v4; // r14d
  __int64 v8; // rsi
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  bool v17; // dl
  __int64 v18; // rcx
  int v19; // eax
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-48h]

  v4 = 0;
  v8 = *(_QWORD *)(a1 + 40136) + 456LL * (*(_DWORD *)(a2 + 76) & 0x3F);
  v10 = -1071775488;
  if ( *(_DWORD *)(v8 + 8) )
  {
    while ( 1 )
    {
      v11 = (unsigned int)(v4 + *(_DWORD *)(v8 + 4));
      LOBYTE(v22) = a4;
      v10 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, (unsigned int)v11, a3, v22);
      if ( (v10 & 0x80000000) == 0 )
        break;
LABEL_14:
      if ( (unsigned int)++v4 >= *(_DWORD *)(v8 + 8) )
        return v10;
    }
    LOBYTE(v12) = *(_BYTE *)(v8 + 420);
    if ( (v12 & 3) != 0 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11);
      if ( (*(_DWORD *)(v13 + 56) & 1) != 0 )
      {
        if ( (**(_DWORD **)(a2 + 504) & 0x8000) == 0 )
          goto LABEL_23;
        if ( !a4 )
          goto LABEL_5;
        if ( (v12 & 4) != 0 )
LABEL_23:
          v11 = *(unsigned __int16 *)(v8 + 12);
      }
    }
    if ( a4 )
    {
      if ( (v12 & 4) == 0 && (_DWORD)v11 == *(unsigned __int16 *)(v8 + 12) )
        goto LABEL_28;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 80LL))(v21, a2);
      goto LABEL_12;
    }
LABEL_5:
    if ( (_DWORD)v11 == *(unsigned __int16 *)(v8 + 12) && (**(_DWORD **)(a2 + 504) & 0x8000) != 0 )
    {
LABEL_28:
      v10 = -1071775488;
LABEL_29:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v11;
      goto LABEL_14;
    }
    v17 = ((a3 - 3) & 0xFFFFFFFA) == 0
       && a3 != 8
       && ((v16 = **(_DWORD **)(a2 + 504), (v16 & 0x20000000) == 0) || v16 >= 0)
       && (v16 & 0x80000) == 0;
    LOBYTE(v14) = 1;
    LOBYTE(v22) = v17;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v11);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, unsigned int))(*(_QWORD *)v18 + 16LL))(
            v18,
            a2,
            v14,
            0LL,
            v22,
            a3);
LABEL_12:
    v10 = v19;
    if ( v19 >= 0 )
      return v10;
    goto LABEL_29;
  }
  return v10;
}
