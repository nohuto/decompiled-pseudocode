/*
 * XREFs of NtWaitForMultipleObjects @ 0x14048C3E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Object[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  char PreviousMode; // di
  LARGE_INTEGER *v9; // rbx
  __int64 v10; // rax
  LARGE_INTEGER v12; // [rsp+48h] [rbp-230h] BYREF
  unsigned __int64 v13[64]; // [rsp+50h] [rbp-228h] BYREF

  if ( Count - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = Time;
  if ( PreviousMode )
  {
    if ( Time )
    {
      if ( (unsigned __int64)Time >= MmUserProbeAddress )
        v9 = (LARGE_INTEGER *)MmUserProbeAddress;
      v12 = *v9;
      v9 = &v12;
    }
    v10 = Count;
    if ( v10 * 8 && ((unsigned __int64)&Object[v10] > MmUserProbeAddress || &Object[v10] < Object) )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v13, Object, 8LL * Count);
  return ObWaitForMultipleObjects(Count, v13, PreviousMode, WaitType, PreviousMode, Alertable, v9);
}
