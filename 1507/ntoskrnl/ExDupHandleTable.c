/*
 * XREFs of ExDupHandleTable @ 0x1405237E0
 * Callers:
 *     ObInitProcess @ 0x140467784 (ObInitProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     ExpFreeHandleTable @ 0x140508CCC (ExpFreeHandleTable.c)
 *     ExCreateHandleTable @ 0x140523600 (ExCreateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140523718 (ExpAllocateHandleTableEntrySlow.c)
 *     ObInheritObjectHandle @ 0x140523C8C (ObInheritObjectHandle.c)
 *     ExpAllocateHandleTable @ 0x140523D44 (ExpAllocateHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x1406F01F4 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1406F0234 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406F051C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDupHandleTable(__int64 a1, unsigned int *a2, unsigned int a3, _BYTE *a4, unsigned int **a5)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int **v7; // r14
  unsigned int *v8; // r10
  unsigned __int64 v10; // rbp
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  int v14; // r8d
  _DWORD *v15; // rcx
  unsigned int *HandleTable; // rax
  __int64 v17; // rax
  int v18; // r15d
  unsigned __int64 v19; // rdi
  __int64 *v20; // r12
  __int64 v21; // r11
  __int64 v22; // rax
  unsigned int *v23; // rcx
  unsigned int v24; // ebp
  __int64 v25; // r9
  unsigned int v26; // r10d
  __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned int v29; // r14d
  __int64 *v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _KTHREAD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 **v37; // rcx
  __int64 *v38; // rax
  __int16 v39; // ax
  __int64 v41; // r8
  int v42; // eax
  int v43; // ecx
  unsigned int *v44; // rcx
  _QWORD *v45; // r8
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v49; // r10
  int v50; // eax
  unsigned int *v51; // rax
  signed __int32 v52[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v53; // [rsp+20h] [rbp-88h]
  BOOL v54; // [rsp+24h] [rbp-84h]
  unsigned __int64 v55; // [rsp+28h] [rbp-80h]
  __int64 v56; // [rsp+30h] [rbp-78h]
  __int64 v57; // [rsp+38h] [rbp-70h]
  __int64 v58; // [rsp+40h] [rbp-68h]
  __int64 v59; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp+8h]
  int v63; // [rsp+C0h] [rbp+18h]
  int v64; // [rsp+C0h] [rbp+18h]

  v61 = a1;
  v5 = *a2;
  v6 = 0;
  v7 = a5;
  v8 = a2;
  v55 = v5;
  v10 = (unsigned int)v5;
  v11 = 1;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      if ( a3 <= 1 )
      {
LABEL_61:
        v46 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v46 < v10 )
        {
          v10 = v46 + 4;
          goto LABEL_7;
        }
      }
      else
      {
        v45 = a4 + 8;
        while ( (*v45 & 3) == 0 && *v45 > *(_QWORD *)&a4[8 * v11 - 8] )
        {
          ++v11;
          ++v45;
          if ( v11 >= a3 )
            goto LABEL_61;
        }
      }
    }
    return 3221225485LL;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_8;
  do
  {
    v12 = ExpLookupHandleTableEntry(v8, v10 - 1024);
    v14 = 255;
    v15 = (_DWORD *)(v12 + 4080);
    do
    {
      if ( (*v15 & 0x40000) != 0 )
        break;
      v15 -= 4;
      --v14;
    }
    while ( v14 );
    if ( v14 )
      break;
    v10 = v13;
  }
  while ( v13 );
LABEL_7:
  a1 = v61;
  v55 = v10;
LABEL_8:
  if ( v10 )
  {
    HandleTable = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
    *a5 = HandleTable;
    if ( HandleTable )
    {
      if ( *HandleTable >= v10 )
      {
LABEL_11:
        *((_BYTE *)*a5 + 44) |= 8u;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v17 = (__int64)(*a5 + 16);
        v53 = 0;
        v58 = v17;
        v18 = 0;
        v63 = 0;
        v19 = 0LL;
        v20 = (__int64 *)(v17 + 8);
        v21 = (__int64)a2;
        while ( 1 )
        {
          v22 = ExpLookupHandleTableEntry((unsigned int *)v21, v19);
          v23 = *v7;
          v57 = v22;
          v24 = 4;
          v56 = ExpLookupHandleTableEntry(v23, v19);
          v27 = v25 - v56;
          v59 = v25 - v56;
          v28 = v56 + 16;
          v29 = 1;
          while ( v18 >= 0 )
          {
            if ( a3 && *(_QWORD *)&a4[8 * v26] != v19 + v24 )
              goto LABEL_18;
            v30 = (__int64 *)(v27 + v28);
            if ( (*(_DWORD *)(v27 + v28) & 0x40000) == 0 )
              goto LABEL_16;
            do
            {
              while ( 1 )
              {
                _m_prefetchw(v30);
                v41 = *v30;
                if ( (*v30 & 1) != 0 )
                  break;
                if ( !v41 )
                  goto LABEL_16;
                ExpBlockOnLockedHandleEntry(v21, v30, v41);
                v21 = (__int64)a2;
              }
            }
            while ( v41 != _InterlockedCompareExchange64(v30, v41 - 1, v41) );
            if ( (*(_DWORD *)v30 & 0x40000) == 0 )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v57 + 16LL * v29), 1uLL);
              _InterlockedOr(v52, 0);
              if ( *(_QWORD *)(v21 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v21 + 48), 0LL);
                v21 = (__int64)a2;
              }
LABEL_16:
              if ( a3 )
              {
                v18 = -1073741811;
                v63 = -1073741811;
              }
              else
              {
                v18 = v63;
              }
              goto LABEL_18;
            }
            *(_OWORD *)v28 = *(_OWORD *)v30;
            v54 = a4 != 0LL;
            *(_QWORD *)v28 &= 0xFFFFFFFFFFFE0001uLL;
            *(_QWORD *)v28 |= 1uLL;
            if ( *(_DWORD *)(v21 + 4)
              && (HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(v21, v19 + v24)) != 0LL
              && *HandleExtraInfo
              && (v50 = ExpSetHandleExtraInfo(v49, v19 + v24), v21 = (__int64)a2, v64 = v50, v50 < 0) )
            {
              _InterlockedExchangeAdd64(v30, 1uLL);
              _InterlockedOr(v52, 0);
              if ( *((_QWORD *)a2 + 6) )
              {
                ExfUnblockPushLock((volatile __int64 *)a2 + 6, 0LL);
                v43 = v64;
                v21 = (__int64)a2;
              }
              else
              {
                v43 = v50;
              }
            }
            else
            {
              v42 = ObInheritObjectHandle(v61, v19 + v24, v21, v30);
              v21 = (__int64)a2;
              v43 = v42;
              if ( v42 >= 0 )
              {
                v63 = v42;
                goto LABEL_39;
              }
              if ( !v54 )
                v43 = 263;
            }
            v63 = v43;
            *(_QWORD *)v28 = 0LL;
            *(_QWORD *)(v28 + 8) = 0LL;
LABEL_39:
            v18 = v43;
            if ( v43 >= 0 )
            {
              if ( v43 != 263 )
              {
                v44 = *a5;
                ++(*a5)[22];
                if ( a3 && v53 < a3 - 1 )
                  ++v53;
                if ( *((_QWORD *)v44 + 12) )
                {
                  ExpUpdateDebugInfo(v44, KeGetCurrentThread(), v19 + v24, 1LL);
                  v21 = (__int64)a2;
                }
                goto LABEL_19;
              }
              v18 = 0;
              v63 = 0;
            }
LABEL_18:
            v31 = 16LL * v29 + v56;
            v32 = v58;
            *v20 = v31;
            *(_QWORD *)(v32 + 16) = v31;
            v20 = (__int64 *)(v31 + 8);
            *(_QWORD *)v28 = 0LL;
LABEL_19:
            v27 = v59;
            ++v29;
            v26 = v53;
            v24 += 4;
            v28 += 16LL;
            if ( v24 >= 0x400 )
              goto LABEL_20;
          }
          memset((void *)(v56 + 16LL * v29), 0, 16 * (256LL - v29));
          v21 = (__int64)a2;
LABEL_20:
          v19 += 1024LL;
          v7 = a5;
          if ( v19 >= v55 )
          {
            v33 = CurrentThread;
            *v20 = 0LL;
            if ( v18 < 0 )
            {
              v51 = *a5;
              *((_BYTE *)v51 + 44) |= 4u;
              v51 += 6;
              *((_QWORD *)v51 + 1) = v51;
              *(_QWORD *)v51 = v51;
            }
            else
            {
              (*a5)[23] = (*a5)[22];
              v34 = KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0LL, v25);
              v36 = v34;
              if ( _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL) )
                ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v34, (ULONG_PTR)&HandleTableListLock, v35);
              if ( v36 )
                *(_BYTE *)(v36 + 26) |= 1u;
              v37 = (__int64 **)qword_14077E298;
              v38 = (__int64 *)(*a5 + 6);
              *v38 = (__int64)&HandleTableListHead;
              v38[1] = (__int64)v37;
              if ( *v37 != &HandleTableListHead )
                __fastfail(3u);
              *v37 = v38;
              qword_14077E298 = (__int64)v38;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
              KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
              v18 = 0;
            }
            v39 = v33->KernelApcDisable + 1;
            v33->KernelApcDisable = v39;
            if ( !v39
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
              && !v33->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            return (unsigned int)v18;
          }
        }
      }
      while ( ExpAllocateHandleTableEntrySlow(*a5, 0LL) )
      {
        if ( **a5 >= v10 )
          goto LABEL_11;
      }
      ExpFreeHandleTable(*a5);
      *a5 = 0LL;
    }
    return 3221225626LL;
  }
  v47 = ExCreateHandleTable(a1, 1LL);
  *a5 = (unsigned int *)v47;
  if ( !v47 )
    return (unsigned int)-1073741670;
  return v6;
}
