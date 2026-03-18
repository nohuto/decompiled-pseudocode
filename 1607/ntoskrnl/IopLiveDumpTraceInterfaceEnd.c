/*
 * XREFs of IopLiveDumpTraceInterfaceEnd @ 0x1401CB1E0
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14061C01C (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14062651C (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CAEBC (IopLiveDumpIsTracingEnabled.c)
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
