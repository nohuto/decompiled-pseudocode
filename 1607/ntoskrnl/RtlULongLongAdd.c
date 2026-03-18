/*
 * XREFs of RtlULongLongAdd @ 0x1400890B4
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1401B2C8C (CmpCaptureKeyValueArray.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1404A6230 (LdrpResSearchResourceInsideDirectory.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     LdrpResGetResourceDirectory @ 0x14051B434 (LdrpResGetResourceDirectory.c)
 *     AslpFileGetVersionBlock @ 0x1406C80D4 (AslpFileGetVersionBlock.c)
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
