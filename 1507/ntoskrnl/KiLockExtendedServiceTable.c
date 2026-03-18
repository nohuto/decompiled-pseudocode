/*
 * XREFs of KiLockExtendedServiceTable @ 0x14017B604
 * Callers:
 *     KiLockServiceTable @ 0x140153460 (KiLockServiceTable.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     RtlLookupFunctionTable @ 0x14012D42C (RtlLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x140133FD0 (RtlpConvertFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140134CBC (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x1401533B4 (RtlCaptureImageExceptionValues.c)
 *     RtlpSearchFunctionTable @ 0x140153C40 (RtlpSearchFunctionTable.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall KiLockExtendedServiceTable(
        ULONG_PTR BugCheckParameter1,
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        char a4)
{
  ULONG_PTR v4; // r10
  unsigned __int128 v7; // rax
  const char *v8; // rax
  unsigned __int64 v9; // r8
  _QWORD *v10; // r9
  unsigned int v11; // edx
  unsigned __int64 v12; // rbx
  unsigned __int64 i; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // r11
  _QWORD *v18; // r8
  char v19; // r11
  const char *v20; // rax
  ULONG_PTR v21; // r12
  ULONG_PTR v22; // r9
  __int64 v23; // rax
  ULONG_PTR v24; // rbx
  void **v25; // rax
  void *v26; // rcx
  char v27; // si
  PIMAGE_NT_HEADERS v28; // rax
  PIMAGE_NT_HEADERS v29; // rdi
  __int64 v30; // r12
  char *v31; // r8
  char *v32; // r10
  int v33; // r11d
  __int16 v34; // ax
  int v35; // r10d
  char *v36; // rdx
  char v37; // cl
  char v38; // al
  char *v39; // r9
  unsigned int v40; // edx
  char *v41; // r10
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // cl
  char v45; // al
  char *v46; // rdx
  int v47; // r10d
  char v48; // cl
  char v49; // al
  char *v50; // rdx
  int v51; // r10d
  char v52; // cl
  char v53; // al
  unsigned int v54; // r9d
  const char *v55; // rdx
  const char *v56; // rcx
  const char *j; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  int v60; // edx
  __int64 Size; // rcx
  __int64 VirtualAddress; // rax
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned __int64 v66; // r15
  __int64 *v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // r13
  __int64 v71; // r8
  __int64 v72; // rax
  unsigned int **v73; // r12
  int v74; // r15d
  unsigned int *v75; // rdi
  _BYTE *v76; // rbx
  __int64 v77; // rcx
  unsigned int v78; // r8d
  _QWORD *v79; // rdx
  unsigned __int64 v80; // rcx
  const char *v81; // rax
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  signed __int32 v86[8]; // [rsp+0h] [rbp-B9h] BYREF
  ULONG v87; // [rsp+30h] [rbp-89h] BYREF
  ULONG v88; // [rsp+34h] [rbp-85h] BYREF
  __int64 v89; // [rsp+38h] [rbp-81h] BYREF
  __int64 *v90; // [rsp+40h] [rbp-79h]
  char *v91; // [rsp+48h] [rbp-71h]
  _BYTE *v92; // [rsp+50h] [rbp-69h] BYREF
  __int64 v93; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v94; // [rsp+68h] [rbp-51h]
  __int64 v95; // [rsp+70h] [rbp-49h]
  __int64 *v96; // [rsp+78h] [rbp-41h]
  __int64 v97; // [rsp+80h] [rbp-39h] BYREF
  __int64 v98; // [rsp+88h] [rbp-31h] BYREF
  int v99; // [rsp+90h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+98h] [rbp-21h]
  int v101; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v102; // [rsp+A8h] [rbp-11h]
  __int128 v103; // [rsp+B8h] [rbp-1h]
  unsigned int *v104; // [rsp+C8h] [rbp+Fh] BYREF
  int v106; // [rsp+138h] [rbp+7Fh]

  v4 = (unsigned int)BugCheckParameter3;
  if ( a4 )
  {
    *(_QWORD *)&v7 = (unsigned int)_InterlockedCompareExchange(&dword_140323998, 1, 0);
    if ( !(_DWORD)v7 )
    {
      v8 = (const char *)BugCheckParameter1;
      v9 = (unsigned __int64)&qword_140323990;
      v10 = (_QWORD *)BugCheckParameter1;
      v11 = 4 * v4;
      v12 = (unsigned __int64)&qword_140323990 & 0x3F;
      for ( i = BugCheckParameter1 + (unsigned int)(4 * v4); (unsigned __int64)v8 < i; v8 += 64 )
        _mm_prefetch(v8, 0);
      if ( v11 >= 8 )
      {
        v14 = (unsigned __int64)v11 >> 3;
        do
        {
          v11 -= 8;
          v9 = __ROL8__(*v10++ ^ v9, v12);
          --v14;
        }
        while ( v14 );
      }
      for ( ; v11; --v11 )
      {
        v15 = *(unsigned __int8 *)v10;
        v10 = (_QWORD *)((char *)v10 + 1);
        v9 = __ROL8__(v15 ^ v9, v12);
      }
      v16 = v9 ^ qword_140323990;
      BugCheckParameter3a = v4;
      v17 = v9 ^ qword_140323990;
      v18 = BugCheckParameter2;
      v19 = v17 & 0x3F;
      v20 = (const char *)BugCheckParameter2;
      v21 = v4;
      if ( BugCheckParameter2 < (_QWORD *)((char *)BugCheckParameter2 + v4) )
      {
        do
        {
          _mm_prefetch(v20, 0);
          v20 += 64;
        }
        while ( v20 < (const char *)BugCheckParameter2 + v4 );
      }
      if ( (unsigned int)v4 >= 8 )
      {
        v22 = v4 >> 3;
        do
        {
          LODWORD(v4) = v4 - 8;
          v16 = __ROL8__(*v18++ ^ v16, v19);
          --v22;
        }
        while ( v22 );
      }
      for ( ; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
      {
        v23 = *(unsigned __int8 *)v18;
        v18 = (_QWORD *)((char *)v18 + 1);
        v16 = __ROL8__(v23 ^ v16, v19);
      }
      v24 = BugCheckParameter1 ^ v16 ^ v21;
      if ( !RtlLookupFunctionTable(BugCheckParameter1, &v97, &v99) )
        KeBugCheckEx(0x43u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, v21, 0LL);
      v106 = 0;
      qword_1403239B0[0] = v97;
      v25 = (void **)qword_1403239B0;
      v90 = qword_1403239B0;
      do
      {
        v26 = *v25;
        v89 = (__int64)v26;
        if ( !v26 )
          break;
        v27 = v24 & 0x3F;
        v28 = RtlImageNtHeader(v26);
        v29 = v28;
        if ( !v28 )
          KeBugCheckEx(0x43u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3a, 1uLL);
        v30 = v89;
        v31 = (char *)&v28->OptionalHeader + v28->FileHeader.SizeOfOptionalHeader;
        v32 = &v31[40 * v28->FileHeader.NumberOfSections];
        v91 = v32;
        do
        {
          v33 = 0;
          if ( (*((_DWORD *)v31 + 9) & 0x2000000) != 0
            || *(_DWORD *)v31 == 1414090313 && *((_DWORD *)v31 + 1) == 1195525195
            || *(_DWORD *)v31 == 1162297680
            && ((v34 = *((_WORD *)v31 + 2), v34 == 30583) || v34 == 29303 || v34 == 30839) )
          {
LABEL_48:
            v33 = 1;
          }
          else
          {
            v35 = 7;
            v36 = VfExcludeSections[0];
            v102 = *(_OWORD *)VfExcludeSections;
            v103 = *(_OWORD *)off_140323248;
            while ( 1 )
            {
              v37 = v36[v31 - VfExcludeSections[0]];
              v38 = *v36++;
              if ( v37 != v38 )
                break;
              if ( !--v35 )
              {
LABEL_47:
                v30 = v89;
                v32 = v91;
                goto LABEL_48;
              }
            }
            v39 = (char *)*((_QWORD *)&v102 + 1);
            v40 = 8;
            v41 = v31;
            while ( 1 )
            {
              v42 = *(_QWORD *)v41;
              v41 += 8;
              v43 = *(_QWORD *)v39;
              v39 += 8;
              if ( v42 != v43 )
                break;
              v40 -= 8;
              if ( v40 < 8 )
              {
                if ( !v40 )
                  goto LABEL_47;
                while ( 1 )
                {
                  v44 = *v41++;
                  v45 = *v39++;
                  if ( v44 != v45 )
                    goto LABEL_40;
                  if ( !--v40 )
                    goto LABEL_47;
                }
              }
            }
LABEL_40:
            v46 = (char *)v103;
            v47 = 4;
            while ( 1 )
            {
              v48 = v31[(_QWORD)v46 - v103];
              v49 = *v46++;
              if ( v48 != v49 )
                break;
              if ( !--v47 )
                goto LABEL_47;
            }
            v50 = (char *)*((_QWORD *)&v103 + 1);
            v51 = 6;
            while ( 1 )
            {
              v52 = v31[(_QWORD)v50 - *((_QWORD *)&v103 + 1)];
              v53 = *v50++;
              if ( v52 != v53 )
                break;
              if ( !--v51 )
                goto LABEL_47;
            }
            v30 = v89;
            v32 = v91;
          }
          v54 = *((_DWORD *)v31 + 2);
          if ( *((int *)v31 + 9) < 0 )
            v33 = 1;
          if ( *((_DWORD *)v31 + 4) > v54 )
            v54 = *((_DWORD *)v31 + 4);
          if ( !v33 )
          {
            v55 = (const char *)(v30 + *((unsigned int *)v31 + 3));
            v56 = &v55[v54];
            for ( j = v55; j < v56; j += 64 )
              _mm_prefetch(j, 0);
            if ( v54 >= 8 )
            {
              v58 = (unsigned __int64)v54 >> 3;
              do
              {
                v54 -= 8;
                v24 = __ROL8__(*(_QWORD *)v55 ^ v24, v27);
                v55 += 8;
                --v58;
              }
              while ( v58 );
            }
            for ( ; v54; --v54 )
            {
              v59 = *(unsigned __int8 *)v55++;
              v24 = __ROL8__(v59 ^ v24, v27);
            }
          }
          v31 += 40;
        }
        while ( v31 != v32 );
        v60 = v106;
        if ( !v106 )
        {
          Size = v29->OptionalHeader.DataDirectory[1].Size;
          if ( (unsigned int)Size >= 0x14 )
          {
            VirtualAddress = v29->OptionalHeader.DataDirectory[1].VirtualAddress;
            v63 = v30 + VirtualAddress + Size;
            v64 = VirtualAddress + v30;
            if ( VirtualAddress + v30 != v63 )
            {
              do
              {
                if ( !*(_DWORD *)(v64 + 12) )
                  break;
                v65 = *(unsigned int *)(v64 + 16);
                if ( !(_DWORD)v65 )
                  break;
                v66 = *(_QWORD *)(v65 + v30);
                if ( v66 && MmIsSessionAddress(*(_QWORD *)(v65 + v30)) && RtlLookupFunctionTable(v66, &v89, &v101) )
                {
                  v67 = qword_1403239B0;
                  v68 = 0LL;
                  while ( *v67 != v89 )
                  {
                    if ( !*v67 )
                    {
                      qword_1403239B0[v68] = v89;
                      break;
                    }
                    v68 = (unsigned int)(v68 + 1);
                    ++v67;
                    if ( (unsigned int)v68 >= 0x10 )
                      break;
                  }
                  if ( (_DWORD)v68 == 16 )
                    goto LABEL_81;
                }
                v64 += 20LL;
              }
              while ( v64 != v63 );
              v60 = 0;
            }
          }
        }
        v25 = (void **)(v90 + 1);
        v106 = v60 + 1;
        ++v90;
      }
      while ( (unsigned int)(v60 + 1) < 0x10 );
LABEL_81:
      *(_QWORD *)&v7 = memset(qword_1403239B0, 0, sizeof(qword_1403239B0));
      if ( v24 == qword_140323990 || !v24 )
      {
        *(_QWORD *)&v7 = 0x95EA5DE843D5D824uLL;
        v24 ^= 0x95EA5DE843D5D824uLL;
      }
      _InterlockedOr(v86, 0);
      qword_140323990 = v24;
    }
  }
  else
  {
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v98, &v88);
    v88 /= 0xCu;
    v69 = (unsigned __int64)&qword_1403239A0;
    v104 = RtlpSearchFunctionTable(v98, v88, (__int64)&SwapContext, 0x140000000LL);
    v70 = (unsigned __int64)&qword_1403239A0 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v93, &v87);
    v71 = v93;
    v94 = 0x140000000uLL;
    v87 /= 0xCu;
    v95 = v93 + 12LL * v87;
    v96 = (__int64 *)&v92;
    while ( v71 && v71 != v95 )
    {
      v72 = RtlpConvertFunctionEntry(v71, v94);
      v73 = &v104;
      *v96 = v72;
      v93 += 12LL;
      v74 = 0;
      while ( 1 )
      {
        v75 = *v73;
        v76 = RtlpLookupPrimaryFunctionEntry(v92, 0x140000000LL, 0x140000000LL + *(unsigned int *)v92);
        if ( *(_DWORD *)v76 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v75, 0x140000000LL, 0x140000000LL + *v75) )
          break;
        ++v74;
        ++v73;
        if ( v74 )
        {
          v77 = *(unsigned int *)v92;
          v78 = *((_DWORD *)v92 + 1) - v77;
          v79 = (_QWORD *)(0x140000000LL + v77);
          v80 = 0x140000000LL + v77 + v78;
          v81 = (const char *)v79;
          if ( (unsigned __int64)v79 < v80 )
          {
            do
            {
              _mm_prefetch(v81, 0);
              v81 += 64;
            }
            while ( (unsigned __int64)v81 < v80 );
          }
          if ( v78 >= 8 )
          {
            v82 = (unsigned __int64)v78 >> 3;
            do
            {
              v78 -= 8;
              v69 = __ROL8__(*v79++ ^ v69, v70);
              --v82;
            }
            while ( v82 );
          }
          for ( ; v78; --v78 )
          {
            v83 = *(unsigned __int8 *)v79;
            v79 = (_QWORD *)((char *)v79 + 1);
            v69 = __ROL8__(v83 ^ v69, v70);
          }
          break;
        }
      }
      v71 = v93;
    }
    qword_1403239A0 = v69;
    if ( qword_140323990 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v84 = __rdtsc();
    v7 = (__ROR8__(v84, 3) ^ v84) * (unsigned __int128)0x7010008004002001uLL;
    qword_140323990 = v7 ^ *((_QWORD *)&v7 + 1);
    if ( (unsigned __int64)v7 == *((_QWORD *)&v7 + 1) )
    {
      *(_QWORD *)&v7 = 0x95EA5DE843D5D824uLL;
      qword_140323990 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v7;
}
