/*
 * XREFs of ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0053370
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0051AE0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C0056470 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        _BOOL8 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rdi
  bool v6; // r13
  bool v7; // zf
  struct _KTHREAD **v8; // rdi
  struct VIDMM_ALLOC **v10; // rbx
  _QWORD *v12; // r8
  unsigned int v13; // edi
  unsigned int v14; // edx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  struct VIDMM_ALLOC **v17; // rsi
  struct VIDMM_ALLOC **j; // r8
  struct VIDMM_ALLOC *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  struct VIDMM_GLOBAL **v24; // r12
  unsigned int v25; // ebp
  unsigned __int64 *v26; // r14
  struct VIDMM_GLOBAL *k; // rdx
  unsigned __int64 v28; // rdx
  struct VIDMM_ALLOC **v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  struct VIDMM_ALLOC *v33; // rdx
  __int64 v34; // r10
  __int64 v35; // r9
  VIDMM_DEVICE *v36; // r8
  VIDMM_DEVICE *v37; // rax
  VIDMM_DEVICE **v38; // rcx
  VIDMM_DEVICE **v39; // r8
  __int64 v40; // rcx
  _QWORD *v41; // r9
  unsigned int m; // r8d
  __int64 v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v47; // rax
  char v48[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _KTHREAD **v49; // [rsp+38h] [rbp-40h]
  int i; // [rsp+40h] [rbp-38h]
  unsigned __int64 v51; // [rsp+80h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = a4;
  v7 = v5 == -304;
  v8 = (struct _KTHREAD **)(v5 + 304);
  v49 = v8;
  v10 = a2;
  if ( !v7 && v8[1] == KeGetCurrentThread() )
  {
    v47 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v47 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v47);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v8);
  v12 = (_QWORD *)*((_QWORD *)this + 2);
  v13 = 0;
  v14 = 0;
  for ( i = 2; v14 < *(_DWORD *)(*v12 + 6416LL); v16[16] = v16[12] )
  {
    v15 = v14++;
    v16 = (_QWORD *)(v12[6] + 240 * v15);
    v16[13] = v16[9];
    v16[14] = v16[10];
    v16[15] = v16[11];
  }
  v17 = &v10[a3];
  for ( j = v10; j != v17; ++j )
  {
    v19 = *j;
    v20 = **(_QWORD **)*j;
    if ( !(((*((_BYTE *)*j + 25) & 1) != 0) | *((_DWORD *)*j + 38)) && !*((_BYTE *)v19 + 27) )
    {
      v21 = **(_QWORD **)v19;
      if ( (*((_BYTE *)v19 + 36) & 1) != 0 && (*(_BYTE *)(v21 + 78) & 0xF) == 2 )
        v22 = 0LL;
      else
        v22 = *(_WORD *)(v21 + 78) & 0xF;
      v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 240LL * (*(_DWORD *)(v20 + 76) & 0x3F) + 8 * v22;
      *(_QWORD *)(v23 + 104) += *(_QWORD *)(v20 + 16);
      *((_BYTE *)v19 + 27) = 1;
    }
  }
  v24 = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 2);
  v25 = 0;
  v26 = a5;
  *a5 = 0LL;
  for ( k = *v24; v25 < *((_DWORD *)*v24 + 1604); k = *v24 )
  {
    VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
      (struct VIDMM_GLOBAL *)((char *)v24[6] + 240 * v25),
      &v51,
      v6,
      0,
      k,
      v25);
    v28 = *v26;
    if ( *v26 <= v51 )
      v28 = v51;
    *v26 = v28;
    ++v25;
  }
  v29 = v10;
  v30 = 0LL;
  v31 = (unsigned __int64)((char *)v17 - (char *)v10 + 7) >> 3;
  if ( v10 > v17 )
    v31 = 0LL;
  if ( v31 )
  {
    do
    {
      v32 = (__int64)*v29++;
      ++v30;
      *(_BYTE *)(v32 + 27) = 0;
    }
    while ( v30 != v31 );
  }
  if ( *v26 )
  {
    v13 = -1073741801;
  }
  else
  {
    for ( ; v10 != v17; ++v10 )
    {
      v33 = *v10;
      v34 = **(_QWORD **)*v10;
      v35 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 240LL * (*(_DWORD *)(v34 + 76) & 0x3F);
      if ( !(((*((_BYTE *)*v10 + 25) & 1) != 0) | *((_DWORD *)*v10 + 38)) )
      {
        v36 = (VIDMM_DEVICE *)*((_QWORD *)v33 + 14);
        v37 = (struct VIDMM_ALLOC *)((char *)v33 + 112);
        v38 = (VIDMM_DEVICE **)*((_QWORD *)v33 + 15);
        if ( *((struct VIDMM_ALLOC **)v36 + 1) != (struct VIDMM_ALLOC *)((char *)v33 + 112) || *v38 != v37 )
          __fastfail(3u);
        *v38 = v36;
        *((_QWORD *)v36 + 1) = v38;
        v39 = (VIDMM_DEVICE **)*((_QWORD *)this + 18);
        *(_QWORD *)v37 = (char *)this + 136;
        *((_QWORD *)v33 + 15) = v39;
        if ( *v39 != (VIDMM_DEVICE *)((char *)this + 136) )
          __fastfail(3u);
        *v39 = v37;
        *((_QWORD *)this + 18) = v37;
        v40 = v35 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v34 + 76)) >> 4);
        *(_QWORD *)(v40 + 136) += *(_QWORD *)(v34 + 16);
      }
      ++*((_DWORD *)v33 + 38);
    }
    v41 = (_QWORD *)*((_QWORD *)this + 2);
    for ( m = 0; m < *(_DWORD *)(*v41 + 6416LL); v44[12] = v45 )
    {
      v43 = m++;
      v44 = (_QWORD *)(v41[6] + 240 * v43);
      v45 = v44[16];
      v44[9] = v44[13];
      v44[10] = v44[14];
      v44[11] = v44[15];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
  return v13;
}
