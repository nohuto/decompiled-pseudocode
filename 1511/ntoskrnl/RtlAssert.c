/*
 * XREFs of RtlAssert @ 0x1401F912C
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x1403B684C (KsepGetShimCallbacksForDriver.c)
 *     KseShimDatabaseClose @ 0x1403B71B0 (KseShimDatabaseClose.c)
 *     KsepStringConcatenate @ 0x1403B8750 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x1403B8888 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x1403B8B9C (KsepStringDuplicateUnicode.c)
 *     KseDriverUnloadImage @ 0x1404C57BC (KseDriverUnloadImage.c)
 *     KsepStringDuplicate @ 0x1404F1B98 (KsepStringDuplicate.c)
 *     KsepStringTransform @ 0x1404FA638 (KsepStringTransform.c)
 *     KsepRegistryQueryDWORD @ 0x140524B00 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x140544E20 (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x14061E96C (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x14061EC34 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x14061F028 (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x140755DF0 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineInitialize @ 0x140755EE8 (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x140755FA4 (KsepEngineReadFlags.c)
 *     KsepEngineUninitialize @ 0x140784AC8 (KsepEngineUninitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x140151080 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x14015BA80 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1401F77D0 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x140648DB8 (RtlpTerminateCurrentProcess.c)
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
