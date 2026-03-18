/*
 * XREFs of DpiFdoHandleFilterResources @ 0x1C00DD800
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiDisableInterruptResources @ 0x1C016B42C (DpiDisableInterruptResources.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 Status; // rbx
  unsigned int *Information; // r14
  unsigned int v13; // edi
  unsigned int *PoolWithTag; // rax
  __int64 v15; // rcx
  unsigned int *v16; // r15
  unsigned int v17; // r9d
  unsigned int *v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
      DpiDisableInterruptResources(a2->IoStatus.Information);
    if ( *(_BYTE *)(v2 + 1059) == 1 )
    {
      v13 = *Information + 96;
      if ( v13 < *Information )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v7);
        v19[3] = &DpiFdoHandleFilterResources;
        v19[4] = 0LL;
        goto LABEL_15;
      }
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x74727044u);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v13);
        memmove(v16, Information, *Information);
        v17 = Information[9];
        v18 = &v16[8 * v17];
        *((_WORD *)v18 + 20) = 257;
        *((_BYTE *)v18 + 42) = 3;
        *((_WORD *)v18 + 22) = 1;
        v18[12] = 12;
        v18[13] = 1;
        *((_QWORD *)v18 + 7) = 944LL;
        *((_QWORD *)v18 + 8) = 955LL;
        *((_WORD *)v18 + 36) = 257;
        *((_BYTE *)v18 + 74) = 3;
        *((_WORD *)v18 + 38) = 1;
        v18[20] = 32;
        v18[21] = 1;
        *((_QWORD *)v18 + 11) = 960LL;
        *((_QWORD *)v18 + 12) = 991LL;
        *((_WORD *)v18 + 52) = 769;
        *((_BYTE *)v18 + 106) = 3;
        *((_WORD *)v18 + 54) = 0;
        v18[28] = 0x20000;
        v18[29] = 1;
        *((_QWORD *)v18 + 15) = 655360LL;
        *((_QWORD *)v18 + 16) = 786431LL;
        v16[9] = v17 + 3;
        *v16 = v13;
        ExFreePoolWithTag(Information, 0);
        a2->IoStatus.Information = (ULONG_PTR)v16;
      }
      else
      {
        LODWORD(Status) = -1073741801;
        v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v15);
        v21[3] = &DpiFdoHandleFilterResources;
        v21[4] = ExAllocatePoolWithTag;
        v21[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v21);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
      *(_QWORD *)(v20 + 24) = &DpiFdoHandleFilterResources;
      *(_QWORD *)(v20 + 32) = a1;
      WdLogEvent5_WdEvent(v20);
    }
  }
  else if ( !*(_BYTE *)(v2 + 448) && !*(_BYTE *)(v2 + 1439) && !*(_BYTE *)(v2 + 1062) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v19[3] = &DpiFdoHandleFilterResources;
    v19[4] = IoForwardIrpSynchronously;
LABEL_15:
    v19[5] = Status;
    WdLogEvent5_WdError(v19);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
