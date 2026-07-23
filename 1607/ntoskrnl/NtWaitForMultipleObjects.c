/*
 * XREFs of NtWaitForMultipleObjects @ 0x1404A0720
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Object[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  KPROCESSOR_MODE v6; // r14
  BOOLEAN v8; // di
  __int64 v9; // rbx
  HANDLE *v10; // rax
  LARGE_INTEGER *v12; // [rsp+28h] [rbp-250h]
  __int64 v13; // [rsp+48h] [rbp-230h] BYREF
  _BYTE v14[512]; // [rsp+50h] [rbp-228h] BYREF

  v6 = WaitType;
  if ( Count - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  v8 = KeGetCurrentThread()->gap0[10];
  v9 = (__int64)Time;
  if ( v8 )
  {
    if ( Time )
    {
      if ( (unsigned __int64)Time >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      v13 = *(_QWORD *)v9;
      v9 = (__int64)&v13;
    }
    if ( 8LL * Count )
    {
      v10 = &Object[Count];
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Object )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(v14, Object, 8LL * Count);
  LOBYTE(v12) = Alertable;
  return ObWaitForMultipleObjects(Count, (__int64)v14, v8, v6, v8, v12, (WAIT_TYPE)v9);
}
