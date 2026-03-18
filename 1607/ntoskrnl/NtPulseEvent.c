/*
 * XREFs of NtPulseEvent @ 0x1404F3C78
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KePulseEvent @ 0x1400BEF10 (KePulseEvent.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtPulseEvent(HANDLE EventHandle, PLONG PulseCount)
{
  KPROCESSOR_MODE PreviousMode; // si
  int v5; // edi
  LONG v6; // r14d
  __int64 v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PulseCount && PreviousMode )
  {
    v8 = (__int64)PulseCount;
    if ( (unsigned __int64)PulseCount >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
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
