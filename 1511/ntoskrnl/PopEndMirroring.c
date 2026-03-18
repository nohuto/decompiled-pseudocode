/*
 * XREFs of PopEndMirroring @ 0x14039EAC4
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FF490 (KeSetSystemGroupAffinityThread.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopBuildMemoryImageHeader @ 0x14039F1FC (PopBuildMemoryImageHeader.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     EtwKernelMemoryRundown @ 0x14066075C (EtwKernelMemoryRundown.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rdi
  int v2; // ebx
  int v3; // esi
  ULONG_PTR v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int16 *v9[2]; // [rsp+40h] [rbp-19h] BYREF
  __int16 v10; // [rsp+50h] [rbp-9h]
  struct _KDPC Dpc; // [rsp+60h] [rbp+7h] BYREF
  int v12; // [rsp+C0h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  if ( !(_DWORD)BugCheckParameter3 )
  {
    if ( (BYTE4(xmmword_140382290) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(PopSleeperHandoff, 0, 1u);
    KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((PVOID)qword_1402DE0C0);
    if ( v2 >= 0 )
    {
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
      Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
      KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      __writecr8(2uLL);
      memset(&PopHibernateSystemContext, 0, 0x50uLL);
      dword_140305BA0 = KeNumberProcessors_0;
      dword_140305BAC = KeNumberProcessors_0;
      dword_140305BA8 = 1;
      InitializeSListHead(&SListHead);
      KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
      v9[1] = (unsigned __int16 *)qword_1403825B8[0];
      v9[0] = (unsigned __int16 *)KeActiveProcessors;
      Dpc.Importance = 2;
      v10 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v9) )
      {
        if ( v12 )
        {
          v3 = dword_140305BA4;
          Dpc.Number = v12 + 640;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v3 == dword_140305BA4 )
            ;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_20;
  }
  if ( (_DWORD)BugCheckParameter3 != 1 )
  {
    v2 = -1073741823;
    goto LABEL_20;
  }
  v2 = *(_DWORD *)(qword_1402DE0C0 + 188);
  if ( v2 < 0
    || (v2 = PopInvokeSystemStateHandler((unsigned int)PopHibernatePowerStateHandlerType, qword_1402DE0C0), v2 < 0) )
  {
LABEL_20:
    IoAddTriageDumpDataBlock((int)&PopAction, 272);
    if ( qword_1402DE0B8 )
      IoAddTriageDumpDataBlock(qword_1402DE0B8, 464);
    if ( qword_1402DE0C0 )
    {
      IoAddTriageDumpDataBlock(qword_1402DE0C0, 464);
      v5 = qword_1402DE0C0;
      v6 = *(_QWORD *)(qword_1402DE0C0 + 168);
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(v6, 376);
        v5 = qword_1402DE0C0;
      }
      v7 = *(_QWORD *)(v5 + 200);
      if ( v7 )
        IoAddTriageDumpDataBlock(v7, 944);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( PoResumeFromHibernate )
    v2 = 1073742484;
LABEL_16:
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
