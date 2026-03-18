/*
 * XREFs of ACPIGpeInstallRemoveIndex @ 0x1C0008074
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C0008D18 (ACPIGpeBuildEventMasks.c)
 *     ACPIVectorConnect @ 0x1C00414C0 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C00416B0 (ACPIVectorDisconnect.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C0008154 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeValidIndex @ 0x1C0008188 (ACPIGpeValidIndex.c)
 */

char __fastcall ACPIGpeInstallRemoveIndex(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  int v5; // r14d
  int v6; // ebp
  unsigned int v7; // edi
  int v8; // ebx
  unsigned int v9; // eax
  _BYTE *v10; // rcx
  _BYTE *v11; // r8
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  char v14; // bl

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( *((_BYTE *)AcpiInformation + 85) )
  {
    if ( (unsigned __int8)ACPIGpeValidIndex(a1, a2, a3, a4) )
    {
      v8 = 1 << (v7 & 7);
      v9 = ACPIGpeIndexToGpeRegister(v7);
      if ( v9 < *((unsigned __int16 *)AcpiInformation + 51) )
      {
        if ( v6 == 2 )
        {
          if ( *a4 )
          {
            *((_BYTE *)GpeEnable + v9) |= v8;
            *((_BYTE *)GpeCurEnable + v9) |= v8;
            *((_BYTE *)GpeHandlerType + v9) |= v8;
          }
          else
          {
            v14 = ~(_BYTE)v8;
            *((_BYTE *)GpeEnable + v9) &= v14;
            *((_BYTE *)GpeCurEnable + v9) &= v14;
            *((_BYTE *)GpeHandlerType + v9) &= v14;
          }
          return 1;
        }
        v10 = GpeEnable;
        v11 = GpeHandlerType;
        if ( (*((_BYTE *)GpeEnable + v9) & (unsigned __int8)v8) == 0 )
        {
          *a4 = 0;
LABEL_7:
          v10[v9] |= v8;
          *((_BYTE *)GpeCurEnable + v9) |= v8;
          if ( v6 == 1 )
            *((_BYTE *)GpeIsLevel + v9) |= v8;
          else
            *((_BYTE *)GpeIsLevel + v9) &= ~(_BYTE)v8;
          if ( v5 == 1 )
            v11[v9] |= v8;
          else
            v11[v9] &= ~(_BYTE)v8;
          return 1;
        }
        if ( (*((_BYTE *)GpeHandlerType + v9) & (unsigned __int8)v8) != 0 )
        {
          *a4 = 1;
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x4D706341u);
    if ( PoolWithTag )
    {
      LODWORD(PoolWithTag[1].List.Flink) = v7;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ACPIGpeInstallRemoveIndexErrorWorker;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
  return 0;
}
