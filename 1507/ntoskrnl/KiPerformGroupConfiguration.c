/*
 * XREFs of KiPerformGroupConfiguration @ 0x1407E3360
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiNonNumaQueryNodeCapacity @ 0x1402007EC (KiNonNumaQueryNodeCapacity.c)
 *     KiNonNumaQueryNodeDistance @ 0x140200804 (KiNonNumaQueryNodeDistance.c)
 *     HviGetImplementationLimits @ 0x1402684F0 (HviGetImplementationLimits.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     KiAssignAllNodesToGroup0 @ 0x1407E3608 (KiAssignAllNodesToGroup0.c)
 *     KiAssignAdjustableNodes @ 0x1407FAA48 (KiAssignAdjustableNodes.c)
 *     KiAssignFixedNodes @ 0x1407FAAEC (KiAssignFixedNodes.c)
 *     KiShuffleAssignedNodes @ 0x1407FACEC (KiShuffleAssignedNodes.c)
 */

__int16 __fastcall KiPerformGroupConfiguration(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 *v2; // r12
  __int64 v3; // r15
  unsigned int v4; // r13d
  unsigned __int16 v5; // si
  int v6; // r14d
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  unsigned __int16 v9; // di
  unsigned __int16 i; // si
  __int64 v11; // rax
  __int64 v12; // r13
  _DWORD *v13; // rdi
  _DWORD *v14; // r9
  char v15; // di
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int *v21; // rdi
  __int64 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // r9d
  int *v26; // rdi
  int v27; // eax
  __int64 j; // rcx
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  char v31; // al
  unsigned __int16 v32; // di
  unsigned int v33; // r8d
  unsigned int v34; // eax
  unsigned int *v35; // rcx
  __int64 v36; // rcx
  unsigned __int16 v37; // bx
  int v38; // r14d
  unsigned __int16 v39; // dx
  unsigned __int16 v40; // r8
  __int64 v41; // rcx
  unsigned __int16 v42; // cx
  __int64 v43; // rsi
  _QWORD *v44; // r8
  __int64 v45; // r11
  __int64 v46; // r10
  unsigned int v47; // edi
  bool v48; // zf
  __int64 v49; // r8
  unsigned __int16 v50; // ax
  __int16 v51; // di
  __int64 v52; // rdx
  __int64 *v53; // rcx
  unsigned __int16 v55; // [rsp+38h] [rbp-D0h]
  int v56; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v57; // [rsp+40h] [rbp-C8h]
  int v58; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-C0h] BYREF
  int v60; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v61[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v62[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v63[80]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v64[64]; // [rsp+108h] [rbp+0h] BYREF

  v1 = KeNumberNodes;
  v2 = KeNodeBlock;
  v3 = a1;
  v61[0] = a1;
  v57 = 0;
  v4 = 0;
  v55 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KiQueryNodeCapacity(v7, &v58);
      v8 = KeNodeBlock[v7];
      *(_BYTE *)(v8 + 172) = v58;
      v4 += v58;
      if ( v58 )
        ++v5;
      if ( PnpQueryProximityId )
      {
        PnpQueryProximityId(v7, v8 + 160, &v59);
        PnpQueryProximityNode(v59, KeNodeBlock[v7] + 148);
        if ( *(_DWORD *)(KeNodeBlock[v7] + 160) == v59 )
          ++v6;
      }
      else
      {
        *(_DWORD *)(v8 + 160) = 0;
        v6 = 1;
        *(_WORD *)(v8 + 148) = *(_WORD *)(v8 + 146);
      }
      v1 = KeNumberNodes;
      ++v7;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v3 = v61[0];
    v57 = v4;
    v55 = v5;
  }
  if ( v1 > 1u )
  {
    KeNodeDistance = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v1 * (unsigned int)v1, 0x2020654Bu);
    if ( !KeNodeDistance )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
    v1 = KeNumberNodes;
  }
  v9 = 0;
  if ( v1 )
  {
    do
    {
      for ( i = 0; i < v1; *((_DWORD *)KeNodeDistance + v11 + v9 * (unsigned __int64)(unsigned __int16)KeNumberNodes) = v60 )
      {
        KiQueryNodeDistance(v9, i, &v60);
        v1 = KeNumberNodes;
        v11 = i++;
      }
      ++v9;
    }
    while ( v9 < v1 );
    v5 = v55;
    v2 = KeNodeBlock;
    v3 = v61[0];
  }
  if ( (HvlpFlags & 1) != 0 && (HvlpFlags & 0x100) == 0 )
  {
    HviGetImplementationLimits(v61);
    if ( LODWORD(v61[0]) != -1 || (HvlEnlightenments & 0x9004) != 0 )
      goto LABEL_23;
  }
  v12 = 20LL;
  v13 = *(_DWORD **)(*(_QWORD *)(v3 + 240) + 200LL);
  if ( v13 && v6 == *v13 )
  {
    if ( v1 )
    {
      v18 = KeNodeBlock;
      v19 = v1;
      do
      {
        v20 = *v18++;
        *(_WORD *)(v20 + 144) = -1;
        *(_BYTE *)(v20 + 173) &= ~2u;
        --v19;
      }
      while ( v19 );
    }
    while ( v6 )
    {
      v21 = v13 + 1;
      --v6;
      if ( (unsigned int)PnpQueryProximityNode(*v21, &v56) )
        goto LABEL_17;
      v13 = v21 + 1;
      if ( *v13 >= 0x14u && *v13 != 0xFFFF )
        goto LABEL_17;
      v1 = KeNumberNodes;
      if ( KeNumberNodes )
      {
        v22 = KeNodeBlock;
        v23 = (unsigned __int16)KeNumberNodes;
        do
        {
          v24 = *v22;
          if ( *(_WORD *)(*v22 + 148) == (_WORD)v56 )
          {
            *(_WORD *)(v24 + 144) = *(_WORD *)v13;
            *(_BYTE *)(v24 + 173) |= 2u;
          }
          ++v22;
          --v23;
        }
        while ( v23 );
      }
    }
    if ( *(_WORD *)(KeNodeBlock[0] + 144) != 0xFFFF )
    {
      v25 = KiMaximumGroupSize;
      v26 = v62;
      v27 = KiMaximumGroupSize;
      for ( j = 20LL; j; --j )
        *v26++ = v27;
      v29 = 0;
      if ( !v1 )
      {
LABEL_58:
        LOWORD(v17) = 0;
        v35 = v62;
        KiMaximumGroups = 0;
        do
        {
          if ( *v35 < v25 )
            LOWORD(v17) = v17 + 1;
          ++v35;
          --v12;
        }
        while ( v12 );
        KiMaximumGroups = v17;
        if ( v1 )
        {
          v36 = v1;
          do
          {
            v17 = *v2++;
            *(_BYTE *)(v17 + 173) |= 8u;
            --v36;
          }
          while ( v36 );
        }
        return v17;
      }
      while ( 1 )
      {
        v30 = KeNodeBlock[v29];
        v31 = *(_BYTE *)(v30 + 173);
        if ( (v31 & 2) == 0 )
          break;
        v32 = *(_WORD *)(v30 + 144);
        if ( v32 == 0xFFFF )
        {
          *(_BYTE *)(v30 + 173) = v31 & 0xFD;
        }
        else
        {
          v33 = *(unsigned __int8 *)(v30 + 172);
          v34 = v62[v32];
          if ( v34 < v33 )
            break;
          v62[v32] = v34 - v33;
        }
        if ( ++v29 >= v1 )
          goto LABEL_58;
      }
    }
  }
