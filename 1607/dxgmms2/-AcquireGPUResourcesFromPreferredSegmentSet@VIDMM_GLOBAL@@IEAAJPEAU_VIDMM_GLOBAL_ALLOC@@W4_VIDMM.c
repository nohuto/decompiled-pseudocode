/*
 * XREFs of ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C0051C20
 * Callers:
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0052220 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0051E08 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  int v7; // ebp
  bool v8; // r12
  unsigned int v9; // ebx
  __int64 v10; // r14
  char v11; // di
  int v12; // edi
  int v13; // ecx
  bool v14; // di
  __int64 v15; // r13
  __int64 v16; // r9
  char v17; // dl
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // eax
  int v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+80h] [rbp+8h]
  unsigned int v28; // [rsp+90h] [rbp+18h]
  unsigned int v29; // [rsp+98h] [rbp+20h]

  v28 = a3;
  v7 = -1071775488;
  v8 = ((a3 - 3) & 0xFFFFFFFA) == 0
    && a3 != 8
    && ((v25 = **(_DWORD **)(a2 + 504), (v25 & 0x20000000) == 0) || v25 >= 0)
    && (v25 & 0x80000) == 0;
  if ( !*(_BYTE *)(a1 + 7096) || v8 )
    v9 = 2;
  else
    v9 = 0;
  v10 = *(_QWORD *)(a1 + 40136) + 456LL * (*(_DWORD *)(a2 + 76) & 0x3F);
LABEL_7:
  if ( v9 <= 2 )
  {
    v29 = 0;
    v11 = 0;
    v27 = 0;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a2 + 72) >> v11;
      v13 = v12 & 0x1F;
      v14 = (v12 & 0x20) == 0;
      if ( *(_DWORD *)(a2 + 392) >= 0xA0000000 && *(_QWORD *)(a2 + 16) >= 0x1000000uLL )
        v14 = !v14;
      if ( !v13 )
        goto LABEL_36;
      LOBYTE(v26) = 0;
      v15 = (unsigned int)(v13 + *(_DWORD *)(v10 + 4) - 1);
      v7 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, (unsigned int)v15, a3, v26);
      if ( v7 >= 0 )
        break;
LABEL_35:
      a3 = v28;
LABEL_36:
      v11 = v27 + 6;
      ++v29;
      v27 += 6;
      if ( v29 > a5 )
      {
        ++v9;
        goto LABEL_7;
      }
    }
    if ( (*(_BYTE *)(v10 + 420) & 3) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v15) + 56LL) & 1) != 0
      && (**(_DWORD **)(a2 + 504) & 0x8000) == 0 )
    {
      v15 = *(unsigned __int16 *)(v10 + 12);
    }
    if ( v9 )
    {
      LOBYTE(v16) = 0;
      if ( v9 == 1 )
        goto LABEL_27;
    }
    else
    {
      LOBYTE(v16) = 1;
    }
    if ( !v8 )
    {
      v17 = 0;
LABEL_17:
      v18 = v28;
      LOBYTE(v18) = v14;
      LOBYTE(v26) = v17;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v15);
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, unsigned int))(*(_QWORD *)v19 + 16LL))(
             v19,
             a2,
             v18,
             v16,
             v26,
             v28);
      if ( v7 >= 0 )
        return (unsigned int)v7;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = v15;
      goto LABEL_35;
    }
LABEL_27:
    v17 = 1;
    goto LABEL_17;
  }
  return (unsigned int)v7;
}
