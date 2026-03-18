/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B644C
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006798 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000E354 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00AD90C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00B3660 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00B58D4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  unsigned int v7; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // esi
  const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *v17; // r12
  signed __int64 j; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rcx
  char *i; // rax
  signed __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGDEVICE *v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // esi
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
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
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    v50 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v50 + 24) = 10979LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    LODWORD(a4) = -1073741811;
    v56[4] = a5;
    v56[5] = -1073741811LL;
LABEL_100:
    v56[3] = a2;
    goto LABEL_101;
  }
  if ( !a3 || !a4 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v56[5] = a4;
    LODWORD(a4) = -1073741811;
    v56[7] = -1073741811LL;
    v56[4] = a3;
    v56[6] = a3;
    goto LABEL_100;
  }
  v15 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v15 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v15 + 1984) + 16LL)) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v51 + 24) = 11010LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v16 = 0;
  if ( !a5 )
  {
LABEL_24:
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      *(_QWORD *)(v61 + 24) = 4268LL;
      WdLogEvent5_WdAssertion(v61);
    }
    v29 = (char *)a2 + 288;
    for ( i = (char *)*((_QWORD *)a2 + 36); i != v29 && i; i = *(char **)i )
    {
      if ( *((_DWORD *)i + 32) == 1 )
      {
        v62 = WdLogNewEntry5_WdEvent(v29, v25, v27, v28);
        *(_QWORD *)(v62 + 24) = a2;
        WdLogEvent5_WdEvent(v62);
        break;
      }
    }
    if ( !a5 )
      return 0LL;
    v31 = (signed __int64)a3 - a4;
    v32 = a5;
    while ( 1 )
    {
      v33 = 1008LL * *(unsigned int *)a4;
      v34 = *((_QWORD *)this + 14);
      v35 = *(struct DXGDEVICE **)(v33 + v34 + 672);
      if ( v35 )
      {
        v43 = *(unsigned int *)(v31 + a4);
        if ( (_DWORD)v43 == 4 )
          goto LABEL_37;
        if ( v35 == a2 )
        {
          if ( *(_DWORD *)(v33 + v34 + 680) != (_DWORD)v43 )
          {
            v63 = WdLogNewEntry5_WdAssertion(v33, v43, v35, v28);
            *(_QWORD *)(v63 + 24) = 11258LL;
            WdLogEvent5_WdAssertion(v63);
          }
          goto LABEL_37;
        }
        if ( *(_DWORD *)(v33 + v34 + 680) != 1 || (_DWORD)v43 == 1 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v33, v43, v35, v28);
          *(_QWORD *)(v64 + 24) = 11268LL;
          WdLogEvent5_WdAssertion(v64);
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          (PERESOURCE **)this,
          *(struct DXGDEVICE **)(1008LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 672),
          *(_DWORD *)a4);
      }
      else if ( *(_DWORD *)(v33 + v34 + 680) )
      {
        v65 = WdLogNewEntry5_WdAssertion(v33, v25, 0LL, v28);
        *(_QWORD *)(v65 + 24) = 11278LL;
        WdLogEvent5_WdAssertion(v65);
      }
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_MGR **)this + 13), *(_DWORD *)a4, 0LL, 0, 0, 1);
LABEL_37:
      if ( *(_DWORD *)(v31 + a4) == 4 )
      {
        *(_QWORD *)(1008LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 688) = a2;
      }
      else
      {
        v36 = *((_QWORD *)this + 31);
        if ( v36 )
        {
          v66 = *(_QWORD *)(v36 + 8) + 2384LL * *(unsigned int *)a4;
          *(_QWORD *)(v66 + 272) = a2;
          *(_BYTE *)(v66 + 256) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v66) >= 0 )
          {
            *(_QWORD *)(v66 + 104) = a2;
            memset((void *)(v66 + 64), 0, 0x20uLL);
            *(_DWORD *)(v66 + 648) &= ~4u;
          }
        }
        *(_QWORD *)(1008LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 672) = a2;
        *(_DWORD *)(1008LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 680) = *(_DWORD *)(v31 + a4);
        *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS *)(1008LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 684) = a6;
      }
      ADAPTER_DISPLAY::SetGammaRamp((PERESOURCE **)this, *(_DWORD *)a4, 0LL);
      v41 = (_QWORD *)WdLogNewEntry5_WdEvent(v38, v37, v39, v40);
      v41[3] = a2;
      v41[4] = *(unsigned int *)a4;
      v41[5] = *(int *)(v31 + a4);
      v41[6] = a5;
      WdLogEvent5_WdEvent(v41);
      if ( *(_DWORD *)(v31 + a4) == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4LL;
      if ( !--v32 )
        return 0LL;
    }
  }
  v17 = a3;
  for ( j = a4 - (_QWORD)a3; ; j = a4 - (_QWORD)a3 )
  {
    v19 = *v17;
    if ( *v17 != D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      if ( v19 <= 1 )
        goto LABEL_73;
      if ( v19 > 3 )
      {
        if ( v19 != 4 )
          goto LABEL_73;
      }
      else
      {
        v68 = 1;
      }
    }
    if ( *((_DWORD *)this + 20) <= *(const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *)((char *)v17 + j) )
      goto LABEL_73;
    if ( *((_QWORD *)a2 + 2338) != *((_QWORD *)this + 2) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v12, j, v13, v14);
      *(_QWORD *)(v53 + 24) = 11051LL;
      WdLogEvent5_WdAssertion(v53);
      j = a4 - (_QWORD)a3;
    }
    if ( v16 )
    {
      v54 = *(unsigned int *)((char *)v17 + j);
      while ( (_DWORD)v54 != *(_DWORD *)(a4 + 4LL * v7) )
      {
        if ( ++v7 >= v16 )
          goto LABEL_15;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v54);
      v56[4] = v16;
      v56[3] = a2;
      v56[5] = v7;
      v57 = *(unsigned int *)(a4 + 4LL * v7);
      goto LABEL_84;
    }
