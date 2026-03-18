/*
 * XREFs of RtlULongLongAdd @ 0x1400F756C
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1401DF5AC (CmpCaptureKeyValueArray.c)
 *     LdrpResGetResourceDirectory @ 0x140463D78 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14046410C (LdrpResSearchResourceInsideDirectory.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
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
