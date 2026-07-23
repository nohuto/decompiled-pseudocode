/*
 * XREFs of ExDupHandleTable @ 0x14045D6B0
 * Callers:
 *     ObInitProcess @ 0x14045E3D4 (ObInitProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ObInheritObjectHandle @ 0x14045DB84 (ObInheritObjectHandle.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     ExpFreeHandleTable @ 0x14045DFE8 (ExpFreeHandleTable.c)
 *     ExCreateHandleTable @ 0x1404ACEEC (ExCreateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404ACFE4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x1404AD0A8 (ExpAllocateHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x1406AD68C (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1406AD6CC (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDupHandleTable(__int64 a1, unsigned int *a2, unsigned int a3, _BYTE *a4, unsigned int **a5)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int **v7; // r14
  unsigned __int64 v9; // rbp
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  int v13; // edx
  _DWORD *v14; // rcx
  unsigned int *HandleTable; // rax
  int v16; // r15d
  unsigned __int64 v17; // rdi
  _QWORD *v18; // r12
  unsigned int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r10d
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rsi
  unsigned int v27; // r14d
  _DWORD *v28; // r15
  __int64 v29; // rax
  _BYTE *v30; // rax
  _BYTE *v31; // rbx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  int v35; // eax
  unsigned int *v36; // rcx
  _QWORD *v37; // r8
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v41; // r10
  unsigned int *v42; // rax
  unsigned int v43; // [rsp+20h] [rbp-88h]
  _QWORD *v44; // [rsp+28h] [rbp-80h]
  unsigned __int64 v45; // [rsp+30h] [rbp-78h]
  __int64 v46; // [rsp+38h] [rbp-70h]
  __int64 v47; // [rsp+40h] [rbp-68h]
  __int64 v48; // [rsp+48h] [rbp-60h]
  __int64 v49; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  __int64 v51; // [rsp+B0h] [rbp+8h]
  int v53; // [rsp+C0h] [rbp+18h]
  int v54; // [rsp+C0h] [rbp+18h]

  v51 = a1;
  v5 = *a2;
  v6 = 0;
  v7 = a5;
  v45 = v5;
  v9 = (unsigned int)v5;
  v10 = 1;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      if ( a3 <= 1 )
      {
LABEL_63:
        v38 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v38 < v9 )
        {
          v9 = v38 + 4;
          goto LABEL_14;
        }
      }
      else
      {
        v37 = a4 + 8;
        while ( (*v37 & 3) == 0 && *v37 > *(_QWORD *)&a4[8 * v10 - 8] )
        {
          ++v10;
          ++v37;
          if ( v10 >= a3 )
            goto LABEL_63;
        }
      }
    }
    return 3221225485LL;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_15;
  do
  {
    v11 = ExpLookupHandleTableEntry(a2, v9 - 1024);
    v13 = 255;
    v14 = (_DWORD *)(v11 + 4080);
    while ( (*v14 & 0x40000LL) == 0 )
    {
      if ( (*(v14 - 4) & 0x40000LL) != 0 )
      {
        --v13;
        break;
      }
      if ( (*(v14 - 8) & 0x40000LL) != 0 )
      {
        v13 -= 2;
        break;
      }
      if ( (*(v14 - 12) & 0x40000LL) != 0 )
      {
        v13 -= 3;
        break;
      }
      if ( (*(v14 - 16) & 0x40000LL) != 0 )
      {
        v13 -= 4;
        break;
      }
      v14 -= 20;
      v13 -= 5;
      if ( !v13 )
        break;
    }
    if ( v13 )
      break;
    v9 = v12;
  }
  while ( v12 );
  v7 = a5;
LABEL_14:
  a1 = v51;
  v45 = v9;
LABEL_15:
  if ( v9 )
  {
    HandleTable = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
    *v7 = HandleTable;
    if ( HandleTable )
    {
      if ( *HandleTable >= v9 )
      {
LABEL_18:
        *((_BYTE *)*v7 + 44) |= 8u;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v43 = 0;
        v47 = (__int64)(*v7 + 16);
        v16 = 0;
        v53 = 0;
        v17 = 0LL;
        v18 = *v7 + 18;
        while ( 1 )
        {
          v49 = ExpLookupHandleTableEntry(a2, v17);
          v19 = 4;
          v46 = ExpLookupHandleTableEntry(*v7, v17);
          v25 = v22 - v46;
          v48 = v22 - v46;
          v26 = v46 + 16;
          v27 = 1;
          while ( v16 >= 0 )
          {
            if ( a3 )
            {
              v20 = (__int64)a4;
              if ( *(_QWORD *)&a4[8 * v23] != v17 + v19 )
                goto LABEL_25;
            }
            v28 = (_DWORD *)(v25 + v26);
            if ( (*(_DWORD *)(v25 + v26) & 0x40000) == 0 )
              goto LABEL_23;
            v44 = (_QWORD *)(v22 + 16LL * v27);
            if ( !ExLockHandleTableEntry(v24, v44) )
              goto LABEL_23;
            if ( (*v28 & 0x40000) == 0 )
            {
              ExUnlockHandleTableEntry(a2, v44);
LABEL_23:
              if ( a3 )
              {
                v16 = -1073741811;
                v53 = -1073741811;
              }
              else
              {
                v16 = v53;
              }
              goto LABEL_25;
            }
            *(_OWORD *)v26 = *(_OWORD *)v28;
            *(_QWORD *)v26 &= 0xFFFFFFFFFFFE0001uLL;
            *(_QWORD *)v26 |= 1uLL;
            if ( a2[1]
              && (HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a2, v17 + v19, v21)) != 0LL
              && (*HandleExtraInfo || HandleExtraInfo[1])
              && (v54 = ExpSetHandleExtraInfo(v41, v17 + v19, HandleExtraInfo), v54 < 0) )
            {
              ExUnlockHandleTableEntry(a2, v28);
              v35 = v54;
              v20 = 263LL;
            }
            else
            {
              v35 = ObInheritObjectHandle(v51, v17 + v19, a2, v28);
              v20 = 263LL;
              if ( v35 >= 0 )
                goto LABEL_42;
              if ( !a4 )
                v35 = 263;
            }
            *(_QWORD *)v26 = 0LL;
            *(_QWORD *)(v26 + 8) = 0LL;
LABEL_42:
            v53 = v35;
            v16 = v35;
            if ( v35 >= 0 )
            {
              if ( v35 != 263 )
              {
                v36 = *a5;
                ++(*a5)[22];
                if ( a3 )
                {
                  v20 = v43;
                  if ( v43 < a3 - 1 )
                    v20 = ++v43;
                }
                if ( *((_QWORD *)v36 + 12) )
                  ExpUpdateDebugInfo(v36, KeGetCurrentThread(), v17 + v19, 1LL);
                goto LABEL_26;
              }
              v16 = 0;
              v53 = 0;
            }
LABEL_25:
            v29 = 16LL * v27;
            *v18 = v29 + v46;
            *(_QWORD *)(v47 + 16) = v29 + v46;
            v18 = (_QWORD *)(v29 + v46 + 8);
            *(_QWORD *)v26 = 0LL;
LABEL_26:
            v25 = v48;
            ++v27;
            v22 = v49;
            v19 += 4;
            v23 = v43;
            v26 += 16LL;
            v24 = (__int64)a2;
            if ( v19 >= 0x400 )
              goto LABEL_27;
          }
          memset((void *)(v46 + 16LL * v27), 0, 16 * (256LL - v27));
LABEL_27:
          v7 = a5;
          v17 += 1024LL;
          if ( v17 >= v45 )
          {
            *v18 = 0LL;
            if ( v16 < 0 )
            {
              v42 = *a5;
              *((_BYTE *)v42 + 44) |= 4u;
              v42 += 6;
              *((_QWORD *)v42 + 1) = v42;
              *(_QWORD *)v42 = v42;
            }
            else
            {
              (*a5)[23] = (*a5)[22];
              v30 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&HandleTableListLock, 0LL, 0);
              v31 = v30;
              if ( _interlockedbittestandset64((volatile signed __int32 *)&HandleTableListLock, 0LL) )
                ExfAcquirePushLockExclusiveEx(&HandleTableListLock, v30, (ULONG_PTR)&HandleTableListLock);
              if ( v31 )
                v31[26] |= 1u;
              v32 = (_QWORD *)qword_140748098;
              v33 = *a5 + 6;
              if ( *(__int64 **)qword_140748098 != &HandleTableListHead )
                __fastfail(3u);
              *v33 = &HandleTableListHead;
              v33[1] = v32;
              *v32 = v33;
              qword_140748098 = (__int64)v33;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
              KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
              v16 = 0;
            }
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v20, v21, v22);
            return (unsigned int)v16;
          }
        }
      }
      while ( (unsigned __int8)ExpAllocateHandleTableEntrySlow(*v7, 0LL) )
      {
        if ( **v7 >= v9 )
          goto LABEL_18;
      }
      ExpFreeHandleTable(*v7);
      *v7 = 0LL;
    }
    return 3221225626LL;
  }
  v39 = ExCreateHandleTable(a1, 1LL);
  *v7 = (unsigned int *)v39;
  if ( !v39 )
    return (unsigned int)-1073741670;
  return v6;
}
