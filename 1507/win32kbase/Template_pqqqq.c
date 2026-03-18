/*
 * XREFs of Template_pqqqq @ 0x1C00A9A28
 * Callers:
 *     EtwTraceTimerProc @ 0x1C000E1E0 (EtwTraceTimerProc.c)
 *     EtwDirtyRectUpdate @ 0x1C000EC20 (EtwDirtyRectUpdate.c)
 *     EtwTraceInternalSetTimer @ 0x1C000F6F0 (EtwTraceInternalSetTimer.c)
 *     EtwLogicalSurfRemovedTranslationFromDirtyEvent @ 0x1C00BE7A0 (EtwLogicalSurfRemovedTranslationFromDirtyEvent.c)
 *     EtwLogicalSurfRemovedTranslationFromMoveEvent @ 0x1C00BE7E0 (EtwLogicalSurfRemovedTranslationFromMoveEvent.c)
 *     EtwTranslationUpdate @ 0x1C00BE970 (EtwTranslationUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  va_list v5; // [rsp+40h] [rbp-19h]
  __int64 v6; // [rsp+48h] [rbp-11h]
  va_list v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  va_list v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  va_list v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  __int64 v13; // [rsp+B8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+5Fh]
  __int64 v15; // [rsp+C0h] [rbp+67h] BYREF
  va_list va1; // [rsp+C0h] [rbp+67h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+C8h] [rbp+6Fh]
  __int64 v19; // [rsp+D0h] [rbp+77h] BYREF
  va_list va3; // [rsp+D0h] [rbp+77h]
  va_list va4; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  va_copy(v11, va4);
  v8 = 4LL;
  v10 = 4LL;
  v12 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 5u, &UserData);
}
