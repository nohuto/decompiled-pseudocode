/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00624B4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C004C664 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060E78 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0062B34 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067C40 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 *__fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rcx
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  _QWORD *v8; // rdi
  _QWORD **v9; // rax
  _QWORD *v10; // r15
  _DWORD *v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 **v17; // rdi
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 **v21; // rcx
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r8
  __int64 **v27; // rbx
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 **v31; // rcx
  __int64 *v32; // rax
  __int64 *result; // rax
  __int64 *v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v37; // [rsp+28h] [rbp-8h]
  _QWORD *v38; // [rsp+70h] [rbp+40h]
  unsigned int v39; // [rsp+78h] [rbp+48h]
  __int64 v40; // [rsp+80h] [rbp+50h]

  v40 = a3;
  v39 = a2;
  v4 = (_QWORD **)(a1 + 128);
LABEL_2:
  v5 = *v4;
  while ( v5 != v4 )
  {
    v6 = v5 - 3;
    v5 = (_QWORD *)*v5;
    if ( (v39 & 8) == 0 || *v6 == a3 )
    {
      v7 = v6 + 5;
      v8 = (_QWORD *)v6[5];
      if ( v8 != v6 + 5 )
      {
        do
        {
          v9 = (_QWORD **)(v8 + 2);
          v8 = (_QWORD *)*v8;
          v10 = *v9;
          v38 = v9;
          if ( *v9 != v9 )
          {
            while ( 1 )
            {
              v11 = v10 - 7;
              v10 = (_QWORD *)*v10;
              v12 = **(_QWORD **)v11;
              v13 = **(unsigned int **)(v12 + 472);
              if ( (v13 & 0x40000000) != 0 && (int)v13 >= 0 && (v39 & 8) == 0 )
              {
                v14 = WdLogNewEntry5_WdWarning(v13);
                *(_QWORD *)(v14 + 24) = v11;
                WdLogEvent5_WdWarning(v14);
                if ( VIDMM_GLOBAL::InvalidateOneAllocation(
                       *(VIDMM_GLOBAL **)(a1 + 8),
                       (struct _VIDMM_GLOBAL_ALLOC *)v12) )
                {
                  a3 = v40;
                  v4 = (_QWORD **)(a1 + 128);
                  goto LABEL_2;
                }
              }
              if ( (*((_BYTE *)v11 + 25) & 1) == 0 )
                goto LABEL_16;
              if ( (v39 & 8) == 0 )
                break;
              v15 = WdLogNewEntry5_WdError(v13, a2, a3);
              *(_QWORD *)(v15 + 24) = v11;
              WdLogEvent5_WdError(v15);
LABEL_20:
              if ( v10 == v38 )
                goto LABEL_21;
            }
            VIDMM_GLOBAL::UnpinOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_ALLOC *)v11, 3LL, 0);
LABEL_16:
            if ( (**(_DWORD **)(v12 + 472) & 0x10000000) == 0
              && (*(_DWORD *)(v12 + 76) & 0x100) == 0
              && (v11[7] & 3) != 0 )
            {
              VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (VIDMM_DEVICE **)v11);
            }
            goto LABEL_20;
          }
LABEL_21:
          ;
        }
        while ( v8 != v7 );
        a3 = v40;
        v4 = (_QWORD **)(a1 + 128);
      }
    }
  }
  v16 = &v36;
  v37 = &v36;
  v36 = (__int64)&v36;
  v17 = (__int64 **)(a1 + 152);
  while ( *v17 != (__int64 *)v17 )
  {
    v18 = *v17;
    v19 = (__int64)(*v17 - 48);
    if ( (**(_DWORD **)(v19 + 472) & 0x10000000) == 0
      && (*(_DWORD *)(v19 + 76) & 0x100) == 0
      && ((v39 & 4) == 0 || *(_QWORD *)(v19 + 16) + *(_QWORD *)(v19 + 136) > *(_QWORD *)(a1 + 120))
      && !*(_DWORD *)(v19 + 152) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v19, v39);
      v16 = v37;
    }
    v20 = *v18;
    if ( *v18 )
    {
      v21 = (__int64 **)v18[1];
      if ( *(__int64 **)(v20 + 8) != v18 || *v21 != v18 )
        __fastfail(3u);
      *v21 = (__int64 *)v20;
      *(_QWORD *)(v20 + 8) = v21;
      v22 = v37;
      *v18 = (__int64)&v36;
      v18[1] = (__int64)v22;
      if ( (__int64 *)*v22 != &v36 )
        __fastfail(3u);
      *v22 = (__int64)v18;
      v16 = v18;
      v37 = v18;
    }
  }
  if ( (__int64 *)v36 != &v36 )
  {
    v23 = *(__int64 **)(a1 + 160);
    if ( (__int64 **)(*v17)[1] != v17 || (__int64 **)*v23 != v17 )
      __fastfail(3u);
    if ( *(__int64 **)(v36 + 8) != &v36 || (__int64 *)*v16 != &v36 )
      __fastfail(3u);
    *v23 = (__int64)&v36;
    v24 = v37;
    *(_QWORD *)(a1 + 160) = v37;
    *v24 = (__int64)v17;
    v25 = v36;
    v37 = v23;
    if ( *(__int64 **)(v36 + 8) != &v36 || (__int64 *)*v23 != &v36 )
      __fastfail(3u);
    *v23 = v36;
    *(_QWORD *)(v25 + 8) = v23;
  }
  v26 = &v36;
  v37 = &v36;
  v36 = (__int64)&v36;
  v27 = (__int64 **)(a1 + 168);
  while ( *v27 != (__int64 *)v27 )
  {
    v28 = *v27;
    v29 = (__int64)(*v27 - 48);
    if ( (**(_DWORD **)(v29 + 472) & 0x10000000) == 0
      && (*(_DWORD *)(v29 + 76) & 0x100) == 0
      && ((v39 & 4) == 0
       || (*(_DWORD *)(a1 + 56) & 0x200) == 0
       || *(_QWORD *)(v29 + 16) + *(_QWORD *)(v29 + 136) > *(_QWORD *)(a1 + 120))
      && !*(_DWORD *)(v29 + 152) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v29, v39);
      v26 = v37;
    }
    v30 = *v28;
    if ( *v28 )
    {
      v31 = (__int64 **)v28[1];
      if ( *(__int64 **)(v30 + 8) != v28 || *v31 != v28 )
        __fastfail(3u);
      *v31 = (__int64 *)v30;
      *(_QWORD *)(v30 + 8) = v31;
      v32 = v37;
      *v28 = (__int64)&v36;
      v28[1] = (__int64)v32;
      if ( (__int64 *)*v32 != &v36 )
        __fastfail(3u);
      *v32 = (__int64)v28;
      v26 = v28;
      v37 = v28;
    }
  }
  result = &v36;
  if ( (__int64 *)v36 != &v36 )
  {
    v34 = *(__int64 **)(a1 + 176);
    if ( (__int64 **)(*v27)[1] != v27 || (__int64 **)*v34 != v27 )
      __fastfail(3u);
    if ( *(__int64 **)(v36 + 8) != &v36 || (__int64 *)*v26 != &v36 )
      __fastfail(3u);
    *v34 = (__int64)&v36;
    v35 = v37;
    *(_QWORD *)(a1 + 176) = v37;
    *v35 = (__int64)v27;
    result = (__int64 *)v36;
    v37 = v34;
    if ( *(__int64 **)(v36 + 8) != &v36 || (__int64 *)*v34 != &v36 )
      __fastfail(3u);
    *v34 = v36;
    result[1] = (__int64)v34;
  }
  return result;
}
