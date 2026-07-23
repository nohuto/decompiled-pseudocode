/*
 * XREFs of PspBuildCreateProcessContext @ 0x14044629C
 * Callers:
 *     NtCreateThreadEx @ 0x14044528C (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x1401230CC (KeVerifyGroupAffinity.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x1401F5874 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlGetUmsContextExtendedSize @ 0x1401FF170 (RtlGetUmsContextExtendedSize.c)
 *     PspDeleteCreateProcessContext @ 0x1404454E0 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1404C1ED4 (PspValidateMitigationOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(_QWORD *a1, char a2, int a3, __int64 a4)
{
  int v5; // r9d
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  ULONG64 v12; // rcx
  ULONG64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  ULONG64 v16; // rcx
  ULONG64 v17; // rcx
  int v18; // eax
  SIZE_T v19; // rdi
  char *v20; // r15
  PVOID v21; // rax
  ULONG64 v22; // rcx
  ULONG64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // edx
  _BYTE *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  _PROCESSOR_NUMBER *v36; // rcx
  ULONG ProcessorIndexFromNumber; // eax
  bool v38; // zf
  _DWORD *v39; // rcx
  int v40; // eax
  char v41; // al
  unsigned __int64 v42; // rcx
  __int64 v43; // r9
  int v44; // eax
  SIZE_T v45; // rdi
  char *v46; // r15
  PVOID v47; // rax
  _DWORD *v48; // rcx
  _WORD *v49; // rcx
  SIZE_T v51; // rdi
  char *v52; // r15
  PVOID v53; // rax
  _OWORD *v54; // rdx
  SIZE_T v55; // rdi
  char *v56; // r15
  PVOID v57; // rax
  SIZE_T v58; // rdi
  char *v59; // r15
  PVOID PoolWithQuotaTag; // rax
  _OWORD *v61; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int8 v63; // r8
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // [rsp+20h] [rbp-118h]
  unsigned __int64 *v67; // [rsp+28h] [rbp-110h]
  __int64 v68; // [rsp+30h] [rbp-108h]
  unsigned __int64 v69; // [rsp+30h] [rbp-108h]
  unsigned __int64 v70; // [rsp+30h] [rbp-108h]
  unsigned __int16 v71; // [rsp+38h] [rbp-100h]
  ULONG64 v72; // [rsp+40h] [rbp-F8h]
  ULONG64 v73; // [rsp+40h] [rbp-F8h]
  ULONG64 v74; // [rsp+40h] [rbp-F8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp-E8h] BYREF
  _WORD *v76; // [rsp+58h] [rbp-E0h]
  _PROCESSOR_NUMBER *v77; // [rsp+60h] [rbp-D8h]
  int v78; // [rsp+68h] [rbp-D0h]
  _OWORD *v79; // [rsp+70h] [rbp-C8h]
  ULONG64 v80; // [rsp+78h] [rbp-C0h]
  _DWORD *v81; // [rsp+80h] [rbp-B8h]
  _BYTE *v82; // [rsp+88h] [rbp-B0h]
  char *v83; // [rsp+90h] [rbp-A8h]
  _DWORD *v84; // [rsp+98h] [rbp-A0h]
  _OWORD *v85; // [rsp+A0h] [rbp-98h]
  __int64 v86; // [rsp+A8h] [rbp-90h]
  int v87; // [rsp+B0h] [rbp-88h]
  _DWORD *v88; // [rsp+B8h] [rbp-80h]
  ULONG64 v89; // [rsp+C0h] [rbp-78h]
  ULONG64 v90; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-68h]
  char *v92; // [rsp+D8h] [rbp-60h]
  PVOID v93; // [rsp+E0h] [rbp-58h]
  char *v94; // [rsp+E8h] [rbp-50h]
  char *v95; // [rsp+F0h] [rbp-48h]

  v5 = a3;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v68 = *a1;
  if ( *a1 < 0x28uLL )
    return 3221225485LL;
  if ( a2 && v68 != 40 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v68 > MmUserProbeAddress || (_QWORD *)((char *)a1 + v68) < a1 + 5 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v69 = v68 - 8;
  if ( (v69 & 0x1F) != 0 )
    return 3221225485LL;
  v70 = v69 >> 5;
  v7 = a1 + 1;
  v67 = a1 + 1;
  while ( 1 )
  {
    if ( !v70 )
    {
      v14 = 0;
      goto LABEL_257;
    }
    v8 = *v7;
    v91 = *v7;
    if ( v5 && (v8 & 0x10000) == 0
      || (v8 & 0x20000) != 0 && v7[3]
      || (v87 = 1 << v8, v9 = *(_DWORD *)(a4 + 4), (v9 & (1 << v8)) != 0)
      || (*(_DWORD *)(a4 + 4) = (1 << v8) | v9, v8 > 0x60011) )
    {
LABEL_169:
      v14 = -1073741811;
      goto LABEL_257;
    }
    if ( (unsigned int)v8 <= 0x20010 )
      break;
    if ( (unsigned int)v8 <= 0x3000F )
    {
      if ( (_DWORD)v8 == 196623 )
      {
        if ( !v5 || !a2 || v7[1] != 24 )
          goto LABEL_169;
        v85 = (_OWORD *)v7[2];
        if ( ((unsigned __int8)v85 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v61 = v85;
        *(_OWORD *)(a4 + 328) = *v85;
        *(_QWORD *)(a4 + 344) = *((_QWORD *)v61 + 2);
        if ( *(_DWORD *)(a4 + 328) != 256 )
          goto LABEL_169;
        UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
        v64 = *(_QWORD *)(a4 + 336);
        if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
        {
          if ( UmsContextExtendedSize )
          {
            if ( ((unsigned __int8)v64 & v63) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v64 + UmsContextExtendedSize > MmUserProbeAddress || v64 + UmsContextExtendedSize < v64 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
        }
        else if ( ((unsigned __int8)v64 & v63) != 0 )
        {
          ExRaiseDatatypeMisalignment();
        }
        v65 = *(_QWORD *)(a4 + 344);
        if ( ((unsigned __int8)v65 & v63) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_155;
      }
      v32 = v8 - 131090;
      if ( !v32 )
      {
        v58 = v7[1];
        if ( !v58 || (v58 & 7) != 0 || v58 > 0x88 )
          goto LABEL_169;
        v59 = (char *)v7[2];
        v95 = v59;
        if ( a2 )
        {
          if ( ((unsigned __int8)v59 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v59[v58] > MmUserProbeAddress || &v59[v58] < v59 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v58, 0x61547350u);
        *(_QWORD *)(a4 + 368) = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
LABEL_182:
          v14 = -1073741670;
          goto LABEL_257;
        }
        memmove(PoolWithQuotaTag, v59, v58);
        *(_DWORD *)(a4 + 384) = v58;
        if ( !IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 368), v58) )
          goto LABEL_169;
        goto LABEL_53;
      }
      v33 = v32 - 1;
      if ( !v33 )
      {
        v55 = v7[1];
        if ( !v55 || (v55 & 7) != 0 || v55 >> 3 > 0xFFFFFFFF )
          goto LABEL_169;
        v56 = (char *)v7[2];
        v83 = v56;
        if ( a2 )
        {
          if ( ((unsigned __int8)v56 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v56[v55] > MmUserProbeAddress || &v56[v55] < v56 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        v57 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v55, 0x6C4A7350u);
        *(_QWORD *)(a4 + 376) = v57;
        if ( !v57 )
          goto LABEL_182;
        memmove(v57, v56, v55);
        *(_DWORD *)(a4 + 388) = v55 >> 3;
        goto LABEL_53;
      }
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 65528;
        if ( v35 )
        {
          if ( v35 != 2 || !v5 || v7[1] != 4 )
            goto LABEL_169;
          v36 = (_PROCESSOR_NUMBER *)v7[2];
          v77 = v36;
          if ( a2 )
          {
            if ( ((unsigned __int8)v36 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v7 = v67;
            v36 = v77;
          }
          ProcNumber = *v36;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          *(_DWORD *)(a4 + 244) = ProcessorIndexFromNumber;
          v38 = ProcessorIndexFromNumber == -1;
        }
        else
        {
          if ( !v5 || v7[1] != 16 )
            goto LABEL_169;
          v54 = (_OWORD *)v7[2];
          v79 = v54;
          if ( a2 )
          {
            if ( ((unsigned __int8)v54 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v7 = v67;
            v54 = v79;
          }
          *(_OWORD *)(a4 + 312) = *v54;
          v38 = !KeVerifyGroupAffinity(a4 + 312, 1);
        }
        if ( v38 )
          goto LABEL_169;
        goto LABEL_53;
      }
      if ( v7[1] != 4 )
        goto LABEL_169;
      v48 = (_DWORD *)v7[2];
      v81 = v48;
      if ( a2 )
      {
        if ( ((unsigned __int8)v48 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v7 = v67;
        v48 = v81;
      }
      *(_DWORD *)(a4 + 392) = *v48;
    }
    else
    {
      v24 = v8 - 393216;
      if ( !v24 )
      {
        if ( v7[1] != 8 )
          goto LABEL_169;
        *(_QWORD *)(a4 + 112) = v7[2];
        goto LABEL_22;
      }
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( !v26 )
        {
          if ( v7[1] != 8 )
            goto LABEL_169;
          *(_QWORD *)(a4 + 136) = v7[2];
          goto LABEL_22;
        }
        if ( v26 != 15 || v7[1] != 1 )
          goto LABEL_169;
        v40 = *((unsigned __int8 *)v7 + 16);
        *(_BYTE *)(a4 + 360) = v40;
        if ( v40 <= 49 )
        {
          if ( v40 != 49 && v40 && v40 != 8 && v40 != 18 && v40 != 33 )
            goto LABEL_254;
LABEL_123:
          v41 = 1;
        }
        else
        {
          if ( v40 == 65 || v40 > 80 && (v40 <= 82 || v40 > 96 && v40 <= 98) )
            goto LABEL_123;
LABEL_254:
          v41 = 0;
        }
        if ( !v41 )
          goto LABEL_169;
        goto LABEL_22;
      }
      if ( v7[1] != 8 )
        goto LABEL_169;
      *(_QWORD *)(a4 + 128) = v7[2];
    }
LABEL_22:
    v7 += 4;
    v67 = v7;
    --v70;
  }
  if ( (_DWORD)v8 == 131088 )
  {
    if ( v7[1] != 8 )
      goto LABEL_169;
    if ( a2 )
    {
      v42 = v7[2];
      if ( (v42 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = v67;
    }
    v86 = *(_QWORD *)v7[2];
    v14 = PspValidateMitigationOptions(v86, 0x444444444444444LL, 3LL, v86, v66);
    v66 = v14;
    if ( v14 < 0 )
      goto LABEL_257;
    *(_QWORD *)(a4 + 352) = v43;
    v7 = v67;
LABEL_53:
    v5 = a3;
    goto LABEL_22;
  }
  if ( (unsigned int)v8 <= 0x20008 )
  {
    if ( (_DWORD)v8 == 131080 )
    {
      if ( v7[1] != 1 )
        goto LABEL_169;
      v31 = (_BYTE *)v7[2];
      v82 = v31;
      if ( a2 )
      {
        v7 = v67;
        v31 = v82;
      }
      *(_BYTE *)(a4 + 240) = *v31;
    }
    else
    {
      v10 = v8 - 6;
      if ( v10 )
      {
        v11 = v10 - 65533;
        if ( !v11 )
        {
          if ( v7[1] != 16 )
            goto LABEL_169;
          v12 = v7[2];
          v80 = v12;
          if ( a2 )
          {
            if ( (v12 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v12 >= MmUserProbeAddress )
              v12 = MmUserProbeAddress;
            *(_BYTE *)v12 = *(_BYTE *)v12;
            *(_BYTE *)(v12 + 15) = *(_BYTE *)(v12 + 15);
            v7 = v67;
            v12 = v80;
          }
          *(_QWORD *)(a4 + 16) = v12;
          v13 = v7[3];
          v72 = v13;
          if ( v13 )
          {
            if ( a2 )
            {
              if ( (v13 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v13 >= MmUserProbeAddress )
                v13 = MmUserProbeAddress;
              *(_BYTE *)v13 = *(_BYTE *)v13;
              *(_BYTE *)(v13 + 7) = *(_BYTE *)(v13 + 7);
              v7 = v67;
              v13 = v72;
            }
            *(_QWORD *)v13 = 16LL;
          }
          goto LABEL_22;
        }
        v15 = v11 - 1;
        if ( v15 )
        {
          v18 = v15 - 65537;
          if ( v18 )
          {
            if ( v18 != 2 )
              goto LABEL_169;
            v51 = v7[1];
            if ( !v51 || (v51 & 0xF) != 0 )
              goto LABEL_169;
            v52 = (char *)v7[2];
            v94 = v52;
            if ( a2 )
            {
              if ( ((unsigned __int8)v52 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)&v52[v51] > MmUserProbeAddress || &v52[v51] < v52 )
                *(_BYTE *)MmUserProbeAddress = 0;
            }
            if ( v51 > 0x10 )
            {
              v53 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v51, 0x6C527350u);
              *(_QWORD *)(a4 + 272) = v53;
              if ( !v53 )
                goto LABEL_182;
            }
            else
            {
              *(_QWORD *)(a4 + 272) = a4 + 256;
            }
            memmove(*(void **)(a4 + 272), v52, v51);
            *(_QWORD *)(a4 + 248) = v51 >> 4;
          }
          else
          {
            v19 = v7[1];
            if ( !v19 || (v19 & 1) != 0 || v19 > 0xFFFF )
              goto LABEL_169;
            v20 = (char *)v7[2];
            v92 = v20;
            if ( a2 && ((unsigned __int64)&v20[v19] > MmUserProbeAddress || &v20[v19] < v20) )
              *(_BYTE *)MmUserProbeAddress = 0;
            v21 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v19, 0x6E467350u);
            v93 = v21;
            if ( !v21 )
              goto LABEL_182;
            *(_WORD *)(a4 + 224) = 0;
            *(_WORD *)(a4 + 226) = v19;
            *(_QWORD *)(a4 + 232) = v21;
            memmove(v21, v20, v19);
            *(_WORD *)(a4 + 224) = v19;
          }
          goto LABEL_53;
        }
        if ( v7[1] != 8 )
          goto LABEL_169;
        v16 = v7[2];
        v90 = v16;
        if ( a2 )
        {
          if ( (v16 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v16 >= MmUserProbeAddress )
            v16 = MmUserProbeAddress;
          *(_BYTE *)v16 = *(_BYTE *)v16;
          *(_BYTE *)(v16 + 7) = *(_BYTE *)(v16 + 7);
          v7 = v67;
          v16 = v90;
        }
        *(_QWORD *)(a4 + 24) = v16;
        v17 = v7[3];
        v73 = v17;
        if ( v17 )
        {
          if ( a2 )
          {
            if ( (v17 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v17 >= MmUserProbeAddress )
              v17 = MmUserProbeAddress;
            *(_BYTE *)v17 = *(_BYTE *)v17;
            *(_BYTE *)(v17 + 7) = *(_BYTE *)(v17 + 7);
            v7 = v67;
            v17 = v73;
          }
          *(_QWORD *)v17 = 8LL;
        }
      }
      else
      {
        if ( v7[1] != 64 )
          goto LABEL_169;
        v22 = v7[2];
        v89 = v22;
        if ( a2 )
        {
          if ( (v22 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v22 >= MmUserProbeAddress )
            v22 = MmUserProbeAddress;
          *(_BYTE *)v22 = *(_BYTE *)v22;
          *(_BYTE *)(v22 + 63) = *(_BYTE *)(v22 + 63);
          v7 = v67;
          v22 = v89;
        }
        *(_QWORD *)(a4 + 32) = v22;
        v23 = v7[3];
        v74 = v23;
        if ( v23 )
        {
          if ( a2 )
          {
            if ( (v23 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v23 >= MmUserProbeAddress )
              v23 = MmUserProbeAddress;
            *(_BYTE *)v23 = *(_BYTE *)v23;
            *(_BYTE *)(v23 + 7) = *(_BYTE *)(v23 + 7);
            v7 = v67;
            v23 = v74;
          }
          *(_QWORD *)v23 = 64LL;
        }
      }
    }
    goto LABEL_22;
  }
  v27 = v8 - 131081;
  if ( !v27 )
  {
    if ( v7[1] != 4 )
      goto LABEL_169;
    v39 = (_DWORD *)v7[2];
    v88 = v39;
    if ( a2 )
    {
      if ( ((unsigned __int8)v39 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = v67;
      v39 = v88;
    }
    *(_DWORD *)(a4 + 308) = *v39;
    goto LABEL_22;
  }
  v28 = v27 - 1;
  if ( v28 )
  {
    v44 = v28 - 1;
    if ( !v44 )
    {
      v45 = v7[1];
      if ( !v45 || (v45 & 7) != 0 || v45 >> 3 > 0xFFFFFFFF )
        goto LABEL_169;
      v46 = (char *)v7[2];
      v83 = v46;
      if ( a2 )
      {
        if ( ((unsigned __int8)v46 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&v46[v45] > MmUserProbeAddress || &v46[v45] < v46 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v47 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v45, 0x6C487350u);
      *(_QWORD *)(a4 + 288) = v47;
      if ( !v47 )
        goto LABEL_182;
      memmove(v47, v46, v45);
      *(_DWORD *)(a4 + 284) = v45 >> 3;
      goto LABEL_53;
    }
    if ( v44 != 2 || v7[1] != 2 )
      goto LABEL_169;
    v49 = (_WORD *)v7[2];
    v76 = v49;
    if ( a2 )
    {
      if ( ((unsigned __int8)v49 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v49 = v76;
    }
    v71 = *v49;
    if ( *v49 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_169;
    _mm_lfence();
    if ( !*(_QWORD *)(KeNodeBlock[v71] + 136) )
      goto LABEL_169;
    *(_WORD *)(a4 + 242) = v71;
LABEL_155:
    v7 = v67;
    goto LABEL_22;
  }
  if ( v7[1] != 8 )
    goto LABEL_169;
  v29 = (_DWORD *)v7[2];
  v84 = v29;
  if ( a2 )
  {
    if ( ((unsigned __int8)v29 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = v67;
    v29 = v84;
  }
  if ( (*v29 & 0x1C) == 0 )
  {
    v30 = *v29 & 3;
    v78 = v30;
    if ( (unsigned __int8)v30 >= 3u )
      goto LABEL_169;
    *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (2 * v30)) & 6;
    if ( v30 == 1 )
      *(_DWORD *)(a4 + 280) = v29[1];
    goto LABEL_22;
  }
  v14 = -1073741637;
LABEL_257:
  if ( v14 < 0 )
    goto LABEL_264;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 288), *(unsigned int *)(a4 + 284), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 288) < 0 )
      v14 = -1073741811;
    *(_BYTE *)(a4 + 8) ^= (*(_BYTE *)(a4 + 8) ^ (a3 != 0)) & 1;
  }
  if ( v14 < 0 )
LABEL_264:
    PspDeleteCreateProcessContext(a4);
  return (unsigned int)v14;
}
