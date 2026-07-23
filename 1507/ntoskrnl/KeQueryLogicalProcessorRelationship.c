/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x140113FA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryMaximumGroupCount @ 0x140021220 (KeQueryMaximumGroupCount.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  ULONG v5; // r15d
  __int64 v6; // r14
  char *v7; // rdi
  NTSTATUS v8; // r12d
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v9; // rbx
  __int64 v10; // rsi
  unsigned __int16 v11; // r14
  LOGICAL_PROCESSOR_RELATIONSHIP v12; // r11d
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rdx
  LOGICAL_PROCESSOR_RELATIONSHIP v16; // r14d
  DWORD v17; // edi
  int v18; // r8d
  DWORD v19; // r9d
  __int64 v20; // rcx
  unsigned __int64 v21; // r10
  unsigned __int16 v22; // r11
  unsigned int v24; // r9d
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  _WORD *v27; // rcx
  unsigned __int64 v28; // rdx
  int v29; // r9d
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // rax
  unsigned __int16 v40; // r10
  unsigned __int16 v41; // ax
  unsigned __int16 v42; // r8
  bool v43; // zf
  __int16 v44; // di
  int v45; // esi
  unsigned int v46; // ecx
  unsigned int v47; // edi
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // r8
  _BOOL8 v54; // rax
  unsigned __int16 Group; // ax
  unsigned __int8 Number; // dl
  int v57; // ecx
  unsigned int v58; // esi
  __int64 *v59; // r8
  unsigned __int16 v60; // ax
  __int64 v61; // rcx
  __int64 v62; // r9
  __int64 v63; // rax
  WORD v64; // cx
  _QWORD *v65; // rax
  __int64 v66; // rax
  GROUP_AFFINITY *GroupMask; // rcx
  unsigned __int64 *v68; // r8
  unsigned __int64 v69; // r9
  __int64 v70; // rcx
  int v71; // [rsp+20h] [rbp-E0h]
  unsigned int v72; // [rsp+24h] [rbp-DCh]
  unsigned int v73; // [rsp+28h] [rbp-D8h]
  ULONG v75; // [rsp+30h] [rbp-D0h]
  unsigned int v76; // [rsp+34h] [rbp-CCh]
  __int64 v79; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v80[21]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+100h] [rbp+0h]
  _QWORD v82[21]; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v83[10]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v84; // [rsp+250h] [rbp+150h]
  unsigned __int16 v85; // [rsp+260h] [rbp+160h]
  _DWORD v86[43]; // [rsp+268h] [rbp+168h] BYREF
  char v87; // [rsp+314h] [rbp+214h] BYREF

  v5 = 0;
  v71 = 0;
  v75 = *Length;
  if ( !ProcessorNumber )
  {
    v73 = 0;
    v76 = KeNumberProcessors_0 - 1;
    v72 = 0;
    goto LABEL_3;
  }
  if ( ProcessorNumber->Reserved )
  {
LABEL_116:
    v58 = -1;
    goto LABEL_85;
  }
  Group = ProcessorNumber->Group;
  if ( ProcessorNumber->Group || ProcessorNumber->Number )
  {
    if ( Group < (unsigned __int16)KiMaximumGroups )
    {
      Number = ProcessorNumber->Number;
      if ( Number < 0x40u )
      {
        v57 = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
        if ( !v57 )
          v57 = -1;
        v58 = v57;
        goto LABEL_85;
      }
    }
    goto LABEL_116;
  }
  v58 = 0;
LABEL_85:
  v73 = v58;
  if ( v58 >= (unsigned int)KeNumberProcessors_0 )
    return -1073741811;
  v72 = v58;
  v76 = v58;
