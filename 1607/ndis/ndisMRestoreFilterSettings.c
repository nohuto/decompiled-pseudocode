/*
 * XREFs of ndisMRestoreFilterSettings @ 0x1C0011FF0
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0023CBC (ndisMResetCompleteStage1.c)
 *     ndisMKillOpen @ 0x1C00EC300 (ndisMKillOpen.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0016800 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMergeEncapsulations @ 0x1C00241F0 (ndisMergeEncapsulations.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisMAllocateRequest @ 0x1C0045AE4 (ndisMAllocateRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0048090 (ndisQueueRestoreRequestsOnTop.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r15
  int v4; // r14d
  unsigned int v6; // r12d
  bool v8; // al
  int v9; // eax
  __int64 *v10; // rbx
  __int64 i; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // r10
  __int64 v24; // r11
  char v25; // al
  char v26; // bl
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 *v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 *v40; // rax
  __int64 *v41; // rsi
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 *v52; // rax
  __int64 *v53; // rcx
  __int64 *v54; // rax
  unsigned __int8 v55; // [rsp+30h] [rbp-50h]
  __int64 *v56; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v57; // [rsp+40h] [rbp-40h]
  bool v58; // [rsp+48h] [rbp-38h]
  int v59; // [rsp+4Ch] [rbp-34h] BYREF
  int v60; // [rsp+50h] [rbp-30h] BYREF
  _OWORD v61[2]; // [rsp+58h] [rbp-28h] BYREF

  v3 = 0LL;
  v55 = a3;
  v4 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qqd(99LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3);
    a3 = v55;
  }
  v58 = a2 != 0;
  v8 = !a2 && !a3;
  v57 = (__int64 *)&v56;
  v56 = (__int64 *)&v56;
  if ( !v8 && !a3 )
    goto LABEL_7;
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v60 = -1;
    v14 = ndisMAllocateRequest(a2, 65806LL, 1LL, &v60, 4);
    v3 = v14;
    if ( !v14 )
      goto LABEL_16;
    v16 = v14 + 72;
    *(_BYTE *)v14 = -106;
    *(_BYTE *)(v14 + 1) = 1;
    *(_WORD *)(v14 + 2) = 248;
    *(_DWORD *)(v14 + 88) |= 2u;
    *(_QWORD *)(v14 + 104) = a2;
    if ( a2 )
    {
      LOBYTE(v15) = 6;
      ndisMReferenceOpen(a2, v15);
      *(_DWORD *)(v16 + 16) |= 0x200u;
    }
    else
    {
      *(_QWORD *)(v14 + 104) = &ndisIntReqRestore;
    }
    *(_DWORD *)(v16 + 16) |= 0x80000u;
    v17 = v57;
    if ( (__int64 **)*v57 != &v56 )
      __fastfail(3u);
    *(_QWORD *)(v16 + 8) = v57;
    *(_QWORD *)v16 = &v56;
    v6 = 1;
    *v17 = v16;
    v57 = (__int64 *)v16;
  }
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v18 = ndisMAllocateRequest(a2, 16843011LL, 1LL, 0LL, 0);
    v20 = v18;
    if ( !v18 )
      goto LABEL_15;
    v21 = v18 + 72;
    *(_BYTE *)v18 = -106;
    *(_BYTE *)(v18 + 1) = 1;
    *(_WORD *)(v18 + 2) = 248;
    *(_DWORD *)(v18 + 88) |= 2u;
    *(_QWORD *)(v18 + 104) = a2;
    if ( a2 )
    {
      LOBYTE(v19) = 6;
      ndisMReferenceOpen(a2, v19);
      *(_DWORD *)(v21 + 16) |= 0x200u;
    }
    else
    {
      *(_QWORD *)(v18 + 104) = &ndisIntReqRestore;
    }
    *(_DWORD *)(v21 + 16) |= 0x80000u;
    v22 = v57;
    v3 = v20;
    if ( (__int64 **)*v57 != &v56 )
      __fastfail(3u);
    *(_QWORD *)(v21 + 8) = v57;
    *(_QWORD *)v21 = &v56;
    *v22 = v21;
    ++v6;
    v57 = (__int64 *)v21;
  }
  v23 = *(_QWORD *)(a1 + 4152);
  if ( !v23 || *(_BYTE *)(v23 + 1) != 1 )
  {
LABEL_7:
    v9 = *(_DWORD *)(a1 + 1292) & 5;
    v59 = v9;
    if ( v58 )
    {
      v10 = *(__int64 **)(a2 + 496);
      if ( v10 )
      {
        while ( 1 )
        {
          if ( v10[3] == a2 )
          {
            v34 = *((_DWORD *)v10 + 14);
            if ( v34 + 24 < v34 )
              goto LABEL_15;
            v35 = *((_DWORD *)v10 + 16) + v34 + 24;
            if ( v35 < *((_DWORD *)v10 + 16) )
              goto LABEL_15;
            v36 = ndisMAllocateRequest(a2, 4244701444LL, 1LL, v10 + 6, v35);
            v38 = v36;
            if ( !v36 )
              goto LABEL_15;
            v39 = v36 + 72;
            *(_BYTE *)v36 = -106;
            *(_BYTE *)(v36 + 1) = 1;
            *(_WORD *)(v36 + 2) = 248;
            LOBYTE(v37) = 6;
            *(_DWORD *)(v36 + 88) |= 2u;
            *(_QWORD *)(v36 + 104) = a2;
            ndisMReferenceOpen(a2, v37);
            *(_DWORD *)(v39 + 16) |= 0x200u;
            *(_DWORD *)(v39 + 16) &= ~0x40000u;
            v40 = v57;
            if ( (__int64 **)*v57 != &v56 )
              __fastfail(3u);
            *(_QWORD *)(v39 + 8) = v57;
            *(_QWORD *)v39 = &v56;
            v3 = v38;
            *v40 = v39;
            v57 = (__int64 *)v39;
            ++v6;
          }
          v10 = (__int64 *)*v10;
          if ( !v10 )
            goto LABEL_74;
        }
      }
    }
    else
    {
      v41 = *(__int64 **)(a1 + 960);
      if ( v41 )
      {
        while ( *((_DWORD *)v41 + 14) < 0xFFFFFFE8 )
        {
          v42 = *((_DWORD *)v41 + 16) + *((_DWORD *)v41 + 14) + 24;
          if ( v42 < *((_DWORD *)v41 + 16) )
            break;
          v43 = ndisMAllocateRequest(0LL, 4244701443LL, 1LL, v41 + 6, v42);
          v45 = v43;
          if ( !v43 )
            break;
          v46 = v43 + 72;
          *(_BYTE *)v43 = -106;
          *(_BYTE *)(v43 + 1) = 1;
          *(_WORD *)(v43 + 2) = 248;
          *(_DWORD *)(v43 + 88) |= 2u;
          *(_QWORD *)(v43 + 104) = a2;
          if ( a2 )
          {
            LOBYTE(v44) = 6;
            ndisMReferenceOpen(a2, v44);
            *(_DWORD *)(v46 + 16) |= 0x200u;
          }
          else
          {
            *(_QWORD *)(v43 + 104) = &ndisIntReqRestore;
          }
          *(_DWORD *)(v46 + 16) |= 0xC0000u;
          v47 = v57;
          v3 = v45;
          if ( (__int64 **)*v57 != &v56 )
            __fastfail(3u);
          *(_QWORD *)(v46 + 8) = v57;
          *(_QWORD *)v46 = &v56;
          ++v6;
          *v47 = v46;
          v57 = (__int64 *)v46;
          v41 = (__int64 *)*v41;
          if ( !v41 )
          {
LABEL_74:
            v9 = v59;
            goto LABEL_9;
          }
        }
        goto LABEL_15;
      }
    }
LABEL_9:
    for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    {
      if ( a2 != i )
      {
        v9 |= *(_DWORD *)(i + 304);
        v59 = v9;
      }
    }
    if ( v9 != *(_DWORD *)(a1 + 1292) )
    {
      v48 = ndisMAllocateRequest(a2, 4244701446LL, 1LL, &v59, 4);
      v50 = v48;
      if ( v48 )
      {
        v51 = v48 + 72;
        *(_BYTE *)v48 = -106;
        *(_BYTE *)(v48 + 1) = 1;
        *(_WORD *)(v48 + 2) = 248;
        *(_DWORD *)(v48 + 88) |= 2u;
        *(_QWORD *)(v48 + 104) = a2;
        if ( a2 )
        {
          LOBYTE(v49) = 6;
          ndisMReferenceOpen(a2, v49);
          *(_DWORD *)(v51 + 16) |= 0x200u;
        }
        else
        {
          *(_QWORD *)(v48 + 104) = &ndisIntReqRestore;
        }
        *(_DWORD *)(v51 + 16) |= 0x80000u;
        v52 = v57;
        v3 = v50;
        if ( (__int64 **)*v57 != &v56 )
          __fastfail(3u);
        *(_QWORD *)(v51 + 8) = v57;
        *(_QWORD *)v51 = &v56;
        ++v6;
        *v52 = v51;
        v57 = (__int64 *)v51;
      }
    }
    goto LABEL_15;
  }
  v24 = *(_QWORD *)(a1 + 56);
  v25 = 0;
  memset(v61, 0, 28);
  v26 = 1;
  if ( !v24 )
  {
LABEL_54:
    if ( v25 != -88 )
    {
      LODWORD(v61[0]) = 1835432;
      if ( *(_BYTE *)(v23 + 728) == 0xA8
        && *(_BYTE *)(v23 + 729)
        && *(_WORD *)(v23 + 730) >= 0x1Cu
        && (*(_DWORD *)(v23 + 732) != 2 || *(_DWORD *)(v23 + 744) != 2) )
      {
        *(_QWORD *)((char *)v61 + 4) = *(_QWORD *)(v23 + 732);
        HIDWORD(v61[0]) = *(_DWORD *)(v23 + 740);
        *(_QWORD *)&v61[1] = *(_QWORD *)(v23 + 744);
        v28 = *(_DWORD *)(v23 + 752);
        DWORD1(v61[0]) = 2;
        LODWORD(v61[1]) = 2;
        DWORD2(v61[1]) = v28;
        v29 = ndisMAllocateRequest(a2, 16843018LL, 1LL, v61, 28);
        v31 = v29;
        if ( !v29 )
          goto LABEL_15;
        v32 = v29 + 72;
        *(_BYTE *)v29 = -106;
        *(_BYTE *)(v29 + 1) = 1;
        *(_WORD *)(v29 + 2) = 248;
        *(_DWORD *)(v29 + 88) |= 2u;
        *(_QWORD *)(v29 + 104) = a2;
        if ( a2 )
        {
          LOBYTE(v30) = 6;
          ndisMReferenceOpen(a2, v30);
          *(_DWORD *)(v32 + 16) |= 0x200u;
        }
        else
        {
          *(_QWORD *)(v29 + 104) = &ndisIntReqRestore;
        }
        *(_DWORD *)(v32 + 16) |= 0x80000u;
        v33 = v57;
        v3 = v31;
        if ( (__int64 **)*v57 != &v56 )
          __fastfail(3u);
        *(_QWORD *)(v32 + 8) = v57;
        *(_QWORD *)v32 = &v56;
        *v33 = v32;
        ++v6;
        v57 = (__int64 *)v32;
      }
    }
    goto LABEL_7;
  }
  while ( 1 )
  {
    v27 = *(_QWORD *)(v24 + 792);
    if ( !v27 || !*(_BYTE *)(v27 + 28) )
      goto LABEL_49;
    if ( !v26 )
    {
      v4 = ndisMergeEncapsulations(v27, v61);
      if ( v4 )
        goto LABEL_15;
      goto LABEL_49;
    }
    if ( *(_BYTE *)v27 != 0xA8 || !*(_BYTE *)(v27 + 1) || *(_WORD *)(v27 + 2) < 0x1Cu )
      break;
    v26 = 0;
    v61[0] = *(_OWORD *)v27;
    *(_QWORD *)&v61[1] = *(_QWORD *)(v27 + 16);
    DWORD2(v61[1]) = *(_DWORD *)(v27 + 24);
LABEL_49:
    v24 = *(_QWORD *)(v24 + 392);
    if ( !v24 )
      goto LABEL_52;
  }
  v4 = -1073741637;
LABEL_52:
  if ( !v4 )
  {
    v25 = v61[0];
    goto LABEL_54;
  }
LABEL_15:
  if ( v3 )
  {
    if ( v55 )
    {
      *(_DWORD *)(v3 + 88) |= 0x100u;
      *(_DWORD *)(a1 + 120) |= 0x1000000u;
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v56, v6) != 259 )
    {
      while ( 1 )
      {
        v53 = v56;
        if ( v56 == (__int64 *)&v56 )
          break;
        v54 = (__int64 *)*v56;
        if ( (__int64 **)v56[1] != &v56 || (__int64 *)v54[1] != v56 )
          __fastfail(3u);
        v56 = (__int64 *)*v56;
        v54[1] = (__int64)&v56;
        ExFreePoolWithTag(v53 - 9, 0);
      }
      goto LABEL_16;
    }
    v12 = 0;
  }
  else
  {
LABEL_16:
    v12 = -1073741823;
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(100LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, v12);
  return v12;
}
