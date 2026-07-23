/*
 * XREFs of IopLiveDumpTraceBufferAllocation @ 0x1401CAE20
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140626760 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CADA0 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceBufferAllocation()
{
  char result; // al
  __int64 v1; // rcx
  __int64 v2; // [rsp+30h] [rbp-50h] BYREF
  __int64 v3; // [rsp+38h] [rbp-48h] BYREF
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  __int64 *v8; // [rsp+68h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp-10h]

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = *(_QWORD *)(v1 + 496) << 12;
    v3 = *(_QWORD *)(v1 + 504) << 12;
    v4 = *(unsigned int *)(v1 + 136);
    UserData.Ptr = (ULONGLONG)&v2;
    v6 = &v3;
    v8 = &v4;
    *(_QWORD *)&UserData.Size = 8LL;
    v7 = 8LL;
    v9 = 8LL;
    return EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION, 0LL, 3u, &UserData);
  }
  return result;
}
