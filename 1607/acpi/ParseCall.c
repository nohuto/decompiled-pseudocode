/*
 * XREFs of ParseCall @ 0x1C0019F80
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     ParseRelease @ 0x1C001B120 (ParseRelease.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     HeapFree @ 0x1C001B8A0 (HeapFree.c)
 *     ParseArg @ 0x1C001DCAC (ParseArg.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     PerformNativeMethodCall @ 0x1C005A850 (PerformNativeMethodCall.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     MoveObjData @ 0x1C005C2D4 (MoveObjData.c)
 */

__int64 __fastcall ParseCall(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r13
  int v10; // eax
  bool v11; // zf
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdi
  _QWORD *v24; // rcx
  __int64 v25; // rbx
  char v26; // al
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  _BYTE *v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rsi
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  KIRQL v36; // al
  __int64 v37; // rbx
  struct _EX_RUNDOWN_REF *v38; // rbx
  struct _EX_RUNDOWN_REF *v39; // rbx
  unsigned __int64 Count; // r9
  struct _EX_RUNDOWN_REF *v41; // rax
  struct _EX_RUNDOWN_REF *i; // r8
  struct _EX_RUNDOWN_REF **v43; // rcx
  struct _EX_RUNDOWN_REF *v44; // rdx
  __int64 v45; // r10
  struct _EX_RUNDOWN_REF *v46; // rax
  struct _EX_RUNDOWN_REF *v47; // r10
  struct _EX_RUNDOWN_REF *v48; // rbx
  unsigned __int64 v49; // rcx
  struct _EX_RUNDOWN_REF **v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  unsigned int *v54; // rbx
  __int64 v55; // r9
  unsigned int *v56; // rax
  unsigned int *j; // r8
  __int64 **v58; // rcx
  __int64 *v59; // rdx
  __int64 v60; // r10
  unsigned int *v61; // rax
  unsigned int *v62; // r10
  _QWORD *v63; // rbx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // rsi
  __int64 v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rcx
  unsigned int v80; // ecx
  _QWORD *v81; // r10
  __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 Ptr_high; // rcx
  int v85; // ecx
  _QWORD *v86; // r10
  __int64 v87; // rcx
  _QWORD *v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  _QWORD *v91; // rcx
  int v92; // eax
  __int64 v93; // rcx
  int v94; // eax
  __int64 v95; // rcx
  unsigned __int64 v96; // rcx
  struct _EX_RUNDOWN_REF **v97; // rax
  __int64 *v98; // rcx
  __int64 **v99; // rax
  __int64 v100; // [rsp+30h] [rbp-D0h]
  __int64 v101; // [rsp+38h] [rbp-C8h]
  __int64 v102; // [rsp+40h] [rbp-C0h]
  __int64 v103; // [rsp+48h] [rbp-B8h]
  __int64 v104; // [rsp+50h] [rbp-B0h]
  __int64 v105; // [rsp+58h] [rbp-A8h]
  _DWORD v106[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v107; // [rsp+80h] [rbp-80h]
  __int128 v108; // [rsp+88h] [rbp-78h]
  _BYTE v109[40]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v110[48]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KTIMER Timer; // [rsp+F0h] [rbp-10h] BYREF
  struct _KDPC Dpc; // [rsp+130h] [rbp+30h] BYREF
  __int64 v113; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v114; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = a3;
  if ( a3 )
    v6 = 5;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 48);
  v8 = 0LL;
  if ( v7 )
    v9 = *(_QWORD *)(v7 + 96);
  else
    v9 = 0LL;
  v102 = v9;
  if ( v6 != 5 )
  {
    switch ( v6 )
    {
      case 0:
        ++*(_DWORD *)(a2 + 16);
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("(");
        goto LABEL_95;
      case 1:
        goto LABEL_95;
      case 2:
        goto LABEL_7;
      case 3:
        goto LABEL_9;
      case 4:
        goto LABEL_40;
      case 6:
        goto LABEL_74;
      default:
        return v3;
    }
    do
    {
LABEL_95:
      if ( *(_DWORD *)(a2 + 56) < *(_DWORD *)(a2 + 60) )
      {
        while ( 1 )
        {
          if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(a2 + 56) )
            ConPrintf(",");
          v71 = *(unsigned int *)(a2 + 56);
          v72 = *(_QWORD *)(a2 + 64) + 40 * v71;
          v73 = v71 + 1;
          LOBYTE(v71) = 67;
          *(_DWORD *)(a2 + 56) = v73;
          v3 = ParseArg(a1, v71, v72, 0LL);
          if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
            return v3;
          if ( *(_DWORD *)(a2 + 56) >= *(_DWORD *)(a2 + 60) )
            goto LABEL_100;
        }
      }
      if ( v3 )
        return v3;
LABEL_100:
      if ( a2 != *(_QWORD *)(a1 + 416) )
        return v3;
    }
    while ( *(_DWORD *)(a2 + 56) < *(_DWORD *)(a2 + 60) );
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf(")");
    ++*(_DWORD *)(a2 + 16);
LABEL_7:
    ++*(_DWORD *)(a2 + 16);
    if ( !v9 )
    {
      v3 = -1072431101;
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(a1, 3222536195LL);
      PrintDebugMessage(123, 0, 0, 0, 0LL);
      return v3;
    }
    if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
    {
      v3 = 0;
      v70 = HeapAlloc(a1 + 440, 1297237576, 0x40u);
      if ( v70 )
      {
        *(_QWORD *)(v70 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v70;
        *(_DWORD *)v70 = 1179730753;
        *(_QWORD *)(v70 + 24) = ParseAcquire;
        *(_QWORD *)(v70 + 32) = v9;
        *(_WORD *)(v70 + 40) = -1;
        *(_QWORD *)(v70 + 48) = *(_QWORD *)(a2 + 392);
        return v3;
      }
      goto LABEL_165;
    }
LABEL_9:
    v10 = *(_DWORD *)(a2 + 16) + 1;
    v11 = *(_DWORD *)a2 == 1280065859;
    *(_DWORD *)(a2 + 16) = v10;
    if ( v11 && (v10 & 0x80000) != 0 )
    {
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 96) = a2;
      *(_DWORD *)(a2 + 16) |= 0x40000u;
      v3 = PerformNativeMethodCall(0LL, a1, a2);
      if ( v3 == 32772 )
        return v3;
    }
    else
    {
      if ( (v10 & 0x10000) != 0 )
        *(_DWORD *)(a2 + 16) = v10 | 0x20000;
      v12 = *(_QWORD *)(a1 + 320);
      v13 = 0LL;
      byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      if ( (unsigned int)(*(_DWORD *)(v12 + 8) - v12 - 56) >= 0x50 )
      {
        v14 = v12;
        v113 = v12;
        while ( 1 )
        {
          v8 = *(_QWORD *)(v14 + 40) - 16LL;
          v15 = *(_QWORD **)(v14 + 40);
          if ( (_QWORD *)(v14 + 40) == v15 )
          {
LABEL_16:
            v8 = 0LL;
          }
          else
          {
            while ( *(_DWORD *)(v8 + 4) < 0x50u )
            {
              v8 = *v15 - 16LL;
              v15 = (_QWORD *)*v15;
              if ( (_QWORD *)(v14 + 40) == v15 )
                goto LABEL_16;
            }
          }
          if ( v8 )
            break;
          if ( (unsigned int)(*(_DWORD *)(v14 + 8) - *(_DWORD *)(v14 + 32)) >= 0x50 )
          {
            v8 = *(_QWORD *)(v14 + 32);
            *(_QWORD *)(v14 + 32) = v8 + 80;
            *(_DWORD *)(v8 + 4) = 80;
            goto LABEL_20;
          }
          v13 = v14;
          v14 = *(_QWORD *)(v14 + 24);
          v113 = v14;
          if ( !v14 )
            goto LABEL_20;
        }
        v67 = *(_QWORD *)(v8 + 16);
        v68 = *(_QWORD **)(v8 + 24);
        if ( *(_QWORD *)(v67 + 8) != v8 + 16 || *v68 != v8 + 16 )
          __fastfail(3u);
        *v68 = v67;
        *(_QWORD *)(v67 + 8) = v68;
        if ( *(_DWORD *)(v8 + 4) >= 0x70u )
        {
          *(_DWORD *)(v8 + 80) = 0;
          v69 = *(_DWORD *)(v8 + 4) - 80;
          *(_QWORD *)(v8 + 88) = v14;
          *(_DWORD *)(v8 + 84) = v69;
          *(_DWORD *)(v8 + 4) = 80;
          HeapInsertFreeList(v14, (unsigned int *)(v8 + 80));
        }
LABEL_20:
        if ( v8 )
        {
LABEL_21:
          *(_DWORD *)v8 = 1314344776;
          *(_QWORD *)(v8 + 8) = v14;
          memset((void *)(v8 + 16), 0, 0x40uLL);
        }
        else
        {
          if ( v12 == gpheapGlobal )
            v94 = NewGlobalHeap(&v113);
          else
            v94 = NewLocalHeap(&v113);
          if ( !v94 )
          {
            v14 = v113;
            *(_QWORD *)(v113 + 16) = v12;
            *(_QWORD *)(v13 + 24) = v14;
            v8 = *(_QWORD *)(v14 + 32);
            *(_QWORD *)(v14 + 32) = v8 + 80;
            *(_DWORD *)(v8 + 4) = 80;
            goto LABEL_21;
          }
        }
      }
      KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
      if ( v8 )
      {
        v16 = (_QWORD *)(v8 + 16);
        if ( v8 != -16 )
        {
          memset((void *)(v8 + 16), 0, 0x40uLL);
          *(_DWORD *)(v8 + 32) = 1380865871;
          ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v8 + 48));
          KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 56));
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
          v17 = off_1C0071328;
          if ( *off_1C0071328 != (_UNKNOWN *)&glistObjOwners )
            __fastfail(3u);
          *v16 = &glistObjOwners;
          *(_QWORD *)(v8 + 24) = v17;
          *v17 = v16;
          off_1C0071328 = (_UNKNOWN **)(v8 + 16);
          KeReleaseSpinLock(&gmutOwnerList, NewIrql);
          *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 88);
          v18 = a1 + 440;
          v19 = *(_QWORD *)(a1 + 96);
          *(_QWORD *)(a1 + 88) = v16;
          *(_QWORD *)(a2 + 32) = v19;
          *(_QWORD *)(a1 + 96) = a2;
          *(_DWORD *)(a2 + 16) |= 0x40000u;
          v20 = *(_QWORD *)(a2 + 392);
          v21 = *(_QWORD *)(a2 + 48);
          v105 = *(_QWORD *)(a1 + 320);
          v104 = *(_QWORD *)(a1 + 120);
          v103 = *(_QWORD *)(v21 + 96) + *(unsigned int *)(v21 + 88);
          v3 = 0;
          v100 = 0LL;
          v22 = 0LL;
          v101 = v21;
          byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)(*(_DWORD *)(a1 + 448) - (a1 + 440) - 56) >= 0x60 )
          {
            v23 = a1 + 440;
            v114 = a1 + 440;
            while ( 1 )
            {
              v22 = *(_QWORD *)(v23 + 40) - 16LL;
              v24 = *(_QWORD **)(v23 + 40);
              if ( (_QWORD *)(v23 + 40) == v24 )
              {
LABEL_28:
                v22 = 0LL;
              }
              else
              {
                while ( *(_DWORD *)(v22 + 4) < 0x60u )
                {
                  v22 = *v24 - 16LL;
                  v24 = (_QWORD *)*v24;
                  if ( (_QWORD *)(v23 + 40) == v24 )
                    goto LABEL_28;
                }
              }
              if ( v22 )
                break;
              if ( (unsigned int)(*(_DWORD *)(v23 + 8) - *(_DWORD *)(v23 + 32)) >= 0x60 )
              {
                v22 = *(_QWORD *)(v23 + 32);
                *(_QWORD *)(v23 + 32) = v22 + 96;
                *(_DWORD *)(v22 + 4) = 96;
                goto LABEL_32;
              }
              v100 = v23;
              v23 = *(_QWORD *)(v23 + 24);
              v114 = v23;
              if ( !v23 )
                goto LABEL_32;
            }
            v90 = *(_QWORD *)(v22 + 16);
            v91 = *(_QWORD **)(v22 + 24);
            if ( *(_QWORD *)(v90 + 8) != v22 + 16 || *v91 != v22 + 16 )
              __fastfail(3u);
            *v91 = v90;
            *(_QWORD *)(v90 + 8) = v91;
            if ( *(_DWORD *)(v22 + 4) >= 0x80u )
            {
              *(_DWORD *)(v22 + 96) = 0;
              v92 = *(_DWORD *)(v22 + 4) - 96;
              *(_QWORD *)(v22 + 104) = v23;
              *(_DWORD *)(v22 + 100) = v92;
              *(_DWORD *)(v22 + 4) = 96;
              HeapInsertFreeList(v23, (unsigned int *)(v22 + 96));
            }
LABEL_32:
            if ( v22 )
            {
LABEL_33:
              *(_DWORD *)v22 = 1297237576;
              *(_QWORD *)(v22 + 8) = v23;
              memset((void *)(v22 + 16), 0, 0x50uLL);
            }
            else
            {
              if ( v18 == gpheapGlobal )
                v89 = NewGlobalHeap(&v114);
              else
                v89 = NewLocalHeap(&v114);
              if ( !v89 )
              {
                v23 = v114;
                *(_QWORD *)(v114 + 16) = v18;
                *(_QWORD *)(v100 + 24) = v23;
                v22 = *(_QWORD *)(v23 + 32);
                *(_QWORD *)(v23 + 32) = v22 + 96;
                *(_DWORD *)(v22 + 4) = 96;
                goto LABEL_33;
              }
            }
            v21 = v101;
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
          if ( v22 )
          {
            v25 = v22 + 16;
            if ( v25 )
            {
              *(_QWORD *)(v25 + 8) = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = v25;
              *(_QWORD *)(v25 + 24) = ParseScope;
              *(_DWORD *)v25 = 1347371859;
              *(_QWORD *)(a1 + 120) = v102 + 194;
              *(_QWORD *)(v25 + 32) = v103;
              *(_QWORD *)(v25 + 40) = v104;
              *(_QWORD *)(v25 + 48) = *(_QWORD *)(a1 + 80);
              v26 = gdwfAMLI;
              *(_QWORD *)(a1 + 80) = v21;
              if ( (v26 & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v21 + 112));
              *(_QWORD *)(v25 + 56) = *(_QWORD *)(a1 + 88);
              v27 = *(_QWORD *)(a1 + 320);
              *(_QWORD *)(a1 + 88) = v16;
              *(_QWORD *)(v25 + 64) = v27;
              *(_QWORD *)(a1 + 320) = v105;
              *(_QWORD *)(v25 + 72) = v20;
              return v3;
            }
          }
LABEL_165:
          v3 = -1072431102;
          LogError(3222536194LL);
          AcpiDiagTraceAmlError(a1, 3222536194LL);
          PrintDebugMessage(153, 0, 0, 0, 0LL);
          return v3;
        }
      }
      v3 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(113, 0, 0, 0, 0LL);
    }
