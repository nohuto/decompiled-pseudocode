/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x1404A5300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects32(
        ULONG ObjectCount,
        PLONG Handles,
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER TimeOut)
{
  KPROCESSOR_MODE v6; // bl
  BOOLEAN v7; // r11
  __int64 v8; // r9
  __int64 v9; // rax
  LONG *v10; // rax
  __int64 i; // r8
  LARGE_INTEGER *v13; // [rsp+28h] [rbp-250h]
  __int64 v14; // [rsp+50h] [rbp-228h] BYREF
  _QWORD v15[64]; // [rsp+60h] [rbp-218h] BYREF

  v6 = WaitType;
  if ( ObjectCount - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  v7 = KeGetCurrentThread()->gap0[10];
  v8 = (__int64)TimeOut;
  if ( v7 )
  {
    if ( TimeOut )
    {
      if ( (unsigned __int64)TimeOut >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      v14 = *(_QWORD *)v8;
      v8 = (__int64)&v14;
    }
    v9 = ObjectCount;
    if ( v9 * 4 )
    {
      v10 = &Handles[v9];
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  for ( i = 0LL; (unsigned int)i < ObjectCount; i = (unsigned int)(i + 1) )
    v15[i] = Handles[i];
  LOBYTE(v13) = Alertable;
  return ObWaitForMultipleObjects(ObjectCount, (__int64)v15, v7, v6, v7, v13, (WAIT_TYPE)v8);
}
