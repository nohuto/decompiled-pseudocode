/*
 * XREFs of PspBuildCreateProcessContext @ 0x14044EA2C
 * Callers:
 *     NtCreateThreadEx @ 0x140450950 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlGetUmsContextExtendedSize @ 0x14024E000 (RtlGetUmsContextExtendedSize.c)
 *     PspDeleteCreateProcessContext @ 0x140450BA4 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x140553B58 (PspValidateMitigationOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(
        _QWORD *a1,
        unsigned __int64 UmsContextExtendedSize,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // r9
  char v6; // r13
  __int64 v7; // r8
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  ULONG64 v14; // rcx
  ULONG64 v15; // rcx
  int v16; // ebx
  int v17; // eax
  ULONG64 v18; // rcx
  ULONG64 v19; // rcx
  int v20; // eax
  SIZE_T v21; // rdi
  char *v22; // r15
  PVOID v23; // rax
  ULONG64 v24; // rcx
  ULONG64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int *v35; // rcx
  _BYTE *v36; // rcx
  unsigned int *v37; // rcx
  unsigned int v38; // eax
  int v39; // eax
  bool v40; // zf
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // eax
  char v44; // al
  int v45; // eax
  unsigned __int16 *v46; // rcx
  SIZE_T v47; // rdi
  char *v48; // r15
  PVOID v49; // rax
  SIZE_T v51; // rdi
  char *v52; // r15
  PVOID v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int8 v55; // r8
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  _OWORD *v58; // rcx
  USHORT v59; // bx
  SIZE_T v60; // rdi
  char *v61; // r15
  PVOID PoolWithQuotaTag; // rax
  int v63; // [rsp+20h] [rbp-108h]
  unsigned __int64 *v64; // [rsp+28h] [rbp-100h]
  unsigned __int64 v65; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v66; // [rsp+30h] [rbp-F8h]
  __int64 v67; // [rsp+30h] [rbp-F8h]
  unsigned __int16 v68; // [rsp+40h] [rbp-E8h]
  ULONG64 v69; // [rsp+48h] [rbp-E0h]
  ULONG64 v70; // [rsp+48h] [rbp-E0h]
  ULONG64 v71; // [rsp+48h] [rbp-E0h]
  ULONG64 v72; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v73; // [rsp+78h] [rbp-B0h]
  ULONG64 v74; // [rsp+80h] [rbp-A8h]
  ULONG64 v75; // [rsp+B0h] [rbp-78h]

  v5 = a3;
  v6 = UmsContextExtendedSize;
  *(_BYTE *)a4 = UmsContextExtendedSize;
  v7 = 3LL;
  if ( (_BYTE)UmsContextExtendedSize && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v67 = *a1;
  if ( *a1 < 0x28uLL )
    return 3221225485LL;
  if ( (_BYTE)UmsContextExtendedSize && *a1 != 40LL )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    UmsContextExtendedSize = (unsigned __int64)a1 + v67;
    if ( (unsigned __int64)a1 + v67 > MmUserProbeAddress || UmsContextExtendedSize < (unsigned __int64)(a1 + 5) )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v65 = v67 - 8;
  if ( (v65 & 0x1F) != 0 )
    return 3221225485LL;
  v66 = v65 >> 5;
  v8 = a1 + 1;
  v64 = a1 + 1;
  v9 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( !v66 )
    {
      v16 = 0;
      goto LABEL_26;
    }
    v10 = *v8;
    if ( (_DWORD)v5 && (v10 & 0x10000) == 0
      || (v10 & 0x20000) != 0 && v8[3]
      || (UmsContextExtendedSize = (unsigned int)(1 << v10),
          v11 = *(_DWORD *)(a4 + 4),
          (v11 & (unsigned int)UmsContextExtendedSize) != 0)
      || (*(_DWORD *)(a4 + 4) = UmsContextExtendedSize | v11, v10 > 0x60012) )
    {
LABEL_165:
      v16 = -1073741811;
      goto LABEL_26;
    }
    if ( (unsigned int)v10 <= 0x20010 )
      break;
    v26 = v10 - 131091;
    if ( !v26 )
    {
      v60 = v8[1];
      if ( !v60 || (v60 & 7) != 0 || v60 >> 3 > v9 )
        goto LABEL_165;
      v61 = (char *)v8[2];
      if ( v6 )
      {
        if ( ((unsigned __int8)v61 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&v61[v60] > MmUserProbeAddress || &v61[v60] < v61 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v60, 0x6C4A7350u);
      *(_QWORD *)(a4 + 376) = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
LABEL_178:
        v16 = -1073741670;
        goto LABEL_26;
      }
      memmove(PoolWithQuotaTag, v61, v60);
      *(_DWORD *)(a4 + 384) = v60 >> 3;
      goto LABEL_47;
    }
    v27 = v26 - 65529;
    if ( !v27 )
    {
      if ( !(_DWORD)v5 || v8[1] != 16 )
        goto LABEL_165;
      v58 = (_OWORD *)v8[2];
      if ( v6 )
      {
        if ( ((unsigned __int8)v58 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v58 = (_OWORD *)v8[2];
      }
      *(_OWORD *)(a4 + 312) = *v58;
      v59 = *(_WORD *)(a4 + 320);
      if ( v59 >= KeQueryActiveGroupCount()
        || (*(_QWORD *)(a4 + 312) & qword_1403D15E8[v59]) != *(_QWORD *)(a4 + 312)
        || *(_WORD *)(a4 + 322) | (unsigned __int16)(*(_WORD *)(a4 + 324) | *(_WORD *)(a4 + 326)) )
      {
        goto LABEL_165;
      }
      v8 = v64;
      goto LABEL_47;
    }
    v28 = v27 - 2;
    if ( !v28 )
    {
      if ( !(_DWORD)v5 || v8[1] != 4 )
        goto LABEL_165;
      v37 = (unsigned int *)v8[2];
      if ( v6 )
      {
        if ( ((unsigned __int8)v37 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = v64;
      }
      v38 = *v37;
      if ( HIBYTE(*v37) )
        goto LABEL_231;
      if ( (_WORD)v38 || BYTE2(v38) )
      {
        if ( (unsigned __int16)v38 < (unsigned __int16)KiMaximumGroups )
        {
          UmsContextExtendedSize = HIWORD(v38);
          if ( BYTE2(v38) < 0x40u )
          {
            v39 = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v38 + BYTE2(v38)];
            if ( !v39 )
              v39 = v9;
            goto LABEL_106;
          }
        }
LABEL_231:
        v39 = v9;
      }
      else
      {
        v39 = 0;
      }
LABEL_106:
      *(_DWORD *)(a4 + 244) = v39;
      v40 = v39 == (_DWORD)v9;
      goto LABEL_107;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      if ( !(_DWORD)v5 || !v6 || v8[1] != 24 )
        goto LABEL_165;
      v73 = v8[2];
      if ( (v73 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)(a4 + 328) = *(_OWORD *)v73;
      *(_QWORD *)(a4 + 344) = *(_QWORD *)(v73 + 16);
      if ( *(_DWORD *)(a4 + 328) != 256 )
        goto LABEL_165;
      UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
      v56 = *(_QWORD *)(a4 + 336);
      if ( UmsContextExtendedSize - 1 > 0xFFFE )
      {
        if ( UmsContextExtendedSize )
        {
          if ( ((unsigned __int8)v56 & v55) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v56 + UmsContextExtendedSize > MmUserProbeAddress || v56 + UmsContextExtendedSize < v56 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      else if ( ((unsigned __int8)v56 & v55) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      v57 = *(_QWORD *)(a4 + 344);
      if ( ((unsigned __int8)v57 & v55) != 0 )
        ExRaiseDatatypeMisalignment();
      goto LABEL_133;
    }
    v30 = v29 - 196593;
    if ( !v30 )
    {
      if ( v8[1] != 8 )
        goto LABEL_165;
      *(_QWORD *)(a4 + 112) = v8[2];
      goto LABEL_24;
    }
    v31 = v30 - 1;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( !v32 )
      {
        if ( v8[1] != 8 )
          goto LABEL_165;
        *(_QWORD *)(a4 + 136) = v8[2];
        goto LABEL_24;
      }
      v42 = v32 - 15;
      if ( !v42 )
      {
        if ( v8[1] != 1 )
          goto LABEL_165;
        v43 = *((unsigned __int8 *)v8 + 16);
        *(_BYTE *)(a4 + 360) = v43;
        if ( v43 <= 49 )
        {
          if ( v43 != 49 && v43 && v43 != 8 && v43 != 18 && v43 != 33 )
            goto LABEL_208;
LABEL_122:
          v44 = 1;
        }
        else
        {
          if ( v43 == 65 || v43 > 80 && (v43 <= 82 || v43 > 96 && v43 <= 98) )
            goto LABEL_122;
LABEL_208:
          v44 = 0;
        }
        v40 = v44 == 0;
LABEL_107:
        if ( v40 )
          goto LABEL_165;
        goto LABEL_24;
      }
      if ( v42 != 1 || v8[1] != 8 )
        goto LABEL_165;
      *(_QWORD *)(a4 + 368) = v8[2];
    }
    else
    {
      if ( v8[1] != 8 )
        goto LABEL_165;
      *(_QWORD *)(a4 + 128) = v8[2];
    }
LABEL_24:
    v8 += 4;
    v64 = v8;
    --v66;
    v7 = 3LL;
  }
  if ( (_DWORD)v10 == 131088 )
  {
    if ( v8[1] != 8 )
      goto LABEL_165;
    if ( v6 )
    {
      v54 = v8[2];
      if ( (v54 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = v64;
    }
    v16 = PspValidateMitigationOptions(*(_QWORD *)v8[2], 0x4444444444444LL, 3LL, *(_QWORD *)v8[2], v63);
    v63 = v16;
    if ( v16 < 0 )
      goto LABEL_253;
    *(_QWORD *)(a4 + 352) = v5;
    v8 = v64;
    goto LABEL_48;
  }
  if ( (unsigned int)v10 <= 0x20008 )
  {
    if ( (_DWORD)v10 == 131080 )
    {
      if ( v8[1] != 1 )
        goto LABEL_165;
      v36 = (_BYTE *)v8[2];
      if ( v6 )
        v8 = v64;
      *(_BYTE *)(a4 + 240) = *v36;
    }
    else
    {
      v12 = v10 - 6;
      if ( v12 )
      {
        v13 = v12 - 65533;
        if ( !v13 )
        {
          if ( v8[1] != 16 )
            goto LABEL_165;
          v14 = v8[2];
          v74 = v14;
          if ( v6 )
          {
            if ( (v14 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v14 >= MmUserProbeAddress )
              v14 = MmUserProbeAddress;
            *(_BYTE *)v14 = *(_BYTE *)v14;
            *(_BYTE *)(v14 + 15) = *(_BYTE *)(v14 + 15);
            v8 = v64;
            v14 = v74;
          }
          *(_QWORD *)(a4 + 16) = v14;
          v15 = v8[3];
          v69 = v15;
          if ( v15 )
          {
            if ( v6 )
            {
              if ( (v15 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v15 >= MmUserProbeAddress )
                v15 = MmUserProbeAddress;
              *(_BYTE *)v15 = *(_BYTE *)v15;
              *(_BYTE *)(v15 + 7) = *(_BYTE *)(v15 + 7);
              v8 = v64;
              v15 = v69;
            }
            *(_QWORD *)v15 = 16LL;
          }
          goto LABEL_24;
        }
        v17 = v13 - 1;
        if ( v17 )
        {
          v20 = v17 - 65537;
          if ( v20 )
          {
            if ( v20 != 2 )
              goto LABEL_165;
            v51 = v8[1];
            if ( !v51 || (v51 & 0xF) != 0 )
              goto LABEL_165;
            v52 = (char *)v8[2];
            if ( v6 )
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
                goto LABEL_178;
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
            v21 = v8[1];
            if ( !v21 || (v21 & 1) != 0 || v21 > 0xFFFF )
              goto LABEL_165;
            v22 = (char *)v8[2];
            if ( v6 && ((unsigned __int64)&v22[v21] > MmUserProbeAddress || &v22[v21] < v22) )
              *(_BYTE *)MmUserProbeAddress = 0;
            v23 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v21, 0x6E467350u);
            if ( !v23 )
              goto LABEL_178;
            *(_WORD *)(a4 + 224) = 0;
            *(_WORD *)(a4 + 226) = v21;
            *(_QWORD *)(a4 + 232) = v23;
            memmove(v23, v22, v21);
            *(_WORD *)(a4 + 224) = v21;
          }
          goto LABEL_47;
        }
        if ( v8[1] != 8 )
          goto LABEL_165;
        v18 = v8[2];
        v75 = v18;
        if ( v6 )
        {
          if ( (v18 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v18 >= MmUserProbeAddress )
            v18 = MmUserProbeAddress;
          *(_BYTE *)v18 = *(_BYTE *)v18;
          *(_BYTE *)(v18 + 7) = *(_BYTE *)(v18 + 7);
          v8 = v64;
          v18 = v75;
        }
        *(_QWORD *)(a4 + 24) = v18;
        v19 = v8[3];
        v70 = v19;
        if ( v19 )
        {
          if ( v6 )
          {
            if ( (v19 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v19 >= MmUserProbeAddress )
              v19 = MmUserProbeAddress;
            *(_BYTE *)v19 = *(_BYTE *)v19;
            *(_BYTE *)(v19 + 7) = *(_BYTE *)(v19 + 7);
            v8 = v64;
            v19 = v70;
          }
          *(_QWORD *)v19 = 8LL;
        }
      }
      else
      {
        if ( v8[1] != 64 )
          goto LABEL_165;
        v24 = v8[2];
        v72 = v24;
        if ( v6 )
        {
          if ( (v24 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v24 >= MmUserProbeAddress )
            v24 = MmUserProbeAddress;
          *(_BYTE *)v24 = *(_BYTE *)v24;
          *(_BYTE *)(v24 + 63) = *(_BYTE *)(v24 + 63);
          v8 = v64;
          v24 = v72;
        }
        *(_QWORD *)(a4 + 32) = v24;
        v25 = v8[3];
        v71 = v25;
        if ( v25 )
        {
          if ( v6 )
          {
            if ( (v25 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v25 >= MmUserProbeAddress )
              v25 = MmUserProbeAddress;
            *(_BYTE *)v25 = *(_BYTE *)v25;
            *(_BYTE *)(v25 + 7) = *(_BYTE *)(v25 + 7);
            v8 = v64;
            v25 = v71;
          }
          *(_QWORD *)v25 = 64LL;
        }
      }
    }
    goto LABEL_24;
  }
  v33 = v10 - 131081;
  if ( !v33 )
  {
    if ( v8[1] != 4 )
      goto LABEL_165;
    v41 = (_DWORD *)v8[2];
    if ( v6 )
    {
      if ( ((unsigned __int8)v41 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = v64;
    }
    *(_DWORD *)(a4 + 308) = *v41;
    goto LABEL_24;
  }
  v34 = v33 - 1;
  if ( v34 )
  {
    v45 = v34 - 1;
    if ( v45 )
    {
      if ( v45 != 2 || v8[1] != 2 )
        goto LABEL_165;
      v46 = (unsigned __int16 *)v8[2];
      if ( v6 )
      {
        if ( ((unsigned __int8)v46 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v46 = (unsigned __int16 *)v8[2];
      }
      v68 = *v46;
      if ( *v46 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_165;
      _mm_lfence();
      if ( !*(_QWORD *)(KeNodeBlock[v68] + 136) )
        goto LABEL_165;
      *(_WORD *)(a4 + 242) = v68;
LABEL_133:
      v8 = v64;
      goto LABEL_24;
    }
    v47 = v8[1];
    if ( !v47 || (v47 & 7) != 0 || v47 >> 3 > v9 )
      goto LABEL_165;
    v48 = (char *)v8[2];
    if ( v6 )
    {
      if ( ((unsigned __int8)v48 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v48[v47] > MmUserProbeAddress || &v48[v47] < v48 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v49 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v47, 0x6C487350u);
    *(_QWORD *)(a4 + 288) = v49;
    if ( !v49 )
      goto LABEL_178;
    memmove(v49, v48, v47);
    *(_DWORD *)(a4 + 284) = v47 >> 3;
LABEL_47:
    v9 = 0xFFFFFFFFLL;
LABEL_48:
    v5 = a3;
    goto LABEL_24;
  }
  if ( v8[1] != 8 )
    goto LABEL_165;
  v35 = (unsigned int *)v8[2];
  if ( v6 )
  {
    if ( ((unsigned __int8)v35 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = v64;
  }
  UmsContextExtendedSize = *v35;
  if ( (UmsContextExtendedSize & 0x1C) == 0 )
  {
    UmsContextExtendedSize &= 3u;
    if ( (unsigned __int8)UmsContextExtendedSize >= 3u )
      goto LABEL_165;
    *(_BYTE *)(a4 + 9) ^= (*(_BYTE *)(a4 + 9) ^ (2 * UmsContextExtendedSize)) & 6;
    if ( (_DWORD)UmsContextExtendedSize == 1 )
      *(_DWORD *)(a4 + 280) = v35[1];
    goto LABEL_24;
  }
  v16 = -1073741637;
LABEL_26:
  v63 = v16;
LABEL_253:
  if ( v16 < 0 )
    goto LABEL_260;
  if ( (*(_DWORD *)(a4 + 4) & 0x800) != 0 )
  {
    qsort(*(void **)(a4 + 288), *(unsigned int *)(a4 + 284), 8uLL, PspSortHandleList);
    if ( **(int **)(a4 + 288) < 0 )
      v16 = -1073741811;
    *(_BYTE *)(a4 + 8) ^= (*(_BYTE *)(a4 + 8) ^ (a3 != 0)) & 1;
  }
  if ( v16 < 0 )
LABEL_260:
    PspDeleteCreateProcessContext(a4, UmsContextExtendedSize, v7, v5, v63);
  return (unsigned int)v16;
}
