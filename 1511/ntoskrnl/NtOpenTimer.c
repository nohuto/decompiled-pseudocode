/*
 * XREFs of NtOpenTimer @ 0x14066CF38
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  _QWORD *v7; // rdx
  NTSTATUS v8; // edx
  void *v10; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = TimerHandle;
    if ( (unsigned __int64)TimerHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  v8 = ObOpenObjectByName((__int64)ObjectAttributes, ExTimerObjectType, PreviousMode, 0LL, DesiredAccess, 0LL, &v10);
  if ( v8 >= 0 )
    *TimerHandle = v10;
  return v8;
}
