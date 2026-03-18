/*
 * XREFs of PspBuildCreateProcessContext @ 0x1404599E8
 * Callers:
 *     NtCreateThreadEx @ 0x140458958 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14000DC90 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     KeVerifyGroupAffinity @ 0x140132BB8 (KeVerifyGroupAffinity.c)
 *     qsort @ 0x14014DF60 (qsort.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x14020F6E0 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x140218540 (RtlGetUmsContextExtendedSize.c)
 *     PspDeleteCreateProcessContext @ 0x140458B9C (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1404EC4B4 (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x1404F1338 (RtlValidProcessProtection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(_QWORD *a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // r10d
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  int v15; // ebx
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // eax
  SIZE_T v20; // rdi
  char *v21; // r15
  PVOID v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // edx
  int v32; // eax
  _BYTE *v33; // rax
  int v34; // eax
  _DWORD *v35; // rax
  _DWORD *v36; // rax
  struct _PROCESSOR_NUMBER *v37; // rax
  ULONG ProcessorIndexFromNumber; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  unsigned __int64 v42; // rax
  __int64 v43; // r9
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // rax
  SIZE_T v47; // rdi
  char *v48; // r15
  PVOID v49; // rax
  _WORD *v50; // rax
  SIZE_T v52; // rdi
  char *v53; // r15
  PVOID v54; // rax
  SIZE_T v55; // rdi
  char *v56; // r15
  PVOID v57; // rax
  SIZE_T v58; // rdi
  char *v59; // r15
  PVOID v60; // rax
  int v61; // eax
  _OWORD *v62; // rax
  SIZE_T v63; // rdi
  char *v64; // r15
  PVOID PoolWithQuotaTag; // rax
  _DWORD *v66; // rax
  _OWORD *v67; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int8 v69; // r9
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // [rsp+20h] [rbp-128h]
  unsigned __int64 *v73; // [rsp+28h] [rbp-120h]
  __int64 v74; // [rsp+30h] [rbp-118h]
  unsigned __int64 v75; // [rsp+30h] [rbp-118h]
  unsigned __int64 v76; // [rsp+30h] [rbp-118h]
  unsigned __int16 v77; // [rsp+38h] [rbp-110h]
  unsigned __int64 v78; // [rsp+40h] [rbp-108h]
  unsigned __int64 v79; // [rsp+40h] [rbp-108h]
  unsigned __int64 v80; // [rsp+40h] [rbp-108h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp-F8h] BYREF
  int v82; // [rsp+54h] [rbp-F4h]
  int v83; // [rsp+58h] [rbp-F0h]
  _BYTE *v84; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v85; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v86; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v87; // [rsp+78h] [rbp-D0h]
  _DWORD *v88; // [rsp+80h] [rbp-C8h]
  __int64 v89; // [rsp+88h] [rbp-C0h]
  _WORD *v90; // [rsp+90h] [rbp-B8h]
  _DWORD *v91; // [rsp+98h] [rbp-B0h]
  char *v92; // [rsp+A0h] [rbp-A8h]
  _OWORD *v93; // [rsp+A8h] [rbp-A0h]
  _DWORD *v94; // [rsp+B0h] [rbp-98h]
  _DWORD *v95; // [rsp+B8h] [rbp-90h]
  _DWORD *v96; // [rsp+C0h] [rbp-88h]
  struct _PROCESSOR_NUMBER *v97; // [rsp+C8h] [rbp-80h]
  _OWORD *v98; // [rsp+D0h] [rbp-78h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-70h]
  char *v100; // [rsp+E0h] [rbp-68h]
  char *v101; // [rsp+E8h] [rbp-60h]
  PVOID v102; // [rsp+F0h] [rbp-58h]
  char *v103; // [rsp+F8h] [rbp-50h]
  char *v104; // [rsp+100h] [rbp-48h]
  int v106; // [rsp+160h] [rbp+18h]

  v106 = a3;
  v5 = a3;
  LOBYTE(a3) = a2;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v74 = *a1;
  if ( *a1 < 0x28uLL )
    return 3221225485LL;
  if ( a2 && *a1 != 40LL )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v74 > 0x7FFFFFFF0000LL || (_QWORD *)((char *)a1 + v74) < a1 + 5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v75 = v74 - 8;
  if ( (v75 & 0x1F) != 0 )
    return 3221225485LL;
  v76 = v75 >> 5;
  v6 = a1 + 1;
  v73 = a1 + 1;
  while ( 1 )
  {
    if ( !v76 )
    {
      v15 = 0;
      goto LABEL_267;
    }
    v7 = *v6;
    v99 = *v6;
    if ( v5 && (v7 & 0x10000) == 0
      || (v7 & 0x20000) != 0 && v6[3]
      || (v8 = (unsigned int)(1 << v7), v82 = v8, v9 = *(_DWORD *)(a4 + 4), (v9 & (unsigned int)v8) != 0)
      || (v10 = (unsigned int)v8 | v9, *(_DWORD *)(a4 + 4) = v10, v7 > 0x60011) )
    {
LABEL_166:
      v15 = -1073741811;
      goto LABEL_267;
    }
    if ( (unsigned int)v7 <= 0x20013 )
      break;
    if ( (unsigned int)v7 <= 0x3000E )
    {
      if ( (_DWORD)v7 == 196622 )
      {
        if ( !v5 || v6[1] != 4 )
          goto LABEL_166;
        v37 = (struct _PROCESSOR_NUMBER *)v6[2];
        v97 = v37;
        if ( (_BYTE)a3 )
        {
          if ( ((unsigned __int8)v37 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v6 = v73;
          v37 = v97;
        }
        ProcNumber = *v37;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        *(_DWORD *)(a4 + 244) = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber == -1 )
          goto LABEL_166;
        goto LABEL_52;
      }
      v34 = v7 - 131092;
      if ( v34 )
      {
        v44 = v34 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            v61 = v45 - 1;
            if ( !v61 )
            {
              v63 = v6[1];
              if ( v63 > 0xFFFF )
                goto LABEL_166;
              v64 = (char *)v6[2];
              v104 = v64;
              if ( (_BYTE)a3 && v63 && ((unsigned __int64)&v64[v63] > 0x7FFFFFFF0000LL || &v64[v63] < v64) )
                MEMORY[0x7FFFFFFF0000] = 0;
              PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v63, 0x634F7350u);
              *(_QWORD *)(a4 + 408) = PoolWithQuotaTag;
              if ( !PoolWithQuotaTag )
                goto LABEL_178;
              memmove(PoolWithQuotaTag, v64, v63);
              *(_DWORD *)(a4 + 416) = v63;
              goto LABEL_52;
            }
            if ( v61 != 65525 || !v5 || v6[1] != 16 )
              goto LABEL_166;
            v62 = (_OWORD *)v6[2];
            v93 = v62;
            if ( (_BYTE)a3 )
            {
              if ( ((unsigned __int8)v62 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v6 = v73;
              v62 = v93;
            }
            *(_OWORD *)(a4 + 312) = *v62;
            if ( !KeVerifyGroupAffinity(a4 + 312, 1) )
              goto LABEL_166;
LABEL_53:
            LOBYTE(a3) = a2;
            goto LABEL_30;
          }
          if ( v6[1] != 4 )
            goto LABEL_166;
          v46 = (_DWORD *)v6[2];
          v94 = v46;
          if ( (_BYTE)a3 )
          {
            if ( ((unsigned __int8)v46 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v6 = v73;
            v46 = v94;
          }
          *(_DWORD *)(a4 + 396) = *v46;
        }
        else
        {
          if ( v6[1] != 4 )
            goto LABEL_166;
          v66 = (_DWORD *)v6[2];
          v95 = v66;
          if ( (_BYTE)a3 )
          {
            if ( ((unsigned __int8)v66 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v6 = v73;
            v66 = v95;
          }
          *(_DWORD *)(a4 + 400) = *v66;
        }
      }
      else
      {
        if ( v6[1] != 4 )
          goto LABEL_166;
        v35 = (_DWORD *)v6[2];
        v96 = v35;
        if ( (_BYTE)a3 )
        {
          if ( ((unsigned __int8)v35 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v6 = v73;
          v35 = v96;
        }
        *(_DWORD *)(a4 + 392) = *v35;
      }
    }
    else
    {
      v25 = v7 - 196623;
      if ( !v25 )
      {
        if ( !v5 || !(_BYTE)a3 || v6[1] != 24 )
          goto LABEL_166;
        v98 = (_OWORD *)v6[2];
        if ( ((unsigned __int8)v98 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v67 = v98;
        *(_OWORD *)(a4 + 328) = *v98;
        *(_QWORD *)(a4 + 344) = *((_QWORD *)v67 + 2);
        if ( *(_DWORD *)(a4 + 328) != 256 )
          goto LABEL_166;
        UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
        v70 = *(_QWORD *)(a4 + 336);
        if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
        {
          if ( UmsContextExtendedSize )
          {
            if ( ((unsigned __int8)v70 & v69) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v70 + UmsContextExtendedSize > 0x7FFFFFFF0000LL || v70 + UmsContextExtendedSize < v70 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        else if ( ((unsigned __int8)v70 & v69) != 0 )
        {
          ExRaiseDatatypeMisalignment();
        }
        v71 = *(_QWORD *)(a4 + 344);
        if ( ((unsigned __int8)v71 & v69) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_159;
      }
      v26 = v25 - 196593;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            if ( v28 != 15 )
              goto LABEL_166;
            if ( v6[1] != 1 )
              goto LABEL_166;
            LOBYTE(v10) = *((_BYTE *)v6 + 16);
            *(_BYTE *)(a4 + 360) = v10;
            if ( !(unsigned __int8)RtlValidProcessProtection(v10, v8, a3, 3LL, v72) )
              goto LABEL_166;
          }
          else
          {
            if ( v6[1] != 8 )
              goto LABEL_166;
            *(_QWORD *)(a4 + 136) = v6[2];
          }
        }
        else
        {
          if ( v6[1] != 8 )
            goto LABEL_166;
          *(_QWORD *)(a4 + 128) = v6[2];
        }
      }
      else
      {
        if ( v6[1] != 8 )
          goto LABEL_166;
        *(_QWORD *)(a4 + 112) = v6[2];
      }
    }
LABEL_30:
    v6 += 4;
    v73 = v6;
    --v76;
  }
  if ( (_DWORD)v7 == 131091 )
  {
    v58 = v6[1];
    if ( !v58 || (v58 & 7) != 0 || v58 >> 3 > 0xFFFFFFFF )
      goto LABEL_166;
    v59 = (char *)v6[2];
    v92 = v59;
    if ( (_BYTE)a3 )
    {
      if ( ((unsigned __int8)v59 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v59[v58] > 0x7FFFFFFF0000LL || &v59[v58] < v59 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v60 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v58, 0x6C4A7350u);
    *(_QWORD *)(a4 + 376) = v60;
    if ( !v60 )
    {
LABEL_178:
      v15 = -1073741670;
      goto LABEL_267;
    }
    memmove(v60, v59, v58);
    *(_DWORD *)(a4 + 388) = v58 >> 3;
    goto LABEL_52;
  }
  if ( (unsigned int)v7 <= 0x20009 )
  {
    if ( (_DWORD)v7 == 131081 )
    {
      if ( v6[1] != 4 )
        goto LABEL_166;
      v36 = (_DWORD *)v6[2];
      v88 = v36;
      if ( (_BYTE)a3 )
      {
        if ( ((unsigned __int8)v36 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v6 = v73;
        v36 = v88;
      }
      *(_DWORD *)(a4 + 308) = *v36;
    }
    else
    {
      v11 = v7 - 6;
      if ( v11 )
      {
        v12 = v11 - 65533;
        if ( !v12 )
        {
          if ( v6[1] != 16 )
            goto LABEL_166;
          v13 = v6[2];
          v86 = v13;
          if ( (_BYTE)a3 )
          {
            if ( (v13 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v13 >= 0x7FFFFFFF0000LL )
              v13 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v13 = *(_BYTE *)v13;
            *(_BYTE *)(v13 + 15) = *(_BYTE *)(v13 + 15);
            v6 = v73;
            v13 = v86;
          }
          *(_QWORD *)(a4 + 16) = v13;
          v14 = v6[3];
          v78 = v14;
          if ( v14 )
          {
            if ( (_BYTE)a3 )
            {
              if ( (v14 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v14 >= 0x7FFFFFFF0000LL )
                v14 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v14 = *(_BYTE *)v14;
              *(_BYTE *)(v14 + 7) = *(_BYTE *)(v14 + 7);
              v6 = v73;
              v14 = v78;
            }
            *(_QWORD *)v14 = 16LL;
          }
          goto LABEL_30;
        }
        v16 = v12 - 1;
        if ( !v16 )
        {
          if ( v6[1] != 8 )
            goto LABEL_166;
          v17 = v6[2];
          v85 = v17;
          if ( (_BYTE)a3 )
          {
            if ( (v17 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v17 >= 0x7FFFFFFF0000LL )
              v17 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v17 = *(_BYTE *)v17;
            *(_BYTE *)(v17 + 7) = *(_BYTE *)(v17 + 7);
            v6 = v73;
            v17 = v85;
          }
          *(_QWORD *)(a4 + 24) = v17;
          v18 = v6[3];
          v79 = v18;
          if ( v18 )
          {
            if ( (_BYTE)a3 )
            {
              if ( (v18 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v18 >= 0x7FFFFFFF0000LL )
                v18 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v18 = *(_BYTE *)v18;
              *(_BYTE *)(v18 + 7) = *(_BYTE *)(v18 + 7);
              v6 = v73;
              v18 = v79;
            }
            *(_QWORD *)v18 = 8LL;
          }
          goto LABEL_30;
        }
        v19 = v16 - 65537;
        if ( !v19 )
        {
          v20 = v6[1];
          if ( !v20 || (v20 & 1) != 0 || v20 > 0xFFFF )
            goto LABEL_166;
          v21 = (char *)v6[2];
          v101 = v21;
          if ( (_BYTE)a3 && ((unsigned __int64)&v21[v20] > 0x7FFFFFFF0000LL || &v21[v20] < v21) )
            MEMORY[0x7FFFFFFF0000] = 0;
          v22 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v20, 0x6E467350u);
          v102 = v22;
          if ( !v22 )
            goto LABEL_178;
          *(_WORD *)(a4 + 224) = 0;
          *(_WORD *)(a4 + 226) = v20;
          *(_QWORD *)(a4 + 232) = v22;
          memmove(v22, v21, v20);
          *(_WORD *)(a4 + 224) = v20;
          goto LABEL_52;
        }
        v32 = v19 - 2;
        if ( !v32 )
        {
          v52 = v6[1];
          if ( !v52 || (v52 & 0xF) != 0 )
            goto LABEL_166;
          v53 = (char *)v6[2];
          v100 = v53;
          if ( (_BYTE)a3 )
          {
            if ( ((unsigned __int8)v53 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v53[v52] > 0x7FFFFFFF0000LL || &v53[v52] < v53 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( v52 > 0x10 )
          {
            v54 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v52, 0x6C527350u);
            *(_QWORD *)(a4 + 272) = v54;
            if ( !v54 )
              goto LABEL_178;
          }
          else
          {
            *(_QWORD *)(a4 + 272) = a4 + 256;
          }
          memmove(*(void **)(a4 + 272), v53, v52);
          *(_QWORD *)(a4 + 248) = v52 >> 4;
          goto LABEL_52;
        }
        if ( v32 != 1 || v6[1] != 1 )
          goto LABEL_166;
        v33 = (_BYTE *)v6[2];
        v84 = v33;
        if ( (_BYTE)a3 )
        {
          v6 = v73;
          v33 = v84;
        }
        *(_BYTE *)(a4 + 240) = *v33;
      }
      else
      {
        if ( v6[1] != 64 )
          goto LABEL_166;
        v23 = v6[2];
        v87 = v23;
        if ( (_BYTE)a3 )
        {
          if ( (v23 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v23 >= 0x7FFFFFFF0000LL )
            v23 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v23 = *(_BYTE *)v23;
          *(_BYTE *)(v23 + 63) = *(_BYTE *)(v23 + 63);
          v6 = v73;
          v23 = v87;
        }
        *(_QWORD *)(a4 + 32) = v23;
        v24 = v6[3];
        v80 = v24;
        if ( v24 )
        {
          if ( (_BYTE)a3 )
          {
            if ( (v24 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v24 >= 0x7FFFFFFF0000LL )
              v24 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v24 = *(_BYTE *)v24;
            *(_BYTE *)(v24 + 7) = *(_BYTE *)(v24 + 7);
            v6 = v73;
            v24 = v80;
          }
          *(_QWORD *)v24 = 64LL;
        }
      }
    }
    goto LABEL_30;
  }
  v29 = v7 - 131082;
  if ( v29 )
  {
    v39 = v29 - 1;
    if ( v39 )
    {
      v40 = v39 - 2;
      if ( !v40 )
      {
        if ( v6[1] != 2 )
          goto LABEL_166;
        v50 = (_WORD *)v6[2];
        v90 = v50;
        if ( (_BYTE)a3 )
        {
          if ( ((unsigned __int8)v50 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v50 = v90;
        }
        v77 = *v50;
        if ( *v50 >= (unsigned __int16)KeNumberNodes )
          goto LABEL_166;
        _mm_lfence();
        if ( !*(_QWORD *)(KeNodeBlock[v77] + 136) )
          goto LABEL_166;
        *(_WORD *)(a4 + 242) = v77;
LABEL_159:
        v6 = v73;
        goto LABEL_30;
      }
      v41 = v40 - 3;
      if ( !v41 )
      {
        if ( v6[1] != 8 )
          goto LABEL_166;
        if ( (_BYTE)a3 )
        {
          v42 = v6[2];
          if ( (v42 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v6 = v73;
        }
        v89 = *(_QWORD *)v6[2];
        v15 = PspValidateMitigationOptions(v89, 0x4444444444444444LL, a3, v89);
        v72 = v15;
        if ( v15 < 0 )
          goto LABEL_267;
        *(_QWORD *)(a4 + 352) = v43;
        v6 = v73;
        goto LABEL_53;
      }
      if ( v41 != 2 )
        goto LABEL_166;
      v55 = v6[1];
      if ( !v55 || (v55 & 7) != 0 || v55 > 0x88 )
        goto LABEL_166;
      v56 = (char *)v6[2];
      v103 = v56;
      if ( (_BYTE)a3 )
      {
        if ( ((unsigned __int8)v56 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&v56[v55] > 0x7FFFFFFF0000LL || &v56[v55] < v56 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v57 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v55, 0x61547350u);
      *(_QWORD *)(a4 + 368) = v57;
      if ( !v57 )
        goto LABEL_178;
      memmove(v57, v56, v55);
      *(_DWORD *)(a4 + 384) = v55;
      if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 368), v55) )
        goto LABEL_166;
    }
    else
    {
      v47 = v6[1];
      if ( !v47 || (v47 & 7) != 0 || v47 >> 3 > 0xFFFFFFFF )
        goto LABEL_166;
      v48 = (char *)v6[2];
      v92 = v48;
      if ( (_BYTE)a3 )
      {
        if ( ((unsigned __int8)v48 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&v48[v47] > 0x7FFFFFFF0000LL || &v48[v47] < v48 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v49 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v47, 0x6C487350u);
      *(_QWORD *)(a4 + 288) = v49;
      if ( !v49 )
        goto LABEL_178;
      memmove(v49, v48, v47);
      *(_DWORD *)(a4 + 284) = v47 >> 3;
    }
LABEL_52:
    v5 = v106;
    goto LABEL_53;
  }
  if ( v6[1] != 8 )
    goto LABEL_166;
  v30 = (_DWORD *)v6[2];
  v91 = v30;
  if ( (_BYTE)a3 )
  {
    if ( ((unsigned __int8)v30 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = v73;
    v30 = v91;
  }
  if ( (*v30 & 0x1C) == 0 )
  {
    v31 = *v30 & 3;
    v83 = v31;
    if ( (unsigned __int8)v31 >= 3u )
      goto LABEL_166;
    *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (4 * v31)) & 0xC;
    if ( v31 == 1 )
      *(_DWORD *)(a4 + 280) = v30[1];
    goto LABEL_30;
  }
  v15 = -1073741637;
LABEL_267:
  if ( v15 < 0 )
    goto LABEL_274;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 288), *(unsigned int *)(a4 + 284), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 288) < 0 )
      v15 = -1073741811;
    *(_BYTE *)(a4 + 8) ^= (*(_BYTE *)(a4 + 8) ^ (v106 != 0)) & 1;
  }
  if ( v15 < 0 )
LABEL_274:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v15;
}
