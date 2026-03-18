/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0070634
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E6E8 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0051450 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0054128 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

__int64 *__fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // rdi
  _QWORD **v10; // rax
  _QWORD *v11; // r15
  _DWORD *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r8
  __int64 **v18; // rdi
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 **v22; // rcx
  __int64 *v23; // rax
  __int64 *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // r8
  __int64 **v28; // rbx
  __int64 *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 **v32; // rcx
  __int64 *v33; // rax
  __int64 *result; // rax
  __int64 *v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v38; // [rsp+28h] [rbp-8h]
  _QWORD *v39; // [rsp+70h] [rbp+40h]
  unsigned int v40; // [rsp+78h] [rbp+48h]
  __int64 v41; // [rsp+80h] [rbp+50h]

  v41 = a3;
  v40 = a2;
  v5 = (_QWORD **)(a1 + 128);
LABEL_2:
  v6 = *v5;
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
              v12 = v11 - 7;
              v11 = (_QWORD *)*v11;
              v13 = **(_QWORD **)v12;
              v14 = **(unsigned int **)(v13 + 472);
              if ( (v14 & 0x40000000) != 0 && (int)v14 >= 0 && (v40 & 8) == 0 )
              {
                v15 = WdLogNewEntry5_WdWarning(v14, a2, a3);
                *(_QWORD *)(v15 + 24) = v12;
                WdLogEvent5_WdWarning(v15);
                if ( VIDMM_GLOBAL::InvalidateOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (DXGFASTMUTEX **)v13) )
                {
                  a3 = v41;
                  v5 = (_QWORD **)(a1 + 128);
                  goto LABEL_2;
                }
              }
              if ( (*((_BYTE *)v12 + 25) & 1) == 0 )
                goto LABEL_16;
              if ( (v40 & 8) == 0 )
                break;
              v16 = WdLogNewEntry5_WdError(v14);
              *(_QWORD *)(v16 + 24) = v12;
              WdLogEvent5_WdError(v16);
LABEL_20:
              if ( v11 == v39 )
                goto LABEL_21;
            }
            VIDMM_GLOBAL::UnpinOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_ALLOC *)v12, 3LL, 0);
LABEL_16:
            if ( (**(_DWORD **)(v13 + 472) & 0x10000000) == 0
              && (*(_DWORD *)(v13 + 76) & 0x100) == 0
              && (v12[7] & 3) != 0 )
            {
              VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (VIDMM_DEVICE **)v12);
            }
            goto LABEL_20;
          }
LABEL_21:
          ;
        }
        while ( v9 != v8 );
        a3 = v41;
        v5 = (_QWORD **)(a1 + 128);
      }
    }
  }
  v17 = &v37;
  v38 = &v37;
  v37 = (__int64)&v37;
  v18 = (__int64 **)(a1 + 152);
  while ( *v18 != (__int64 *)v18 )
  {
    v19 = *v18;
    v20 = (__int64)(*v18 - 48);
    if ( (**(_DWORD **)(v20 + 472) & 0x10000000) == 0
      && (*(_DWORD *)(v20 + 76) & 0x100) == 0
      && ((v40 & 4) == 0 || *(_QWORD *)(v20 + 16) + *(_QWORD *)(v20 + 136) > *(_QWORD *)(a1 + 120))
      && !*(_DWORD *)(v20 + 152) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v20, v40, a4);
      v17 = v38;
    }
    v21 = *v19;
    if ( *v19 )
    {
      v22 = (__int64 **)v19[1];
      if ( *(__int64 **)(v21 + 8) != v19 || *v22 != v19 )
        __fastfail(3u);
      *v22 = (__int64 *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = v38;
      *v19 = (__int64)&v37;
      v19[1] = (__int64)v23;
      if ( (__int64 *)*v23 != &v37 )
        __fastfail(3u);
      *v23 = (__int64)v19;
      v17 = v19;
      v38 = v19;
    }
  }
  if ( (__int64 *)v37 != &v37 )
  {
    v24 = *(__int64 **)(a1 + 160);
    if ( (__int64 **)(*v18)[1] != v18 || (__int64 **)*v24 != v18 )
      __fastfail(3u);
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v17 != &v37 )
      __fastfail(3u);
    *v24 = (__int64)&v37;
    v25 = v38;
    *(_QWORD *)(a1 + 160) = v38;
    *v25 = (__int64)v18;
    v26 = v37;
    v38 = v24;
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v24 != &v37 )
      __fastfail(3u);
    *v24 = v37;
    *(_QWORD *)(v26 + 8) = v24;
  }
  v27 = &v37;
  v38 = &v37;
  v37 = (__int64)&v37;
  v28 = (__int64 **)(a1 + 168);
  while ( *v28 != (__int64 *)v28 )
  {
    v29 = *v28;
    v30 = (__int64)(*v28 - 48);
    if ( (**(_DWORD **)(v30 + 472) & 0x10000000) == 0
      && (*(_DWORD *)(v30 + 76) & 0x100) == 0
      && ((v40 & 4) == 0
       || (*(_DWORD *)(a1 + 56) & 0x200) == 0
       || *(_QWORD *)(v30 + 16) + *(_QWORD *)(v30 + 136) > *(_QWORD *)(a1 + 120))
      && !*(_DWORD *)(v30 + 152) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v30, v40, a4);
      v27 = v38;
    }
    v31 = *v29;
    if ( *v29 )
    {
      v32 = (__int64 **)v29[1];
      if ( *(__int64 **)(v31 + 8) != v29 || *v32 != v29 )
        __fastfail(3u);
      *v32 = (__int64 *)v31;
      *(_QWORD *)(v31 + 8) = v32;
      v33 = v38;
      *v29 = (__int64)&v37;
      v29[1] = (__int64)v33;
      if ( (__int64 *)*v33 != &v37 )
        __fastfail(3u);
      *v33 = (__int64)v29;
      v27 = v29;
      v38 = v29;
    }
  }
  result = &v37;
  if ( (__int64 *)v37 != &v37 )
  {
    v35 = *(__int64 **)(a1 + 176);
    if ( (__int64 **)(*v28)[1] != v28 || (__int64 **)*v35 != v28 )
      __fastfail(3u);
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v27 != &v37 )
      __fastfail(3u);
    *v35 = (__int64)&v37;
    v36 = v38;
    *(_QWORD *)(a1 + 176) = v38;
    *v36 = (__int64)v28;
    result = (__int64 *)v37;
    v38 = v35;
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v35 != &v37 )
      __fastfail(3u);
    *v35 = v37;
    result[1] = (__int64)v35;
  }
  return result;
}
