/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0087D48
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00068C8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0006908 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0077F6C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00CF9E0 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00DE0B8 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
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
  __int64 v22; // rax
  struct DXGDEVICE *v23; // r8
  __int64 v24; // rcx
  _DWORD *i; // rax
  signed __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  struct DXGDEVICE *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax
  struct DXGDEVICE *v34; // r8
  int v35; // edx
  __int64 v36; // rcx
  unsigned int v37; // esi
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rsi
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v60; // [rsp+70h] [rbp+8h]

  v7 = 0;
  v60 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v42 + 24) = 1084LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    LODWORD(a4) = -1073741811;
    v48[4] = a5;
    v48[5] = -1073741811LL;
LABEL_100:
    v48[3] = a2;
    goto LABEL_101;
  }
  if ( !a3 || !a4 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v48[5] = a4;
    LODWORD(a4) = -1073741811;
    v48[7] = -1073741811LL;
    v48[4] = a3;
    v48[6] = a3;
    goto LABEL_100;
  }
  v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v12 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v12 + 2136) + 16LL)) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v43 + 24) = 1115LL;
    WdLogEvent5_WdAssertion(v43);
  }
  v13 = 0;
  if ( !a5 )
  {
LABEL_24:
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v24);
      *(_QWORD *)(v53 + 24) = 4591LL;
      WdLogEvent5_WdAssertion(v53);
    }
    for ( i = (_DWORD *)*((_QWORD *)a2 + 39); i != (_DWORD *)((char *)a2 + 312) && i; i = *(_DWORD **)i )
    {
      if ( i[32] == 1 )
      {
        v54 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v54 + 24) = a2;
        WdLogEvent5_WdEvent(v54);
        break;
      }
    }
    if ( !a5 )
      return 0LL;
    v26 = (signed __int64)a3 - a4;
    v27 = a5;
    while ( 1 )
    {
      v28 = 1016LL * *(unsigned int *)a4;
      v29 = *((_QWORD *)this + 14);
      v30 = *(struct DXGDEVICE **)(v28 + v29 + 672);
      if ( v30 )
      {
        v35 = *(_DWORD *)(v26 + a4);
        if ( v35 == 4 )
          goto LABEL_37;
        if ( v30 == a2 )
        {
          if ( *(_DWORD *)(v28 + v29 + 680) != v35 )
          {
            v55 = WdLogNewEntry5_WdAssertion(v28);
            *(_QWORD *)(v55 + 24) = 1363LL;
            WdLogEvent5_WdAssertion(v55);
          }
          goto LABEL_37;
        }
        if ( *(_DWORD *)(v28 + v29 + 680) != 1 || v35 == 1 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v56 + 24) = 1373LL;
          WdLogEvent5_WdAssertion(v56);
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          this,
          *(struct DXGDEVICE **)(1016LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 672),
          *(_DWORD *)a4);
      }
      else if ( *(_DWORD *)(v28 + v29 + 680) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v28);
        *(_QWORD *)(v57 + 24) = 1383LL;
        WdLogEvent5_WdAssertion(v57);
      }
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), *(_DWORD *)a4, 0LL, 0, 0, 1);
LABEL_37:
      if ( *(_DWORD *)(v26 + a4) == 4 )
      {
        *(_QWORD *)(1016LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 688) = a2;
      }
      else
      {
        v31 = *((_QWORD *)this + 32);
        if ( v31 )
        {
          v58 = *(_QWORD *)(v31 + 8) + 2632LL * *(unsigned int *)a4;
          *(_QWORD *)(v58 + 416) = a2;
          *(_BYTE *)(v58 + 400) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v58) >= 0 )
          {
            *(_QWORD *)(v58 + 200) = a2;
            memset((void *)(v58 + 160), 0, 0x20uLL);
            *(_DWORD *)(v58 + 848) &= ~4u;
          }
        }
        *(_QWORD *)(1016LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 672) = a2;
        *(_DWORD *)(1016LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 680) = *(_DWORD *)(v26 + a4);
        *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS *)(1016LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 684) = a6;
      }
      *(_QWORD *)(1016LL * *(unsigned int *)a4 + *((_QWORD *)this + 14) + 696) = *((_QWORD *)a2 + 5);
      ADAPTER_DISPLAY::SetGammaRamp((PERESOURCE **)this, *(_DWORD *)a4, 0LL);
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v32[3] = a2;
      v32[4] = *(unsigned int *)a4;
      v32[5] = *(int *)(v26 + a4);
      v32[6] = a5;
      WdLogEvent5_WdEvent(v32);
      if ( *(_DWORD *)(v26 + a4) == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4LL;
      if ( !--v27 )
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
        goto LABEL_75;
      if ( v16 > 3 )
      {
        if ( v16 != 4 )
          goto LABEL_75;
      }
      else
      {
        v60 = 1;
      }
    }
    if ( *((_DWORD *)this + 20) <= *(const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *)((char *)v14 + j) )
      goto LABEL_75;
    if ( *((_QWORD *)a2 + 357) != *((_QWORD *)this + 2) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v45 + 24) = 1156LL;
      WdLogEvent5_WdAssertion(v45);
      j = a4 - (_QWORD)a3;
    }
    if ( v13 )
    {
      v46 = *(unsigned int *)((char *)v14 + j);
      while ( (_DWORD)v46 != *(_DWORD *)(a4 + 4LL * v7) )
      {
        if ( ++v7 >= v13 )
          goto LABEL_15;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v46);
      v48[4] = v13;
      v48[3] = a2;
      v48[5] = v7;
      v49 = *(unsigned int *)(a4 + 4LL * v7);
      goto LABEL_86;
    }
