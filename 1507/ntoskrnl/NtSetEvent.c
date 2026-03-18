/*
 * XREFs of NtSetEvent @ 0x14048FDC0
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x1407BC3AC (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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
