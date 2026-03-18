/*
 * XREFs of DpiFdoHandleFilterResources @ 0x1C00F8DB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiDisableInterruptResources @ 0x1C0196174 (DpiDisableInterruptResources.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 Status; // rbx
  unsigned int *Information; // rsi
  unsigned int v10; // edi
  _OWORD *PoolWithTag; // rax
  __int64 v12; // rcx
  _OWORD *v13; // r14
  unsigned int *v14; // r15
  unsigned int v15; // r12d
  unsigned int *v16; // rdi
  unsigned int *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = v4->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)v4->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
      DpiDisableInterruptResources(v4->IoStatus.Information);
    if ( *(_BYTE *)(v2 + 1140) != 1 )
    {
      v19 = WdLogNewEntry5_WdEvent(v6);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdEvent(v19);
      goto LABEL_3;
    }
    v10 = *Information + 96 * Information[7];
    if ( v10 < *Information )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x74727044u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
      v14 = Information + 8;
      v15 = 0;
      *v13 = *(_OWORD *)Information;
      v13[1] = *((_OWORD *)Information + 1);
      *(_DWORD *)v13 = v10;
      v16 = (unsigned int *)(v13 + 2);
      if ( Information[7] )
      {
        do
        {
          memmove(v16, v14, 32LL * v14[1] + 8);
          ++v15;
          v17 = &v16[8 * v16[1]];
          *((_WORD *)v17 + 4) = 257;
          *((_BYTE *)v17 + 10) = 3;
          *((_WORD *)v17 + 6) = 1;
          v17[4] = 12;
          v17[5] = 1;
          *((_QWORD *)v17 + 3) = 944LL;
          *((_QWORD *)v17 + 4) = 955LL;
          *((_WORD *)v17 + 20) = 257;
          *((_BYTE *)v17 + 42) = 3;
          *((_WORD *)v17 + 22) = 1;
          v17[12] = 32;
          v17[13] = 1;
          *((_QWORD *)v17 + 7) = 960LL;
          *((_QWORD *)v17 + 8) = 991LL;
          *((_WORD *)v17 + 36) = 769;
          *((_BYTE *)v17 + 74) = 3;
          *((_WORD *)v17 + 38) = 0;
          v17[20] = 0x20000;
          v17[21] = 1;
          *((_QWORD *)v17 + 11) = 655360LL;
          *((_QWORD *)v17 + 12) = 786431LL;
          v16[1] += 3;
          v14 += 8 * v14[1] + 2;
          v16 += 8 * v16[1] + 2;
        }
        while ( v15 < Information[7] );
        v4 = a2;
      }
      ExFreePoolWithTag(Information, 0);
      v4->IoStatus.Information = (ULONG_PTR)v13;
    }
    else
    {
      LODWORD(Status) = -1073741801;
      v20 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v20 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v20);
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2559) && !*(_BYTE *)(v2 + 1143) )
  {
LABEL_15:
    v18 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v18 + 24) = Status;
    WdLogEvent5_WdError(v18);
  }
LABEL_3:
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
