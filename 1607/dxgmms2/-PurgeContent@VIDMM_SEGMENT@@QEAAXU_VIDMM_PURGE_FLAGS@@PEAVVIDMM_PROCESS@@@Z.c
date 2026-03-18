/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0069D54
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C834 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0068FCC (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C006A12C (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D8AC (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 *__fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // rdi
  _QWORD **v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 **v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 **v20; // rcx
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r8
  __int64 **v26; // rbx
  __int64 *v27; // rdi
  __int64 v28; // rdx
  __int64 *v29; // rax
  __int64 *result; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 **v33; // rcx
  __int64 *v34; // rax
  __int64 *v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v38; // [rsp+28h] [rbp-8h]
  _QWORD *v39; // [rsp+70h] [rbp+40h]
  unsigned int v40; // [rsp+78h] [rbp+48h]
  __int64 v41; // [rsp+80h] [rbp+50h]

  v41 = a3;
  v40 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
LABEL_3:
    a3 = v41;
  }
  v5 = (_QWORD *)(a1 + 128);
  v6 = *(_QWORD **)(a1 + 128);
  while ( v6 != v5 )
  {
    v7 = v6 - 3;
    v6 = (_QWORD *)*v6;
    if ( (v40 & 8) == 0 || *v7 == a3 )
    {
      v8 = v7 + 5;
      v9 = (_QWORD *)v7[5];
      if ( v9 != v7 + 5 )
      {
        do
        {
          v10 = (_QWORD **)(v9 + 2);
          v9 = (_QWORD *)*v9;
          v11 = *v10;
          v39 = v10;
          if ( *v10 != v10 )
          {
            while ( 1 )
            {
              v12 = (__int64)(v11 - 7);
              v11 = (_QWORD *)*v11;
              v13 = **(_QWORD **)v12;
              v14 = **(unsigned int **)(v13 + 504);
              if ( (v14 & 0x40000000) != 0 && (int)v14 >= 0 && (v40 & 8) == 0 )
              {
                v31 = WdLogNewEntry5_WdWarning(v14);
                *(_QWORD *)(v31 + 24) = v12;
                WdLogEvent5_WdWarning(v31);
                if ( VIDMM_GLOBAL::InvalidateOneAllocation(
                       *(VIDMM_GLOBAL **)(a1 + 8),
                       (struct _VIDMM_GLOBAL_ALLOC *)v13) )
                {
                  goto LABEL_3;
                }
              }
              if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
                goto LABEL_11;
              if ( (v40 & 8) == 0 )
                break;
              v32 = WdLogNewEntry5_WdError(v14, a2, a3, a4);
              *(_QWORD *)(v32 + 24) = v12;
              WdLogEvent5_WdError(v32);
LABEL_15:
              if ( v11 == v39 )
                goto LABEL_16;
            }
            VIDMM_GLOBAL::UnpinOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v12, 3LL, 0LL);
LABEL_11:
            if ( (**(_DWORD **)(v13 + 504) & 0x10000000) == 0
              && (*(_DWORD *)(v13 + 76) & 0x100) == 0
              && (*(_DWORD *)(v12 + 28) & 3) != 0 )
            {
              VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (VIDMM_DEVICE **)v12);
            }
            goto LABEL_15;
          }
LABEL_16:
          ;
        }
        while ( v9 != v8 );
        a3 = v41;
        v5 = (_QWORD *)(a1 + 128);
      }
    }
  }
  v15 = &v37;
  v38 = &v37;
  v37 = (__int64)&v37;
  v16 = (__int64 **)(a1 + 152);
  while ( *v16 != (__int64 *)v16 )
  {
    v17 = *v16;
    v18 = (__int64)(*v16 - 50);
    if ( (**(_DWORD **)(v18 + 504) & 0x10000000) == 0
      && (*(_DWORD *)(v18 + 76) & 0x100) == 0
      && ((v40 & 4) == 0 || *(_QWORD *)(v18 + 16) + *(_QWORD *)(v18 + 144) > *(_QWORD *)(a1 + 120))
      && !*(_DWORD *)(v18 + 160) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v18, v40);
      v15 = v38;
    }
    v19 = (__int64 *)*v17;
    if ( *v17 )
    {
      v20 = (__int64 **)v17[1];
      if ( (__int64 *)v19[1] != v17 || *v20 != v17 )
        __fastfail(3u);
      *v20 = v19;
      v19[1] = (__int64)v20;
      v21 = v38;
      if ( (__int64 *)*v38 != &v37 )
        __fastfail(3u);
      v17[1] = (__int64)v38;
      *v17 = (__int64)&v37;
      v15 = v17;
      *v21 = (__int64)v17;
      v38 = v17;
    }
  }
  if ( (__int64 *)v37 != &v37 )
  {
    v22 = *(__int64 **)(a1 + 160);
    if ( (__int64 **)(*v16)[1] != v16 || (__int64 **)*v22 != v16 )
      __fastfail(3u);
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v15 != &v37 )
      __fastfail(3u);
    *v22 = (__int64)&v37;
    v23 = v38;
    *(_QWORD *)(a1 + 160) = v38;
    *v23 = (__int64)v16;
    v24 = v37;
    v38 = v22;
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v22 != &v37 )
      __fastfail(3u);
    *v22 = v37;
    *(_QWORD *)(v24 + 8) = v22;
  }
  v25 = &v37;
  v38 = &v37;
  v37 = (__int64)&v37;
  v26 = (__int64 **)(a1 + 168);
  while ( *v26 != (__int64 *)v26 )
  {
    v27 = *v26;
    v28 = (__int64)(*v26 - 50);
    if ( (**(_DWORD **)(v28 + 504) & 0x10000000) == 0
      && (*(_DWORD *)(v28 + 76) & 0x100) == 0
      && ((v40 & 4) == 0
       || (*(_DWORD *)(a1 + 56) & 0x200) == 0
       || *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 144) > *(_QWORD *)(a1 + 120))
      && !*(_DWORD *)(v28 + 160) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v28, v40);
      v25 = v38;
    }
    v29 = (__int64 *)*v27;
    if ( *v27 )
    {
      v33 = (__int64 **)v27[1];
      if ( (__int64 *)v29[1] != v27 || *v33 != v27 )
        __fastfail(3u);
      *v33 = v29;
      v29[1] = (__int64)v33;
      v34 = v38;
      if ( (__int64 *)*v38 != &v37 )
        __fastfail(3u);
      v27[1] = (__int64)v38;
      *v27 = (__int64)&v37;
      v25 = v27;
      *v34 = (__int64)v27;
      v38 = v27;
    }
  }
  result = &v37;
  if ( (__int64 *)v37 != &v37 )
  {
    v35 = *(__int64 **)(a1 + 176);
    if ( (__int64 **)(*v26)[1] != v26 || (__int64 **)*v35 != v26 )
      __fastfail(3u);
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v25 != &v37 )
      __fastfail(3u);
    *v35 = (__int64)&v37;
    v36 = v38;
    *(_QWORD *)(a1 + 176) = v38;
    *v36 = (__int64)v26;
    result = (__int64 *)v37;
    v38 = v35;
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v35 != &v37 )
      __fastfail(3u);
    *v35 = v37;
    result[1] = (__int64)v35;
  }
  return result;
}
