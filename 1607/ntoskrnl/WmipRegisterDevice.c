/*
 * XREFs of WmipRegisterDevice @ 0x14053AA68
 * Callers:
 *     IoWMIRegistrationControl @ 0x14053A994 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x14007F7E0 (ObReferenceObjectByPointer.c)
 *     WmipUnreferenceRegEntry @ 0x1400C2770 (WmipUnreferenceRegEntry.c)
 *     IoGetAttachedDeviceReference @ 0x1400C2790 (IoGetAttachedDeviceReference.c)
 *     WmipDeregisterRegEntry @ 0x1401255D0 (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012E36C (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x14012E408 (WmipAllocRegEntry.c)
 *     WmipRegisterOrUpdateDS @ 0x140537360 (WmipRegisterOrUpdateDS.c)
 *     WmipQueueRegWork @ 0x14053ABD0 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14053ACA0 (WmipUpdateDeviceStackSize.c)
 */

__int64 __fastcall WmipRegisterDevice(struct _DEVICE_OBJECT *Object, int a2)
{
  bool v2; // bp
  unsigned int v3; // ebx
  char *RegEntryByDevice; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  __int64 v7; // rcx
  int updated; // edi
  _QWORD *v9; // rax

  v2 = 0;
  v3 = 0;
  if ( a2 < 0 )
    v3 = 0x10000000;
  if ( (a2 & 0x10000) != 0 )
    v3 |= 16 * (a2 & 0xF00000 | 0x4000000);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice((__int64)Object);
  if ( RegEntryByDevice )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = 0x40000000;
LABEL_12:
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
    goto LABEL_13;
  }
  if ( ((v3 >> 28) & 1) != 0 )
  {
    updated = 0;
  }
  else
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(Object);
    LOBYTE(v7) = AttachedDeviceReference->StackSize + 1;
    WmipUpdateDeviceStackSize(v7);
    ObfDereferenceObject(AttachedDeviceReference);
    updated = ObReferenceObjectByPointer(Object, 0, 0LL, 0);
  }
  if ( updated < 0 )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    v9 = WmipAllocRegEntry((__int64)Object, v3);
    RegEntryByDevice = (char *)v9;
    if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)v9 + 12, 1u);
      KeReleaseMutex(&WmipSMMutex, 0);
      if ( ((v3 >> 28) & 1) != 0 )
      {
        updated = WmipRegisterOrUpdateDS((__int64)RegEntryByDevice, 0);
        if ( updated < 0 )
          v2 = 1;
      }
      else
      {
        updated = WmipQueueRegWork(0LL, RegEntryByDevice);
        v2 = updated < 0;
      }
      goto LABEL_12;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = -1073741670;
  }
LABEL_13:
  if ( v2 )
    WmipDeregisterRegEntry(RegEntryByDevice);
  return (unsigned int)updated;
}
