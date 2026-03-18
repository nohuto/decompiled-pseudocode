/*
 * XREFs of ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00E3A18
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 * Callees:
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0058854 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_SYSTEM_DATA@@PEBU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E2270 (--$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAV.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_USE_DATA@@PEBU_CIT_USE_DATA@@@Z @ 0x1C00E2384 (--$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONT.c)
 *     ?AdvanceToNext@?$CIT_PERSISTED_SECTION@UCIT_PERSISTED_USE_DATA@@@@QEAAXXZ @ 0x1C00E27E4 (-AdvanceToNext@-$CIT_PERSISTED_SECTION@UCIT_PERSISTED_USE_DATA@@@@QEAAXXZ.c)
 *     ?CitPersistedDataComputeCrc@@YAIPEBXI@Z @ 0x1C00E283C (-CitPersistedDataComputeCrc@@YAIPEBXI@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpSavedDataPrepare(
        const struct _CIT_IMPACT_CONTEXT *a1,
        union _LARGE_INTEGER **a2,
        unsigned int *a3)
{
  unsigned int v3; // esi
  const struct _CIT_IMPACT_CONTEXT *v4; // r12
  int v5; // r11d
  DWORD v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const char *v12; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // r13d
  unsigned int v15; // edi
  int v16; // r8d
  union _LARGE_INTEGER *v17; // rax
  union _LARGE_INTEGER *v18; // r15
  int v19; // ecx
  int v20; // eax
  union _LARGE_INTEGER *v21; // rdx
  _DWORD *v22; // r9
  UINT v23; // edx
  _DWORD *v24; // r9
  UINT v25; // r15d
  unsigned int *QuadPart; // r11
  void *v27; // rcx
  unsigned int v28; // r10d
  DWORD v29; // r8d
  unsigned int v30; // r13d
  __int64 v31; // r14
  unsigned int *v32; // r12
  __int64 v33; // rax
  int v34; // edi
  unsigned int v35; // edi
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // edi
  unsigned int v39; // edi
  unsigned int v40; // eax
  _DWORD *v41; // rcx
  _DWORD *v42; // r9
  unsigned int v44; // [rsp+20h] [rbp-E0h]
  char *v45; // [rsp+20h] [rbp-E0h]
  union _LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD *v47; // [rsp+30h] [rbp-D0h]
  int v48; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h]
  _DWORD v50[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  char *v52; // [rsp+58h] [rbp-A8h]
  unsigned int v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  char *v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  char *v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  char *v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h]
  char *v65; // [rsp+C8h] [rbp-38h]
  int v66; // [rsp+D8h] [rbp-28h]
  unsigned int v67; // [rsp+DCh] [rbp-24h]
  void *v68; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v69; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v70; // [rsp+F0h] [rbp-10h]
  union _LARGE_INTEGER *v71; // [rsp+F8h] [rbp-8h]
  DWORD LowPart; // [rsp+10Ch] [rbp+Ch]
  union _LARGE_INTEGER v73; // [rsp+110h] [rbp+10h]
  int v74; // [rsp+124h] [rbp+24h]
  union _LARGE_INTEGER *v75; // [rsp+128h] [rbp+28h]
  union _LARGE_INTEGER *v76; // [rsp+140h] [rbp+40h]
  union _LARGE_INTEGER SystemTime; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = 0;
  v4 = a1;
  v54 = 0LL;
  v55 = 0LL;
  v5 = 0;
  v56 = 0LL;
  v6 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  if ( dword_1C0101F8C )
  {
    v7 = dword_1C0101F8C;
    v8 = *((_QWORD *)a1 + 38) + 35LL;
    do
    {
      if ( *(_BYTE *)(v8 - 1) || *(_BYTE *)v8 )
      {
        ++v6;
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(*(_QWORD *)(v8 + 5) + 2 * v9) );
        v10 = *(_QWORD *)(v8 + 13);
        v5 += 2 * v9 + 2;
        if ( v10 )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( *(_WORD *)(v10 + 2 * v11) );
          v5 += 2 * v11 + 2;
        }
      }
      v8 += 168LL;
      --v7;
    }
    while ( v7 );
  }
  v52 = 0LL;
  v70 = 16 * v6 + 112;
  SystemTime.QuadPart = (v70 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
  v50[0] = (16 * v6 + 115) & 0xFFFFFFFC;
  v51 = 24 * (v6 + 1) + SystemTime.LowPart;
  v50[1] = 24 * (v6 + 1);
  LocalTime.QuadPart = ((unsigned int)v51 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v12 = (const char *)(8 * (v6 + 7));
  HIDWORD(v54) = (_DWORD)v12;
  HIDWORD(v63) = uMultiplier * (v6 + 7);
  v69 = 28 * v6 + LocalTime.LowPart;
  v49 = (v69 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
  LODWORD(v54) = (v69 + 3) & 0xFFFFFFFC;
  LODWORD(v55) = (_DWORD)v12 + v49;
  v13 = ((_DWORD)v12 + v49 + 3) & 0xFFFFFFFC;
  HIDWORD(v57) = 8 * (6 * (v6 + 1) + 11);
  LODWORD(v57) = v13;
  LODWORD(v58) = HIDWORD(v57) + v13;
  v14 = (HIDWORD(v57) + v13 + 1) & 0xFFFFFFFE;
  HIDWORD(v60) = 2 * (12 * (v6 + 1) + 14);
  LODWORD(v60) = v14;
  LODWORD(v61) = HIDWORD(v60) + v14;
  v44 = (HIDWORD(v60) + v14 + 1) & 0xFFFFFFFE;
  v66 = v5 + v44;
  v47 = (_DWORD *)(v5 + v44);
  LODWORD(v63) = v5 + v44;
  v15 = (_DWORD)v47 + HIDWORD(v63);
  v53 = (_DWORD)v47 + HIDWORD(v63);
  LODWORD(v64) = (_DWORD)v47 + HIDWORD(v63);
  if ( (unsigned int)((_DWORD)v47 + HIDWORD(v63)) >= 0x400000 )
  {
    v3 = -1073739516;
    v16 = 4413;
LABEL_14:
    CitpLogFailureWorker(v3, v12, v16);
    return v3;
  }
  v17 = (union _LARGE_INTEGER *)CitAllocZero(v15);
  v71 = v17;
  v18 = v17;
  if ( !v17 )
  {
    v3 = -1073741670;
    v16 = 4424;
    goto LABEL_14;
  }
  HIDWORD(v51) = SystemTime.LowPart;
  v76 = v17 + 11;
  v75 = v17 + 14;
  v52 = (char *)v17 + SystemTime.LowPart;
  LowPart = LocalTime.LowPart;
  v73.QuadPart = (LONGLONG)v17 + LocalTime.LowPart;
  HIDWORD(v55) = v49;
  v56 = (char *)v17 + (unsigned int)v49;
  v67 = (HIDWORD(v60) + v14 + 1) & 0xFFFFFFFE;
  v17->LowPart = 786442;
  v17->HighPart = v15;
  v74 = 112;
  v59 = (char *)v17 + v13;
  HIDWORD(v58) = v13;
  v62 = (char *)v17 + v14;
  v68 = (char *)v17 + v44;
  HIDWORD(v64) = (_DWORD)v47;
  v65 = (char *)v17 + (unsigned int)v47;
  HIDWORD(v61) = v14;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  v19 = -1;
  v18[1] = LocalTime;
  v18[10].LowPart = 88;
  v18[7].QuadPart = qword_1C0101FF8;
  v18[6] = *(union _LARGE_INTEGER *)((char *)v4 + 560);
  v20 = -1;
  if ( qword_1C0101FA0 / 0x989680uLL <= 0xFFFFFFFF )
    v20 = qword_1C0101FA0 / 0x989680uLL;
  v18[8].LowPart = v20;
  if ( qword_1C0101FA8 / 0x989680uLL <= 0xFFFFFFFF )
    v19 = qword_1C0101FA8 / 0x989680uLL;
  v21 = v76;
  v18[8].HighPart = v19;
  v18[9].LowPart = uMultiplier;
  v18[9].HighPart = dword_1C0101F8C;
  v18[4].LowPart = 24;
  v18[4].HighPart = 88;
  CitpBaseDataOutput<CIT_PERSISTED_SYSTEM_DATA,_CIT_SYSTEM_DATA>((__int64)&v54, v21, (unsigned int *)v4);
  v18[5].HighPart = v50[0];
  v18[5].LowPart = 24;
  CIT_PERSISTED_SECTION<CIT_PERSISTED_USE_DATA>::AdvanceToNext((__int64)v50);
  CitpBaseDataOutput<CIT_PERSISTED_USE_DATA,_CIT_USE_DATA>((__int64)&v54, v22, (__int64)v4 + 216, (__int64)v22);
  v18[2].HighPart = 16;
  v18[3].LowPart = v6;
  v18[3].HighPart = 112;
  v23 = dword_1C0101F8C;
  if ( dword_1C0101F8C )
  {
    v24 = v75;
    v25 = 0;
    QuadPart = (unsigned int *)v73.QuadPart;
    v27 = v68;
    v28 = v74;
    v29 = LowPart;
    v30 = v67;
    v49 = (unsigned __int64)v75;
    LocalTime = v73;
    v45 = (char *)v68;
    v48 = v74;
    SystemTime.LowPart = LowPart;
    do
    {
      v31 = *((_QWORD *)v4 + 38) + 168LL * v25;
      if ( *(_BYTE *)(v31 + 34) || *(_BYTE *)(v31 + 35) )
      {
        v47 = v24;
        if ( (unsigned __int64)v28 + 16 <= v70 )
        {
          v49 = (unsigned __int64)(v24 + 4);
          v48 = v28 + 16;
        }
        v32 = QuadPart;
        *v24 = v29;
        v24[2] = 28;
        if ( (unsigned __int64)v29 + 28 <= v69 )
        {
          LocalTime.QuadPart = (LONGLONG)(QuadPart + 7);
          SystemTime.LowPart = v29 + 28;
        }
        QuadPart[4] = *(_DWORD *)(v31 + 64);
        QuadPart[5] = *(_DWORD *)(v31 + 68);
        QuadPart[6] = *(_DWORD *)(v31 + 72);
        v33 = -1LL;
        *QuadPart = v30;
        do
          ++v33;
        while ( *(_WORD *)(*(_QWORD *)(v31 + 40) + 2 * v33) );
        v34 = v66;
        QuadPart[1] = v33;
        v35 = v34 - v30;
        v36 = 2 * v33 + 2;
        if ( v36 < v35 )
          v35 = v36;
        memmove(v27, *(const void **)(v31 + 40), v35);
        v45 += v35;
        v30 += v35;
        if ( *(_QWORD *)(v31 + 48) )
        {
          v32[2] = v30;
          v37 = -1LL;
          do
            ++v37;
          while ( *(_WORD *)(*(_QWORD *)(v31 + 48) + 2 * v37) );
          v38 = v66;
          v32[3] = v37;
          v39 = v38 - v30;
          v40 = 2 * v37 + 2;
          if ( v40 < v39 )
            v39 = v40;
          memmove(v45, *(const void **)(v31 + 48), v39);
          v30 += v39;
          v45 += v39;
        }
        v41 = v47;
        v47[1] = HIDWORD(v51);
        v41[3] = 24;
        CIT_PERSISTED_SECTION<CIT_PERSISTED_USE_DATA>::AdvanceToNext((__int64)v50);
        CitpBaseDataOutput<CIT_PERSISTED_USE_DATA,_CIT_USE_DATA>((__int64)&v54, v42, v31 + 80, (__int64)v42);
        v23 = dword_1C0101F8C;
        v27 = v45;
        v29 = SystemTime.LowPart;
        v24 = (_DWORD *)v49;
        v28 = v48;
        QuadPart = (unsigned int *)LocalTime.QuadPart;
        v4 = a1;
      }
      ++v25;
    }
    while ( v25 < v23 );
    v18 = v71;
    v15 = v53;
  }
  v18[2].LowPart = CitPersistedDataComputeCrc((PUCHAR)v18, v15);
  *a3 = v15;
  *a2 = v18;
  return v3;
}
