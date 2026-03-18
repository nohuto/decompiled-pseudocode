/*
 * XREFs of NtPulseEvent @ 0x1403CB714
 * Callers:
 *     <none>
 * Callees:
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtPulseEvent(HANDLE EventHandle, PLONG PulseCount)
{
  KPROCESSOR_MODE PreviousMode; // si
  int v5; // edi
  LONG v6; // r14d
  _DWORD *v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PulseCount && PreviousMode )
  {
    v8 = PulseCount;
    if ( (unsigned __int64)PulseCount >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = KePulseEvent((PRKEVENT)Object, 1, 0);
    ObfDereferenceObject(Object);
    if ( PulseCount )
      *PulseCount = v6;
  }
  return v5;
}
