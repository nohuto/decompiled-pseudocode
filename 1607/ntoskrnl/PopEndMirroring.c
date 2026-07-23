/*
 * XREFs of PopEndMirroring @ 0x1403CA628
 * Callers:
 *     <none>
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeInsertQueueDpc @ 0x1400D6140 (KeInsertQueueDpc.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopBuildMemoryImageHeader @ 0x1403CAA04 (PopBuildMemoryImageHeader.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     EtwKernelMemoryRundown @ 0x1406A0810 (EtwKernelMemoryRundown.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rdi
  int v2; // ebx
  ULONG_PTR v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // esi
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int16 *v9[2]; // [rsp+40h] [rbp-19h] BYREF
  __int16 v10; // [rsp+50h] [rbp-9h]
  struct _KDPC Dpc; // [rsp+60h] [rbp+7h] BYREF
  int v12; // [rsp+C0h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
    {
      v2 = -1073741823;
      goto LABEL_4;
    }
    v2 = *(_DWORD *)(qword_1403033E0 + 188);
    if ( v2 >= 0 )
    {
      v2 = PopInvokeSystemStateHandler((unsigned int)PopHibernatePowerStateHandlerType, qword_1403033E0);
      if ( v2 >= 0 )
      {
        if ( PoResumeFromHibernate )
          v2 = 1073742484;
        goto LABEL_25;
      }
    }
LABEL_4:
    IoAddTriageDumpDataBlock((int)&PopAction, 272);
    if ( qword_1403033D8 )
      IoAddTriageDumpDataBlock(qword_1403033D8, 464);
    if ( qword_1403033E0 )
    {
      IoAddTriageDumpDataBlock(qword_1403033E0, 464);
      v3 = qword_1403033E0;
      v4 = *(_QWORD *)(qword_1403033E0 + 168);
      if ( v4 )
      {
        IoAddTriageDumpDataBlock(v4, 376);
        v3 = qword_1403033E0;
      }
      v5 = *(_QWORD *)(v3 + 200);
      if ( v5 )
        IoAddTriageDumpDataBlock(v5, 968);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( (BYTE4(xmmword_1403AA2D0) & 1) != 0 )
    EtwKernelMemoryRundown();
  KeSetEvent(PopSleeperHandoff, 0, 1u);
  KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
  v2 = PopBuildMemoryImageHeader((PVOID)qword_1403033E0);
  if ( v2 < 0 )
    goto LABEL_4;
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, 0LL);
  __writecr8(2uLL);
  memset(&PopHibernateSystemContext, 0, 0x50uLL);
  dword_140328AC0 = KeNumberProcessors_0;
  dword_140328ACC = KeNumberProcessors_0;
  dword_140328AC8 = 1;
  InitializeSListHead(&SListHead);
  KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
  v9[1] = (unsigned __int16 *)qword_1403AA618[0];
  v9[0] = (unsigned __int16 *)KeActiveProcessors;
  Dpc.Importance = 2;
  v10 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v9) )
  {
    if ( v12 )
    {
      v6 = dword_140328AC4;
      if ( !Dpc.DpcData )
        Dpc.Number = v12 + 640;
      KeInsertQueueDpc(&Dpc, 0LL, 0LL);
      while ( v6 == dword_140328AC4 )
        ;
    }
  }
LABEL_25:
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
