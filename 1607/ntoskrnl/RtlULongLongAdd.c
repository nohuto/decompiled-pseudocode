/*
 * XREFs of RtlULongLongAdd @ 0x14010D2A4
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1401B2B70 (CmpCaptureKeyValueArray.c)
 *     LdrpResGetResourceDirectory @ 0x1404FE824 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14051E630 (LdrpResSearchResourceInsideDirectory.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     AslpFileGetVersionBlock @ 0x1406C820C (AslpFileGetVersionBlock.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  if ( ullAugend + ullAddend < ullAugend )
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  else
  {
    *pullResult = ullAugend + ullAddend;
    return 0;
  }
}
