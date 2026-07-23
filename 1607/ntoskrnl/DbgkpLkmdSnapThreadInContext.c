/*
 * XREFs of DbgkpLkmdSnapThreadInContext @ 0x14061B760
 * Callers:
 *     DbgkpLkmdSnapThreadApc @ 0x14061B6EC (DbgkpLkmdSnapThreadApc.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 *     DbgkpLkmdSnapDataEx @ 0x1401B7500 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1401B75D8 (DbgkpLkmdSnapKernelStack.c)
 */

__int64 __fastcall DbgkpLkmdSnapThreadInContext(__int64 *a1, __int64 a2, _DWORD *a3)
{
  char v6; // r14
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-518h]
  CONTEXT ContextRecord; // [rsp+40h] [rbp-508h] BYREF

  v6 = 0;
  result = DbgkpLkmdSnapDataEx((__int64)a1);
  if ( (int)result >= 0 )
  {
    a3[1] |= 1u;
    *a3 = 0;
    v8 = *a1;
    if ( *a1 )
    {
      if ( !*(_QWORD *)(v8 + 8) )
      {
        *(_QWORD *)(v8 + 8) = a2;
        v6 = 1;
        *(_DWORD *)(v9 + 536) = 0;
      }
    }
    RtlCaptureContext(&ContextRecord);
    DbgkpLkmdSnapDataEx((__int64)a1);
    DbgkpLkmdSnapKernelStack((__int64)a1, a2, v9, v6 == 0, &ContextRecord, (__int64)a3);
    return 0LL;
  }
  else
  {
    *a3 = result;
  }
  return result;
}
