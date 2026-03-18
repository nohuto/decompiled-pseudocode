/*
 * XREFs of ParseCall @ 0x1C0013900
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     NewGlobalHeap @ 0x1C0006190 (NewGlobalHeap.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     HeapFree @ 0x1C00144F8 (HeapFree.c)
 *     ParseRelease @ 0x1C0014940 (ParseRelease.c)
 *     DupObjData @ 0x1C0014F70 (DupObjData.c)
 *     ParseArg @ 0x1C0016648 (ParseArg.c)
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 *     NewLocalHeap @ 0x1C0018C98 (NewLocalHeap.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     PerformNativeMethodCall @ 0x1C0043180 (PerformNativeMethodCall.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     MoveObjData @ 0x1C0044B38 (MoveObjData.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseCall(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r11
  __int64 v29; // r9
  __int64 v30; // rax
  _DWORD *v31; // rcx
  char v32; // al
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  _BYTE *v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rbx
  KIRQL v40; // al
  KIRQL v41; // al
  __int64 v42; // rbx
  struct _EX_RUNDOWN_REF *v43; // rbx
  struct _EX_RUNDOWN_REF *v44; // rbx
  struct _EX_RUNDOWN_REF *v45; // r9
  unsigned __int64 Count; // rsi
  struct _EX_RUNDOWN_REF *v47; // rax
  __int64 Ptr_high; // rdx
  _QWORD **v49; // rcx
  __int64 v50; // r11
  __int64 v51; // rcx
  struct _EX_RUNDOWN_REF *v52; // rbx
  __int64 v53; // rcx
  _QWORD *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rbx
  _QWORD **v57; // r9
  __int64 v58; // rdi
  _QWORD *v59; // rax
  __int64 v60; // rdx
  _QWORD **v61; // rcx
  __int64 v62; // r11
  __int64 v63; // rcx
  _QWORD **v64; // rbx
  __int64 v66; // rcx
  bool v67; // cf
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  int v72; // eax
  unsigned int v73; // eax
  __int64 v74; // rsi
  __int64 v75; // rbx
  __int64 v76; // rsi
  __int64 v77; // rcx
  bool v78; // cf
  _QWORD *v79; // rcx
  struct _EX_RUNDOWN_REF *v80; // rcx
  __int64 v81; // rax
  struct _EX_RUNDOWN_REF *v82; // rax
  _QWORD *v83; // rax
  int v84; // eax
  int v85; // eax
  _QWORD *v86; // rax
  int v87; // eax
  __int64 v88; // rcx
  struct _EX_RUNDOWN_REF *v89; // r11
  __int64 v90; // r11
  __int64 v91; // [rsp+30h] [rbp-D0h]
  __int64 v92; // [rsp+38h] [rbp-C8h]
  __int64 v93; // [rsp+40h] [rbp-C0h]
  __int64 v94; // [rsp+48h] [rbp-B8h]
  __int64 v95; // [rsp+50h] [rbp-B0h]
  _DWORD v96[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+78h] [rbp-88h]
  __int128 v98; // [rsp+80h] [rbp-80h]
  _BYTE v99[40]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v100[40]; // [rsp+B8h] [rbp-48h] BYREF
  struct _KTIMER Timer; // [rsp+E0h] [rbp-20h] BYREF
  struct _KDPC Dpc; // [rsp+120h] [rbp+20h] BYREF
  __int64 v103; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v104; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = a3;
  if ( a3 )
    v6 = 5;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 88);
  else
    v8 = 0LL;
  v92 = v8;
  if ( v6 != 5 )
  {
    switch ( v6 )
    {
      case 0:
        ++*(_DWORD *)(a2 + 16);
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("(");
        goto LABEL_102;
      case 1:
        goto LABEL_102;
      case 2:
        goto LABEL_7;
      case 3:
        goto LABEL_9;
      case 4:
        goto LABEL_38;
      case 6:
        goto LABEL_76;
      default:
        return v3;
    }
    do
    {
LABEL_102:
      if ( *(_DWORD *)(a2 + 56) < *(_DWORD *)(a2 + 60) )
      {
        while ( 1 )
        {
          if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(a2 + 56) )
            ConPrintf(",");
          v70 = *(unsigned int *)(a2 + 56);
          v71 = *(_QWORD *)(a2 + 64) + 40 * v70;
          v72 = v70 + 1;
          LOBYTE(v70) = 67;
          *(_DWORD *)(a2 + 56) = v72;
          v3 = ParseArg(a1, v70, v71, 0LL);
          if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
            return v3;
          if ( *(_DWORD *)(a2 + 56) >= *(_DWORD *)(a2 + 60) )
            goto LABEL_107;
        }
      }
      if ( v3 )
        return v3;
LABEL_107:
      if ( a2 != *(_QWORD *)(a1 + 416) )
        return v3;
    }
    while ( *(_DWORD *)(a2 + 56) < *(_DWORD *)(a2 + 60) );
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf(")");
    ++*(_DWORD *)(a2 + 16);
LABEL_7:
    ++*(_DWORD *)(a2 + 16);
    if ( !v8 )
    {
      v3 = -1072431101;
      LogError(3222536195LL);
      PrintDebugMessage(123, 0, 0, 0, 0LL);
      return v3;
    }
    if ( (*(_BYTE *)(v8 + 185) & 8) != 0 )
    {
      v3 = 0;
      v69 = HeapAlloc(a1 + 432, 1297237576, 0x40u);
      if ( v69 )
      {
        *(_QWORD *)(v69 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v69;
        *(_DWORD *)v69 = 1179730753;
        *(_QWORD *)(v69 + 24) = ParseAcquire;
        *(_QWORD *)(v69 + 32) = v8;
        *(_WORD *)(v69 + 40) = -1;
        *(_QWORD *)(v69 + 48) = *(_QWORD *)(a2 + 392);
        return v3;
      }
      goto LABEL_178;
    }
LABEL_9:
    v9 = *(_DWORD *)(a2 + 16) + 1;
    v10 = *(_DWORD *)a2 == 1280065859;
    *(_DWORD *)(a2 + 16) = v9;
    if ( v10 && (v9 & 0x80000) != 0 )
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
      if ( (v9 & 0x10000) != 0 )
        *(_DWORD *)(a2 + 16) = v9 | 0x20000;
      v11 = *(_QWORD *)(a1 + 320);
      v12 = 0LL;
      v13 = 0LL;
      byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      if ( (unsigned int)(*(_DWORD *)(v11 + 8) - v11 - 48) >= 0x50 )
      {
        v17 = v11;
        v103 = v11;
        while ( 1 )
        {
          v18 = *(_QWORD *)(v17 + 40);
          v12 = 0LL;
          if ( v18 )
          {
            v66 = *(_QWORD *)(v17 + 40);
            while ( 1 )
            {
              v67 = *(_DWORD *)(v66 - 12) < 0x50u;
              v12 = v66 - 16;
              if ( *(_DWORD *)(v66 - 12) >= 0x50u )
                break;
              v66 = *(_QWORD *)(v66 + 8);
              if ( v66 == v18 )
              {
                v67 = *(_DWORD *)(v12 + 4) < 0x50u;
                break;
              }
            }
            if ( v67 )
              v12 = 0LL;
          }
          if ( v12 )
            break;
          if ( (unsigned int)(*(_DWORD *)(v17 + 8) - *(_DWORD *)(v17 + 32)) >= 0x50 )
          {
            v12 = *(_QWORD *)(v17 + 32);
            *(_QWORD *)(v17 + 32) = v12 + 80;
            *(_DWORD *)(v12 + 4) = 80;
            goto LABEL_19;
          }
          v13 = v17;
          v17 = *(_QWORD *)(v17 + 24);
          v103 = v17;
          if ( !v17 )
            goto LABEL_19;
        }
        v14 = v12 + 16;
        if ( *(_QWORD *)(v12 + 24) == v12 + 16 )
        {
          *(_QWORD *)(v17 + 40) = 0LL;
        }
        else
        {
          if ( v14 == v18 )
            *(_QWORD *)(v17 + 40) = *(_QWORD *)(v18 + 8);
          **(_QWORD **)(v12 + 24) = *(_QWORD *)(v12 + 16);
          *(_QWORD *)(*(_QWORD *)v14 + 8LL) = *(_QWORD *)(v12 + 24);
        }
        if ( *(_DWORD *)(v12 + 4) >= 0x70u )
        {
          *(_DWORD *)(v12 + 80) = 0;
          v68 = *(_DWORD *)(v12 + 4) - 80;
          *(_QWORD *)(v12 + 88) = v17;
          *(_DWORD *)(v12 + 84) = v68;
          *(_DWORD *)(v12 + 4) = 80;
          HeapInsertFreeList(v17, v12 + 80);
        }
LABEL_19:
        if ( v12 )
        {
LABEL_20:
          *(_DWORD *)v12 = 1314344776;
          *(_QWORD *)(v12 + 8) = v17;
          memset((void *)(v12 + 16), 0, 0x40uLL);
        }
        else
        {
          if ( v11 == gpheapGlobal )
            v87 = NewGlobalHeap(&v103);
          else
            v87 = NewLocalHeap(&v103, v14, v15, v16);
          if ( !v87 )
          {
            v17 = v103;
            *(_QWORD *)(v103 + 16) = v11;
            *(_QWORD *)(v13 + 24) = v17;
            v12 = *(_QWORD *)(v17 + 32);
            *(_QWORD *)(v17 + 32) = v12 + 80;
            *(_DWORD *)(v12 + 4) = 80;
            goto LABEL_20;
          }
        }
      }
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
      if ( v12 )
      {
        v19 = (struct _EX_RUNDOWN_REF *)(v12 + 16);
        if ( v19 )
        {
          memset(v19, 0, 0x40uLL);
          LODWORD(v19[2].Count) = 1380865871;
          ExInitializeRundownProtection(v19 + 4);
          KeInitializeSpinLock(&v19[5].Count);
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
          if ( gplistObjOwners )
          {
            v19[1].Count = gplistObjOwners;
            v19->Count = *(unsigned __int64 *)gplistObjOwners;
            *(_QWORD *)(*(_QWORD *)gplistObjOwners + 8LL) = v19;
            *(_QWORD *)gplistObjOwners = v19;
          }
          else
          {
            gplistObjOwners = (__int64)v19;
            v19[1].Count = (unsigned __int64)v19;
            v19->Count = (unsigned __int64)v19;
          }
          KeReleaseSpinLock(&gmutOwnerList, NewIrql);
          v20 = a1 + 432;
          *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 88);
          v21 = *(_QWORD *)(a1 + 96);
          *(_QWORD *)(a1 + 88) = v19;
          *(_QWORD *)(a2 + 32) = v21;
          *(_QWORD *)(a1 + 96) = a2;
          v22 = *(_QWORD *)(a2 + 48);
          *(_DWORD *)(a2 + 16) |= 0x40000u;
          v23 = *(_QWORD *)(a2 + 392);
          v24 = *(_QWORD *)(a1 + 320);
          v95 = *(_QWORD *)(a1 + 120);
          v93 = v22;
          v94 = *(_QWORD *)(v22 + 88) + *(unsigned int *)(v22 + 80);
          v3 = 0;
          v91 = 0LL;
          v25 = 0LL;
          byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          if ( (unsigned int)(*(_DWORD *)(a1 + 440) - (a1 + 432) - 48) >= 0x60 )
          {
            v28 = a1 + 432;
            v104 = a1 + 432;
            v29 = 0LL;
            while ( 1 )
            {
              v30 = *(_QWORD *)(v28 + 40);
              v25 = 0LL;
              if ( v30 )
              {
                v77 = *(_QWORD *)(v28 + 40);
                while ( 1 )
                {
                  v78 = *(_DWORD *)(v77 - 12) < 0x60u;
                  v25 = v77 - 16;
                  if ( *(_DWORD *)(v77 - 12) >= 0x60u )
                    break;
                  v77 = *(_QWORD *)(v77 + 8);
                  if ( v77 == v30 )
                  {
                    v78 = *(_DWORD *)(v25 + 4) < 0x60u;
                    break;
                  }
                }
                if ( v78 )
                  v25 = 0LL;
              }
              if ( v25 )
                break;
              if ( (unsigned int)(*(_DWORD *)(v28 + 8) - *(_DWORD *)(v28 + 32)) >= 0x60 )
              {
                v25 = *(_QWORD *)(v28 + 32);
                *(_QWORD *)(v28 + 32) = v25 + 96;
                *(_DWORD *)(v25 + 4) = 96;
                goto LABEL_31;
              }
              v91 = v28;
              v28 = *(_QWORD *)(v28 + 24);
              v104 = v28;
              if ( !v28 )
                goto LABEL_31;
            }
            ListRemoveEntry((_QWORD **)(v25 + 16), v28 + 40);
            if ( *(_DWORD *)(v25 + 4) >= 0x80u )
            {
              *(_DWORD *)(v25 + 96) = v29;
              v84 = *(_DWORD *)(v25 + 4) - 96;
              *(_QWORD *)(v25 + 104) = v28;
              *(_DWORD *)(v25 + 100) = v84;
              *(_DWORD *)(v25 + 4) = 96;
              HeapInsertFreeList(v28, v25 + 96);
            }
LABEL_31:
            if ( v25 )
            {
LABEL_32:
              *(_DWORD *)v25 = 1297237576;
              *(_QWORD *)(v25 + 8) = v28;
              memset((void *)(v25 + 16), 0, 0x50uLL);
            }
            else
            {
              if ( v20 == gpheapGlobal )
                v85 = NewGlobalHeap(&v104);
              else
                v85 = NewLocalHeap(&v104, v26, v27, v29);
              if ( !v85 )
              {
                v28 = v104;
                *(_QWORD *)(v104 + 16) = v20;
                *(_QWORD *)(v91 + 24) = v28;
                v25 = *(_QWORD *)(v28 + 32);
                *(_QWORD *)(v28 + 32) = v25 + 96;
                *(_DWORD *)(v25 + 4) = 96;
                goto LABEL_32;
              }
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
          if ( v25 )
          {
            v31 = (_DWORD *)(v25 + 16);
            if ( v25 != -16 )
            {
              *(_QWORD *)(v25 + 24) = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = v31;
              *(_QWORD *)(v25 + 40) = ParseScope;
              *v31 = 1347371859;
              *(_QWORD *)(a1 + 120) = v92 + 186;
              *(_QWORD *)(v25 + 48) = v94;
              *(_QWORD *)(v25 + 56) = v95;
              *(_QWORD *)(v25 + 64) = *(_QWORD *)(a1 + 80);
              v32 = gdwfAMLI;
              *(_QWORD *)(a1 + 80) = v93;
              if ( (v32 & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v93 + 104));
              *(_QWORD *)(v25 + 72) = *(_QWORD *)(a1 + 88);
              v33 = *(_QWORD *)(a1 + 320);
              *(_QWORD *)(a1 + 88) = v19;
              *(_QWORD *)(v25 + 80) = v33;
              *(_QWORD *)(a1 + 320) = v24;
              *(_QWORD *)(v25 + 88) = v23;
              return v3;
            }
          }
LABEL_178:
          v3 = -1072431102;
          LogError(3222536194LL);
          PrintDebugMessage(153, 0, 0, 0, 0LL);
          return v3;
        }
      }
      v3 = -1073741670;
      LogError(3221225626LL);
      PrintDebugMessage(113, 0, 0, 0, 0LL);
    }
LABEL_38:
    v34 = *(_DWORD *)(a2 + 16) + 1;
    v10 = *(_DWORD *)a2 == 1280065859;
    *(_DWORD *)(a2 + 16) = v34;
    if ( v10 && (v34 & 0x80000) != 0 )
      v3 = PerformNativeMethodCall(1LL, a1, a2);
  }
  v35 = ++*(_DWORD *)(a2 + 16);
  if ( v3 == 32770 )
    v3 = 0;
  if ( *(_DWORD *)a2 == 1280065859 && (v35 & 0x80000) != 0 )
  {
    if ( (v35 & 0x40000) == 0 )
      goto LABEL_70;
    DupObjData(*(_QWORD *)(a1 + 320), v100, *(_QWORD *)(a2 + 392));
    PerformNativeMethodCall(2LL, a1, a2);
    MoveObjData(*(_QWORD *)(a2 + 392), v100);
  }
  else
  {
    v36 = *(_BYTE **)(a2 + 392);
    if ( (*v36 & 1) != 0 )
    {
      DupObjData(*(_QWORD *)(a1 + 320), v99, v36);
      FreeDataBuffs(*(_QWORD *)(a2 + 392), 1u);
      MoveObjData(*(_QWORD *)(a2 + 392), v99);
    }
    v37 = a2 + 72;
    v38 = 8LL;
    do
    {
      if ( (*(_BYTE *)v37 & 1) != 0 )
      {
        v88 = *(_QWORD *)(v37 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v88 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v88 & 8) != 0 )
          FreeData((_QWORD *)v88);
      }
      else if ( *(_QWORD *)(v37 + 32) )
      {
        if ( *(int *)(v37 + 8) > 0 )
        {
          *(_WORD *)v37 |= 8u;
        }
        else
        {
          if ( *(_WORD *)(v37 + 2) == 4 )
            FreeDataBuffs(*(_QWORD *)(v37 + 32) + 8LL, **(_DWORD **)(v37 + 32));
          FreeObjData(v37);
        }
      }
      *(_QWORD *)v37 = 0LL;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = 0LL;
      *(_QWORD *)(v37 + 24) = 0LL;
      *(_QWORD *)(v37 + 32) = 0LL;
      v37 += 40LL;
      --v38;
    }
    while ( v38 );
    if ( (*(_DWORD *)(a2 + 16) & 0x40000) == 0 )
    {
      if ( *(_QWORD *)(a2 + 48) )
        goto LABEL_70;
      goto LABEL_69;
    }
    v39 = *(_QWORD *)(a1 + 88);
    v40 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    NewIrql = v40;
    if ( *(_QWORD *)(v39 + 8) == v39 )
    {
      gplistObjOwners = 0LL;
    }
    else
    {
      if ( v39 == gplistObjOwners )
        gplistObjOwners = *(_QWORD *)(gplistObjOwners + 8);
      **(_QWORD **)(v39 + 8) = *(_QWORD *)v39;
      *(_QWORD *)(*(_QWORD *)v39 + 8LL) = *(_QWORD *)(v39 + 8);
      v40 = NewIrql;
    }
    KeReleaseSpinLock(&gmutOwnerList, v40);
    v41 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v42 = *(_QWORD *)(v39 + 24);
    if ( v42 )
    {
      do
      {
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v41);
        v76 = *(_QWORD *)(v42 + 48);
        if ( (gdwfAMLI & 4) != 0 )
          AMLIDereferenceHandleEx((volatile signed __int32 *)(v42 + 112));
        else
          FreeNameSpaceObjects(v42);
        v41 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        v42 = v76;
      }
      while ( v76 );
    }
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v41);
    v43 = *(struct _EX_RUNDOWN_REF **)(a1 + 88);
    if ( (gdwfAMLI & 4) == 0 )
    {
      v44 = v43 - 2;
      LODWORD(v44->Count) = 0;
      byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v45 = v44 + 2;
      Count = v44[1].Count;
      v47 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
      if ( v47 )
      {
        v80 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
        while ( v45 >= v80 )
        {
          v80 = (struct _EX_RUNDOWN_REF *)v80[1].Count;
          if ( v80 == v47 )
          {
            if ( v45 >= v80 )
            {
              ListInsertTail(&v44[2], Count + 40);
              goto LABEL_61;
            }
            break;
          }
        }
        v44[3].Count = (unsigned __int64)v80;
        v86 = (_QWORD *)v80->Count;
        v45->Count = v80->Count;
        v86[1] = v45;
        *(_QWORD *)v44[3].Count = v45;
        if ( *(struct _EX_RUNDOWN_REF **)(Count + 40) != v80 )
          goto LABEL_61;
      }
      else
      {
        *(_QWORD *)(Count + 40) = v45;
        v44[3].Count = (unsigned __int64)&v44[2];
        v45->Count = (unsigned __int64)v45;
      }
      *(_QWORD *)(Count + 40) = v45;
LABEL_61:
      Ptr_high = HIDWORD(v44->Ptr);
      v49 = (_QWORD **)((char *)&v44[2] + Ptr_high);
      if ( (_QWORD **)v44[3].Count == v49 )
      {
        HIDWORD(v44->Ptr) = *(_DWORD *)((char *)&v44->Ptr + Ptr_high + 4) + Ptr_high;
        ListRemoveEntry(v49, Count + 40);
      }
      v50 = v45->Count - 16;
      v51 = *(unsigned int *)(v50 + 4);
      if ( v44 == (struct _EX_RUNDOWN_REF *)(v50 + v51) )
      {
        *(_DWORD *)(v50 + 4) = v51 + HIDWORD(v44->Ptr);
        ListRemoveEntry(v45, Count + 40);
        v44 = v89;
      }
      if ( *(_QWORD *)(Count + 32) <= (unsigned __int64)v44 + HIDWORD(v44->Ptr) )
      {
        *(_QWORD *)(Count + 32) = v44;
        v52 = v44 + 2;
        if ( (struct _EX_RUNDOWN_REF *)v52[1].Count == v52 )
        {
          *(_QWORD *)(Count + 40) = 0LL;
        }
        else
        {
          v82 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
          if ( v52 == v82 )
            *(struct _EX_RUNDOWN_REF *)(Count + 40) = v82[1];
          *(struct _EX_RUNDOWN_REF *)v52[1].Count = (struct _EX_RUNDOWN_REF)v52->Count;
          *(struct _EX_RUNDOWN_REF *)(v52->Count + 8) = v52[1];
        }
      }
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
      goto LABEL_69;
    }
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, v43);
    KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
    ExWaitForRundownProtectionRelease(v43 + 4);
    KeCancelTimer(&Timer);
    HeapFree(v43);
  }
LABEL_69:
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 32);
LABEL_70:
  v53 = *(_QWORD *)(a2 + 48);
  if ( v53 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 104), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v53 + 56) |= 4u;
      if ( (*(_WORD *)(v53 + 56) & 0x40) == 0 )
        FreeNameSpaceObjects(v53);
    }
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  v54 = *(_QWORD **)(a2 + 64);
  if ( v54 )
  {
    v73 = *(_DWORD *)(a2 + 60);
    if ( v73 )
    {
      v74 = v73;
      do
      {
        FreeData(v54);
        v54 += 5;
        --v74;
      }
      while ( v74 );
    }
    v75 = *(_QWORD *)(a2 + 64);
    *(_DWORD *)(v75 - 16) = 0;
    byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v75 - 8), v75 - 16);
    KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
  }
  if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
  {
    v97 = v8;
    v96[0] = 1179403602;
    v96[4] = 393216;
    v98 = 0LL;
    ParseRelease(a1, v96, 0LL);
  }
LABEL_76:
  v55 = *(_QWORD *)(a1 + 416);
  v56 = v55 - 16;
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v55 + 8);
  *(_DWORD *)(v55 - 16) = 0;
  byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v57 = (_QWORD **)(v56 + 16);
  v58 = *(_QWORD *)(v56 + 8);
  v59 = *(_QWORD **)(v58 + 40);
  if ( v59 )
  {
    v79 = *(_QWORD **)(v58 + 40);
    while ( v57 >= v79 )
    {
      v79 = (_QWORD *)v79[1];
      if ( v79 == v59 )
      {
        if ( v57 >= v79 )
        {
          ListInsertTail(v56 + 16, v58 + 40);
          goto LABEL_79;
        }
        break;
      }
    }
    *(_QWORD *)(v56 + 24) = v79;
    v83 = (_QWORD *)*v79;
    *v57 = (_QWORD *)*v79;
    v83[1] = v57;
    **(_QWORD **)(v56 + 24) = v57;
    if ( *(_QWORD **)(v58 + 40) != v79 )
      goto LABEL_79;
  }
  else
  {
    *(_QWORD *)(v58 + 40) = v57;
    *(_QWORD *)(v56 + 24) = v56 + 16;
    *v57 = v57;
  }
  *(_QWORD *)(v58 + 40) = v57;
LABEL_79:
  v60 = *(unsigned int *)(v56 + 4);
  v61 = (_QWORD **)(v60 + v56 + 16);
  if ( *(_QWORD ***)(v56 + 24) == v61 )
  {
    *(_DWORD *)(v56 + 4) = *(_DWORD *)(v60 + v56 + 4) + v60;
    ListRemoveEntry(v61, v58 + 40);
  }
  v62 = (__int64)(*v57 - 2);
  v63 = *(unsigned int *)(v62 + 4);
  if ( v56 == v62 + v63 )
  {
    *(_DWORD *)(v62 + 4) = v63 + *(_DWORD *)(v56 + 4);
    ListRemoveEntry(v57, v58 + 40);
    v56 = v90;
  }
  if ( *(_QWORD *)(v58 + 32) <= v56 + (unsigned __int64)*(unsigned int *)(v56 + 4) )
  {
    *(_QWORD *)(v58 + 32) = v56;
    v64 = (_QWORD **)(v56 + 16);
    if ( v64[1] == v64 )
    {
      *(_QWORD *)(v58 + 40) = 0LL;
    }
    else
    {
      v81 = *(_QWORD *)(v58 + 40);
      if ( v64 == (_QWORD **)v81 )
        *(_QWORD *)(v58 + 40) = *(_QWORD *)(v81 + 8);
      *v64[1] = *v64;
      (*v64)[1] = v64[1];
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
  return v3;
}
