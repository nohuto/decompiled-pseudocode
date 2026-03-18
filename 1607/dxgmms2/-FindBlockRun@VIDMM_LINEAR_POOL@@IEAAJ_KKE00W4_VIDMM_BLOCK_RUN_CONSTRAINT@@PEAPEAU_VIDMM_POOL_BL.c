/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0064E00
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C0065698 (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindBlockRun(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v12; // r9
  _QWORD *v13; // r14
  unsigned __int64 v14; // r13
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // r15
  unsigned __int64 v20; // rbp
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  _QWORD *v28; // r14
  _QWORD *v29; // rdi
  _QWORD *v30; // r12
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v34; // rax
  _QWORD *v35; // r13
  __int64 v36; // rax
  _QWORD *v37; // r13
  bool v38; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-44h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]
  unsigned __int64 v41; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-30h] BYREF

  v12 = a1;
  *a8 = 0LL;
  v13 = (_QWORD *)(a1 + 40);
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( (_QWORD *)*v13 == v13 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(0LL, a2, a3, a1);
    return 3223191808LL;
  }
  v39 = (a3 + 4095) & 0xFFFFF000;
  v14 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v40 = v14;
  if ( a4 )
    v15 = (_QWORD *)*v13;
  else
    v15 = *(_QWORD **)(a1 + 48);
  if ( v15 == v13 )
    return 3223191808LL;
  v16 = a7;
  while ( 1 )
  {
    v17 = *(v15 - 3);
    v18 = v15 - 3;
    v19 = (__int64)(v15 - 3);
    v20 = v17 + *(v15 - 2);
    v41 = v17;
    v42 = v20;
    if ( (_DWORD)v16 )
      break;
    if ( a4 )
      v15 = (_QWORD *)*v15;
    else
      v15 = (_QWORD *)v15[1];
    if ( *((_BYTE *)v18 + 56) == 2 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, a2, a3, v12) + 24) = v18;
        goto LABEL_17;
      }
      goto LABEL_19;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, a2, a3, v12) + 24) = v18;
      goto LABEL_12;
    }
LABEL_13:
    if ( v15 == v13 )
      return 3223191808LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v34 = WdLogNewEntry5_WdTrace(v16, a2, a3, v12);
    v16 = a7;
    v12 = a1;
    *(_QWORD *)(v34 + 24) = v18;
  }
  if ( a4 )
  {
    v15 = (_QWORD *)*v15;
    if ( v15 != v13 )
    {
      do
      {
        v37 = v15 - 3;
        if ( *(v15 - 3) != v20 )
          break;
        if ( (_DWORD)v16 == 2
          || *((_BYTE *)v37 + 56) == 2
          || (*(unsigned int (__fastcall **)(_QWORD))(v12 + 32))(v37[2]) )
        {
          v20 += v37[1];
          v19 = (__int64)(v15 - 3);
          v42 = v20;
        }
        v15 = (_QWORD *)*v15;
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, a2, a3, v12) + 24) = v37;
        v16 = a7;
        v12 = a1;
      }
      while ( v15 != v13 );
      v14 = v40;
    }
  }
  else
  {
    v15 = (_QWORD *)v15[1];
    if ( v15 != v13 )
    {
      do
      {
        v35 = v15 - 3;
        if ( *(v15 - 3) + *(v15 - 2) != v17 )
          break;
        if ( (_DWORD)v16 == 2
          || *((_BYTE *)v35 + 56) == 2
          || (*(unsigned int (__fastcall **)(_QWORD))(v12 + 32))(v35[2]) )
        {
          v17 -= v35[1];
          v19 = (__int64)(v15 - 3);
        }
        v15 = (_QWORD *)v15[1];
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, a2, a3, v12) + 24) = v35;
        v16 = a7;
        v12 = a1;
      }
      while ( v15 != v13 );
      v14 = v40;
      v41 = v17;
    }
    v36 = (__int64)v18;
    v18 = (_QWORD *)v19;
    v19 = v36;
  }
LABEL_17:
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, a2, a3, v12);
    v21[3] = v20 - v17;
    v21[4] = v18;
    v21[5] = v19;
    v25 = WdLogNewEntry5_WdTrace(v20 - v17, v22, v23, v24);
    *(_QWORD *)(v25 + 24) = v17;
    *(_QWORD *)(v25 + 32) = v20;
  }
LABEL_19:
  if ( v20 - v17 >= v14 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16, a2, a3, v12);
    VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions((VIDMM_LINEAR_POOL *)v16, &v38, &v41, &v42, v14, v39, a4, a5, a6);
    if ( v38 )
      goto LABEL_12;
    v17 = v41;
    v20 = v42;
  }
  if ( v20 - v17 < v14 )
  {
LABEL_12:
    v16 = a7;
    v12 = a1;
    goto LABEL_13;
  }
  v26 = v17 + v14;
  if ( g_IsInternalReleaseOrDbg )
  {
    v27 = WdLogNewEntry5_WdTrace(v16, a2, a3, v12);
    *(_QWORD *)(v27 + 24) = v17;
    *(_QWORD *)(v27 + 32) = v26;
  }
  v28 = *(_QWORD **)(v19 + 24);
  v29 = v18 + 3;
  if ( v18 + 3 == v28 )
  {
LABEL_27:
    if ( g_IsInternalReleaseOrDbg )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, a2, a3, v12);
      v32[3] = v18;
      v32[4] = v19;
      v32[5] = v17;
      v32[6] = v26;
    }
    goto LABEL_29;
  }
  while ( 2 )
  {
    a2 = *(v29 - 3);
    v30 = v29 - 3;
    v31 = *(v29 - 2);
    v29 = (_QWORD *)*v29;
    v16 = a2 + v31;
    if ( v16 <= v17 )
    {
      v18 = v29 - 3;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, a2, a3, v12) + 24) = v30;
LABEL_26:
      if ( v29 == v28 )
        goto LABEL_27;
      continue;
    }
    break;
  }
  if ( a2 < v26 )
    goto LABEL_26;
  v19 = v30[4] - 24LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, a2, a3, v12) + 24) = v30;
    goto LABEL_27;
  }
LABEL_29:
  *a8 = v18;
  *a9 = v19;
  *a10 = v17;
  *a11 = v26;
  return 0LL;
}
