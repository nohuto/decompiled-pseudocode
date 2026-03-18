/*
 * XREFs of OSNotifyCreateOperationRegion @ 0x1C000A030
 * Callers:
 *     OSNotifyCreate @ 0x1C000B400 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C0035788 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C00081F4 (AMLIIterateParentNext.c)
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 */

__int64 __fastcall OSNotifyCreateOperationRegion(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int8 v6; // cl
  int v7; // eax
  int v8; // ecx
  bool v9; // zf
  _QWORD *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v12; // r8

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  for ( i = AMLIGetParent(a1); ; i = AMLIIterateParentNext(i) )
  {
    v3 = i;
    if ( !i )
      break;
    v4 = *(_QWORD *)i;
    if ( *(_WORD *)(*(_QWORD *)i + 58LL) != 8 )
    {
      if ( *(_WORD *)(v4 + 58) == 6 )
      {
        v5 = *(_QWORD *)(v4 + 96);
        if ( v5 )
        {
          v6 = *(_BYTE *)(v1 + 12);
          if ( v6 >= 0x1Fu )
            v7 = 0x80000000;
          else
            v7 = 1 << v6;
          v8 = *(_DWORD *)(v5 + 612);
          if ( (v8 & v7) == 0 )
          {
            v9 = *(_DWORD *)(v5 + 312) == 3;
            *(_DWORD *)(v5 + 612) = v7 | v8;
            if ( v9 && (unsigned __int8)(*(_BYTE *)(v1 + 12) - 8) <= 1u )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x4D706341u);
              if ( PoolWithTag )
              {
                *PoolWithTag = 0LL;
                PoolWithTag[2] = OSNotifyCreateOperationRegionWorker;
                PoolWithTag[3] = PoolWithTag;
                ACPIInitReferenceDeviceExtension(v5);
                v12[1].List.Flink = (_LIST_ENTRY *)v5;
                ExQueueWorkItem(v12, DelayedWorkQueue);
              }
            }
          }
        }
      }
      AMLIDereferenceHandleEx(v3);
      return 0LL;
    }
  }
  return 0LL;
}