LABEL_40:
    v28 = *(_DWORD *)(a2 + 16) + 1;
    v11 = *(_DWORD *)a2 == 1280065859;
    *(_DWORD *)(a2 + 16) = v28;
    if ( v11 && (v28 & 0x80000) != 0 )
      v3 = PerformNativeMethodCall(1LL, a1, a2);
  }
  v29 = ++*(_DWORD *)(a2 + 16);
  if ( v3 == 32770 )
    v3 = 0;
  if ( *(_DWORD *)a2 == 1280065859 && (v29 & 0x80000) != 0 )
  {
    if ( (v29 & 0x40000) != 0 )
    {
      DupObjData(*(_QWORD *)(a1 + 320), (__int64)v109, *(_QWORD *)(a2 + 392));
      PerformNativeMethodCall(2LL, a1, a2);
      MoveObjData(*(_QWORD *)(a2 + 392), v109);
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 32);
    }
  }
  else
  {
    v30 = *(_BYTE **)(a2 + 392);
    if ( (*v30 & 1) != 0 )
    {
      DupObjData(*(_QWORD *)(a1 + 320), (__int64)v110, (__int64)v30);
      FreeDataBuffs(*(_QWORD *)(a2 + 392), 1LL);
      MoveObjData(*(_QWORD *)(a2 + 392), v110);
    }
    v31 = a2 + 72;
    v32 = 8LL;
    do
    {
      if ( (*(_BYTE *)v31 & 1) != 0 )
      {
        v95 = *(_QWORD *)(v31 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v95 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v95 & 8) != 0 )
          FreeData((_QWORD *)v95);
      }
      else if ( *(_QWORD *)(v31 + 32) )
      {
        if ( *(int *)(v31 + 8) > 0 )
        {
          *(_WORD *)v31 |= 8u;
        }
        else
        {
          if ( *(_WORD *)(v31 + 2) == 4 )
            FreeDataBuffs(*(_QWORD *)(v31 + 32) + 8LL, **(unsigned int **)(v31 + 32));
          FreeObjData(v31);
        }
      }
      *(_QWORD *)v31 = 0LL;
      *(_QWORD *)(v31 + 8) = 0LL;
      *(_QWORD *)(v31 + 16) = 0LL;
      *(_QWORD *)(v31 + 24) = 0LL;
      *(_QWORD *)(v31 + 32) = 0LL;
      v31 += 40LL;
      --v32;
    }
    while ( v32 );
    if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
    {
      v33 = *(_QWORD **)(a1 + 88);
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
      v34 = *v33;
      v35 = (_QWORD *)v33[1];
      if ( *(_QWORD **)(*v33 + 8LL) != v33 || (_QWORD *)*v35 != v33 )
        __fastfail(3u);
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      KeReleaseSpinLock(&gmutOwnerList, NewIrql);
      v36 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v37 = v33[3];
      if ( v37 )
      {
        do
        {
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v36);
          v77 = *(_QWORD *)(v37 + 56);
          if ( (gdwfAMLI & 4) != 0 )
            AMLIDereferenceHandleEx((volatile signed __int32 *)(v37 + 120), 0LL);
          else
            FreeNameSpaceObjects((_QWORD *)v37);
          v36 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
          v37 = v77;
        }
        while ( v77 );
      }
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v36);
      v38 = *(struct _EX_RUNDOWN_REF **)(a1 + 88);
      if ( (gdwfAMLI & 4) != 0 )
      {
        KeInitializeTimer(&Timer);
        KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, v38);
        KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
        ExWaitForRundownProtectionRelease(v38 + 4);
        KeCancelTimer(&Timer);
        HeapFree(v38);
      }
      else
      {
        v39 = v38 - 2;
        LODWORD(v39->Count) = 0;
        byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        Count = v39[1].Count;
        v41 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
        for ( i = (struct _EX_RUNDOWN_REF *)(Count + 40); v41 != i; v41 = (struct _EX_RUNDOWN_REF *)v41->Count )
        {
          if ( &v39[2] < v41 )
            break;
        }
        v43 = (struct _EX_RUNDOWN_REF **)v41[1].Count;
        v44 = v39 + 2;
        if ( *v43 != v41 )
          __fastfail(3u);
        v44->Count = (unsigned __int64)v41;
        v39[3].Count = (unsigned __int64)v43;
        *v43 = v44;
        v41[1].Count = (unsigned __int64)v44;
        v45 = v44->Count - 16;
        if ( (struct _EX_RUNDOWN_REF *)v44->Count != i )
        {
          Ptr_high = HIDWORD(v39->Ptr);
          if ( (struct _EX_RUNDOWN_REF *)v45 == (struct _EX_RUNDOWN_REF *)((char *)v39 + Ptr_high) )
          {
            v85 = *(_DWORD *)(v45 + 4) + Ptr_high;
            v86 = (_QWORD *)v44->Count;
            HIDWORD(v39->Ptr) = v85;
            v87 = *v86;
            v88 = (_QWORD *)v86[1];
            if ( *(_QWORD **)(*v86 + 8LL) != v86 || (_QWORD *)*v88 != v86 )
              __fastfail(3u);
            *v88 = v87;
            *(_QWORD *)(v87 + 8) = v88;
          }
        }
        v46 = (struct _EX_RUNDOWN_REF *)v39[3].Count;
        v47 = v46 - 2;
        if ( v46 != i )
        {
          v93 = HIDWORD(v47->Ptr);
          if ( v39 == (struct _EX_RUNDOWN_REF *)((char *)v47 + v93) )
          {
            HIDWORD(v47->Ptr) = HIDWORD(v39->Ptr) + v93;
            v96 = v44->Count;
            v97 = (struct _EX_RUNDOWN_REF **)v39[3].Count;
            if ( *(struct _EX_RUNDOWN_REF **)(v44->Count + 8) != v44 || *v97 != v44 )
              __fastfail(3u);
            *v97 = (struct _EX_RUNDOWN_REF *)v96;
            v39 = v47;
            *(_QWORD *)(v96 + 8) = v97;
          }
        }
        if ( *(_QWORD *)(Count + 32) <= (unsigned __int64)v39 + HIDWORD(v39->Ptr) )
        {
          *(_QWORD *)(Count + 32) = v39;
          v48 = v39 + 2;
          v49 = v48->Count;
          v50 = (struct _EX_RUNDOWN_REF **)v48[1].Count;
          if ( *(struct _EX_RUNDOWN_REF **)(v48->Count + 8) != v48 || *v50 != v48 )
            __fastfail(3u);
          *v50 = (struct _EX_RUNDOWN_REF *)v49;
          *(_QWORD *)(v49 + 8) = v50;
        }
        KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
      }
      goto LABEL_67;
    }
    if ( !*(_QWORD *)(a2 + 48) )
    {
LABEL_67:
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 32);
    }
  }
  v51 = *(_QWORD *)(a2 + 48);
  if ( v51 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v51 + 64) |= 4u;
      if ( (*(_WORD *)(v51 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects((_QWORD *)v51);
    }
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  v52 = *(_QWORD **)(a2 + 64);
  if ( v52 )
  {
    v74 = *(_DWORD *)(a2 + 60);
    if ( v74 )
    {
      v75 = v74;
      do
      {
        FreeData(v52);
        v52 += 5;
        --v75;
      }
      while ( v75 );
    }
    v76 = *(_QWORD *)(a2 + 64);
    *(_DWORD *)(v76 - 16) = 0;
    byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v76 - 8), (unsigned int *)(v76 - 16));
    KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
  }
  if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
  {
    v107 = v9;
    v106[0] = 1179403602;
    v106[4] = 393216;
    v108 = 0LL;
    ParseRelease(a1, v106, 0LL);
  }