LABEL_17:
  if ( strstr(*(const char **)(v3 + 216), "MAXGROUP=OFF") )
  {
    v15 = 0;
    KiMaximizeGroupsCreated = 0;
  }
  else if ( strstr(*(const char **)(v3 + 216), "MAXGROUP") )
  {
    v15 = 1;
    KiMaximizeGroupsCreated = 1;
  }
  else
  {
    v15 = KiMaximizeGroupsCreated;
  }
  if ( v5 == 1 || (v16 = KiMaximumGroupSize, !v15) && v57 <= KiMaximumGroupSize )
  {
LABEL_23:
    LOWORD(v17) = KiAssignAllNodesToGroup0();
    return v17;
  }
  v37 = KeNumberNodes;
  v38 = 0;
  v39 = 0;
  if ( KeNumberNodes )
  {
    v14 = KeNodeDistance;
    do
    {
      v40 = 0;
      while ( v39 == v40 || v14[v40 + v39 * (unsigned __int64)v37] == 0xFFFF )
      {
        if ( ++v40 >= v37 )
          goto LABEL_75;
      }
      v41 = KeNodeBlock[v39];
      *(_BYTE *)(v41 + 173) |= 8u;
      v38 += *(unsigned __int8 *)(v41 + 172);
LABEL_75:
      ++v39;
    }
    while ( v39 < v37 );
    if ( v37 )
      memmove(v64, KeNodeBlock, 8LL * v37);
  }
  if ( v37 - 1 > 0 )
  {
    v42 = 1;
    do
    {
      if ( v42 < v37 )
      {
        v43 = (unsigned __int16)(v42 - 1);
        v44 = &v64[v42];
        v45 = (unsigned __int16)(v37 - v42);
        do
        {
          v14 = (_DWORD *)*v44;
          v46 = v64[v43];
          if ( *(_BYTE *)(v46 + 172) < *(_BYTE *)(*v44 + 172LL) )
          {
            v64[v43] = v14;
            *v44 = v46;
          }
          ++v44;
          --v45;
        }
        while ( v45 );
      }
      ++v42;
    }
    while ( (unsigned __int16)(v42 - 1) < v37 - 1 );
    v5 = v55;
  }
  if ( !v38 )
  {
    LOWORD(v47) = 1;
LABEL_94:
    v48 = (_WORD)v47 == 20;
    goto LABEL_95;
  }
  if ( v15 )
    LOWORD(v47) = v5;
  else
    v47 = (v38 + v16 - 1) / v16;
  v48 = (_WORD)v47 == 20;
  if ( (unsigned __int16)v47 > 0x14u )
  {
    LOWORD(v47) = 20;
    goto LABEL_94;
  }
  do
  {
LABEL_95:
    LOBYTE(v14) = v48;
    if ( (unsigned __int8)KiAssignFixedNodes(
                            (unsigned int)v64,
                            v5,
                            (unsigned __int16)v47,
                            (_DWORD)v14,
                            (__int64)v63,
                            (__int64)v62) )
      break;
    LOWORD(v47) = v47 + 1;
    v48 = (_WORD)v47 == 20;
  }
  while ( (unsigned __int16)v47 <= 0x14u );
  KiShuffleAssignedNodes(v64, v5, v63, v62);
  v50 = KiAssignAdjustableNodes(v64, v5, v49, v63);
  if ( (unsigned __int16)v47 > v50 )
    v50 = v47;
  KiMaximumGroups = v50;
  LOWORD(v17) = KeNodeBlock[0];
  v51 = *(_WORD *)(KeNodeBlock[0] + 144);
  if ( v5 < v37 )
  {
    v52 = (unsigned __int16)(v37 - v5);
    v53 = &v64[v5];
    do
    {
      v17 = *v53++;
      *(_WORD *)(v17 + 144) = v51;
      *(_BYTE *)(v17 + 173) |= 2u;
      --v52;
    }
    while ( v52 );
  }
  return v17;
}
