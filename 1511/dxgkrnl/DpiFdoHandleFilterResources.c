/*
 * XREFs of DpiFdoHandleFilterResources @ 0x1C00E8A60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiDisableInterruptResources @ 0x1C016FC3C (DpiDisableInterruptResources.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int *v19; // r15
  unsigned int v20; // r9d
  unsigned int *v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
      DpiDisableInterruptResources(a2->IoStatus.Information);
    if ( *(_BYTE *)(v2 + 1092) == 1 )
    {
      v13 = *Information + 96;
      if ( v13 < *Information )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v7);
        v22[3] = &DpiFdoHandleFilterResources;
        v22[4] = 0LL;
        goto LABEL_15;
      }
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x74727044u);
      v19 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v13);
        memmove(v19, Information, *Information);
        v20 = Information[9];
        v21 = &v19[8 * v20];
        *((_WORD *)v21 + 20) = 257;
        *((_BYTE *)v21 + 42) = 3;
        *((_WORD *)v21 + 22) = 1;
        v21[12] = 12;
        v21[13] = 1;
        *((_QWORD *)v21 + 7) = 944LL;
        *((_QWORD *)v21 + 8) = 955LL;
        *((_WORD *)v21 + 36) = 257;
        *((_BYTE *)v21 + 74) = 3;
        *((_WORD *)v21 + 38) = 1;
        v21[20] = 32;
        v21[21] = 1;
        *((_QWORD *)v21 + 11) = 960LL;
        *((_QWORD *)v21 + 12) = 991LL;
        *((_WORD *)v21 + 52) = 769;
        *((_BYTE *)v21 + 106) = 3;
        *((_WORD *)v21 + 54) = 0;
        v21[28] = 0x20000;
        v21[29] = 1;
        *((_QWORD *)v21 + 15) = 655360LL;
        *((_QWORD *)v21 + 16) = 786431LL;
        v19[9] = v20 + 3;
        *v19 = v13;
        ExFreePoolWithTag(Information, 0);
        a2->IoStatus.Information = (ULONG_PTR)v19;
      }
      else
      {
        LODWORD(Status) = -1073741801;
        v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
        v24[3] = &DpiFdoHandleFilterResources;
        v24[4] = ExAllocatePoolWithTag;
        v24[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v24);
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
      *(_QWORD *)(v23 + 24) = &DpiFdoHandleFilterResources;
      *(_QWORD *)(v23 + 32) = a1;
      WdLogEvent5_WdEvent(v23);
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 1479) && !*(_BYTE *)(v2 + 1095) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v22[3] = &DpiFdoHandleFilterResources;
    v22[4] = IoForwardIrpSynchronously;
LABEL_15:
    v22[5] = Status;
    WdLogEvent5_WdError(v22);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
