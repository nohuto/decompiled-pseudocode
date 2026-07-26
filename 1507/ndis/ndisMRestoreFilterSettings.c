/*
 * XREFs of ndisMRestoreFilterSettings @ 0x1C00413D4
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C005A9DC (ndisMResetCompleteStage1.c)
 *     ndisMKillOpen @ 0x1C00E6E7C (ndisMKillOpen.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0018F9C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMergeEncapsulations @ 0x1C001E224 (ndisMergeEncapsulations.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisMAllocateRequest @ 0x1C00408E4 (ndisMAllocateRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00435B8 (ndisQueueRestoreRequestsOnTop.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _DWORD *v3; // r15
  int v4; // r14d
  unsigned int v6; // r12d
  bool v8; // al
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 ***v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  _DWORD *v14; // rbx
  __int64 ***v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  char v18; // al
  char v19; // bl
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // rax
  _DWORD *v23; // rsi
  _DWORD *v24; // rbx
  __int64 ***v25; // rax
  int v26; // eax
  __int64 *v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  _DWORD *v30; // rax
  _DWORD *v31; // r14
  _DWORD *v32; // rsi
  __int64 ***v33; // rax
  __int64 i; // rcx
  __int64 *v35; // rsi
  unsigned int v36; // ecx
  _DWORD *v37; // rax
  _DWORD *v38; // r14
  _DWORD *v39; // rbx
  __int64 ***v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rsi
  _DWORD *v43; // rbx
  __int64 ***v44; // rax
  __int64 *v45; // rcx
  __int64 *v46; // rax
  unsigned int v47; // ebx
  unsigned __int8 v49; // [rsp+30h] [rbp-50h]
  __int64 *v50; // [rsp+38h] [rbp-48h] BYREF
  __int64 **v51; // [rsp+40h] [rbp-40h]
  bool v52; // [rsp+48h] [rbp-38h]
  int v53; // [rsp+4Ch] [rbp-34h] BYREF
  int v54; // [rsp+50h] [rbp-30h] BYREF
  _OWORD v55[2]; // [rsp+58h] [rbp-28h] BYREF

  v3 = 0LL;
  v49 = a3;
  v4 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qqd(99LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, a3);
    a3 = v49;
  }
  v52 = a2 != 0LL;
  v8 = !a2 && !a3;
  v51 = &v50;
  v50 = (__int64 *)&v50;
  if ( !v8 && !a3 )
    goto LABEL_54;
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v54 = -1;
    v9 = ndisMAllocateRequest(a2, 65806, 1, &v54, 4u);
    v3 = v9;
    if ( !v9 )
      goto LABEL_99;
    v10 = v9 + 18;
    *(_BYTE *)v9 = -106;
    *((_BYTE *)v9 + 1) = 1;
    *((_WORD *)v9 + 1) = 248;
    v9[22] |= 2u;
    *((_QWORD *)v9 + 13) = a2;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      v10[4] |= 0x200u;
    }
    else
    {
      *((_QWORD *)v9 + 13) = &ndisIntReqRestore;
    }
    v10[4] |= 0x80000u;
    v11 = (__int64 ***)v51;
    *(_QWORD *)v10 = &v50;
    *((_QWORD *)v10 + 1) = v11;
    if ( *v11 != &v50 )
      __fastfail(3u);
    *v11 = (__int64 **)v10;
    v6 = 1;
    v51 = (__int64 **)v10;
  }
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v12 = ndisMAllocateRequest(a2, 16843011, 1, 0LL, 0);
    v13 = v12;
    if ( !v12 )
      goto LABEL_89;
    v14 = v12 + 18;
    *(_BYTE *)v12 = -106;
    *((_BYTE *)v12 + 1) = 1;
    *((_WORD *)v12 + 1) = 248;
    v12[22] |= 2u;
    *((_QWORD *)v12 + 13) = a2;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      v14[4] |= 0x200u;
    }
    else
    {
      *((_QWORD *)v12 + 13) = &ndisIntReqRestore;
    }
    v14[4] |= 0x80000u;
    v15 = (__int64 ***)v51;
    v3 = v13;
    *(_QWORD *)v14 = &v50;
    *((_QWORD *)v14 + 1) = v15;
    if ( *v15 != &v50 )
      __fastfail(3u);
    *v15 = (__int64 **)v14;
    ++v6;
    v51 = (__int64 **)v14;
  }
  v16 = *(_QWORD *)(a1 + 4152);
  if ( !v16 || *(_BYTE *)(v16 + 1) != 1 )
  {
LABEL_54:
    v26 = *(_DWORD *)(a1 + 1292) & 5;
    v53 = v26;
    if ( v52 )
    {
      v27 = (__int64 *)a2[62];
      if ( v27 )
      {
        while ( 1 )
        {
          if ( (_QWORD *)v27[3] == a2 )
          {
            v28 = *((_DWORD *)v27 + 14);
            if ( v28 + 24 < v28 )
              goto LABEL_89;
            v29 = *((_DWORD *)v27 + 16) + v28 + 24;
            if ( v29 < *((_DWORD *)v27 + 16) )
              goto LABEL_89;
            v30 = ndisMAllocateRequest(a2, -50265852, 1, v27 + 6, v29);
            v31 = v30;
            if ( !v30 )
              goto LABEL_89;
            v32 = v30 + 18;
            *(_BYTE *)v30 = -106;
            *((_BYTE *)v30 + 1) = 1;
            *((_WORD *)v30 + 1) = 248;
            v30[22] |= 2u;
            *((_QWORD *)v30 + 13) = a2;
            ndisMReferenceOpen((__int64)a2, 6u);
            v32[4] |= 0x200u;
            v32[4] &= ~0x40000u;
            v33 = (__int64 ***)v51;
            *(_QWORD *)v32 = &v50;
            *((_QWORD *)v32 + 1) = v33;
            if ( *v33 != &v50 )
              __fastfail(3u);
            *v33 = (__int64 **)v32;
            v3 = v31;
            v51 = (__int64 **)v32;
            ++v6;
          }
          v27 = (__int64 *)*v27;
          if ( !v27 )
            goto LABEL_63;
        }
      }
    }
    else
    {
      v35 = *(__int64 **)(a1 + 960);
      if ( v35 )
      {
        while ( *((_DWORD *)v35 + 14) < 0xFFFFFFE8 )
        {
          v36 = *((_DWORD *)v35 + 16) + *((_DWORD *)v35 + 14) + 24;
          if ( v36 < *((_DWORD *)v35 + 16) )
            break;
          v37 = ndisMAllocateRequest(0LL, -50265853, 1, v35 + 6, v36);
          v38 = v37;
          if ( !v37 )
            break;
          v39 = v37 + 18;
          *(_BYTE *)v37 = -106;
          *((_BYTE *)v37 + 1) = 1;
          *((_WORD *)v37 + 1) = 248;
          v37[22] |= 2u;
          *((_QWORD *)v37 + 13) = a2;
          if ( a2 )
          {
            ndisMReferenceOpen((__int64)a2, 6u);
            v39[4] |= 0x200u;
          }
          else
          {
            *((_QWORD *)v37 + 13) = &ndisIntReqRestore;
          }
          v39[4] |= 0xC0000u;
          v40 = (__int64 ***)v51;
          v3 = v38;
          *(_QWORD *)v39 = &v50;
          *((_QWORD *)v39 + 1) = v40;
          if ( *v40 != &v50 )
            __fastfail(3u);
          *v40 = (__int64 **)v39;
          ++v6;
          v51 = (__int64 **)v39;
          v35 = (__int64 *)*v35;
          if ( !v35 )
          {
LABEL_63:
            v26 = v53;
            goto LABEL_64;
          }
        }
        goto LABEL_89;
      }
    }
LABEL_64:
    for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
    {
      if ( a2 != (_QWORD *)i )
      {
        v26 |= *(_DWORD *)(i + 304);
        v53 = v26;
      }
    }
    if ( v26 != *(_DWORD *)(a1 + 1292) )
    {
      v41 = ndisMAllocateRequest(a2, -50265850, 1, &v53, 4u);
      v42 = v41;
      if ( v41 )
      {
        v43 = v41 + 18;
        *(_BYTE *)v41 = -106;
        *((_BYTE *)v41 + 1) = 1;
        *((_WORD *)v41 + 1) = 248;
        v41[22] |= 2u;
        *((_QWORD *)v41 + 13) = a2;
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2, 6u);
          v43[4] |= 0x200u;
        }
        else
        {
          *((_QWORD *)v41 + 13) = &ndisIntReqRestore;
        }
        v43[4] |= 0x80000u;
        v44 = (__int64 ***)v51;
        v3 = v42;
        *(_QWORD *)v43 = &v50;
        *((_QWORD *)v43 + 1) = v44;
        if ( *v44 != &v50 )
          __fastfail(3u);
        *v44 = (__int64 **)v43;
        ++v6;
        v51 = (__int64 **)v43;
      }
    }
    goto LABEL_89;
  }
  v17 = *(_QWORD *)(a1 + 56);
  v18 = 0;
  memset(v55, 0, 28);
  v19 = 1;
  if ( !v17 )
  {
LABEL_41:
    if ( v18 != -88 )
    {
      LODWORD(v55[0]) = 1835432;
      if ( *(_BYTE *)(v16 + 728) == 0xA8
        && *(_BYTE *)(v16 + 729)
        && *(_WORD *)(v16 + 730) >= 0x1Cu
        && (*(_DWORD *)(v16 + 732) != 2 || *(_DWORD *)(v16 + 744) != 2) )
      {
        *(_QWORD *)((char *)v55 + 4) = *(_QWORD *)(v16 + 732);
        HIDWORD(v55[0]) = *(_DWORD *)(v16 + 740);
        *(_QWORD *)&v55[1] = *(_QWORD *)(v16 + 744);
        v21 = *(_DWORD *)(v16 + 752);
        DWORD1(v55[0]) = 2;
        LODWORD(v55[1]) = 2;
        DWORD2(v55[1]) = v21;
        v22 = ndisMAllocateRequest(a2, 16843018, 1, v55, 0x1Cu);
        v23 = v22;
        if ( !v22 )
          goto LABEL_89;
        v24 = v22 + 18;
        *(_BYTE *)v22 = -106;
        *((_BYTE *)v22 + 1) = 1;
        *((_WORD *)v22 + 1) = 248;
        v22[22] |= 2u;
        *((_QWORD *)v22 + 13) = a2;
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2, 6u);
          v24[4] |= 0x200u;
        }
        else
        {
          *((_QWORD *)v22 + 13) = &ndisIntReqRestore;
        }
        v24[4] |= 0x80000u;
        v25 = (__int64 ***)v51;
        v3 = v23;
        *(_QWORD *)v24 = &v50;
        *((_QWORD *)v24 + 1) = v25;
        if ( *v25 != &v50 )
          __fastfail(3u);
        *v25 = (__int64 **)v24;
        ++v6;
        v51 = (__int64 **)v24;
      }
    }
    goto LABEL_54;
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)(v17 + 792);
    if ( !v20 || !*(_BYTE *)(v20 + 28) )
      goto LABEL_36;
    if ( !v19 )
    {
      v4 = ndisMergeEncapsulations(v20, v55);
      if ( v4 )
        goto LABEL_89;
      goto LABEL_36;
    }
    if ( *(_BYTE *)v20 != 0xA8 || !*(_BYTE *)(v20 + 1) || *(_WORD *)(v20 + 2) < 0x1Cu )
      break;
    v19 = 0;
    v55[0] = *(_OWORD *)v20;
    *(_QWORD *)&v55[1] = *(_QWORD *)(v20 + 16);
    DWORD2(v55[1]) = *(_DWORD *)(v20 + 24);
LABEL_36:
    v17 = *(_QWORD *)(v17 + 392);
    if ( !v17 )
      goto LABEL_39;
  }
  v4 = -1073741637;
LABEL_39:
  if ( !v4 )
  {
    v18 = v55[0];
    goto LABEL_41;
  }
LABEL_89:
  if ( v3 )
  {
    if ( v49 )
    {
      v3[22] |= 0x100u;
      *(_DWORD *)(a1 + 120) |= 0x1000000u;
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v50, v6) != 259 )
    {
      while ( 1 )
      {
        v45 = v50;
        if ( v50 == (__int64 *)&v50 )
          break;
        v46 = (__int64 *)*v50;
        if ( (__int64 **)v50[1] != &v50 || (__int64 *)v46[1] != v50 )
          __fastfail(3u);
        v50 = (__int64 *)*v50;
        v46[1] = (__int64)&v50;
        ExFreePoolWithTag(v45 - 9, 0);
      }
      goto LABEL_99;
    }
    v47 = 0;
  }
  else
  {
LABEL_99:
    v47 = -1073741823;
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0x64u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, v47);
  return v47;
}
