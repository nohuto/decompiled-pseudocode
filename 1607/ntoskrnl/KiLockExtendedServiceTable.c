/*
 * XREFs of KiLockExtendedServiceTable @ 0x140156E88
 * Callers:
 *     KiLockServiceTable @ 0x14012E004 (KiLockServiceTable.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     RtlCaptureImageExceptionValues @ 0x140082E38 (RtlCaptureImageExceptionValues.c)
 *     RtlLookupFunctionTable @ 0x1400B38E8 (RtlLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x1401412B4 (RtlpConvertFunctionEntry.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KiLockExtendedServiceTable(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a4)
{
  ULONG_PTR v4; // rbx
  char v5; // di
  signed __int32 SessionId; // r8d
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rcx
  _QWORD *v14; // r9
  const char *v15; // rax
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // r8
  char v19; // cl
  char v20; // cl
  ULONG_PTR v21; // rsi
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // rbx
  void **v24; // rax
  void *v25; // rcx
  char v26; // si
  PIMAGE_NT_HEADERS v27; // rax
  PIMAGE_NT_HEADERS v28; // rdi
  __int64 v29; // r12
  char *v30; // r9
  char *v31; // r10
  int v32; // r11d
  int v33; // ecx
  __int16 v34; // ax
  int v35; // r8d
  char *v36; // rdx
  char v37; // cl
  char v38; // al
  char *v39; // r8
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
  unsigned int v54; // r8d
  const char *v55; // rdx
  const char *v56; // rcx
  const char *i; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  int v60; // edx
  __int64 Size; // rcx
  __int64 VirtualAddress; // rax
  __int64 v63; // r15
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  __int64 *v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // rdi
  __int64 v71; // r10
  unsigned __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // edx
  _QWORD *v77; // r8
  unsigned __int64 v78; // rcx
  const char *v79; // rax
  unsigned __int64 v80; // r9
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  signed __int32 v84[8]; // [rsp+0h] [rbp-B9h] BYREF
  ULONG v85; // [rsp+30h] [rbp-89h] BYREF
  __int64 v86; // [rsp+38h] [rbp-81h] BYREF
  char *v87; // [rsp+40h] [rbp-79h]
  __int64 *v88; // [rsp+48h] [rbp-71h]
  int v89; // [rsp+50h] [rbp-69h] BYREF
  int v90; // [rsp+54h] [rbp-65h] BYREF
  __int64 v91; // [rsp+58h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+60h] [rbp-59h]
  unsigned int *v93; // [rsp+68h] [rbp-51h] BYREF
  __int128 v94; // [rsp+70h] [rbp-49h]
  __int128 v95; // [rsp+80h] [rbp-39h]
  __int64 v96; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v97; // [rsp+A8h] [rbp-11h]
  __int64 v98; // [rsp+B0h] [rbp-9h]
  __int64 *v99; // [rsp+B8h] [rbp-1h]
  int v101; // [rsp+138h] [rbp+7Fh]

  v4 = (unsigned int)BugCheckParameter3;
  v5 = a4;
  if ( a4 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    if ( dword_1402F4DD0 == SessionId
      || (*(_QWORD *)&v9 = (unsigned int)_InterlockedCompareExchange(&dword_1402F4DD0, SessionId, -1), (_DWORD)v9 == -1) )
    {
      v10 = (unsigned __int64)&qword_1402F9BD0 ^ qword_1402F9BD8;
      v11 = 4 * v4;
      v12 = ((unsigned __int64)&qword_1402F9BD0 ^ qword_1402F9BD8) & 0x3F;
      v13 = BugCheckParameter1 + (unsigned int)(4 * v4);
      v14 = (_QWORD *)BugCheckParameter1;
      v15 = (const char *)BugCheckParameter1;
      if ( BugCheckParameter1 < v13 )
      {
        do
        {
          _mm_prefetch(v15, 0);
          v15 += 64;
        }
        while ( (unsigned __int64)v15 < v13 );
      }
      if ( v11 >= 8 )
      {
        v16 = (unsigned __int64)v11 >> 3;
        do
        {
          v10 = __ROL8__(*v14++ ^ v10, v12);
          v11 -= 8;
          --v16;
        }
        while ( v16 );
      }
      for ( ; v11; --v11 )
      {
        v17 = *(unsigned __int8 *)v14;
        v14 = (_QWORD *)((char *)v14 + 1);
        v10 = __ROL8__(v17 ^ v10, v12);
      }
      v18 = v10 ^ qword_1402F9BD0;
      BugCheckParameter3a = v4;
      v19 = v10 ^ qword_1402F9BD0;
      *((_QWORD *)&v9 + 1) = BugCheckParameter2;
      v20 = v19 & 0x3F;
      *(_QWORD *)&v9 = BugCheckParameter2;
      v21 = v4;
      if ( BugCheckParameter2 < v4 + BugCheckParameter2 )
      {
        do
        {
          _mm_prefetch((const char *)v9, 0);
          *(_QWORD *)&v9 = v9 + 64;
        }
        while ( (unsigned __int64)v9 < v4 + BugCheckParameter2 );
      }
      if ( (unsigned int)v4 >= 8 )
      {
        v22 = v4 >> 3;
        do
        {
          LODWORD(v4) = v4 - 8;
          v18 = __ROL8__(**((_QWORD **)&v9 + 1) ^ v18, v20);
          *((_QWORD *)&v9 + 1) += 8LL;
          --v22;
        }
        while ( v22 );
      }
      for ( ; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
      {
        *(_QWORD *)&v9 = (unsigned __int8)**((_BYTE **)&v9 + 1);
        ++*((_QWORD *)&v9 + 1);
        v18 = __ROL8__(v9 ^ v18, v20);
      }
      v23 = BugCheckParameter1 ^ v18 ^ v21;
      if ( (v5 & 2) != 0 )
      {
        qword_1402F9BD8 = BugCheckParameter1 ^ v18 ^ v21;
      }
      else
      {
        if ( !RtlLookupFunctionTable(BugCheckParameter1, &v91, &v89) )
          KeBugCheckEx(0x43u, BugCheckParameter1, BugCheckParameter2, v21, 0LL);
        v101 = 0;
        qword_1402F9C30[0] = v91;
        v24 = (void **)qword_1402F9C30;
        v88 = qword_1402F9C30;
        do
        {
          v25 = *v24;
          v86 = (__int64)v25;
          if ( !v25 )
            break;
          v26 = v23 & 0x3F;
          v27 = RtlImageNtHeader(v25);
          v28 = v27;
          if ( !v27 )
            KeBugCheckEx(0x43u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3a, 1uLL);
          v29 = v86;
          v30 = (char *)&v27->OptionalHeader + v27->FileHeader.SizeOfOptionalHeader;
          v31 = &v30[40 * v27->FileHeader.NumberOfSections];
          v87 = v31;
          do
          {
            v32 = 0;
            if ( (*((_DWORD *)v30 + 9) & 0x2000000) != 0
              || (v33 = *(_DWORD *)v30, *(_DWORD *)v30 == 1414090313) && *((_DWORD *)v30 + 1) == 1195525195
              || v33 == 1162297680 && ((v34 = *((_WORD *)v30 + 2), v34 == 30583) || v34 == 29303 || v34 == 30839)
              || v33 == 1095914053 && *((_WORD *)v30 + 2) == 16724 )
            {
LABEL_54:
              v32 = 1;
            }
            else
            {
              v35 = 7;
              v36 = VfExcludeSections[0];
              v94 = *(_OWORD *)VfExcludeSections;
              v95 = *(_OWORD *)off_1402F4BE8;
              while ( 1 )
              {
                v37 = v36[v30 - VfExcludeSections[0]];
                v38 = *v36++;
                if ( v37 != v38 )
                  break;
                if ( !--v35 )
                {
LABEL_53:
                  v29 = v86;
                  v31 = v87;
                  goto LABEL_54;
                }
              }
              v39 = (char *)*((_QWORD *)&v94 + 1);
              v40 = 8;
              v41 = v30;
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
                    goto LABEL_53;
                  while ( 1 )
                  {
                    v44 = *v41++;
                    v45 = *v39++;
                    if ( v44 != v45 )
                      goto LABEL_46;
                    if ( !--v40 )
                      goto LABEL_53;
                  }
                }
              }
LABEL_46:
              v46 = (char *)v95;
              v47 = 4;
              while ( 1 )
              {
                v48 = v30[(_QWORD)v46 - v95];
                v49 = *v46++;
                if ( v48 != v49 )
                  break;
                if ( !--v47 )
                  goto LABEL_53;
              }
              v50 = (char *)*((_QWORD *)&v95 + 1);
              v51 = 6;
              while ( 1 )
              {
                v52 = v30[(_QWORD)v50 - *((_QWORD *)&v95 + 1)];
                v53 = *v50++;
                if ( v52 != v53 )
                  break;
                if ( !--v51 )
                  goto LABEL_53;
              }
              v29 = v86;
              v31 = v87;
            }
            v54 = *((_DWORD *)v30 + 2);
            if ( *((int *)v30 + 9) < 0 )
              v32 = 1;
            if ( *((_DWORD *)v30 + 4) > v54 )
              v54 = *((_DWORD *)v30 + 4);
            if ( !v32 )
            {
              v55 = (const char *)(v29 + *((unsigned int *)v30 + 3));
              v56 = &v55[v54];
              for ( i = v55; i < v56; i += 64 )
                _mm_prefetch(i, 0);
              if ( v54 >= 8 )
              {
                v58 = (unsigned __int64)v54 >> 3;
                do
                {
                  v23 = __ROL8__(*(_QWORD *)v55 ^ v23, v26);
                  v55 += 8;
                  v54 -= 8;
                  --v58;
                }
                while ( v58 );
              }
              for ( ; v54; --v54 )
              {
                v59 = *(unsigned __int8 *)v55++;
                v23 = __ROL8__(v59 ^ v23, v26);
              }
            }
            v30 += 40;
          }
          while ( v30 != v31 );
          v60 = v101;
          if ( !v101 )
          {
            Size = v28->OptionalHeader.DataDirectory[1].Size;
            if ( (unsigned int)Size >= 0x14 )
            {
              VirtualAddress = v28->OptionalHeader.DataDirectory[1].VirtualAddress;
              v63 = v29 + VirtualAddress + Size;
              v64 = VirtualAddress + v29;
              if ( VirtualAddress + v29 != v63 )
              {
                do
                {
                  if ( !*(_DWORD *)(v64 + 12) )
                    break;
                  v65 = *(unsigned int *)(v64 + 16);
                  if ( !(_DWORD)v65 )
                    break;
                  v66 = *(_QWORD *)(v65 + v29);
                  if ( v66 && MmIsSessionAddress(*(_QWORD *)(v65 + v29)) && RtlLookupFunctionTable(v66, &v86, &v90) )
                  {
                    v67 = qword_1402F9C30;
                    v68 = 0LL;
                    while ( *v67 != v86 )
                    {
                      if ( !*v67 )
                      {
                        qword_1402F9C30[v68] = v86;
                        break;
                      }
                      v68 = (unsigned int)(v68 + 1);
                      ++v67;
                      if ( (unsigned int)v68 >= 0x10 )
                        break;
                    }
                    if ( (_DWORD)v68 == 16 )
                      goto LABEL_87;
                  }
                  v64 += 20LL;
                }
                while ( v64 != v63 );
                v60 = 0;
              }
            }
          }
          v24 = (void **)(v88 + 1);
          v101 = v60 + 1;
          ++v88;
        }
        while ( (unsigned int)(v60 + 1) < 0x10 );
LABEL_87:
        *(_QWORD *)&v9 = memset(qword_1402F9C30, 0, sizeof(qword_1402F9C30));
        if ( v23 == qword_1402F9BD0 || !v23 )
        {
          *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
          v23 ^= 0x95EA5DE843D5D824uLL;
        }
        _InterlockedOr(v84, 0);
        qword_1402F9BD0 = v23;
      }
    }
  }
  else
  {
    v69 = (unsigned __int64)&qword_1402F9BE0;
    v70 = (unsigned __int64)&qword_1402F9BE0 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v96, &v85);
    v71 = v96;
    v72 = 0x140000000uLL;
    v97 = 0x140000000uLL;
    v85 /= 0xCu;
    v73 = v96 + 12LL * v85;
    v98 = v73;
    v99 = (__int64 *)&v93;
    while ( v71 && v71 != v73 )
    {
      v74 = RtlpConvertFunctionEntry(v71, v72);
      *v99 = v74;
      v71 = v96 + 12;
      v96 += 12LL;
      v75 = *v93;
      v76 = v93[1] - v75;
      v77 = (_QWORD *)(0x140000000LL + v75);
      v78 = 0x140000000LL + v75 + v76;
      v79 = (const char *)v77;
      if ( (unsigned __int64)v77 < v78 )
      {
        do
        {
          _mm_prefetch(v79, 0);
          v79 += 64;
        }
        while ( (unsigned __int64)v79 < v78 );
      }
      if ( v76 >= 8 )
      {
        v80 = (unsigned __int64)v76 >> 3;
        do
        {
          v69 = __ROL8__(*v77++ ^ v69, v70);
          v76 -= 8;
          --v80;
        }
        while ( v80 );
      }
      for ( ; v76; --v76 )
      {
        v81 = *(unsigned __int8 *)v77;
        v77 = (_QWORD *)((char *)v77 + 1);
        v69 = __ROL8__(v81 ^ v69, v70);
      }
      v73 = v98;
      v72 = v97;
    }
    qword_1402F9BE0 = v69;
    if ( qword_1402F9BD0 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v82 = __rdtsc();
    v9 = (__ROR8__(v82, 3) ^ v82) * (unsigned __int128)0x7010008004002001uLL;
    qword_1402F9BD0 = v9 ^ *((_QWORD *)&v9 + 1);
    if ( (unsigned __int64)v9 == *((_QWORD *)&v9 + 1) )
    {
      *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
      qword_1402F9BD0 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v9;
}
