/*
 * XREFs of IopCallDriverReinitializationRoutines @ 0x1404E66CC
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140145238 (PnpCompleteSystemStartProcess.c)
 *     IopLoadUnloadDriver @ 0x1404E663C (IopLoadUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538A14 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopInterlockedRemoveHeadList @ 0x1400B04D0 (IopInterlockedRemoveHeadList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

char __fastcall IopCallDriverReinitializationRoutines(char a1)
{
  char v1; // si
  char v2; // bl
  _QWORD *v3; // rdi

  v1 = 0;
  v2 = a1;
  if ( !a1 && !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  while ( 1 )
  {
    v3 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
    if ( v3 )
    {
      v1 = 1;
      do
      {
        ++*(_DWORD *)(*(_QWORD *)(v3[2] + 48LL) + 16LL);
        *(_DWORD *)(v3[2] + 16LL) &= ~8u;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v3[3])(
          v3[2],
          v3[4],
          *(unsigned int *)(*(_QWORD *)(v3[2] + 48LL) + 16LL));
        ObfDereferenceObject((PVOID)v3[2]);
        ExFreePoolWithTag(v3, 0);
        v3 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
      }
      while ( v3 );
    }
    if ( v2 != 1 )
      break;
    IopInitSystemCompletedEnoughForReInitRoutines = 1;
    v2 = 0;
  }
  return v1;
}
