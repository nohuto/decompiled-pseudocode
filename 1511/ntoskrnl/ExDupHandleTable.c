/*
 * XREFs of ExDupHandleTable @ 0x1403E2B60
 * Callers:
 *     ObInitProcess @ 0x1403E3544 (ObInitProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExLockHandleTableEntry @ 0x140079FA4 (ExLockHandleTableEntry.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObInheritObjectHandle @ 0x1403E2FE4 (ObInheritObjectHandle.c)
 *     ExpAllocateHandleTable @ 0x1403E308C (ExpAllocateHandleTable.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ExCreateHandleTable @ 0x140460B44 (ExCreateHandleTable.c)
 *     ExpFreeHandleTable @ 0x1404AE2CC (ExpFreeHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C (ExpAllocateHandleTableEntrySlow.c)
 *     ExpGetHandleExtraInfo @ 0x14066C9D8 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x14066CA18 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDupHandleTable(__int64 a1, unsigned int *a2, unsigned int a3, _BYTE *a4, PVOID *a5)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  PVOID *v7; // r14
  unsigned __int64 v9; // rbp
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  int v13; // r8d
  _DWORD *v14; // rcx
  unsigned int *HandleTable; // rax
  int v16; // r15d
  unsigned __int64 v17; // rdi
  __int64 *v18; // r12
  unsigned int v19; // ebp
  __int64 v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int v25; // r14d
  _DWORD *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 **v30; // rcx
  __int64 *v31; // rax
  int v33; // eax
  _QWORD *v34; // rcx
  _QWORD *v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v39; // r10
  char *v40; // rax
  unsigned int v41; // [rsp+20h] [rbp-88h]
  _QWORD *v42; // [rsp+28h] [rbp-80h]
  unsigned __int64 v43; // [rsp+30h] [rbp-78h]
  __int64 v44; // [rsp+38h] [rbp-70h]
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  __int64 v49; // [rsp+B0h] [rbp+8h]
  int v51; // [rsp+C0h] [rbp+18h]
  int v52; // [rsp+C0h] [rbp+18h]

  v49 = a1;
  v5 = *a2;
  v6 = 0;
  v7 = a5;
  v43 = v5;
  v9 = (unsigned int)v5;
  v10 = 1;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      if ( a3 <= 1 )
      {
LABEL_56:
        v36 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v36 < v9 )
        {
          v9 = v36 + 4;
          goto LABEL_8;
        }
      }
      else
      {
        v35 = a4 + 8;
        while ( (*v35 & 3) == 0 && *v35 > *(_QWORD *)&a4[8 * v10 - 8] )
        {
          ++v10;
          ++v35;
          if ( v10 >= a3 )
            goto LABEL_56;
        }
      }
    }
    return 3221225485LL;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_9;
  do
  {
    v11 = ExpLookupHandleTableEntry(a2, v9 - 1024);
    v13 = 255;
    v14 = (_DWORD *)(v11 + 4080);
    do
    {
      if ( (*v14 & 0x40000LL) != 0 )
        break;
      v14 -= 4;
      --v13;
    }
    while ( v13 );
    if ( v13 )
      break;
    v9 = v12;
  }
  while ( v12 );
  v7 = a5;
LABEL_8:
  a1 = v49;
  v43 = v9;
LABEL_9:
  if ( v9 )
  {
    HandleTable = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
    *v7 = HandleTable;
    if ( HandleTable )
    {
      if ( *HandleTable >= v9 )
      {
LABEL_12:
        *((_BYTE *)*v7 + 44) |= 8u;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v41 = 0;
        v47 = (__int64)*v7 + 64;
        v16 = 0;
        v51 = 0;
        v17 = 0LL;
        v18 = (__int64 *)((char *)*v7 + 72);
        while ( 1 )
        {
          v46 = ExpLookupHandleTableEntry(a2, v17);
          v19 = 4;
          v44 = ExpLookupHandleTableEntry(*v7, v17);
          v23 = v20 - v44;
          v45 = v20 - v44;
          v24 = v44 + 16;
          v25 = 1;
          while ( v16 >= 0 )
          {
            if ( a3 && *(_QWORD *)&a4[8 * v21] != v17 + v19 )
              goto LABEL_19;
            v26 = (_DWORD *)(v23 + v24);
            if ( (*(_DWORD *)(v23 + v24) & 0x40000) == 0 )
              goto LABEL_17;
            v42 = (_QWORD *)(v20 + 16LL * v25);
            if ( !ExLockHandleTableEntry(v22, v42) )
              goto LABEL_17;
            if ( (*v26 & 0x40000) == 0 )
            {
              ExUnlockHandleTableEntry(a2, v42);
LABEL_17:
              if ( a3 )
              {
                v16 = -1073741811;
                v51 = -1073741811;
              }
              else
              {
                v16 = v51;
              }
              goto LABEL_19;
            }
            *(_OWORD *)v24 = *(_OWORD *)v26;
            *(_QWORD *)v24 &= 0xFFFFFFFFFFFE0001uLL;
            *(_QWORD *)v24 |= 1uLL;
            if ( a2[1]
              && (HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a2, v17 + v19)) != 0LL
              && *HandleExtraInfo
              && (v52 = ExpSetHandleExtraInfo(v39, v17 + v19), v52 < 0) )
            {
              ExUnlockHandleTableEntry(a2, v26);
              v33 = v52;
            }
            else
            {
              v33 = ObInheritObjectHandle(v49, v17 + v19, a2, v26);
              if ( v33 >= 0 )
                goto LABEL_36;
              if ( !a4 )
                v33 = 263;
            }
            *(_QWORD *)v24 = 0LL;
            *(_QWORD *)(v24 + 8) = 0LL;
LABEL_36:
            v51 = v33;
            v16 = v33;
            if ( v33 >= 0 )
            {
              if ( v33 != 263 )
              {
                v34 = *a5;
                ++*((_DWORD *)*a5 + 22);
                if ( a3 && v41 < a3 - 1 )
                  ++v41;
                if ( v34[12] )
                  ExpUpdateDebugInfo(v34, KeGetCurrentThread(), v17 + v19, 1LL);
                goto LABEL_20;
              }
              v16 = 0;
              v51 = 0;
            }
LABEL_19:
            v27 = 16LL * v25 + v44;
            *v18 = v27;
            *(_QWORD *)(v47 + 16) = v27;
            v18 = (__int64 *)(v27 + 8);
            *(_QWORD *)v24 = 0LL;
LABEL_20:
            v23 = v45;
            ++v25;
            v20 = v46;
            v19 += 4;
            v21 = v41;
            v24 += 16LL;
            v22 = (__int64)a2;
            if ( v19 >= 0x400 )
              goto LABEL_21;
          }
          memset((void *)(v44 + 16LL * v25), 0, 16 * (256LL - v25));
LABEL_21:
          v7 = a5;
          v17 += 1024LL;
          if ( v17 >= v43 )
          {
            *v18 = 0LL;
            if ( v16 < 0 )
            {
              v40 = (char *)*a5;
              v40[44] |= 4u;
              v40 += 24;
              *((_QWORD *)v40 + 1) = v40;
              *(_QWORD *)v40 = v40;
            }
            else
            {
              *((_DWORD *)*a5 + 23) = *((_DWORD *)*a5 + 22);
              v28 = KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0LL);
              v29 = v28;
              if ( _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL) )
                ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v28, (ULONG_PTR)&HandleTableListLock);
              if ( v29 )
                *(_BYTE *)(v29 + 26) |= 1u;
              v30 = (__int64 **)qword_1406FB2B8;
              v31 = (__int64 *)((char *)*a5 + 24);
              *v31 = (__int64)&HandleTableListHead;
              v31[1] = (__int64)v30;
              if ( *v30 != &HandleTableListHead )
                __fastfail(3u);
              *v30 = v31;
              qword_1406FB2B8 = (__int64)v31;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
              KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
              v16 = 0;
            }
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
            return (unsigned int)v16;
          }
        }
      }
      while ( (unsigned __int8)ExpAllocateHandleTableEntrySlow(*v7, 0LL) )
      {
        if ( *(unsigned int *)*v7 >= v9 )
          goto LABEL_12;
      }
      ExpFreeHandleTable(*v7);
      *v7 = 0LL;
    }
    return 3221225626LL;
  }
  v37 = ExCreateHandleTable(a1, 1LL);
  *v7 = (PVOID)v37;
  if ( !v37 )
    return (unsigned int)-1073741670;
  return v6;
}
