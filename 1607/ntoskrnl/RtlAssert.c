/*
 * XREFs of RtlAssert @ 0x140213284
 * Callers:
 *     KseShimDatabaseClose @ 0x140513B88 (KseShimDatabaseClose.c)
 *     KsepStringDuplicate @ 0x140514AB8 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140514B64 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x140514C9C (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x140514FB0 (KsepStringDuplicateUnicode.c)
 *     KsepGetShimCallbacksForDriver @ 0x1405151DC (KsepGetShimCallbacksForDriver.c)
 *     KsepStringTransform @ 0x140535480 (KsepStringTransform.c)
 *     KseDriverUnloadImage @ 0x140546D94 (KseDriverUnloadImage.c)
 *     KsepRegistryQueryDWORD @ 0x140571D14 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x140579410 (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x140653CC8 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140653F90 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x140654384 (KsepRegistryQueryValue.c)
 *     KsepEngineInitialize @ 0x1407B315C (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineUninitialize @ 0x1407D0374 (KsepEngineUninitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x14015AC50 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1402111A0 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x140688460 (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  PSTR v8; // r9
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp-528h]
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  while ( 1 )
  {
    LODWORD(v13) = LineNumber;
    v8 = (PSTR)&File;
    if ( MutableMessage )
      v8 = MutableMessage;
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n",
      v8,
      VoidFailedAssertion,
      VoidFileName,
      v13);
    if ( (MEMORY[0xFFFFF780000002D4] & 3) != 3 )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_18:
      RtlpTerminateCurrentProcess();
      return;
    }
    if ( Response[0] > 98 )
    {
      v10 = Response[0] - 105;
      v9 = Response[0] == 105;
    }
    else
    {
      if ( Response[0] == 98 || Response[0] == 66 )
        goto LABEL_16;
      v10 = Response[0] - 73;
      v9 = Response[0] == 73;
    }
    if ( v9 )
      return;
    v11 = v10 - 6;
    if ( !v11 )
    {
LABEL_16:
      DbgPrintEx(0x65u, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_18;
    if ( v12 == 4 )
      ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, -1073741823);
  }
}
