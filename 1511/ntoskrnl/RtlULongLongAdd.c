/*
 * XREFs of RtlULongLongAdd @ 0x14009A12C
 * Callers:
 *     LdrpResGetResourceDirectory @ 0x140464F18 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x140465BDC (LdrpResSearchResourceInsideDirectory.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     AslpFileGetVersionBlock @ 0x140682514 (AslpFileGetVersionBlock.c)
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
