/*
 * XREFs of IopCallBootDriverReinitializationRoutines @ 0x1407E3BCC
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     IopInterlockedRemoveHeadList @ 0x14015371C (IopInterlockedRemoveHeadList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

char IopCallBootDriverReinitializationRoutines()
{
  REGHANDLE v0; // rbx
  char v1; // di
  PVOID *v2; // rax
  PVOID *v3; // rbx
  REGHANDLE v4; // rbx

  v0 = PnpEtwHandle;
  v1 = 0;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_BootDriverReinit_Start) )
    EtwWrite(v0, &KMPnPEvt_BootDriverReinit_Start, 0LL, 0, 0LL);
  while ( 1 )
  {
    v2 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
    v3 = v2;
    if ( !v2 )
      break;
    v1 = 1;
    ++*(_DWORD *)(*((_QWORD *)v2[2] + 6) + 16LL);
    *((_DWORD *)v2[2] + 4) &= ~0x20u;
    ((void (__fastcall *)(PVOID, PVOID, _QWORD))v2[3])(v2[2], v2[4], *(unsigned int *)(*((_QWORD *)v2[2] + 6) + 16LL));
    ObfDereferenceObjectWithTag(v3[2], 0x746C6644u);
    ExFreePoolWithTag(v3, 0);
  }
  v4 = PnpEtwHandle;
  IopBootDriverReinitCompleted = 1;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_BootDriverReinit_Stop) )
    EtwWrite(v4, &KMPnPEvt_BootDriverReinit_Stop, 0LL, 0, 0LL);
  return v1;
}
