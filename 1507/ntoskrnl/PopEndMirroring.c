/*
 * XREFs of PopEndMirroring @ 0x1403F1294
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopBuildMemoryImageHeader @ 0x1403F1BF0 (PopBuildMemoryImageHeader.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     EtwKernelMemoryRundown @ 0x1406E2B34 (EtwKernelMemoryRundown.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rbp
  int v2; // ebx
  ULONG_PTR v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int16 v7; // si
  unsigned __int64 i; // rdi
  unsigned __int64 v9; // rdx
  int v10; // ecx
  int v11; // r14d
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-68h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-58h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
    {
      v2 = -1073741823;
      goto LABEL_4;
    }
    v2 = *(_DWORD *)(qword_14032E680 + 188);
    if ( v2 >= 0 )
    {
      v2 = PopInvokeSystemStateHandler((unsigned int)PopHibernatePowerStateHandlerType, qword_14032E680);
      if ( v2 >= 0 )
      {
        if ( PoResumeFromHibernate )
          v2 = 1073742484;
        goto LABEL_15;
      }
    }
LABEL_4:
    IoAddTriageDumpDataBlock((int)&PopAction, 264);
    if ( qword_14032E678 )
      IoAddTriageDumpDataBlock(qword_14032E678, 464);
    if ( qword_14032E680 )
    {
      IoAddTriageDumpDataBlock(qword_14032E680, 464);
      v3 = qword_14032E680;
      v4 = *(_QWORD *)(qword_14032E680 + 168);
      if ( v4 )
      {
        IoAddTriageDumpDataBlock(v4, 376);
        v3 = qword_14032E680;
      }
      v5 = *(_QWORD *)(v3 + 200);
      if ( v5 )
        IoAddTriageDumpDataBlock(v5, 944);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( (BYTE4(xmmword_1403D1290) & 1) != 0 )
    EtwKernelMemoryRundown();
  KeSetEvent(PopSleeperHandoff, 0, 1u);
  KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
  v2 = PopBuildMemoryImageHeader((PVOID)qword_14032E680);
  if ( v2 < 0 )
    goto LABEL_4;
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, 0LL);
  __writecr8(2uLL);
  memset(&PopHibernateSystemContext, 0, 0x50uLL);
  dword_140353920 = KeNumberProcessors_0;
  dword_14035392C = KeNumberProcessors_0;
  dword_140353928 = 1;
  InitializeSListHead(&SListHead);
  KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
  Dpc.Importance = 2;
  v7 = 0;
  for ( i = qword_1403D15E8[0]; ; i = qword_1403D15E8[v7] )
  {
    while ( i )
    {
      _BitScanForward64(&v9, i);
      i &= ~(1LL << v9);
      v10 = KiProcessorNumberToIndexMappingTable[64 * v7 + (unsigned __int8)v9];
      if ( v10 )
      {
        v11 = dword_140353924;
        Dpc.Number = v10 + 640;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v11 == dword_140353924 )
          ;
      }
    }
    if ( ++v7 >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
      break;
  }
LABEL_15:
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
