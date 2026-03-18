/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C009B204
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007A8C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0007C34 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00BFBCC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C012DF94 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  unsigned int v7; // r15d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi
  const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *v14; // r12
  signed __int64 j; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  PERESOURCE *v22; // rax
  struct DXGDEVICE *v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // rcx
  char *i; // rax
  signed __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rcx
  PERESOURCE *v36; // rax
  struct DXGDEVICE *v37; // r8
  PERESOURCE *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  struct DXGDEVICE *v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned int v57; // esi
  PERESOURCE *v58; // r9
  __int64 v59; // rdx
  PERESOURCE v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v68; // [rsp+70h] [rbp+8h]

  v7 = 0;
  v68 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v45 + 24) = 11324LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( *((_DWORD *)this + 26) < a5 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    LODWORD(a4) = -1073741811;
    v54[4] = a5;
    v54[5] = -1073741811LL;
LABEL_99:
    v54[3] = a2;
    goto LABEL_100;
  }
  if ( !a3 || !a4 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v54[5] = a4;
    LODWORD(a4) = -1073741811;
    v54[7] = -1073741811LL;
    v54[4] = a3;
    v54[6] = a3;
    goto LABEL_99;
  }
  v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v12 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v12 + 1992) + 16LL)) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v46 + 24) = 11355LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v13 = 0;
  if ( !a5 )
  {
LABEL_29:
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v61 + 24) = 4299LL;
      WdLogEvent5_WdAssertion(v61);
    }
    v31 = (char *)a2 + 288;
    for ( i = (char *)*((_QWORD *)a2 + 36); i != v31 && i; i = *(char **)i )
    {
      if ( *((_DWORD *)i + 32) == 1 )
      {
        v62 = WdLogNewEntry5_WdEvent(v31, v27, v29, v30);
        *(_QWORD *)(v62 + 24) = a2;
        WdLogEvent5_WdEvent(v62);
        break;
      }
    }
    if ( !a5 )
      return 0LL;
    v33 = (signed __int64)a3 - a4;
    v34 = a5;
    while ( 1 )
    {
      v35 = 127LL * *(unsigned int *)a4;
      v36 = this[17];
      v37 = (struct DXGDEVICE *)v36[v35 + 84];
      if ( v37 )
      {
        v44 = *(_DWORD *)(v33 + a4);
        if ( v44 == 4 )
          goto LABEL_42;
        if ( v37 == a2 )
        {
          if ( LODWORD(v36[v35 + 85]) != v44 )
          {
            v63 = WdLogNewEntry5_WdAssertion(v35 * 8);
            *(_QWORD *)(v63 + 24) = 11603LL;
            WdLogEvent5_WdAssertion(v63);
          }
          goto LABEL_42;
        }
        if ( LODWORD(v36[v35 + 85]) != 1 || v44 == 1 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v35 * 8);
          *(_QWORD *)(v64 + 24) = 11613LL;
          WdLogEvent5_WdAssertion(v64);
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          (ADAPTER_DISPLAY *)this,
          (struct DXGDEVICE *)this[17][127 * *(unsigned int *)a4 + 84],
          *(_DWORD *)a4);
      }
      else if ( LODWORD(v36[v35 + 85]) )
      {
        v65 = WdLogNewEntry5_WdAssertion(v35 * 8);
        *(_QWORD *)(v65 + 24) = 11623LL;
        WdLogEvent5_WdAssertion(v65);
      }
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[16], *(unsigned int *)a4, 0LL, 0LL, 0, 1);
LABEL_42:
      if ( *(_DWORD *)(v33 + a4) == 4 )
      {
        this[17][127 * *(unsigned int *)a4 + 86] = (PERESOURCE)a2;
      }
      else
      {
        v38 = this[40];
        if ( v38 )
        {
          v66 = (__int64)v38[1] + 2408 * *(unsigned int *)a4;
          *(_QWORD *)(v66 + 272) = a2;
          *(_BYTE *)(v66 + 256) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v66) >= 0 )
          {
            *(_QWORD *)(v66 + 104) = a2;
            memset((void *)(v66 + 64), 0, 0x20uLL);
            *(_DWORD *)(v66 + 672) &= ~4u;
          }
        }
        this[17][127 * *(unsigned int *)a4 + 84] = (PERESOURCE)a2;
        LODWORD(this[17][127 * *(unsigned int *)a4 + 85]) = *(_DWORD *)(v33 + a4);
        HIDWORD(this[17][127 * *(unsigned int *)a4 + 85]) = a6;
      }
      ADAPTER_DISPLAY::SetGammaRamp(this, *(_DWORD *)a4, 0LL);
      v43 = (_QWORD *)WdLogNewEntry5_WdEvent(v40, v39, v41, v42);
      v43[3] = a2;
      v43[4] = *(unsigned int *)a4;
      v43[5] = *(int *)(v33 + a4);
      v43[6] = a5;
      WdLogEvent5_WdEvent(v43);
      if ( *(_DWORD *)(v33 + a4) == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4LL;
      if ( !--v34 )
        return 0LL;
    }
  }
  v14 = a3;
  for ( j = a4 - (_QWORD)a3; ; j = a4 - (_QWORD)a3 )
  {
    v16 = *v14;
    if ( *v14 != D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      if ( v16 <= 1 )
        goto LABEL_59;
      if ( v16 <= 3 )
      {
        v68 = 1;
      }
      else if ( v16 != 4 )
      {
        goto LABEL_59;
      }
    }
    if ( *((_DWORD *)this + 26) <= *(const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *)((char *)v14 + j) )
      goto LABEL_59;
    if ( *((PERESOURCE **)a2 + 354) != this[2] )
    {
      v48 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v48 + 24) = 11396LL;
      WdLogEvent5_WdAssertion(v48);
      j = a4 - (_QWORD)a3;
    }
    if ( v13 )
    {
      v49 = *(unsigned int *)((char *)v14 + j);
      while ( (_DWORD)v49 != *(_DWORD *)(a4 + 4LL * v7) )
      {
        if ( ++v7 >= v13 )
          goto LABEL_15;
      }
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v54[4] = v13;
      v54[3] = a2;
      v54[5] = v7;
      v55 = *(unsigned int *)(a4 + 4LL * v7);
      goto LABEL_75;
    }
