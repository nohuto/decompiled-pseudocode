/*
 * XREFs of PnpProcessRelation @ 0x1404861B0
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140485F74 (PnpBuildRemovalRelationList.c)
 *     PnpProcessBusRelations @ 0x140486164 (PnpProcessBusRelations.c)
 *     PnpProcessRelation @ 0x1404861B0 (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x140486338 (PnpProcessDependencyRelations.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpQueryDeviceRelations @ 0x1403F0A08 (PnpQueryDeviceRelations.c)
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     IopAddRelationToList @ 0x140486010 (IopAddRelationToList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1404860FC (PipIsDeviceInDeviceObjectList.c)
 *     PnpProcessBusRelations @ 0x140486164 (PnpProcessBusRelations.c)
 *     PnpProcessRelation @ 0x1404861B0 (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x140486338 (PnpProcessDependencyRelations.c)
 *     IopCancelPendingEject @ 0x140649E24 (IopCancelPendingEject.c)
 *     IopMergeRelationLists @ 0x14064BAAC (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x14064BC04 (IopRemoveRelationFromList.c)
 */

__int64 __fastcall PnpProcessRelation(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        PUNICODE_STRING DestinationString,
        _BYTE *BugCheckParameter3)
{
  __int64 v6; // rbx
  int v9; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 result; // rax
  int v12; // ecx
  unsigned int v13; // esi
  int v14; // ecx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _WORD *v20; // rcx
  __int64 v21; // rcx
  unsigned __int16 *v22; // rdi
  _WORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rcx
  __int64 v28; // rcx
  unsigned __int16 *v29; // rdi
  _WORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _WORD *v37; // rcx
  __int64 v38; // rcx
  unsigned __int16 *v39; // rdi
  _WORD *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  _WORD *v44; // rcx
  __int64 v45; // rcx
  unsigned __int16 *v46; // rdi
  _WORD *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rsi
  unsigned int **v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _WORD *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  _WORD *v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rdx
  int v90; // [rsp+30h] [rbp-38h]
  int i; // [rsp+30h] [rbp-38h]
  int v92; // [rsp+30h] [rbp-38h]
  int v93; // [rsp+38h] [rbp-30h]
  int v94; // [rsp+38h] [rbp-30h]
  __int64 v95; // [rsp+38h] [rbp-30h]
  PVOID P[5]; // [rsp+40h] [rbp-28h] BYREF
  int v98; // [rsp+80h] [rbp+18h]

  v98 = a3;
  v6 = 0LL;
  if ( (a2 & 0xFFFFFFFB) != 0 )
  {
    if ( *(_DWORD *)(a1 + 300) == 788 )
      return 0LL;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 300);
    if ( v14 == 788 || (unsigned int)(v14 - 782) <= 1 )
      return 3221225473LL;
    if ( *(int *)(a1 + 656) > 0 || ((v14 - 785) & 0xFFFFFFFD) == 0 )
    {
      *a4 = 5;
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(a1 + 40));
      return 3221225473LL;
    }
    if ( (unsigned int)(v14 - 778) <= 1 )
      return 3221225488LL;
  }
  v9 = IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), a3, 0);
  BugCheckParameter4 = v9;
  v90 = v9;
  if ( v9 )
  {
    if ( v9 == -1073741771 )
    {
      LODWORD(BugCheckParameter4) = PnpProcessBusRelations(
                                      a1,
                                      a2,
                                      v98,
                                      (int)a4,
                                      DestinationString,
                                      (ULONG_PTR)BugCheckParameter3);
    }
    else if ( v9 != -1073741670 )
    {
      v72 = *(_QWORD *)(a1 + 32);
      if ( v72 )
      {
        IoAddTriageDumpDataBlock(v72, *(unsigned __int16 *)(v72 + 2));
        v73 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
        if ( v73 )
        {
          IoAddTriageDumpDataBlock(v73, *(__int16 *)(v73 + 2));
          v74 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL);
          if ( *v74 )
          {
            IoAddTriageDumpDataBlock((int)v74, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
          }
        }
        v75 = *(_QWORD *)(a1 + 32);
        if ( v75 )
          v76 = *(_QWORD *)(*(_QWORD *)(v75 + 312) + 40LL);
        else
          v76 = 0LL;
        if ( v76 )
        {
          if ( v75 )
            v95 = *(_QWORD *)(*(_QWORD *)(v75 + 312) + 40LL);
          else
            v95 = 0LL;
          if ( v75 )
            v77 = *(_QWORD *)(*(_QWORD *)(v75 + 312) + 40LL);
          else
            LODWORD(v77) = 0;
          IoAddTriageDumpDataBlock(v77, 720);
          if ( *(_WORD *)(v95 + 40) )
          {
            IoAddTriageDumpDataBlock(v95 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v95 + 48), *(unsigned __int16 *)(v95 + 40));
          }
          v78 = *(_QWORD *)(a1 + 32);
          if ( v78 )
            v79 = *(_QWORD *)(*(_QWORD *)(v78 + 312) + 40LL);
          else
            v79 = 0LL;
          if ( *(_WORD *)(v79 + 56) )
          {
            if ( v78 )
              v80 = *(_QWORD *)(*(_QWORD *)(v78 + 312) + 40LL);
            else
              LODWORD(v80) = 0;
            IoAddTriageDumpDataBlock(v80 + 56, 2);
            v81 = *(_QWORD *)(a1 + 32);
            if ( v81 )
              v82 = *(_QWORD *)(*(_QWORD *)(v81 + 312) + 40LL);
            else
              v82 = 0LL;
            if ( v81 )
              v83 = *(_QWORD *)(*(_QWORD *)(v81 + 312) + 40LL);
            else
              v83 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v83 + 64), *(unsigned __int16 *)(v82 + 56));
          }
          v84 = *(_QWORD *)(a1 + 32);
          if ( v84 )
            v85 = *(_QWORD *)(*(_QWORD *)(v84 + 312) + 40LL);
          else
            v85 = 0LL;
          if ( *(_QWORD *)(v85 + 16) )
          {
            v86 = v84 ? *(_QWORD *)(*(_QWORD *)(v84 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v86 + 16) + 56LL) )
            {
              if ( v84 )
                v87 = *(_QWORD *)(*(_QWORD *)(v84 + 312) + 40LL);
              else
                v87 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v87 + 16) + 56, 2);
              v88 = *(_QWORD *)(a1 + 32);
              if ( v88 )
                v89 = *(_QWORD *)(*(_QWORD *)(v88 + 312) + 40LL);
              else
                v89 = 0LL;
              if ( v88 )
                v6 = *(_QWORD *)(*(_QWORD *)(v88 + 312) + 40LL);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v6 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v89 + 16) + 56LL));
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 7uLL, *(_QWORD *)(a1 + 32), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    }
    return (unsigned int)BugCheckParameter4;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x80000) != 0 )
  {
    v50 = (__int64 *)IopPendingEjects;
    if ( (__int64 *)IopPendingEjects == &IopPendingEjects )
      goto LABEL_104;
    while ( 1 )
    {
      v51 = (unsigned int **)v50[8];
      if ( v51 )
      {
        if ( PipIsDeviceInDeviceObjectList(*v51, *(_QWORD *)(a1 + 32), 0LL) )
          break;
      }
      v50 = (__int64 *)*v50;
      if ( v50 == &IopPendingEjects )
        goto LABEL_102;
    }
    if ( a2 == 4 )
    {
      v90 = IopRemoveRelationFromList(BugCheckParameter3, *(_QWORD *)(a1 + 32));
      IopCancelPendingEject(v50);
      IopMergeRelationLists(BugCheckParameter3, v50[8], 0LL);
      if ( v98 == 2 )
        IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), 2LL, 0);
