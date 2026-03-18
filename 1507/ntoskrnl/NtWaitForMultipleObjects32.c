/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x140521960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects32(
        ULONG ObjectCount,
        PLONG Handles,
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER TimeOut)
{
  char PreviousMode; // bl
  LARGE_INTEGER *v10; // r8
  __int64 v11; // rax
  __int64 i; // rdx
  LARGE_INTEGER v13; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int64 v14[64]; // [rsp+60h] [rbp-218h] BYREF

  if ( ObjectCount - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = TimeOut;
  if ( PreviousMode )
  {
    if ( TimeOut )
    {
      if ( (unsigned __int64)TimeOut >= MmUserProbeAddress )
        v10 = (LARGE_INTEGER *)MmUserProbeAddress;
      v13 = *v10;
      v10 = &v13;
    }
    v11 = ObjectCount;
    if ( v11 * 4 && ((unsigned __int64)&Handles[v11] > MmUserProbeAddress || &Handles[v11] < Handles) )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  for ( i = 0LL; (unsigned int)i < ObjectCount; i = (unsigned int)(i + 1) )
    v14[i] = Handles[i];
  return ObWaitForMultipleObjects(ObjectCount, v14, PreviousMode, WaitType, PreviousMode, Alertable, v10);
}
