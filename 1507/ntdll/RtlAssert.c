/*
 * XREFs of RtlAssert @ 0x1800D3780
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180072510 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x180093E30 (NtTerminateThread.c)
 *     RtlCaptureContext @ 0x180095980 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1800CACC0 (DbgPrompt.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800EA538 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlAssert(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  _BYTE *v8; // r9
  __int64 result; // rax
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // [rsp+30h] [rbp-528h]
  char v15; // [rsp+40h] [rbp-518h]
  struct _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  while ( 1 )
  {
    LODWORD(v14) = a3;
    v8 = byte_180101572;
    if ( a4 )
      v8 = a4;
    DbgPrintEx(101, 0, "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n", v8, a1, a2, v14);
    result = RtlIsAnyDebuggerPresent();
    if ( !(_BYTE)result )
      return result;
    result = DbgPrompt((__int64)"Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ");
    if ( !(_DWORD)result )
    {
      __debugbreak();
      return ZwTerminateProcess();
    }
    if ( v15 > 98 )
    {
      v11 = v15 - 105;
      v10 = v15 == 105;
    }
    else
    {
      if ( v15 == 98 || v15 == 66 )
        goto LABEL_16;
      v11 = v15 - 73;
      v10 = v15 == 73;
    }
    if ( v10 )
      return result;
    v12 = v11 - 6;
    if ( !v12 )
    {
LABEL_16:
      DbgPrintEx(101, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v13 = v12 - 1;
    if ( !v13 )
      return ZwTerminateProcess();
    if ( v13 == 4 )
      NtTerminateThread();
  }
}
