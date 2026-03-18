/*
 * XREFs of KiLockExtendedServiceTable @ 0x14014D5A8
 * Callers:
 *     KiLockServiceTable @ 0x140123C84 (KiLockServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x14001A844 (RtlCaptureImageExceptionValues.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     RtlpConvertFunctionEntry @ 0x1400DD150 (RtlpConvertFunctionEntry.c)
 *     RtlLookupFunctionTable @ 0x1400F1248 (RtlLookupFunctionTable.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KiLockExtendedServiceTable(
        const char *BugCheckParameter1,
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        char a4)
{
  ULONG_PTR v4; // r10
  ULONG_PTR v6; // r13
  unsigned __int128 v7; // rax
  const char *v8; // rax
  unsigned __int64 v9; // r8
  const char *v10; // r9
  unsigned int v11; // edx
  unsigned __int64 v12; // rbx
  unsigned __int64 i; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // cl
  _QWORD *v18; // r8
  char v19; // cl
  const char *v20; // rax
  ULONG_PTR v21; // rsi
  ULONG_PTR v22; // r9
  __int64 v23; // rax
  __int64 v24; // rbx
  void **v25; // rax
  void *v26; // rcx
  char v27; // r14
  PIMAGE_NT_HEADERS v28; // rax
  PIMAGE_NT_HEADERS v29; // rsi
  __int64 v30; // r12
  char *v31; // r9
  char *v32; // r13
  int v33; // r11d
  int v34; // ecx
  __int16 v35; // ax
  int v36; // r8d
  char *v37; // rdx
  char v38; // cl
  char v39; // al
  char *v40; // r8
  unsigned int v41; // edx
  char *v42; // r10
  __int64 v43; // rcx
  __int64 v44; // rax
  char v45; // cl
  char v46; // al
  char *v47; // rdx
  int v48; // r10d
  char v49; // cl
  char v50; // al
  char *v51; // rdx
  int v52; // r10d
  char v53; // cl
  char v54; // al
  unsigned int v55; // r8d
  const char *v56; // rdx
  const char *v57; // rcx
  const char *j; // rax
  unsigned __int64 v59; // r10
  __int64 v60; // rax
  int v61; // edx
  __int64 Size; // rcx
  __int64 VirtualAddress; // rax
  __int64 v64; // r15
  __int64 v65; // rsi
  __int64 v66; // rax
  unsigned __int64 v67; // r14
  __int64 *v68; // rax
  __int64 v69; // rcx
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // rsi
  __int64 v72; // r9
  unsigned __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned int v77; // edx
  _QWORD *v78; // r8
  unsigned __int64 v79; // rcx
  const char *v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  signed __int32 v85[6]; // [rsp+8h] [rbp-99h] BYREF
  __int64 v86; // [rsp+38h] [rbp-69h] BYREF
  ULONG v87; // [rsp+40h] [rbp-61h] BYREF
  __int64 *v88; // [rsp+48h] [rbp-59h]
  __int64 v89; // [rsp+50h] [rbp-51h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+58h] [rbp-49h]
  int v91; // [rsp+60h] [rbp-41h] BYREF
  unsigned int *v92; // [rsp+68h] [rbp-39h] BYREF
  __int64 v93; // [rsp+80h] [rbp-21h] BYREF
  unsigned __int64 v94; // [rsp+88h] [rbp-19h]
  __int64 v95; // [rsp+90h] [rbp-11h]
  __int64 *v96; // [rsp+98h] [rbp-9h]
  int v97; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v98; // [rsp+A8h] [rbp+7h]
  __int128 v99; // [rsp+B8h] [rbp+17h]
  int v102; // [rsp+120h] [rbp+7Fh]

  v4 = (unsigned int)BugCheckParameter3;
  v6 = (ULONG_PTR)BugCheckParameter1;
  if ( a4 )
  {
    *(_QWORD *)&v7 = (unsigned int)_InterlockedCompareExchange(&dword_1402D4878, 1, 0);
    if ( !(_DWORD)v7 )
    {
      v8 = BugCheckParameter1;
      v9 = (unsigned __int64)&qword_1402D4870;
      v10 = BugCheckParameter1;
      v11 = 4 * v4;
      v12 = (unsigned __int64)&qword_1402D4870 & 0x3F;
      for ( i = (unsigned __int64)&BugCheckParameter1[(unsigned int)(4 * v4)]; (unsigned __int64)v8 < i; v8 += 64 )
        _mm_prefetch(v8, 0);
      if ( v11 >= 8 )
      {
        v14 = (unsigned __int64)v11 >> 3;
        do
        {
          v9 = __ROL8__(*(_QWORD *)v10 ^ v9, v12);
          v10 += 8;
          v11 -= 8;
          --v14;
        }
        while ( v14 );
      }
      for ( ; v11; --v11 )
      {
        v15 = *(unsigned __int8 *)v10++;
        v9 = __ROL8__(v15 ^ v9, v12);
      }
      v16 = v9 ^ qword_1402D4870;
      BugCheckParameter3a = v4;
      v17 = v9 ^ qword_1402D4870;
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
      v24 = v6 ^ v16 ^ v21;
      if ( !RtlLookupFunctionTable(v6, &v89, &v97) )
        KeBugCheckEx(0x43u, v6, (ULONG_PTR)BugCheckParameter2, v21, 0LL);
      v102 = 0;
      qword_1402D4890[0] = v89;
      v25 = (void **)qword_1402D4890;
      v88 = qword_1402D4890;
      do
      {
        v26 = *v25;
        v86 = (__int64)v26;
        if ( !v26 )
          break;
        v27 = v24 & 0x3F;
        v28 = RtlImageNtHeader(v26);
        v29 = v28;
        if ( !v28 )
          KeBugCheckEx(0x43u, v6, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3a, 1uLL);
        v30 = v86;
        v31 = (char *)&v28->OptionalHeader + v28->FileHeader.SizeOfOptionalHeader;
        v32 = &v31[40 * v28->FileHeader.NumberOfSections];
        do
        {
          v33 = 0;
          if ( (*((_DWORD *)v31 + 9) & 0x2000000) != 0
            || (v34 = *(_DWORD *)v31, *(_DWORD *)v31 == 1414090313) && *((_DWORD *)v31 + 1) == 1195525195
            || v34 == 1162297680 && ((v35 = *((_WORD *)v31 + 2), v35 == 30583) || v35 == 29303 || v35 == 30839)
            || v34 == 1095914053 && *((_WORD *)v31 + 2) == 16724 )
          {
LABEL_50:
            v33 = 1;
          }
          else
          {
            v36 = 7;
            v37 = VfExcludeSections[0];
            v98 = *(_OWORD *)VfExcludeSections;
            v99 = *(_OWORD *)off_1402D4118;
            while ( 1 )
            {
              v38 = v37[v31 - VfExcludeSections[0]];
              v39 = *v37++;
              if ( v38 != v39 )
                break;
              if ( !--v36 )
              {
LABEL_49:
                v30 = v86;
                goto LABEL_50;
              }
            }
            v40 = (char *)*((_QWORD *)&v98 + 1);
            v41 = 8;
            v42 = v31;
            while ( 1 )
            {
              v43 = *(_QWORD *)v42;
              v42 += 8;
              v44 = *(_QWORD *)v40;
              v40 += 8;
              if ( v43 != v44 )
                break;
              v41 -= 8;
              if ( v41 < 8 )
              {
                if ( !v41 )
                  goto LABEL_49;
                while ( 1 )
                {
                  v45 = *v42++;
                  v46 = *v40++;
                  if ( v45 != v46 )
                    goto LABEL_42;
                  if ( !--v41 )
                    goto LABEL_49;
                }
              }
            }
LABEL_42:
            v47 = (char *)v99;
            v48 = 4;
            while ( 1 )
            {
              v49 = v31[(_QWORD)v47 - v99];
              v50 = *v47++;
              if ( v49 != v50 )
                break;
              if ( !--v48 )
                goto LABEL_49;
            }
            v51 = (char *)*((_QWORD *)&v99 + 1);
            v52 = 6;
            while ( 1 )
            {
              v53 = v31[(_QWORD)v51 - *((_QWORD *)&v99 + 1)];
              v54 = *v51++;
              if ( v53 != v54 )
                break;
              if ( !--v52 )
                goto LABEL_49;
            }
            v30 = v86;
          }
          v55 = *((_DWORD *)v31 + 2);
          if ( *((int *)v31 + 9) < 0 )
            v33 = 1;
          if ( *((_DWORD *)v31 + 4) > v55 )
            v55 = *((_DWORD *)v31 + 4);
          if ( !v33 )
          {
            v56 = (const char *)(v30 + *((unsigned int *)v31 + 3));
            v57 = &v56[v55];
            for ( j = v56; j < v57; j += 64 )
              _mm_prefetch(j, 0);
            if ( v55 >= 8 )
            {
              v59 = (unsigned __int64)v55 >> 3;
              do
              {
                v24 = __ROL8__(*(_QWORD *)v56 ^ v24, v27);
                v56 += 8;
                v55 -= 8;
                --v59;
              }
              while ( v59 );
            }
            for ( ; v55; --v55 )
            {
              v60 = *(unsigned __int8 *)v56++;
              v24 = __ROL8__(v60 ^ v24, v27);
            }
          }
          v31 += 40;
        }
        while ( v31 != v32 );
        v61 = v102;
        v6 = (ULONG_PTR)BugCheckParameter1;
        if ( !v102 )
        {
          Size = v29->OptionalHeader.DataDirectory[1].Size;
          if ( (unsigned int)Size >= 0x14 )
          {
            VirtualAddress = v29->OptionalHeader.DataDirectory[1].VirtualAddress;
            v64 = v30 + VirtualAddress + Size;
            v65 = VirtualAddress + v30;
            if ( VirtualAddress + v30 != v64 )
            {
              do
              {
                if ( !*(_DWORD *)(v65 + 12) )
                  break;
                v66 = *(unsigned int *)(v65 + 16);
                if ( !(_DWORD)v66 )
                  break;
                v67 = *(_QWORD *)(v66 + v30);
                if ( v67 && MmIsSessionAddress(*(_QWORD *)(v66 + v30)) && RtlLookupFunctionTable(v67, &v86, &v91) )
                {
                  v68 = qword_1402D4890;
                  v69 = 0LL;
                  while ( *v68 != v86 )
                  {
                    if ( !*v68 )
                    {
                      qword_1402D4890[v69] = v86;
                      break;
                    }
                    v69 = (unsigned int)(v69 + 1);
                    ++v68;
                    if ( (unsigned int)v69 >= 0x10 )
                      break;
                  }
                  if ( (_DWORD)v69 == 16 )
                    goto LABEL_83;
                }
                v65 += 20LL;
              }
              while ( v65 != v64 );
              v61 = 0;
            }
          }
        }
        v25 = (void **)(v88 + 1);
        v102 = v61 + 1;
        ++v88;
      }
      while ( (unsigned int)(v61 + 1) < 0x10 );
LABEL_83:
      *(_QWORD *)&v7 = memset(qword_1402D4890, 0, sizeof(qword_1402D4890));
      if ( v24 == qword_1402D4870 || !v24 )
      {
        *(_QWORD *)&v7 = 0x95EA5DE843D5D824uLL;
        v24 ^= 0x95EA5DE843D5D824uLL;
      }
      _InterlockedOr(v85, 0);
      qword_1402D4870 = v24;
    }
  }
  else
  {
    v70 = (unsigned __int64)&qword_1402D4880;
    v71 = (unsigned __int64)&qword_1402D4880 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v93, &v87);
    v72 = v93;
    v73 = 0x140000000uLL;
    v94 = 0x140000000uLL;
    v87 /= 0xCu;
    v74 = v93 + 12LL * v87;
    v95 = v74;
    v96 = (__int64 *)&v92;
    while ( v72 && v72 != v74 )
    {
      v75 = RtlpConvertFunctionEntry(v72, v73);
      *v96 = v75;
      v72 = v93 + 12;
      v93 += 12LL;
      v76 = *v92;
      v77 = v92[1] - v76;
      v78 = (_QWORD *)(0x140000000LL + v76);
      v79 = 0x140000000LL + v76 + v77;
      v80 = (const char *)v78;
      if ( (unsigned __int64)v78 < v79 )
      {
        do
        {
          _mm_prefetch(v80, 0);
          v80 += 64;
        }
        while ( (unsigned __int64)v80 < v79 );
      }
      if ( v77 >= 8 )
      {
        v81 = (unsigned __int64)v77 >> 3;
        do
        {
          v70 = __ROL8__(*v78++ ^ v70, v71);
          v77 -= 8;
          --v81;
        }
        while ( v81 );
      }
      for ( ; v77; --v77 )
      {
        v82 = *(unsigned __int8 *)v78;
        v78 = (_QWORD *)((char *)v78 + 1);
        v70 = __ROL8__(v82 ^ v70, v71);
      }
      v74 = v95;
      v73 = v94;
    }
    qword_1402D4880 = v70;
    if ( qword_1402D4870 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v83 = __rdtsc();
    v7 = (__ROR8__(v83, 3) ^ v83) * (unsigned __int128)0x7010008004002001uLL;
    qword_1402D4870 = v7 ^ *((_QWORD *)&v7 + 1);
    if ( (unsigned __int64)v7 == *((_QWORD *)&v7 + 1) )
    {
      *(_QWORD *)&v7 = 0x95EA5DE843D5D824uLL;
      qword_1402D4870 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v7;
}
