/*
 * XREFs of PspBuildCreateProcessContext @ 0x1404588B8
 * Callers:
 *     NtCreateThreadEx @ 0x140457828 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14000D810 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KeVerifyGroupAffinity @ 0x140133128 (KeVerifyGroupAffinity.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x14020F50C (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x14021836C (RtlGetUmsContextExtendedSize.c)
 *     PspDeleteCreateProcessContext @ 0x140457A6C (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1404CE53C (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x1404D342C (RtlValidProcessProtection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(__int64 *a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // r10d
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  int v13; // ebx
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // eax
  SIZE_T v18; // rdi
  char *v19; // r15
  PVOID v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // edx
  int v30; // eax
  _BYTE *v31; // rax
  int v32; // eax
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  _PROCESSOR_NUMBER *v35; // rax
  ULONG ProcessorIndexFromNumber; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r9
  PS_PROTECTION v42; // cl
  int v43; // eax
  int v44; // eax
  _DWORD *v45; // rax
  SIZE_T v46; // rdi
  char *v47; // r15
  PVOID v48; // rax
  _WORD *v49; // rax
  SIZE_T v51; // rdi
  char *v52; // r15
  PVOID v53; // rax
  SIZE_T v54; // rdi
  char *v55; // r15
  PVOID v56; // rax
  SIZE_T v57; // rdi
  char *v58; // r15
  PVOID v59; // rax
  int v60; // eax
  _OWORD *v61; // rax
  SIZE_T v62; // rdi
  char *v63; // r15
  PVOID PoolWithQuotaTag; // rax
  _DWORD *v65; // rax
  _OWORD *v66; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int8 v68; // r9
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // [rsp+20h] [rbp-128h]
  _QWORD *v72; // [rsp+28h] [rbp-120h]
  __int64 v73; // [rsp+30h] [rbp-118h]
  unsigned __int64 v74; // [rsp+30h] [rbp-118h]
  unsigned __int64 v75; // [rsp+30h] [rbp-118h]
  unsigned __int16 v76; // [rsp+38h] [rbp-110h]
  unsigned __int64 v77; // [rsp+40h] [rbp-108h]
  unsigned __int64 v78; // [rsp+40h] [rbp-108h]
  unsigned __int64 v79; // [rsp+40h] [rbp-108h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp-F8h] BYREF
  int v81; // [rsp+54h] [rbp-F4h]
  int v82; // [rsp+58h] [rbp-F0h]
  _BYTE *v83; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v84; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v85; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v86; // [rsp+78h] [rbp-D0h]
  _DWORD *v87; // [rsp+80h] [rbp-C8h]
  __int64 v88; // [rsp+88h] [rbp-C0h]
  _WORD *v89; // [rsp+90h] [rbp-B8h]
  _DWORD *v90; // [rsp+98h] [rbp-B0h]
  char *v91; // [rsp+A0h] [rbp-A8h]
  _OWORD *v92; // [rsp+A8h] [rbp-A0h]
  _DWORD *v93; // [rsp+B0h] [rbp-98h]
  _DWORD *v94; // [rsp+B8h] [rbp-90h]
  _DWORD *v95; // [rsp+C0h] [rbp-88h]
  _PROCESSOR_NUMBER *v96; // [rsp+C8h] [rbp-80h]
  _OWORD *v97; // [rsp+D0h] [rbp-78h]
  unsigned __int64 v98; // [rsp+D8h] [rbp-70h]
  char *v99; // [rsp+E0h] [rbp-68h]
  char *v100; // [rsp+E8h] [rbp-60h]
  PVOID v101; // [rsp+F0h] [rbp-58h]
  char *v102; // [rsp+F8h] [rbp-50h]
  char *v103; // [rsp+100h] [rbp-48h]
  int v105; // [rsp+160h] [rbp+18h]

  v105 = a3;
  v5 = a3;
  LOBYTE(a3) = a2;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v73 = *a1;
  if ( (unsigned __int64)*a1 < 0x28 )
    return 3221225485LL;
  if ( a2 && *a1 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v73 > 0x7FFFFFFF0000LL || (__int64 *)((char *)a1 + v73) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v74 = v73 - 8;
  if ( (v74 & 0x1F) != 0 )
    return 3221225485LL;
  v75 = v74 >> 5;
  v6 = a1 + 1;
  v72 = a1 + 1;
  while ( 1 )
  {
    if ( !v75 )
    {
      v13 = 0;
      goto LABEL_267;
    }
    v7 = *v6;
    v98 = *v6;
    if ( v5 && (v7 & 0x10000) == 0
      || (v7 & 0x20000) != 0 && v6[3]
      || (v81 = 1 << v7, v8 = *(_DWORD *)(a4 + 4), (v8 & (1 << v7)) != 0)
      || (*(_DWORD *)(a4 + 4) = (1 << v7) | v8, v7 > 0x60011) )
    {
LABEL_166:
      v13 = -1073741811;
      goto LABEL_267;
    }
    if ( (unsigned int)v7 <= 0x20013 )
      break;
    if ( (unsigned int)v7 <= 0x3000E )
    {
      if ( (_DWORD)v7 == 196622 )
      {
        if ( !v5 || v6[1] != 4LL )
          goto LABEL_166;
        v35 = (_PROCESSOR_NUMBER *)v6[2];
        v96 = v35;
        if ( (_BYTE)a3 )
        {
          if ( ((unsigned __int8)v35 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v6 = v72;
          v35 = v96;
        }
        ProcNumber = *v35;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        *(_DWORD *)(a4 + 244) = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber == -1 )
          goto LABEL_166;
        goto LABEL_52;
      }
      v32 = v7 - 131092;
      if ( v32 )
      {
        v43 = v32 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v60 = v44 - 1;
            if ( !v60 )
            {
              v62 = v6[1];
              if ( v62 > 0xFFFF )
                goto LABEL_166;
              v63 = (char *)v6[2];
              v103 = v63;
              if ( (_BYTE)a3 && v62 && ((unsigned __int64)&v63[v62] > 0x7FFFFFFF0000LL || &v63[v62] < v63) )
                MEMORY[0x7FFFFFFF0000] = 0;
              PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v62, 0x634F7350u);
              *(_QWORD *)(a4 + 408) = PoolWithQuotaTag;
              if ( !PoolWithQuotaTag )
                goto LABEL_178;
              memmove(PoolWithQuotaTag, v63, v62);
              *(_DWORD *)(a4 + 416) = v62;
              goto LABEL_52;
            }
            if ( v60 != 65525 || !v5 || v6[1] != 16LL )
              goto LABEL_166;
            v61 = (_OWORD *)v6[2];
            v92 = v61;
            if ( (_BYTE)a3 )
            {
              if ( ((unsigned __int8)v61 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v6 = v72;
              v61 = v92;
            }
            *(_OWORD *)(a4 + 312) = *v61;
            if ( !KeVerifyGroupAffinity(a4 + 312, 1) )
              goto LABEL_166;
LABEL_53:
            LOBYTE(a3) = a2;
            goto LABEL_30;
          }
          if ( v6[1] != 4LL )
            goto LABEL_166;
          v45 = (_DWORD *)v6[2];
          v93 = v45;
          if ( (_BYTE)a3 )
          {
            if ( ((unsigned __int8)v45 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v6 = v72;
            v45 = v93;
          }
          *(_DWORD *)(a4 + 396) = *v45;
        }
        else
        {
          if ( v6[1] != 4LL )
            goto LABEL_166;
          v65 = (_DWORD *)v6[2];
          v94 = v65;
          if ( (_BYTE)a3 )
          {
            if ( ((unsigned __int8)v65 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v6 = v72;
            v65 = v94;
          }
          *(_DWORD *)(a4 + 400) = *v65;
        }
      }
      else
      {
        if ( v6[1] != 4LL )
          goto LABEL_166;
        v33 = (_DWORD *)v6[2];
        v95 = v33;
        if ( (_BYTE)a3 )
        {
          if ( ((unsigned __int8)v33 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v6 = v72;
          v33 = v95;
        }
        *(_DWORD *)(a4 + 392) = *v33;
      }
    }
    else
    {
      v23 = v7 - 196623;
      if ( !v23 )
      {
        if ( !v5 || !(_BYTE)a3 || v6[1] != 24LL )
          goto LABEL_166;
        v97 = (_OWORD *)v6[2];
        if ( ((unsigned __int8)v97 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v66 = v97;
        *(_OWORD *)(a4 + 328) = *v97;
        *(_QWORD *)(a4 + 344) = *((_QWORD *)v66 + 2);
        if ( *(_DWORD *)(a4 + 328) != 256 )
          goto LABEL_166;
        UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
        v69 = *(_QWORD *)(a4 + 336);
        if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
        {
          if ( UmsContextExtendedSize )
          {
            if ( ((unsigned __int8)v69 & v68) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v69 + UmsContextExtendedSize > 0x7FFFFFFF0000LL || v69 + UmsContextExtendedSize < v69 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        else if ( ((unsigned __int8)v69 & v68) != 0 )
        {
          ExRaiseDatatypeMisalignment();
        }
        v70 = *(_QWORD *)(a4 + 344);
        if ( ((unsigned __int8)v70 & v68) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_159;
      }
      v24 = v23 - 196593;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 != 15 )
              goto LABEL_166;
            if ( v6[1] != 1LL )
              goto LABEL_166;
            v42.Level = *((_BYTE *)v6 + 16);
            *(PS_PROTECTION *)(a4 + 360) = v42;
            if ( !RtlValidProcessProtection(v42) )
              goto LABEL_166;
          }
          else
          {
            if ( v6[1] != 8LL )
              goto LABEL_166;
            *(_QWORD *)(a4 + 136) = v6[2];
          }
        }
        else
        {
          if ( v6[1] != 8LL )
            goto LABEL_166;
          *(_QWORD *)(a4 + 128) = v6[2];
        }
      }
      else
      {
        if ( v6[1] != 8LL )
          goto LABEL_166;
        *(_QWORD *)(a4 + 112) = v6[2];
      }
    }
LABEL_30:
    v6 += 4;
    v72 = v6;
    --v75;
  }
  if ( (_DWORD)v7 == 131091 )
  {
    v57 = v6[1];
    if ( !v57 || (v57 & 7) != 0 || v57 >> 3 > 0xFFFFFFFF )
      goto LABEL_166;
    v58 = (char *)v6[2];
    v91 = v58;
    if ( (_BYTE)a3 )
    {
      if ( ((unsigned __int8)v58 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v58[v57] > 0x7FFFFFFF0000LL || &v58[v57] < v58 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v59 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v57, 0x6C4A7350u);
    *(_QWORD *)(a4 + 376) = v59;
    if ( !v59 )
    {
LABEL_178:
      v13 = -1073741670;
      goto LABEL_267;
    }
    memmove(v59, v58, v57);
    *(_DWORD *)(a4 + 388) = v57 >> 3;
    goto LABEL_52;
  }
  if ( (unsigned int)v7 <= 0x20009 )
  {
    if ( (_DWORD)v7 == 131081 )
    {
      if ( v6[1] != 4LL )
        goto LABEL_166;
      v34 = (_DWORD *)v6[2];
      v87 = v34;
      if ( (_BYTE)a3 )
      {
        if ( ((unsigned __int8)v34 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v72;
        v34 = v87;
      }
      *(_DWORD *)(a4 + 308) = *v34;
    }
    else
    {
      v9 = v7 - 6;
      if ( v9 )
      {
        v10 = v9 - 65533;
        if ( !v10 )
        {
          if ( v6[1] != 16LL )
            goto LABEL_166;
          v11 = v6[2];
          v85 = v11;
          if ( (_BYTE)a3 )
          {
            if ( (v11 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v11 >= 0x7FFFFFFF0000LL )
              v11 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v11 = *(_BYTE *)v11;
            *(_BYTE *)(v11 + 15) = *(_BYTE *)(v11 + 15);
            v6 = v72;
            v11 = v85;
          }
          *(_QWORD *)(a4 + 16) = v11;
          v12 = v6[3];
          v77 = v12;
          if ( v12 )
          {
            if ( (_BYTE)a3 )
            {
              if ( (v12 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v12 >= 0x7FFFFFFF0000LL )
                v12 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v12 = *(_BYTE *)v12;
              *(_BYTE *)(v12 + 7) = *(_BYTE *)(v12 + 7);
              v6 = v72;
              v12 = v77;
            }
            *(_QWORD *)v12 = 16LL;
          }
          goto LABEL_30;
        }
        v14 = v10 - 1;
        if ( !v14 )
        {
          if ( v6[1] != 8LL )
            goto LABEL_166;
          v15 = v6[2];
          v84 = v15;
          if ( (_BYTE)a3 )
          {
            if ( (v15 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v15 >= 0x7FFFFFFF0000LL )
              v15 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v15 = *(_BYTE *)v15;
            *(_BYTE *)(v15 + 7) = *(_BYTE *)(v15 + 7);
            v6 = v72;
            v15 = v84;
          }
          *(_QWORD *)(a4 + 24) = v15;
          v16 = v6[3];
          v78 = v16;
          if ( v16 )
          {
            if ( (_BYTE)a3 )
            {
              if ( (v16 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v16 >= 0x7FFFFFFF0000LL )
                v16 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v16 = *(_BYTE *)v16;
              *(_BYTE *)(v16 + 7) = *(_BYTE *)(v16 + 7);
              v6 = v72;
              v16 = v78;
            }
            *(_QWORD *)v16 = 8LL;
          }
          goto LABEL_30;
        }
        v17 = v14 - 65537;
        if ( !v17 )
        {
          v18 = v6[1];
          if ( !v18 || (v18 & 1) != 0 || v18 > 0xFFFF )
            goto LABEL_166;
          v19 = (char *)v6[2];
          v100 = v19;
          if ( (_BYTE)a3 && ((unsigned __int64)&v19[v18] > 0x7FFFFFFF0000LL || &v19[v18] < v19) )
            MEMORY[0x7FFFFFFF0000] = 0;
          v20 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v18, 0x6E467350u);
          v101 = v20;
          if ( !v20 )
            goto LABEL_178;
          *(_WORD *)(a4 + 224) = 0;
          *(_WORD *)(a4 + 226) = v18;
          *(_QWORD *)(a4 + 232) = v20;
          memmove(v20, v19, v18);
          *(_WORD *)(a4 + 224) = v18;
          goto LABEL_52;
        }
        v30 = v17 - 2;
        if ( !v30 )
        {
          v51 = v6[1];
          if ( !v51 || (v51 & 0xF) != 0 )
            goto LABEL_166;
          v52 = (char *)v6[2];
          v99 = v52;
          if ( (_BYTE)a3 )
          {
            if ( ((unsigned __int8)v52 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v52[v51] > 0x7FFFFFFF0000LL || &v52[v51] < v52 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( v51 > 0x10 )
          {
            v53 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v51, 0x6C527350u);
            *(_QWORD *)(a4 + 272) = v53;
            if ( !v53 )
              goto LABEL_178;
          }
          else
          {
            *(_QWORD *)(a4 + 272) = a4 + 256;
          }
          memmove(*(void **)(a4 + 272), v52, v51);
          *(_QWORD *)(a4 + 248) = v51 >> 4;
          goto LABEL_52;
        }
        if ( v30 != 1 || v6[1] != 1LL )
          goto LABEL_166;
        v31 = (_BYTE *)v6[2];
        v83 = v31;
        if ( (_BYTE)a3 )
        {
          v6 = v72;
          v31 = v83;
        }
        *(_BYTE *)(a4 + 240) = *v31;
      }
      else
      {
        if ( v6[1] != 64LL )
          goto LABEL_166;
        v21 = v6[2];
        v86 = v21;
        if ( (_BYTE)a3 )
        {
          if ( (v21 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v21 >= 0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v21 = *(_BYTE *)v21;
          *(_BYTE *)(v21 + 63) = *(_BYTE *)(v21 + 63);
          v6 = v72;
          v21 = v86;
        }
        *(_QWORD *)(a4 + 32) = v21;
        v22 = v6[3];
        v79 = v22;
        if ( v22 )
        {
          if ( (_BYTE)a3 )
          {
            if ( (v22 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v22 >= 0x7FFFFFFF0000LL )
              v22 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v22 = *(_BYTE *)v22;
            *(_BYTE *)(v22 + 7) = *(_BYTE *)(v22 + 7);
            v6 = v72;
            v22 = v79;
          }
          *(_QWORD *)v22 = 64LL;
        }
      }
    }
    goto LABEL_30;
  }
  v27 = v7 - 131082;
  if ( v27 )
  {
    v37 = v27 - 1;
    if ( v37 )
    {
      v38 = v37 - 2;
      if ( !v38 )
      {
        if ( v6[1] != 2LL )
          goto LABEL_166;
        v49 = (_WORD *)v6[2];
        v89 = v49;
        if ( (_BYTE)a3 )
        {
          if ( ((unsigned __int8)v49 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v49 = v89;
        }
        v76 = *v49;
        if ( *v49 >= (unsigned __int16)KeNumberNodes )
          goto LABEL_166;
        _mm_lfence();
        if ( !*(_QWORD *)(KeNodeBlock[v76] + 136) )
          goto LABEL_166;
        *(_WORD *)(a4 + 242) = v76;
LABEL_159:
        v6 = v72;
        goto LABEL_30;
      }
      v39 = v38 - 3;
      if ( !v39 )
      {
        if ( v6[1] != 8LL )
          goto LABEL_166;
        if ( (_BYTE)a3 )
        {
          v40 = v6[2];
          if ( (v40 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v6 = v72;
        }
        v88 = *(_QWORD *)v6[2];
        v13 = PspValidateMitigationOptions(v88, 0x4444444444444444LL, a3, v88, v71);
        v71 = v13;
        if ( v13 < 0 )
          goto LABEL_267;
        *(_QWORD *)(a4 + 352) = v41;
        v6 = v72;
        goto LABEL_53;
      }
      if ( v39 != 2 )
        goto LABEL_166;
      v54 = v6[1];
      if ( !v54 || (v54 & 7) != 0 || v54 > 0x88 )
        goto LABEL_166;
      v55 = (char *)v6[2];
      v102 = v55;
      if ( (_BYTE)a3 )
      {
        if ( ((unsigned __int8)v55 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&v55[v54] > 0x7FFFFFFF0000LL || &v55[v54] < v55 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v56 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v54, 0x61547350u);
      *(_QWORD *)(a4 + 368) = v56;
      if ( !v56 )
        goto LABEL_178;
      memmove(v56, v55, v54);
      *(_DWORD *)(a4 + 384) = v54;
      if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 368), v54) )
        goto LABEL_166;
    }
    else
    {
      v46 = v6[1];
      if ( !v46 || (v46 & 7) != 0 || v46 >> 3 > 0xFFFFFFFF )
        goto LABEL_166;
      v47 = (char *)v6[2];
      v91 = v47;
      if ( (_BYTE)a3 )
      {
        if ( ((unsigned __int8)v47 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&v47[v46] > 0x7FFFFFFF0000LL || &v47[v46] < v47 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v48 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v46, 0x6C487350u);
      *(_QWORD *)(a4 + 288) = v48;
      if ( !v48 )
        goto LABEL_178;
      memmove(v48, v47, v46);
      *(_DWORD *)(a4 + 284) = v46 >> 3;
    }
LABEL_52:
    v5 = v105;
    goto LABEL_53;
  }
  if ( v6[1] != 8LL )
    goto LABEL_166;
  v28 = (_DWORD *)v6[2];
  v90 = v28;
  if ( (_BYTE)a3 )
  {
    if ( ((unsigned __int8)v28 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = v72;
    v28 = v90;
  }
  if ( (*v28 & 0x1C) == 0 )
  {
    v29 = *v28 & 3;
    v82 = v29;
    if ( (unsigned __int8)v29 >= 3u )
      goto LABEL_166;
    *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v29)) & 0xC;
    if ( v29 == 1 )
      *(_DWORD *)(a4 + 280) = v28[1];
    goto LABEL_30;
  }
  v13 = -1073741637;
LABEL_267:
  if ( v13 < 0 )
    goto LABEL_274;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 288), *(unsigned int *)(a4 + 284), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 288) < 0 )
      v13 = -1073741811;
    *(_BYTE *)(a4 + 8) ^= (*(_BYTE *)(a4 + 8) ^ (v105 != 0)) & 1;
  }
  if ( v13 < 0 )
LABEL_274:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v13;
}
