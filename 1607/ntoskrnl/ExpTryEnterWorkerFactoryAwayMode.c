/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x1400F6478
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013DCFC (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_QWORD *Object)
{
  __int64 v2; // rdi
  int v3; // ecx

  v2 = Object[2];
  if ( *((_DWORD *)Object + 32) >= *((_DWORD *)Object + 31) || *(_DWORD *)(v2 + 28) )
    return 0;
  if ( *((_DWORD *)Object + 37) )
  {
    *((_DWORD *)Object + 38) |= 0x200u;
    v3 = *((_DWORD *)Object + 38);
    if ( !*(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
    {
      if ( (v3 & 0x400) == 0 )
      {
        *((_DWORD *)Object + 38) = v3 | 0x400;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        KeRegisterObjectNotification(
          *(_QWORD *)(v2 + 8),
          (__int64)&ExpWorkerFactoryManagerQueue,
          (__int64)(Object + 45));
      }
      return 0;
    }
  }
  return 1;
}