LABEL_3:
  v6 = 5LL;
  v7 = &v87;
  do
  {
    *(_QWORD *)(v7 - 4) = 1310721LL;
    memset(v7 + 4, 0, 0xA0uLL);
    v7 += 168;
    --v6;
  }
  while ( v6 );
  v81 = 1310721LL;
  memset(v82, 0, 0xA0uLL);
  v79 = 1310721LL;
  memset(v80, 0, 0xA0uLL);
  v8 = 0;
  v9 = Information;
  v10 = v73;
  if ( v72 <= v76 )
  {
    v11 = v79;
    v12 = RelationshipType;
    v13 = v72;
    do
    {
      v14 = KiProcessorBlock[v13];
      if ( v12 == RelationProcessorPackage || v12 == RelationAll )
      {
        v15 = 0LL;
        v29 = 0;
        v30 = *(_OWORD *)(v14 + 24616);
        v83[0] = *(_OWORD *)(v14 + 24600);
        v31 = *(_OWORD *)(v14 + 24632);
        v83[1] = v30;
        v32 = *(_OWORD *)(v14 + 24648);
        v83[2] = v31;
        v33 = *(_OWORD *)(v14 + 24664);
        v83[3] = v32;
        v34 = *(_OWORD *)(v14 + 24680);
        v83[4] = v33;
        v35 = *(_OWORD *)(v14 + 24696);
        v83[5] = v34;
        v36 = *(_OWORD *)(v14 + 24712);
        v83[6] = v35;
        v37 = *(_OWORD *)(v14 + 24728);
        v83[7] = v36;
        v38 = *(_OWORD *)(v14 + 24744);
        v39 = *(_QWORD *)(v14 + 24760);
        v83[8] = v37;
        v83[9] = v38;
        v84 = v39;
        v40 = v83[0];
        v41 = v11;
        if ( v11 >= LOWORD(v83[0]) )
          v41 = v83[0];
        v85 = v41;
        v42 = 0;
        if ( v41 )
        {
          do
          {
            v43 = (v80[v42] & *((_QWORD *)v83 + v42 + 1)) == 0LL;
            *(_QWORD *)&v86[2 * v42] = v80[v42] & *((_QWORD *)v83 + v42 + 1);
            if ( !v43 )
              v29 = 1;
            ++v42;
          }
          while ( v42 < v85 );
          v8 = v71;
          v15 = 0LL;
          v12 = RelationshipType;
        }
        if ( ProcessorNumber || !v29 )
        {
          if ( v11 < v40 )
          {
            v59 = (__int64 *)v83;
            v60 = v11;
          }
          else
          {
            v59 = &v79;
            v60 = v40;
          }
          WORD1(v79) = 20;
          v11 = *(_WORD *)v59;
          LOWORD(v79) = *(_WORD *)v59;
          if ( v60 )
          {
            v61 = 0LL;
            LOWORD(v15) = v60;
            v62 = v60;
            do
            {
              v80[v61] |= *(_QWORD *)((char *)v83 + v61 * 8 + 8);
              ++v61;
              --v62;
            }
            while ( v62 );
            v11 = v79;
            v8 = v71;
          }
          if ( (unsigned __int16)v15 < *(_WORD *)v59 )
          {
            do
            {
              v70 = (unsigned __int16)v15;
              LOWORD(v15) = v15 + 1;
              v80[v70] = v59[v70 + 1];
            }
            while ( (unsigned __int16)v15 < *(_WORD *)v59 );
            v11 = v79;
            v13 = v72;
          }
          HIDWORD(v79) = 0;
          if ( (unsigned __int16)v15 < WORD1(v79) )
          {
            do
            {
              v63 = (unsigned __int16)v15;
              LOWORD(v15) = v15 + 1;
              v80[v63] = 0LL;
            }
            while ( (unsigned __int16)v15 < WORD1(v79) );
            v11 = v79;
            v12 = RelationshipType;
          }
          v15 = 0LL;
          v64 = 0;
          if ( v40 )
          {
            v15 = v40;
            v65 = (_QWORD *)v83 + 1;
            do
            {
              if ( *v65 )
                ++v64;
              ++v65;
              --v15;
            }
            while ( v15 );
          }
          v66 = (16 * (v64 - 1) + 55) & 0xFFFFFFF8;
          v5 += v66;
          if ( v5 > v75 )
          {
            v8 = -1073741820;
            v71 = -1073741820;
          }
          else
          {
            v9->Processor.GroupCount = v64;
            v9->Relationship = RelationProcessorPackage;
            v9->Size = v66;
            v9->Group.MaximumGroupCount = 0;
            *(_QWORD *)((char *)&v9->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&v9->Group.Reserved[6] = 0LL;
            *(_DWORD *)&v9->Group.Reserved[14] = 0;
            GroupMask = v9->Processor.GroupMask;
            if ( v40 )
            {
              v68 = (unsigned __int64 *)v83 + 1;
              do
              {
                v69 = *v68;
                if ( *v68 )
                {
                  *(_QWORD *)&GroupMask->Group = 0LL;
                  GroupMask->Group = v15;
                  GroupMask->Mask = v69;
                  ++GroupMask;
                }
                LOWORD(v15) = v15 + 1;
                ++v68;
              }
              while ( (unsigned __int16)v15 < v40 );
              v11 = v79;
              v13 = v72;
            }
            v9 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v9 + v66);
            v15 = 0LL;
          }
        }
      }
      else
      {
        v15 = 0LL;
      }
      if ( v12 == RelationProcessorCore || v12 == RelationAll )
      {
        v52 = *(unsigned __int8 *)(v14 + 1616);
        v53 = *(_QWORD *)(v14 + 24792);
        if ( (unsigned __int16)v81 > (unsigned __int16)v52 )
          v15 = v53 & v82[v52];
        v54 = v15 != 0;
        LODWORD(v15) = 0;
        if ( ProcessorNumber || !v54 )
        {
          if ( (unsigned __int16)v81 <= (unsigned __int16)v52 )
            LOWORD(v81) = v52 + 1;
          v82[v52] |= v53;
          v5 += 48;
          if ( v5 <= v75 )
          {
            v9->Processor.Flags = *(_QWORD *)(v14 + 1608) != v53;
            v9->Relationship = RelationProcessorCore;
            v9->Size = 48;
            v9->Processor.EfficiencyClass = *(_BYTE *)(v14 + 23858);
            v9->Processor.GroupCount = 1;
            *(_QWORD *)((char *)&v9->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&v9->Group.Reserved[6] = 0LL;
            *(_DWORD *)&v9->Group.Reserved[14] = 0;
            v9->Processor.GroupMask[0].Mask = 0LL;
            v9->Cache.GroupMask.Mask = 0LL;
            v9->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v14 + 1616);
            v9->Processor.GroupMask[0].Mask = *(_QWORD *)(v14 + 24792);
            v9 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v9 + 48);
          }
          else
          {
            v8 = -1073741820;
            v71 = -1073741820;
          }
        }
      }
      if ( v12 == RelationCache || v12 == RelationAll )
      {
        v24 = v15;
        v25 = *(unsigned __int8 *)(v14 + 1616);
        if ( *(_DWORD *)(v14 + 24508) > (unsigned int)v15 )
        {
          while ( 1 )
          {
            v26 = *(_QWORD *)(v14 + 1608);
            if ( *(_QWORD *)(v14 + 8LL * v24 + 24816) )
            {
              v26 = *(_QWORD *)(v14 + 8LL * v24 + 24816);
              v27 = &v86[42 * v24 + 42];
              if ( *v27 <= (unsigned __int16)v25 )
                v28 = 0LL;
              else
                v28 = v26 & *(_QWORD *)&v27[4 * v25 + 4];
              if ( !ProcessorNumber && v28 )
                goto LABEL_37;
              if ( *v27 <= (unsigned __int16)v25 )
                *v27 = v25 + 1;
              *(_QWORD *)&v27[4 * v25 + 4] |= v26;
            }
            v5 += 56;
            if ( v5 > v75 )
            {
              v8 = -1073741820;
            }
            else
            {
              v9->Relationship = RelationCache;
              v9->Size = 56;
              v9->Processor.Flags = *(_BYTE *)(v14 + 12LL * v24 + 24448);
              v9->Processor.EfficiencyClass = *(_BYTE *)(v14 + 12LL * v24 + 24449);
              v9->Cache.LineSize = *(_WORD *)(v14 + 12LL * v24 + 24450);
              v9->Cache.CacheSize = *(_DWORD *)(v14 + 12LL * v24 + 24452);
              v9->Cache.Type = *(_DWORD *)(v14 + 12LL * v24 + 24456);
              *(_QWORD *)&v9->Group.Reserved[8] = 0LL;
              *(_QWORD *)&v9->Group.Reserved[16] = 0LL;
              *(_DWORD *)&v9->Group.GroupInfo[0].Reserved[2] = 0;
              v9->Cache.GroupMask.Mask = 0LL;
              *(_QWORD *)&v9->Group.GroupInfo[0].Reserved[14] = 0LL;
              v9->Cache.GroupMask.Group = *(unsigned __int8 *)(v14 + 1616);
              v9->Cache.GroupMask.Mask = v26;
              v9 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v9 + 56);
            }
LABEL_37:
            if ( ++v24 >= *(_DWORD *)(v14 + 24508) )
            {
              v11 = v79;
              v12 = RelationshipType;
              v13 = v72;
              v71 = v8;
              break;
            }
          }
        }
      }
      v72 = ++v13;
    }
    while ( v13 <= v76 );
    v10 = v73;
  }
  v16 = RelationshipType;
  if ( RelationshipType == RelationNumaNode || RelationshipType == RelationAll )
  {
    v17 = (unsigned __int16)KeNumberNodes;
    v18 = 0;
    v19 = 0;
    do
    {
      v20 = KeNodeBlock[v19];
      v21 = *(_QWORD *)(v20 + 136);
      if ( v21
        && ((v22 = *(_WORD *)(v20 + 144), !ProcessorNumber)
         || (v51 = KiProcessorIndexToNumberMappingTable[v10],
             LOBYTE(v18) = v51 >> 6 == v22,
             ((unsigned int)(v21 >> (v51 & 0x3F)) & v18) != 0)) )
      {
        v5 += 48;
        if ( v5 > v75 )
        {
          v8 = -1073741820;
        }
        else
        {
          v9->Relationship = RelationNumaNode;
          v9->Size = 48;
          v9->NumaNode.NodeNumber = v19;
          *(_QWORD *)v9->Group.Reserved = 0LL;
          *(_QWORD *)&v9->Group.Reserved[8] = 0LL;
          *(_DWORD *)&v9->Group.Reserved[16] = 0;
          v9->Cache.GroupMask.Mask = 0LL;
          v9->Processor.GroupMask[0].Group = v22;
          v9->Processor.GroupMask[0].Mask = v21;
          v9 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)v9 + 48);
        }
        ++v19;
      }
      else
      {
        ++v19;
      }
      v18 = 0;
    }
    while ( v19 < v17 );
    v16 = RelationshipType;
    v71 = v8;
  }
  if ( v16 == RelationGroup || v16 == RelationAll && !ProcessorNumber )
  {
    v44 = KiActiveGroups;
    v45 = (unsigned __int16)KiActiveGroups;
    v46 = (48 * ((unsigned __int16)KiActiveGroups - 1) + 87) & 0xFFFFFFF8;
    v5 += v46;
    if ( v5 > v75 )
    {
      v8 = -1073741820;
    }
    else
    {
      v9->Relationship = RelationGroup;
      v9->Size = v46;
      v9->Group.MaximumGroupCount = KeQueryMaximumGroupCount();
      v9->Cache.LineSize = v44;
      v47 = 0;
      *(_QWORD *)v9->Group.Reserved = 0LL;
      *(_QWORD *)&v9->Group.Reserved[8] = 0LL;
      *(_DWORD *)&v9->Group.Reserved[16] = 0;
      if ( v45 )
      {
        do
        {
          v48 = v47;
          v9->Cache.Reserved[v48 * 48 + 12] = KeQueryMaximumProcessorCountEx(v47);
          if ( (_WORD)v47 == 0xFFFF )
          {
            LOBYTE(v50) = KeNumberProcessors_0;
          }
          else if ( (unsigned __int16)v47 >= (unsigned __int16)KiActiveGroups )
          {
            LOBYTE(v50) = 0;
          }
          else
          {
            v49 = qword_1403D15E8[(unsigned __int16)v47]
                - (((unsigned __int64)qword_1403D15E8[(unsigned __int16)v47] >> 1) & 0x5555555555555555LL);
            v50 = (0x101010101010101LL
                 * (((v49 & 0x3333333333333333LL)
                   + ((v49 >> 2) & 0x3333333333333333LL)
                   + (((v49 & 0x3333333333333333LL) + ((v49 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          }
          v9->Cache.Reserved[v48 * 48 + 13] = v50;
          v9->Group.GroupInfo[v48].ActiveProcessorMask = qword_1403D15E8[v47];
          memset(v9->Group.GroupInfo[v48].Reserved, 0, sizeof(v9->Group.GroupInfo[v48].Reserved));
          ++v47;
        }
        while ( v47 < (unsigned __int16)KiActiveGroups );
        v8 = v71;
      }
    }
  }
  if ( !v8 && !v5 )
    v8 = -1073741823;
  *Length = v5;
  return v8;
}
