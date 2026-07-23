/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x14009393C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAndAffinityEx @ 0x140094120 (KeAndAffinityEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     KeOrAffinityEx @ 0x1400D8E70 (KeOrAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x14011F030 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  ULONG v5; // r14d
  __int64 v6; // r12
  char *v7; // rbx
  ULONG v8; // r13d
  LOGICAL_PROCESSOR_RELATIONSHIP v9; // edi
  NTSTATUS v10; // r15d
  __int64 v11; // rbx
  DWORD v12; // ebx
  DWORD v13; // r9d
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  unsigned __int16 v16; // r11
  unsigned int v18; // r13d
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // di
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int16 *v23; // r12
  int v24; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  int v35; // eax
  int v36; // edx
  DWORD v37; // ecx
  unsigned int v38; // r12d
  __int64 v39; // rdi
  unsigned __int64 v40; // r13
  int v41; // eax
  bool v42; // zf
  unsigned __int16 v43; // r9
  WORD v44; // cx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int16 v48; // dx
  GROUP_AFFINITY *GroupMask; // rcx
  unsigned __int64 *v50; // r8
  unsigned __int64 v51; // r10
  ULONG ProcessorIndexFromNumber; // ecx
  ULONG v53; // [rsp+20h] [rbp-E0h]
  ULONG v54; // [rsp+24h] [rbp-DCh]
  NTSTATUS v55; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v56; // [rsp+28h] [rbp-D8h]
  ULONG v57; // [rsp+30h] [rbp-D0h]
  ULONG v60; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  PULONG v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v65[21]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v66[22]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v67[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v68; // [rsp+260h] [rbp+160h]
  _BYTE v69[4]; // [rsp+270h] [rbp+170h] BYREF
  char v70; // [rsp+274h] [rbp+174h] BYREF

  v54 = *Length;
  v5 = 0;
  v63 = Length;
  v55 = 0;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v60 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
      return -1073741811;
    v53 = ProcessorIndexFromNumber;
    v57 = ProcessorIndexFromNumber;
  }
  else
  {
    v60 = 0;
    v57 = KeNumberProcessors_0 - 1;
    v53 = 0;
  }
  v6 = 5LL;
  v7 = &v70;
  do
  {
    *(_QWORD *)(v7 - 4) = 1310721LL;
    memset(v7 + 4, 0, 0xA0uLL);
    v7 += 168;
    --v6;
  }
  while ( v6 );
  v64 = 1310721LL;
  memset(v65, 0, 0xA0uLL);
  v66[0] = 1310721LL;
  memset(&v66[1], 0, 0xA0uLL);
  v8 = v53;
  v9 = RelationshipType;
  v10 = 0;
  v61 = 0LL;
  v62 = 0LL;
  if ( v53 <= v57 )
  {
    while ( 1 )
    {
      v11 = KiProcessorBlock[v8];
      if ( v9 == RelationProcessorPackage || v9 == RelationAll )
      {
        v25 = *(_OWORD *)(v11 + 24616);
        v67[0] = *(_OWORD *)(v11 + 24600);
        v26 = *(_OWORD *)(v11 + 24632);
        v67[1] = v25;
        v27 = *(_OWORD *)(v11 + 24648);
        v67[2] = v26;
        v28 = *(_OWORD *)(v11 + 24664);
        v67[3] = v27;
        v29 = *(_OWORD *)(v11 + 24680);
        v67[4] = v28;
        v30 = *(_OWORD *)(v11 + 24696);
        v67[5] = v29;
        v31 = *(_OWORD *)(v11 + 24712);
        v67[6] = v30;
        v32 = *(_OWORD *)(v11 + 24728);
        v67[7] = v31;
        v33 = *(_OWORD *)(v11 + 24744);
        v34 = *(_QWORD *)(v11 + 24760);
        v67[8] = v32;
        v67[9] = v33;
        v68 = v34;
        v35 = KeAndAffinityEx(v66, v67, 0LL);
        if ( ProcessorNumber || !v35 )
        {
          KeOrAffinityEx(v66, v67, v66);
          v43 = v67[0];
          v44 = 0;
          if ( LOWORD(v67[0]) )
          {
            v45 = (_QWORD *)v67 + 1;
            v46 = LOWORD(v67[0]);
            do
            {
              if ( *v45 )
                ++v44;
              ++v45;
              --v46;
            }
            while ( v46 );
          }
          v47 = (16 * (v44 - 1) + 55) & 0xFFFFFFF8;
          v5 += v47;
          if ( v5 > v54 )
          {
            v10 = -1073741820;
          }
          else
          {
            Information->Processor.GroupCount = v44;
            v48 = 0;
            Information->Relationship = RelationProcessorPackage;
            Information->Size = v47;
            Information->Group.MaximumGroupCount = 0;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            GroupMask = Information->Processor.GroupMask;
            if ( v43 )
            {
              v50 = (unsigned __int64 *)v67 + 1;
              do
              {
                v51 = *v50;
                if ( *v50 )
                {
                  *(_QWORD *)&GroupMask->Group = 0LL;
                  GroupMask->Group = v48;
                  GroupMask->Mask = v51;
                  ++GroupMask;
                }
                ++v48;
                ++v50;
              }
              while ( v48 < v43 );
              v8 = v53;
            }
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v47);
          }
        }
      }
      if ( v9 == RelationProcessorCore || v9 == RelationAll )
      {
        v6 = *(unsigned __int8 *)(v11 + 1616);
        v40 = *(_QWORD *)(v11 + 24792);
        LOWORD(v62) = *(unsigned __int8 *)(v11 + 1616);
        v61 = v40;
        v41 = KeAndGroupAffinityEx(&v64, &v61, 0LL);
        if ( !ProcessorNumber && v41 )
        {
          v8 = v53;
          LODWORD(v6) = 0;
        }
        else
        {
          if ( (unsigned __int16)v64 <= (unsigned __int16)v6 )
            LOWORD(v64) = v6 + 1;
          v65[v6] |= v40;
          LODWORD(v6) = 0;
          v42 = *(_QWORD *)(v11 + 1608) == v40;
          v8 = v53;
          v5 += 48;
          if ( v5 <= v54 )
          {
            Information->Processor.Flags = !v42;
            Information->Relationship = RelationProcessorCore;
            Information->Size = 48;
            Information->Processor.EfficiencyClass = *(_BYTE *)(v11 + 23858);
            Information->Processor.GroupCount = 1;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            Information->Processor.GroupMask[0].Mask = 0LL;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v11 + 1616);
            Information->Processor.GroupMask[0].Mask = *(_QWORD *)(v11 + 24792);
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
          else
          {
            v10 = -1073741820;
          }
        }
      }
      if ( v9 != RelationCache && v9 != RelationAll )
        goto LABEL_12;
      v18 = v6;
      v19 = *(unsigned __int8 *)(v11 + 1616);
      LOWORD(v62) = v19;
      if ( *(_DWORD *)(v11 + 24508) <= (unsigned int)v6 )
        goto LABEL_35;
      v20 = v19;
      do
      {
        v21 = *(_QWORD *)(v11 + 1608);
        v22 = v18;
        if ( !*(_QWORD *)(v11 + 8LL * v18 + 24816) )
          goto LABEL_39;
        v56 = *(_QWORD *)(v11 + 8LL * v18 + 24816);
        v61 = v56;
        v23 = (unsigned __int16 *)&v69[168 * v18];
        v24 = KeAndGroupAffinityEx(v23, &v61, 0LL);
        if ( ProcessorNumber || !v24 )
        {
          if ( *v23 <= v20 )
            *v23 = v20 + 1;
          v21 = v56;
          v22 = v18;
          *(_QWORD *)&v23[4 * v20 + 4] |= v56;
LABEL_39:
          v5 += 56;
          if ( v5 > v54 )
          {
            v10 = -1073741820;
          }
          else
          {
            Information->Relationship = RelationCache;
            Information->Size = 56;
            Information->Processor.Flags = *(_BYTE *)(v11 + 12 * v22 + 24448);
            Information->Processor.EfficiencyClass = *(_BYTE *)(v11 + 12 * v22 + 24449);
            Information->Cache.LineSize = *(_WORD *)(v11 + 12 * v22 + 24450);
            Information->Cache.CacheSize = *(_DWORD *)(v11 + 12 * v22 + 24452);
            Information->Cache.Type = *(_DWORD *)(v11 + 12 * v22 + 24456);
            *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
            *(_QWORD *)&Information->Group.Reserved[16] = 0LL;
            *(_DWORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
            Information->Cache.GroupMask.Mask = 0LL;
            *(_QWORD *)&Information->Group.GroupInfo[0].Reserved[14] = 0LL;
            Information->Cache.GroupMask.Group = *(unsigned __int8 *)(v11 + 1616);
            Information->Cache.GroupMask.Mask = v21;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 56);
          }
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v11 + 24508) );
      v9 = RelationshipType;
LABEL_35:
      v8 = v53;
LABEL_12:
      ++v8;
      LODWORD(v6) = 0;
      v53 = v8;
      if ( v8 > v57 )
      {
        v55 = v10;
        break;
      }
    }
  }
  if ( v9 == RelationNumaNode || v9 == RelationAll )
  {
    v12 = (unsigned __int16)KeNumberNodes;
    v13 = 0;
    do
    {
      v14 = KeNodeBlock[v13];
      v15 = *(_QWORD *)(v14 + 136);
      if ( v15 )
      {
        v16 = *(_WORD *)(v14 + 144);
        if ( !ProcessorNumber
          || ((unsigned int)(v15 >> (KiProcessorIndexToNumberMappingTable[v60] & 0x3F)) & ((unsigned int)KiProcessorIndexToNumberMappingTable[v60] >> 6 == v16)) != 0 )
        {
          v5 += 48;
          if ( v5 > v54 )
          {
            v10 = -1073741820;
          }
          else
          {
            Information->Relationship = RelationNumaNode;
            Information->Size = 48;
            Information->NumaNode.NodeNumber = v13;
            *(_QWORD *)Information->Group.Reserved = 0LL;
            *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[16] = 0;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = v16;
            Information->Processor.GroupMask[0].Mask = v15;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
        }
      }
      ++v13;
    }
    while ( v13 < v12 );
    v9 = RelationshipType;
    v55 = v10;
  }
  if ( v9 == RelationGroup || v9 == RelationAll && !ProcessorNumber )
  {
    v36 = (unsigned __int16)KiActiveGroups;
    v37 = (48 * ((unsigned __int16)KiActiveGroups - 1) + 87) & 0xFFFFFFF8;
    v5 += v37;
    if ( v5 > v54 )
    {
      v10 = -1073741820;
    }
    else
    {
      v38 = 0;
      Information->Group.MaximumGroupCount = KiMaximumGroups;
      Information->Relationship = RelationGroup;
      Information->Size = v37;
      Information->Cache.LineSize = v36;
      *(_QWORD *)Information->Group.Reserved = 0LL;
      *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
      *(_DWORD *)&Information->Group.Reserved[16] = 0;
      if ( v36 )
      {
        do
        {
          v39 = v38;
          Information->Cache.Reserved[v39 * 48 + 12] = KeQueryMaximumProcessorCountEx(v38);
          Information->Cache.Reserved[v39 * 48 + 13] = KeQueryActiveProcessorCountEx(v38);
          Information->Group.GroupInfo[v39].ActiveProcessorMask = qword_1403825B8[v38];
          memset(Information->Group.GroupInfo[v39].Reserved, 0, sizeof(Information->Group.GroupInfo[v39].Reserved));
          ++v38;
        }
        while ( v38 < (unsigned __int16)KiActiveGroups );
        v10 = v55;
      }
    }
  }
  if ( !v10 && !v5 )
    v10 = -1073741823;
  *v63 = v5;
  return v10;
}
