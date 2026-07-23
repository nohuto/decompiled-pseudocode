/*
 * XREFs of IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1401CB268
 * Callers:
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1403DA4D0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CADA0 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceRemovePagesCallbackFailure(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  ULONG v4; // edx
  ULONGLONG v5; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    UserData.Reserved = 0;
    v9 = 0;
    v7 = &v10;
    UserData.Ptr = v5;
    UserData.Size = v4;
    v8 = 4;
    return EtwWrite(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_FAILURE,
             0LL,
             2u,
             &UserData);
  }
  return result;
}