LABEL_15:
    v7 = 0;
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
            (DXGADAPTER **)this,
            *(const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *)((char *)v14 + j)) )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      v50[3] = a2;
      v50[4] = v13;
      v52 = *(unsigned int *)(a4 + 4LL * v13);
      a4 = -1071774972LL;
      goto LABEL_71;
    }
    v11 = *(unsigned int *)v14;
    if ( (_DWORD)v11 == 1 && !*((_DWORD *)a2 + 76) || (_DWORD)v11 == 3 && *((_DWORD *)a2 + 76) )
    {
LABEL_75:
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v44 = v13;
      v48[3] = a2;
      v48[4] = v13;
      v48[5] = *(unsigned int *)(a4 + 4LL * v13);
      goto LABEL_76;
    }
    v21 = 1016LL * *(unsigned int *)((char *)v14 + a4 - (_QWORD)a3);
    v22 = *((_QWORD *)this + 14);
    v23 = *(struct DXGDEVICE **)(v21 + v22 + 672);
    if ( !v23 )
    {
      if ( *(_DWORD *)(v21 + v22 + 680) )
      {
        v47 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v47 + 24) = 1291LL;
        WdLogEvent5_WdAssertion(v47);
      }
      goto LABEL_22;
    }
    if ( v23 == a2 )
    {
      if ( *(_DWORD *)(v21 + v22 + 680) != (_DWORD)v11 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v11);
        v48[3] = a2;
        v48[4] = *(unsigned int *)(a4 + 4LL * v13);
        v48[5] = *(int *)(1016LL * *(unsigned int *)(a4 + 4LL * v13) + *((_QWORD *)this + 14) + 680);
        v49 = a3[v13];
        goto LABEL_86;
      }
      goto LABEL_22;
    }
    if ( *(_DWORD *)(v21 + v22 + 680) != 1 || (_DWORD)v11 == 1 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v21, v23, v20);
      v50[3] = a2;
      v50[4] = *(int *)(1016LL * *(unsigned int *)(a4 + 4LL * v13) + *((_QWORD *)this + 14) + 680);
      v41 = *(unsigned int *)(a4 + 4LL * v13);
      LODWORD(a4) = -1071774910;
      v50[5] = v41;
      v50[6] = a3[v13];
      v50[7] = -1071774910LL;
      goto LABEL_64;
    }
    v34 = *(struct DXGDEVICE **)(v21 + v22 + 688);
    if ( v34 != a2 )
    {
      if ( !v34 )
        goto LABEL_22;
      v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v21, v34, v20);
      v50[3] = a2;
      v51 = *(unsigned int *)(a4 + 4LL * v13);
      a4 = -1071774910LL;
      v50[4] = v51;
      v52 = a3[v13];
LABEL_71:
      v50[5] = v52;
      v50[6] = a4;
LABEL_64:
      WdLogEvent5_WdWarning(v50);
      return (unsigned int)a4;
    }
    if ( (_DWORD)v11 != 4 )
      break;
LABEL_22:
    ++v13;
    ++v14;
    if ( v13 >= a5 )
    {
      if ( v60 )
      {
        v36 = *((unsigned int *)this + 20);
        v37 = 0;
        if ( (_DWORD)v36 )
        {
          v38 = *((_QWORD *)this + 14);
          while ( 1 )
          {
            v39 = 1016LL * v37;
            v40 = *(_QWORD *)(v39 + v38 + 672);
            if ( v40 )
            {
              if ( *(_DWORD *)(v39 + v38 + 680) != 1 && *(_DWORD *)(v40 + 304) != *((_DWORD *)a2 + 76) )
                break;
            }
            if ( ++v37 >= (unsigned int)v36 )
              goto LABEL_24;
          }
          v48 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          a4 = -1071774910LL;
          v48[3] = a2;
          v48[4] = v37;
          v48[5] = *(int *)(*(_QWORD *)(1016LL * v37 + *((_QWORD *)this + 14) + 672) + 304LL);
          v49 = *((int *)a2 + 76);
          goto LABEL_88;
        }
      }
      goto LABEL_24;
    }
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v44 = v13;
  v48[3] = a2;
  v48[4] = *(unsigned int *)(a4 + 4LL * v13);
  v48[5] = 4LL;
LABEL_76:
  v49 = a3[v44];
LABEL_86:
  a4 = -1073741811LL;
LABEL_88:
  v48[6] = v49;
  v48[7] = a4;
LABEL_101:
  WdLogEvent5_WdError(v48);
  return (unsigned int)a4;
}
