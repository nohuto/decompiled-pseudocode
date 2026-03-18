/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x1400C67C0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013631C (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeRegisterObjectNotification @ 0x14002E790 (KeRegisterObjectNotification.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_QWORD *Object)
{
  __int64 v2; // rdi
  int v3; // ecx

  v2 = Object[2];
  if ( *((_DWORD *)Object + 30) >= *((_DWORD *)Object + 29) || *(_DWORD *)(v2 + 28) )
    return 0;
  if ( *((_DWORD *)Object + 35) )
  {
    *((_DWORD *)Object + 36) |= 0x200u;
    v3 = *((_DWORD *)Object + 36);
    if ( !*(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
    {
      if ( (v3 & 0x400) == 0 )
      {
        *((_DWORD *)Object + 36) = v3 | 0x400;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        KeRegisterObjectNotification(
          *(_QWORD *)(v2 + 8),
          (__int64)&ExpWorkerFactoryManagerQueue,
          (__int64)(Object + 44));
      }
      return 0;
    }
  }
  return 1;
}
