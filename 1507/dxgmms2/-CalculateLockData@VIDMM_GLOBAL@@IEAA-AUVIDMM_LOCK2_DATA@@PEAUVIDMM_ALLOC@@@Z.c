/*
 * XREFs of ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C004BAD0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C004E8E4 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CalculateLockData(__int64 a1, __int64 a2, _BYTE **a3)
{
  _BYTE *v3; // r11
  _QWORD *v4; // r9
  _DWORD *v5; // rax
  __int64 v6; // r8
  int v7; // r10d

  v3 = *a3;
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  v4 = *(_QWORD **)v3;
  if ( !*(_DWORD *)(*(_QWORD *)v3 + 336LL) )
  {
    v5 = (_DWORD *)v4[59];
    v6 = v4[16];
    *(_DWORD *)a2 = 1;
    if ( (*v5 & 1) == 0 )
    {
      *(_DWORD *)a2 = 5;
      return a2;
    }
    if ( (VIDMM_GLOBAL::_Config & 0x40) != 0 )
    {
      if ( v6 )
      {
LABEL_5:
        *(_DWORD *)a2 = 4;
LABEL_6:
        *(_BYTE *)(a2 + 4) = 1;
      }
    }
    else if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 56);
      if ( (v7 & 0x1001) == 0 )
      {
        if ( (*v5 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 284LL) & 4) == 0 )
          goto LABEL_5;
        if ( (v7 & 4) != 0 )
        {
          if ( (v3[32] & 1) != 0 )
            return a2;
          *(_DWORD *)a2 = 3;
        }
        else
        {
          if ( (v7 & 0x2000) == 0 )
            goto LABEL_5;
          *(_DWORD *)a2 = 2;
        }
        if ( !v4[32] )
          return a2;
        goto LABEL_6;
      }
    }
  }
  return a2;
}
