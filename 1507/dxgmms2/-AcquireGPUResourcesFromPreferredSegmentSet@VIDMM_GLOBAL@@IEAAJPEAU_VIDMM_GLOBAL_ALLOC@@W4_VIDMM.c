/*
 * XREFs of ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C004B60C
 * Callers:
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C003AA74 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C003A854 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AcquireGPUResourcesFromPreferredSegmentSet(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v7; // edx
  int v8; // eax
  bool v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // r13d
  char v13; // cl
  int v14; // edi
  int v15; // ecx
  bool v16; // di
  __int64 v17; // r12
  __int64 v18; // r9
  char v19; // dl
  __int64 v20; // r8
  __int64 v21; // rcx
  int v23; // [rsp+20h] [rbp-58h]
  unsigned int v24; // [rsp+90h] [rbp+18h]
  int v25; // [rsp+98h] [rbp+20h]

  v24 = a3;
  v7 = -1071775488;
  v9 = (unsigned int)(a3 - 3) <= 1
    && ((v8 = **(_DWORD **)(a2 + 472), (v8 & 0x20000000) == 0) || v8 >= 0)
    && (v8 & 0x80000) == 0;
  if ( !*(_BYTE *)(a1 + 7064) || v9 )
    v10 = 2;
  else
    v10 = 0;
  v11 = *(_QWORD *)(a1 + 39992) + 456LL * (*(_DWORD *)(a2 + 76) & 0x3F);
LABEL_32:
  if ( v10 <= 2 )
  {
    v12 = 0;
    v13 = 0;
    v25 = 0;
    while ( 1 )
    {
      v14 = *(_DWORD *)(a2 + 72) >> v13;
      v15 = v14 & 0x1F;
      v16 = (v14 & 0x20) == 0;
      if ( *(_DWORD *)(a2 + 376) >= 0xA0000000 && *(_QWORD *)(a2 + 16) >= 0x1000000uLL )
        v16 = !v16;
      if ( !v15 )
        goto LABEL_30;
      v17 = (unsigned int)(v15 + *(_DWORD *)(v11 + 4) - 1);
      v7 = VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(a1, a2, v15 + *(_DWORD *)(v11 + 4) - 1, a3, 0);
      if ( v7 >= 0 )
        break;
LABEL_29:
      a3 = v24;
LABEL_30:
      ++v12;
      v13 = v25 + 6;
      v25 += 6;
      if ( v12 > a5 )
      {
        ++v10;
        goto LABEL_32;
      }
    }
    if ( (*(_BYTE *)(v11 + 420) & 3) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v17) + 56LL) & 1) != 0
      && (**(_DWORD **)(a2 + 472) & 0x8000) == 0 )
    {
      v17 = *(unsigned __int16 *)(v11 + 12);
    }
    if ( v10 )
    {
      LOBYTE(v18) = 0;
      if ( v10 == 1 )
        goto LABEL_27;
    }
    else
    {
      LOBYTE(v18) = 1;
    }
    if ( !v9 )
    {
      v19 = 0;
      goto LABEL_28;
    }
LABEL_27:
    v19 = 1;
LABEL_28:
    v20 = v24;
    LOBYTE(v20) = v16;
    LOBYTE(v23) = v19;
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8 * v17);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, unsigned int))(*(_QWORD *)v21 + 16LL))(
           v21,
           a2,
           v20,
           v18,
           v23,
           v24);
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_29;
  }
  return (unsigned int)v7;
}
