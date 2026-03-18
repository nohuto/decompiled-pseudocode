/*
 * XREFs of PnpProcessAssignResources @ 0x1404B1780
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PnpProcessAssignResourcesWorker @ 0x1404B195C (PnpProcessAssignResourcesWorker.c)
 *     PipClearDevNodeUserFlags @ 0x1404ECD04 (PipClearDevNodeUserFlags.c)
 *     PnpAssignResourcesToDevices @ 0x1404F2504 (PnpAssignResourcesToDevices.c)
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
  int *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // edx

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
        v18 = (int *)(v13 + 56);
        while ( 1 )
        {
          v19 = *((_QWORD *)v18 - 7);
          if ( v19 )
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
          else
            v20 = 0LL;
          v21 = *v18;
          if ( *v18 >= 0 )
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
              PipSetDevNodeFlags(v20, 256);
            }
            PipSetDevNodeState(v20, 772);
            PipClearDevNodeUserFlags(v20);
            goto LABEL_18;
          }
          if ( v21 != -1073741267 )
            break;
LABEL_18:
          v18 += 16;
          if ( !--v10 )
          {
            ExFreePoolWithTag(v13, 0x36706E50u);
            goto LABEL_3;
          }
        }
        switch ( v21 )
        {
          case -1073741686:
            v23 = 17;
            break;
          case -1073741438:
            v23 = 34;
            break;
          case -1073739512:
          case -1073479627:
            v23 = 35;
            break;
          case -1073479626:
            v23 = 33;
            break;
          default:
            v22 = v20;
            if ( v21 == -1073479625 )
              v23 = 36;
            else
              v23 = 12;
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
