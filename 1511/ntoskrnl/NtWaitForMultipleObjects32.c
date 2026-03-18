/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x140497EE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects32(
        ULONG ObjectCount,
        PLONG Handles,
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER TimeOut)
{
  char PreviousMode; // r11
  LARGE_INTEGER *v9; // r9
  __int64 v10; // rax
  LONG *v11; // rdx
  __int64 i; // r8
  LARGE_INTEGER v14; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int64 v15[64]; // [rsp+60h] [rbp-218h] BYREF

  if ( ObjectCount - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = TimeOut;
  if ( PreviousMode )
  {
    if ( TimeOut )
    {
      if ( (unsigned __int64)TimeOut >= MmUserProbeAddress )
        v9 = (LARGE_INTEGER *)MmUserProbeAddress;
      v14 = *v9;
      v9 = &v14;
    }
    v10 = ObjectCount;
    if ( v10 * 4 )
    {
      v11 = &Handles[v10];
      if ( (unsigned __int64)v11 > MmUserProbeAddress || v11 < Handles )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  for ( i = 0LL; (unsigned int)i < ObjectCount; i = (unsigned int)(i + 1) )
    v15[i] = Handles[i];
  return ObWaitForMultipleObjects(ObjectCount, v15, PreviousMode, WaitType, PreviousMode, Alertable, v9);
}
