/*
 * XREFs of NtOpenEvent @ 0x14053A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  _QWORD *v7; // rdx
  NTSTATUS v8; // edx
  void *v10; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = EventHandle;
    if ( (unsigned __int64)EventHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)ExEventObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         &v10);
  if ( v8 >= 0 )
    *EventHandle = v10;
  return v8;
}
