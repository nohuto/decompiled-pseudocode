/*
 * XREFs of IopLiveDumpTraceInterfaceEnd @ 0x1401F8A84
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14066AABC (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401F8794 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceInterfaceEnd(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  int v4; // edx
  int v5; // r8d
  const EVENT_DESCRIPTOR *v6; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    if ( v4 )
    {
      v6 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_END;
      if ( v5 != 1 )
        v6 = &LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_END;
    }
    else
    {
      v6 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_CAPTURE_API_END;
    }
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v8;
    UserData.Size = 4;
    return EtwWrite(IopLiveDumpEtwRegHandle, v6, 0LL, 1u, &UserData);
  }
  return result;
}
