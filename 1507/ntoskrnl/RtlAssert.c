/*
 * XREFs of RtlAssert @ 0x140248194
 * Callers:
 *     KseDriverUnloadImage @ 0x1404531F0 (KseDriverUnloadImage.c)
 *     KsepStringDuplicate @ 0x14054B5E0 (KsepStringDuplicate.c)
 *     KseShimDatabaseClose @ 0x1405770FC (KseShimDatabaseClose.c)
 *     KsepRegistryOpenKey @ 0x1405785E4 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x1405788F8 (KsepStringDuplicateUnicode.c)
 *     KsepStringConcatenate @ 0x140578998 (KsepStringConcatenate.c)
 *     KsepGetShimCallbacksForDriver @ 0x140578AD0 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringTransform @ 0x140578DD4 (KsepStringTransform.c)
 *     KsepRegistryQueryDWORD @ 0x1405B5A8C (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x1405BB9C8 (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x14069D6EC (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x14069D9B4 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x14069DDA8 (KsepRegistryQueryValue.c)
 *     KsepEngineInitialize @ 0x1407DE5C8 (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x1407DE684 (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x1407E77F0 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineUninitialize @ 0x1407FB240 (KsepEngineUninitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x14017FA50 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x14018B560 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x140246600 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1406CBE3C (RtlpTerminateCurrentProcess.c)
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
