/*
 * XREFs of KiPerformGroupConfiguration @ 0x140793198
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     KiNonNumaQueryNodeCapacity @ 0x1401D336C (KiNonNumaQueryNodeCapacity.c)
 *     KiNonNumaQueryNodeDistance @ 0x1401D3384 (KiNonNumaQueryNodeDistance.c)
 *     HviGetImplementationLimits @ 0x140231DEC (HviGetImplementationLimits.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     KiAssignAllNodesToGroup0 @ 0x1407933F4 (KiAssignAllNodesToGroup0.c)
 *     KiAssignAdjustableNodes @ 0x1407CFB70 (KiAssignAdjustableNodes.c)
 *     KiAssignFixedNodes @ 0x1407CFC14 (KiAssignFixedNodes.c)
 *     KiShuffleAssignedNodes @ 0x1407CFE14 (KiShuffleAssignedNodes.c)
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
  int v11; // eax
  __int64 v12; // r13
  _DWORD *v13; // rdi
  _DWORD *v14; // r9
  char v15; // di
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int *v20; // rdi
  __int64 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // r9d
  int *v25; // rdi
  int v26; // eax
  __int64 j; // rcx
  unsigned __int16 v28; // cx
  __int64 v29; // rdx
  char v30; // al
  unsigned __int16 v31; // di
  unsigned int v32; // r8d
  unsigned int v33; // eax
  unsigned int *v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // r15d
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
  int v57; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v58; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-C0h]
  int v60; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v61[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v62[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v63[80]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v64[64]; // [rsp+108h] [rbp+0h] BYREF

  v1 = KeNumberNodes;
  v2 = KeNodeBlock;
  v61[0] = a1;
  v59 = 0;
  v3 = a1;
  v55 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KiQueryNodeCapacity(v7, &v57);
      v8 = KeNodeBlock[v7];
      *(_BYTE *)(v8 + 172) = v57;
      v4 += v57;
      if ( v57 )
        ++v5;
      if ( PnpQueryProximityId )
      {
        PnpQueryProximityId(v7, v8 + 160, &v58);
        PnpQueryProximityNode(v58, KeNodeBlock[v7] + 148);
        if ( *(_DWORD *)(KeNodeBlock[v7] + 160) == v58 )
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
    v59 = v4;
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
      for ( i = 0; i < v1; *((_DWORD *)KeNodeDistance + v11 + v9 * (unsigned __int16)KeNumberNodes) = v60 )
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
  if ( HvlHypervisorConnected )
  {
    if ( (HvlpFlags & 0x80u) == 0 )
    {
      HviGetImplementationLimits(v61);
      if ( LODWORD(v61[0]) != -1 || (HvlEnlightenments & 0x4004) != 0 )
        goto LABEL_21;
    }
  }
  v12 = 20LL;
  v13 = *(_DWORD **)(*(_QWORD *)(v3 + 240) + 200LL);
  if ( v13 && v6 == *v13 )
  {
    if ( v1 )
    {
      v17 = KeNodeBlock;
      v18 = v1;
      do
      {
        v19 = *v17++;
        *(_WORD *)(v19 + 144) = -1;
        *(_BYTE *)(v19 + 173) &= ~2u;
        --v18;
      }
      while ( v18 );
    }
    if ( v6 )
    {
      while ( 1 )
      {
        v20 = v13 + 1;
        --v6;
        if ( (unsigned int)PnpQueryProximityNode(*v20, &v56) )
          break;
        v13 = v20 + 1;
        if ( *v13 >= 0x14u && *v13 != 0xFFFF )
          break;
        v1 = KeNumberNodes;
        if ( KeNumberNodes )
        {
          v21 = KeNodeBlock;
          v22 = (unsigned __int16)KeNumberNodes;
          do
          {
            v23 = *v21;
            if ( *(_WORD *)(*v21 + 148) == (_WORD)v56 )
            {
              *(_WORD *)(v23 + 144) = *(_WORD *)v13;
              *(_BYTE *)(v23 + 173) |= 2u;
            }
            ++v21;
            --v22;
          }
          while ( v22 );
        }
        if ( !v6 )
          goto LABEL_45;
      }
    }
    else
    {
LABEL_45:
      if ( *(_WORD *)(KeNodeBlock[0] + 144) != 0xFFFF )
      {
        v24 = KiMaximumGroupSize;
        v25 = v62;
        v26 = KiMaximumGroupSize;
        for ( j = 20LL; j; --j )
          *v25++ = v26;
        v28 = 0;
        if ( !v1 )
        {
LABEL_56:
          LOWORD(v16) = 0;
          v34 = v62;
          KiMaximumGroups = 0;
          do
          {
            if ( *v34 < v24 )
              LOWORD(v16) = v16 + 1;
            ++v34;
            --v12;
          }
          while ( v12 );
          KiMaximumGroups = v16;
          if ( v1 )
          {
            v35 = v1;
            do
            {
              v16 = *v2++;
              *(_BYTE *)(v16 + 173) |= 8u;
              --v35;
            }
            while ( v35 );
          }
          return v16;
        }
        while ( 1 )
        {
          v29 = KeNodeBlock[v28];
          v30 = *(_BYTE *)(v29 + 173);
          if ( (v30 & 2) == 0 )
            break;
          v31 = *(_WORD *)(v29 + 144);
          if ( v31 == 0xFFFF )
          {
            *(_BYTE *)(v29 + 173) = v30 & 0xFD;
          }
          else
          {
            v32 = *(unsigned __int8 *)(v29 + 172);
            v33 = v62[v31];
            if ( v33 < v32 )
              break;
            v62[v31] = v33 - v32;
          }
          if ( ++v28 >= v1 )
            goto LABEL_56;
        }
      }
    }
  }
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
  if ( v5 == 1 || (v36 = KiMaximumGroupSize, !v15) && v59 <= KiMaximumGroupSize )
  {
LABEL_21:
    LOWORD(v16) = KiAssignAllNodesToGroup0();
    return v16;
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
      while ( v39 == v40 || v14[v39 * v37 + v40] == 0xFFFF )
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
    v47 = (v38 + v36 - 1) / v36;
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
  LOWORD(v16) = KeNodeBlock[0];
  v51 = *(_WORD *)(KeNodeBlock[0] + 144);
  if ( v5 < v37 )
  {
    v52 = (unsigned __int16)(v37 - v5);
    v53 = &v64[v5];
    do
    {
      v16 = *v53++;
      *(_WORD *)(v16 + 144) = v51;
      *(_BYTE *)(v16 + 173) |= 2u;
      --v52;
    }
    while ( v52 );
  }
  return v16;
}
