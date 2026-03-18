/*
 * XREFs of ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0051E08
 * Callers:
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0051A64 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C0051C20 (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax

  v5 = a2;
  v6 = (_QWORD *)a1;
  if ( (_DWORD)a4 == 1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * (unsigned int)a3) + 56LL) & 0x1001) != 0 )
      goto LABEL_9;
  }
  else if ( (_DWORD)a4 == 2 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * (unsigned int)a3);
    if ( (*(_DWORD *)(a1 + 56) & 0x1001) == 0 )
      goto LABEL_9;
  }
  if ( !*(_DWORD *)(a2 + 344) )
    goto LABEL_5;
  v7 = (unsigned int)a3;
  a1 = *(_QWORD *)(v6[464] + 8LL * (unsigned int)a3);
  a2 = *(unsigned int *)(a1 + 56);
  if ( (a2 & 0x1001) != 0 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v5 + 84) & 0x20) != 0 )
  {
    v9 = **(unsigned int **)(v5 + 504);
    if ( (v9 & 4) != 0 && (v9 = *(unsigned int *)(v6[3] + 300LL), (v9 & 8) == 0) || (a2 & 0x2004) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v9, a2, a3, a4);
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
        v14[3] = (**(_DWORD **)(v5 + 504) >> 2) & 1;
        v14[4] = (*(_BYTE *)(v6[3] + 300LL) & 8) != 0;
        v14[5] = (*(_DWORD *)(*(_QWORD *)(v6[464] + 8 * v7) + 56LL) >> 2) & 1;
        v14[6] = (*(_DWORD *)(*(_QWORD *)(v6[464] + 8 * v7) + 56LL) >> 13) & 1;
      }
      return 3221225473LL;
    }
    goto LABEL_5;
  }
  if ( (_DWORD)a4 == 1 )
  {
LABEL_5:
    if ( a5 )
      a2 = *(unsigned int *)(v5 + 64);
    else
      a2 = *(unsigned int *)(v5 + 68);
    a1 = 456LL * (*(_DWORD *)(v5 + 76) & 0x3F);
    a3 = (unsigned int)(a3 - *(_DWORD *)(a1 + v6[5017] + 4));
    if ( _bittest((const int *)&a2, (unsigned __int8)a3) )
      return 0LL;
  }
LABEL_9:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  return 3221225473LL;
}