LABEL_102:
      if ( v50 != &IopPendingEjects )
      {
        LODWORD(BugCheckParameter4) = v90;
        return (unsigned int)BugCheckParameter4;
      }
LABEL_104:
      v52 = *(_QWORD *)(a1 + 32);
      if ( v52 )
      {
        IoAddTriageDumpDataBlock(v52, *(unsigned __int16 *)(v52 + 2));
        v53 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
        if ( v53 )
        {
          IoAddTriageDumpDataBlock(v53, *(__int16 *)(v53 + 2));
          v54 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL);
          if ( *v54 )
          {
            IoAddTriageDumpDataBlock((int)v54, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
          }
        }
        v55 = *(_QWORD *)(a1 + 32);
        if ( v55 )
          v56 = *(_QWORD *)(*(_QWORD *)(v55 + 312) + 40LL);
        else
          v56 = 0LL;
        if ( v56 )
        {
          if ( v55 )
            v57 = *(_QWORD *)(*(_QWORD *)(v55 + 312) + 40LL);
          else
            v57 = 0LL;
          if ( v55 )
            v58 = *(_QWORD *)(*(_QWORD *)(v55 + 312) + 40LL);
          else
            LODWORD(v58) = 0;
          IoAddTriageDumpDataBlock(v58, 720);
          if ( *(_WORD *)(v57 + 40) )
          {
            IoAddTriageDumpDataBlock(v57 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v57 + 48), *(unsigned __int16 *)(v57 + 40));
          }
          v59 = *(_QWORD *)(a1 + 32);
          if ( v59 )
            v60 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
          else
            v60 = 0LL;
          if ( *(_WORD *)(v60 + 56) )
          {
            if ( v59 )
              v61 = *(_QWORD *)(*(_QWORD *)(v59 + 312) + 40LL);
            else
              LODWORD(v61) = 0;
            IoAddTriageDumpDataBlock(v61 + 56, 2);
            v62 = *(_QWORD *)(a1 + 32);
            if ( v62 )
              v63 = *(_QWORD *)(*(_QWORD *)(v62 + 312) + 40LL);
            else
              v63 = 0LL;
            if ( v62 )
              v64 = *(_QWORD *)(*(_QWORD *)(v62 + 312) + 40LL);
            else
              v64 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v64 + 64), *(unsigned __int16 *)(v63 + 56));
          }
          v65 = *(_QWORD *)(a1 + 32);
          if ( v65 )
            v66 = *(_QWORD *)(*(_QWORD *)(v65 + 312) + 40LL);
          else
            v66 = 0LL;
          if ( *(_QWORD *)(v66 + 16) )
          {
            v67 = v65 ? *(_QWORD *)(*(_QWORD *)(v65 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v67 + 16) + 56LL) )
            {
              if ( v65 )
                v68 = *(_QWORD *)(*(_QWORD *)(v65 + 312) + 40LL);
              else
                v68 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v68 + 16) + 56, 2);
              v69 = *(_QWORD *)(a1 + 32);
              if ( v69 )
                v70 = *(_QWORD *)(*(_QWORD *)(v69 + 312) + 40LL);
              else
                v70 = 0LL;
              if ( v69 )
                v71 = *(_QWORD *)(*(_QWORD *)(v69 + 312) + 40LL);
              else
                v71 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v71 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v70 + 16) + 56LL));
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 6uLL, *(_QWORD *)(a1 + 32), 0LL, 0LL);
    }
    if ( a2 )
    {
      v90 = IopRemoveRelationFromList(v50[8], *(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x80000);
      goto LABEL_102;
    }
    return 3221225473LL;
  }
  result = PnpProcessBusRelations(a1, a2, v98, (int)a4, DestinationString, (ULONG_PTR)BugCheckParameter3);
  if ( (int)result < 0 )
    return result;
  v12 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v12 - 782) <= 1 )
    v12 = *(_DWORD *)(a1 + 304);
  if ( ((unsigned int)(v12 - 775) <= 1 || (unsigned int)(v12 - 778) <= 1)
    && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 3, 0LL, (__int64)P) >= 0 )
  {
    v15 = P[0];
    if ( P[0] )
    {
      v16 = 0LL;
      for ( i = 0; (unsigned int)v16 < *(_DWORD *)P[0]; i = v16 )
      {
        BugCheckParameter4 = v15[v16 + 1];
        v17 = *(_QWORD *)(BugCheckParameter4 + 312);
        if ( (*(_DWORD *)(v17 + 32) & 2) != 0 )
        {
          IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
          v26 = *(_QWORD *)(BugCheckParameter4 + 8);
          if ( v26 )
          {
            IoAddTriageDumpDataBlock(v26, *(__int16 *)(v26 + 2));
            v27 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
            if ( *v27 )
            {
              IoAddTriageDumpDataBlock((int)v27, 2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
            }
          }
          v28 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
          if ( v28 )
          {
            v29 = (unsigned __int16 *)(v28 + 40);
            IoAddTriageDumpDataBlock(v28, 720);
            if ( *v29 )
            {
              IoAddTriageDumpDataBlock((int)v29, 2);
              IoAddTriageDumpDataBlock(*((_QWORD *)v29 + 1), *v29);
            }
            v30 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL);
            if ( *v30 )
            {
              IoAddTriageDumpDataBlock((int)v30, 2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
            }
            v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
            if ( v31 && *(_WORD *)(v31 + 56) )
            {
              IoAddTriageDumpDataBlock(v31 + 56, 2);
              v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v32 + 64), *(unsigned __int16 *)(v32 + 56));
            }
          }
          KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 3uLL, 0LL);
        }
        v18 = *(_QWORD *)(v17 + 40);
        if ( !v18 || !*(_QWORD *)(v18 + 16) )
        {
          IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
          v19 = *(_QWORD *)(BugCheckParameter4 + 8);
          if ( v19 )
          {
            IoAddTriageDumpDataBlock(v19, *(__int16 *)(v19 + 2));
            v20 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
            if ( *v20 )
            {
              IoAddTriageDumpDataBlock((int)v20, 2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
            }
          }
          v21 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
          if ( v21 )
          {
            v22 = (unsigned __int16 *)(v21 + 40);
            IoAddTriageDumpDataBlock(v21, 720);
            if ( *v22 )
            {
              IoAddTriageDumpDataBlock((int)v22, 2);
              IoAddTriageDumpDataBlock(*((_QWORD *)v22 + 1), *v22);
            }
            v23 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL);
            if ( *v23 )
            {
              IoAddTriageDumpDataBlock((int)v23, 2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
            }
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
            if ( v24 && *(_WORD *)(v24 + 56) )
            {
              IoAddTriageDumpDataBlock(v24 + 56, 2);
              v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v25 + 64), *(unsigned __int16 *)(v25 + 56));
            }
          }
          KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 3uLL, 0LL);
        }
        v93 = PnpProcessRelation(v18, a2, 0, (int)a4, DestinationString, (ULONG_PTR)BugCheckParameter3);
        ObfDereferenceObject((PVOID)BugCheckParameter4);
        LODWORD(BugCheckParameter4) = v93;
        v15 = P[0];
        if ( v93 < 0 )
          goto LABEL_34;
        v16 = (unsigned int)(i + 1);
      }
      ExFreePoolWithTag(v15, 0);
    }
  }
  v13 = a2;
  if ( (unsigned int)(a2 - 5) > 1 )
  {
    if ( a2 )
    {
      if ( (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 1, 0LL, (__int64)P) >= 0 )
      {
        v15 = P[0];
        if ( P[0] )
        {
          v33 = 0LL;
          v92 = 0;
          if ( *(_DWORD *)P[0] )
          {
            while ( 1 )
            {
              BugCheckParameter4 = v15[v33 + 1];
              v34 = *(_QWORD *)(BugCheckParameter4 + 312);
              if ( (*(_DWORD *)(v34 + 32) & 2) != 0 )
              {
                IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
                v43 = *(_QWORD *)(BugCheckParameter4 + 8);
                if ( v43 )
                {
                  IoAddTriageDumpDataBlock(v43, *(__int16 *)(v43 + 2));
                  v44 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
                  if ( *v44 )
                  {
                    IoAddTriageDumpDataBlock((int)v44, 2);
                    IoAddTriageDumpDataBlock(
                      *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                      *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
                  }
                }
                v45 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
                if ( v45 )
                {
                  v46 = (unsigned __int16 *)(v45 + 40);
                  IoAddTriageDumpDataBlock(v45, 720);
                  if ( *v46 )
                  {
                    IoAddTriageDumpDataBlock((int)v46, 2);
                    IoAddTriageDumpDataBlock(*((_QWORD *)v46 + 1), *v46);
                  }
                  v47 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL);
                  if ( *v47 )
                  {
                    IoAddTriageDumpDataBlock((int)v47, 2);
                    IoAddTriageDumpDataBlock(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                      *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
                  }
                  v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                  if ( v48 && *(_WORD *)(v48 + 56) )
                  {
                    IoAddTriageDumpDataBlock(v48 + 56, 2);
                    v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v49 + 64), *(unsigned __int16 *)(v49 + 56));
                  }
                }
                KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 1uLL, 0LL);
              }
              v35 = *(_QWORD *)(v34 + 40);
              if ( !v35 || !*(_QWORD *)(v35 + 16) )
              {
                IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
                v36 = *(_QWORD *)(BugCheckParameter4 + 8);
                if ( v36 )
                {
                  IoAddTriageDumpDataBlock(v36, *(__int16 *)(v36 + 2));
                  v37 = (_WORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL);
                  if ( *v37 )
                  {
                    IoAddTriageDumpDataBlock((int)v37, 2);
                    IoAddTriageDumpDataBlock(
                      *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 8) + 64LL),
                      *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 8) + 56LL));
                  }
                }
                v38 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL);
                if ( v38 )
                {
                  v39 = (unsigned __int16 *)(v38 + 40);
                  IoAddTriageDumpDataBlock(v38, 720);
                  if ( *v39 )
                  {
                    IoAddTriageDumpDataBlock((int)v39, 2);
                    IoAddTriageDumpDataBlock(*((_QWORD *)v39 + 1), *v39);
                  }
                  v40 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL);
                  if ( *v40 )
                  {
                    IoAddTriageDumpDataBlock((int)v40, 2);
                    IoAddTriageDumpDataBlock(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 64LL),
                      *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 56LL));
                  }
                  v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                  if ( v41 )
                  {
                    if ( *(_WORD *)(v41 + 56) )
                    {
                      IoAddTriageDumpDataBlock(v41 + 56, 2);
                      v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 312) + 40LL) + 16LL);
                      IoAddTriageDumpDataBlock(*(_QWORD *)(v42 + 64), *(unsigned __int16 *)(v42 + 56));
                    }
                  }
                }
                KeBugCheckEx(0xCAu, 0xBuLL, BugCheckParameter4, 1uLL, 0LL);
              }
              v94 = PnpProcessRelation(v35, a2, 0, (int)a4, DestinationString, (ULONG_PTR)BugCheckParameter3);
              ObfDereferenceObject((PVOID)BugCheckParameter4);
              LODWORD(BugCheckParameter4) = v94;
              v15 = P[0];
              if ( v94 < 0 )
                break;
              v33 = (unsigned int)(v92 + 1);
              v92 = v33;
              if ( (unsigned int)v33 >= *(_DWORD *)P[0] )
              {
                v13 = a2;
                goto LABEL_67;
              }
            }
LABEL_34:
            ExFreePoolWithTag(v15, 0);
            return (unsigned int)BugCheckParameter4;
          }
LABEL_67:
          ExFreePoolWithTag(v15, 0);
        }
      }
    }
  }
  result = PnpProcessDependencyRelations(a1, v13, v98 != 0, a4, DestinationString, BugCheckParameter3);
  if ( (int)result < 0 )
    return result;
  LODWORD(BugCheckParameter4) = 0;
  return (unsigned int)BugCheckParameter4;
}