LABEL_15:
    v7 = 0;
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
            (DXGADAPTER **)this,
            *(const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *)((char *)v17 + j)) )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v14);
      v58[3] = a2;
      v58[4] = v16;
      v60 = *(unsigned int *)(a4 + 4LL * v16);
      a4 = -1071774972LL;
      goto LABEL_89;
    }
    v12 = *(unsigned int *)v17;
    if ( (_DWORD)v12 == 1 && !*((_DWORD *)a2 + 70) || (_DWORD)v12 == 3 && *((_DWORD *)a2 + 70) )
    {
LABEL_73:
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v52 = v16;
      v56[3] = a2;
      v56[4] = v16;
      v56[5] = *(unsigned int *)(a4 + 4LL * v16);
      goto LABEL_74;
    }
    v23 = 1008LL * *(unsigned int *)((char *)v17 + a4 - (_QWORD)a3);
    v24 = *((_QWORD *)this + 14);
    v13 = *(struct DXGDEVICE **)(v23 + v24 + 672);
    if ( !v13 )
    {
      if ( *(_DWORD *)(v23 + v24 + 680) )
      {
        v55 = WdLogNewEntry5_WdAssertion(v12, v23, 0LL, v14);
        *(_QWORD *)(v55 + 24) = 11186LL;
        WdLogEvent5_WdAssertion(v55);
      }
      goto LABEL_22;
    }
    if ( v13 == a2 )
    {
      if ( *(_DWORD *)(v23 + v24 + 680) != (_DWORD)v12 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v56[3] = a2;
        v56[4] = *(unsigned int *)(a4 + 4LL * v16);
        v56[5] = *(int *)(1008LL * *(unsigned int *)(a4 + 4LL * v16) + *((_QWORD *)this + 14) + 680);
        v57 = a3[v16];
        goto LABEL_84;
      }
      goto LABEL_22;
    }
    if ( *(_DWORD *)(v23 + v24 + 680) != 1 || (_DWORD)v12 == 1 )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v23, v13, v14);
      v58[3] = a2;
      v58[4] = *(int *)(1008LL * *(unsigned int *)(a4 + 4LL * v16) + *((_QWORD *)this + 14) + 680);
      v49 = *(unsigned int *)(a4 + 4LL * v16);
      LODWORD(a4) = -1071774910;
      v58[5] = v49;
      v58[6] = a3[v16];
      v58[7] = -1071774910LL;
      goto LABEL_66;
    }
    v13 = *(struct DXGDEVICE **)(v23 + v24 + 688);
    if ( v13 != a2 )
    {
      if ( !v13 )
        goto LABEL_22;
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v23, v13, v14);
      v58[3] = a2;
      v59 = *(unsigned int *)(a4 + 4LL * v16);
      a4 = -1071774910LL;
      v58[4] = v59;
      v60 = a3[v16];
LABEL_89:
      v58[5] = v60;
      v58[6] = a4;
LABEL_66:
      WdLogEvent5_WdWarning(v58);
      return (unsigned int)a4;
    }
    if ( (_DWORD)v12 != 4 )
      break;
LABEL_22:
    ++v16;
    ++v17;
    if ( v16 >= a5 )
    {
      if ( v68 )
      {
        v44 = *((unsigned int *)this + 20);
        v45 = 0;
        if ( (_DWORD)v44 )
        {
          v46 = *((_QWORD *)this + 14);
          while ( 1 )
          {
            v47 = 1008LL * v45;
            v48 = *(_QWORD *)(v47 + v46 + 672);
            if ( v48 )
            {
              if ( *(_DWORD *)(v47 + v46 + 680) != 1 && *(_DWORD *)(v48 + 280) != *((_DWORD *)a2 + 70) )
                break;
            }
            if ( ++v45 >= (unsigned int)v44 )
              goto LABEL_24;
          }
          v56 = (_QWORD *)WdLogNewEntry5_WdError(v44);
          a4 = -1071774910LL;
          v56[3] = a2;
          v56[4] = v45;
          v56[5] = *(int *)(*(_QWORD *)(1008LL * v45 + *((_QWORD *)this + 14) + 672) + 280LL);
          v57 = *((int *)a2 + 70);
          goto LABEL_86;
        }
      }
      goto LABEL_24;
    }
  }
  v56 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v52 = v16;
  v56[3] = a2;
  v56[4] = *(unsigned int *)(a4 + 4LL * v16);
  v56[5] = 4LL;
LABEL_74:
  v57 = a3[v52];
LABEL_84:
  a4 = -1073741811LL;
LABEL_86:
  v56[6] = v57;
  v56[7] = a4;
LABEL_101:
  WdLogEvent5_WdError(v56);
  return (unsigned int)a4;
}
