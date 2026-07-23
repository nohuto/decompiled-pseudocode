/*
 * XREFs of PnpProcessAssignResources @ 0x1403F0F18
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PipClearDevNodeUserFlags @ 0x1403F03B8 (PipClearDevNodeUserFlags.c)
 *     PnpProcessAssignResourcesWorker @ 0x1403F10F4 (PnpProcessAssignResourcesWorker.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PnpAssignResourcesToDevices @ 0x14050B090 (PnpAssignResourcesToDevices.c)
 */

__int64 __fastcall PnpProcessAssignResources(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ebx
  __int64 *PoolWithTag; // rax
  __int64 *v9; // r12
  __int64 v10; // rdi
  char *v12; // rax
  char *v13; // r15
  _QWORD *v14; // rsi
  __int64 *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned int *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx

  v3 = 0;
  v7 = 8 * IopNumberDeviceNodes + 8;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v7, 0x35706E50u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    *(_DWORD *)v9 = a2;
    PnpProcessAssignResourcesWorker(a1, v9);
    v10 = *((unsigned int *)v9 + 1);
    if ( (_DWORD)v10 )
    {
      v12 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)((_DWORD)v10 << 6), 0x36706E50u);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, (unsigned int)((_DWORD)v10 << 6));
        v14 = v13;
        v15 = v9 + 1;
        v16 = v10;
        do
        {
          v17 = *v15;
          memset(v14, 0, 0x40uLL);
          v14[3] = 0LL;
          ++v15;
          *v14 = v17;
          *((_DWORD *)v14 + 3) = 4;
          v14 += 8;
          --v16;
        }
        while ( v16 );
        v3 = 0;
        PnpAssignResourcesToDevices((unsigned int)v10, v13, a3);
        v18 = (unsigned int *)(v13 + 56);
        while ( 1 )
        {
          v19 = *((_QWORD *)v18 - 7);
          if ( v19 )
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
          else
            v20 = 0LL;
          v21 = *v18;
          if ( (int)v21 >= 0 )
          {
            v3 = 1;
            if ( *((_QWORD *)v18 - 2) )
            {
              ExAcquireFastMutex(&PiResourceListLock);
              *(_QWORD *)(v20 + 416) = *((_QWORD *)v18 - 2);
              *(_QWORD *)(v20 + 424) = *((_QWORD *)v18 - 1);
              KeReleaseGuardedMutex(&PiResourceListLock);
            }
            else
            {
              PipSetDevNodeFlags(v20, 256LL);
            }
            PipSetDevNodeState(v20, 772);
            PipClearDevNodeUserFlags(v20, 4);
            goto LABEL_18;
          }
          if ( (_DWORD)v21 != -1073741267 )
            break;
LABEL_18:
          v18 += 16;
          if ( !--v10 )
          {
            ExFreePoolWithTag(v13, 0x36706E50u);
            goto LABEL_3;
          }
        }
        switch ( (_DWORD)v21 )
        {
          case 0xC000008A:
            v23 = 17LL;
            break;
          case 0xC0000182:
            v23 = 34LL;
            break;
          case 0xC0000908:
          case 0xC0040035:
            v23 = 35LL;
            break;
          case 0xC0040036:
            v23 = 33LL;
            break;
          default:
            v22 = v20;
            if ( (_DWORD)v21 == -1073479625 )
              v23 = 36LL;
            else
              v23 = 12LL;
            goto LABEL_37;
        }
        v22 = v20;
LABEL_37:
        PipSetDevNodeProblem(v22, v23, v21);
        goto LABEL_18;
      }
    }
LABEL_3:
    ExFreePoolWithTag(v9, 0x35706E50u);
  }
  return v3;
}
