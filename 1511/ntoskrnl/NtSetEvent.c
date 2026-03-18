/*
 * XREFs of NtSetEvent @ 0x14042F470
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140762BBC (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  PLONG v2; // rsi
  KPROCESSOR_MODE PreviousMode; // r14
  int v4; // ebx
  LONG v5; // r15d
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v2 = PreviousState;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousState && PreviousMode )
  {
    if ( (unsigned __int64)PreviousState >= MmUserProbeAddress )
      PreviousState = (PLONG)MmUserProbeAddress;
    *PreviousState = *PreviousState;
  }
  v4 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = KeSetEvent((PRKEVENT)Object, 1, 0);
    ObfDereferenceObject(Object);
    if ( v2 )
      *v2 = v5;
  }
  return v4;
}