LABEL_74:
  v53 = *(_QWORD *)(a1 + 416);
  v54 = (unsigned int *)(v53 - 16);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v53 + 8);
  *(_DWORD *)(v53 - 16) = 0;
  byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v55 = *((_QWORD *)v54 + 1);
  v56 = *(unsigned int **)(v55 + 40);
  for ( j = (unsigned int *)(v55 + 40); v56 != j; v56 = *(unsigned int **)v56 )
  {
    if ( v54 + 4 < v56 )
      break;
  }
  v58 = (__int64 **)*((_QWORD *)v56 + 1);
  v59 = (__int64 *)(v54 + 4);
  if ( *v58 != (__int64 *)v56 )
    __fastfail(3u);
  *v59 = (__int64)v56;
  *((_QWORD *)v54 + 3) = v58;
  *v58 = v59;
  *((_QWORD *)v56 + 1) = v59;
  v60 = *v59 - 16;
  if ( (unsigned int *)*v59 != j )
  {
    v79 = v54[1];
    if ( (unsigned int *)v60 == (unsigned int *)((char *)v54 + v79) )
    {
      v80 = *(_DWORD *)(v60 + 4) + v79;
      v81 = (_QWORD *)*v59;
      v54[1] = v80;
      v82 = *v81;
      v83 = (_QWORD *)v81[1];
      if ( *(_QWORD **)(*v81 + 8LL) != v81 || (_QWORD *)*v83 != v81 )
        __fastfail(3u);
      *v83 = v82;
      *(_QWORD *)(v82 + 8) = v83;
    }
  }
  v61 = (unsigned int *)*((_QWORD *)v54 + 3);
  v62 = v61 - 4;
  if ( v61 != j )
  {
    v78 = v62[1];
    if ( v54 == (unsigned int *)((char *)v62 + v78) )
    {
      v62[1] = v54[1] + v78;
      v98 = (__int64 *)*v59;
      v99 = (__int64 **)*((_QWORD *)v54 + 3);
      if ( *(__int64 **)(*v59 + 8) != v59 || *v99 != v59 )
        __fastfail(3u);
      *v99 = v98;
      v54 = v62;
      v98[1] = (__int64)v99;
    }
  }
  if ( *(_QWORD *)(v55 + 32) <= (unsigned __int64)v54 + v54[1] )
  {
    *(_QWORD *)(v55 + 32) = v54;
    v63 = v54 + 4;
    v64 = *v63;
    v65 = (_QWORD *)v63[1];
    if ( *(_QWORD **)(*v63 + 8LL) != v63 || (_QWORD *)*v65 != v63 )
      __fastfail(3u);
    *v65 = v64;
    *(_QWORD *)(v64 + 8) = v65;
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
  return v3;
}
