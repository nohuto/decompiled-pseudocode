/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x14045BF70
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14045DC54 (PiUEventProcessBroadcastNotifications.c)
 *     PnpNotifyDeviceClassChange @ 0x140460F64 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x140561348 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14045BFC8 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetSessionIdFromPDO @ 0x14045E7E8 (IopGetSessionIdFromPDO.c)
 */

__int64 IopGetSessionIdFromSymbolicName()
{
  unsigned int SessionIdFromPDO; // edi
  __int64 v1; // rax
  void *v2; // rbx
  __int64 v3; // rcx

  SessionIdFromPDO = -1;
  v1 = IopDeviceObjectFromSymbolicName();
  v2 = (void *)v1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 396) & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v1);
        ObfDereferenceObject(v2);
      }
    }
  }
  return SessionIdFromPDO;
}