LABEL_15:
    v7 = 0;
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
            (DXGADAPTER **)this,
            *(const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *)((char *)v14 + j)) )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      v24[3] = a2;
      v24[4] = v13;
      v52 = *(unsigned int *)(a4 + 4LL * v13);
      a4 = -1071774972LL;
      goto LABEL_80;
    }
    v11 = *(unsigned int *)v14;
    if ( (_DWORD)v11 == 1 && !*((_DWORD *)a2 + 70) || (_DWORD)v11 == 3 && *((_DWORD *)a2 + 70) )
    {
LABEL_59:
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v47 = v13;
      v54[3] = a2;
      v54[4] = v13;
      v54[5] = *(unsigned int *)(a4 + 4LL * v13);
      goto LABEL_60;
    }
    v21 = 127LL * *(unsigned int *)((char *)v14 + a4 - (_QWORD)a3);
    v22 = this[17];
    v23 = (struct DXGDEVICE *)v22[v21 + 84];
    if ( !v23 )
    {
      if ( LODWORD(v22[v21 + 85]) )
      {
        v53 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v53 + 24) = 11531LL;
        WdLogEvent5_WdAssertion(v53);
      }
      goto LABEL_27;
    }
    if ( v23 == a2 )
    {
      if ( LODWORD(v22[v21 + 85]) == (_DWORD)v11 )
        goto LABEL_27;
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v54[3] = a2;
      v54[4] = *(unsigned int *)(a4 + 4LL * v13);
      v54[5] = SLODWORD(this[17][127 * *(unsigned int *)(a4 + 4LL * v13) + 85]);
      v55 = a3[v13];
LABEL_75:
      a4 = -1073741811LL;
LABEL_77:
      v54[6] = v55;
      v54[7] = a4;
LABEL_100:
      WdLogEvent5_WdError(v54);
      return (unsigned int)a4;
    }
    if ( (_DWORD)v11 == 1 || LODWORD(v22[v21 + 85]) != 1 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v21 * 8, v23, v20);
      v24[3] = a2;
      v24[4] = SLODWORD(this[17][127 * *(unsigned int *)(a4 + 4LL * v13) + 85]);
      v25 = *(unsigned int *)(a4 + 4LL * v13);
      LODWORD(a4) = -1071774910;
      v24[5] = v25;
      v24[6] = a3[v13];
      v24[7] = -1071774910LL;
      goto LABEL_23;
    }
    v50 = (struct DXGDEVICE *)v22[v21 + 86];
    if ( v50 != a2 )
      break;
    if ( (_DWORD)v11 != 4 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v47 = v13;
      v54[3] = a2;
      v54[4] = *(unsigned int *)(a4 + 4LL * v13);
      v54[5] = 4LL;
LABEL_60:
      v55 = a3[v47];
      goto LABEL_75;
    }
LABEL_27:
    ++v13;
    ++v14;
    if ( v13 >= a5 )
    {
      if ( v68 )
      {
        v56 = *((unsigned int *)this + 26);
        v57 = 0;
        if ( (_DWORD)v56 )
        {
          v58 = this[17];
          while ( 1 )
          {
            v59 = 127LL * v57;
            v60 = v58[v59 + 84];
            if ( v60 )
            {
              if ( LODWORD(v58[v59 + 85]) != 1 && v60[2].NumberOfSharedWaiters != *((_DWORD *)a2 + 70) )
                break;
            }
            if ( ++v57 >= (unsigned int)v56 )
              goto LABEL_29;
          }
          v54 = (_QWORD *)WdLogNewEntry5_WdError(v56);
          a4 = -1071774910LL;
          v54[3] = a2;
          v54[4] = v57;
          v54[5] = (int)this[17][127 * v57 + 84][2].NumberOfSharedWaiters;
          v55 = *((int *)a2 + 70);
          goto LABEL_77;
        }
      }
      goto LABEL_29;
    }
  }
  if ( !v50 )
    goto LABEL_27;
  v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v21 * 8, v50, v20);
  v24[3] = a2;
  v51 = *(unsigned int *)(a4 + 4LL * v13);
  a4 = -1071774910LL;
  v24[4] = v51;
  v52 = a3[v13];
LABEL_80:
  v24[5] = v52;
  v24[6] = a4;
LABEL_23:
  WdLogEvent5_WdWarning(v24);
  return (unsigned int)a4;
}
