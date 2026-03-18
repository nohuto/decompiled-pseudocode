/*
 * XREFs of InitializeHidRequestList @ 0x1C0135560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C032BB80 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C032BB90 = (__int64)&qword_1C032BB88;
  qword_1C032BB88 = (struct tagHID_PAGEONLY_REQUEST *)&qword_1C032BB88;
  result = &qword_1C032BB98;
  qword_1C032BBA0 = (__int64)&qword_1C032BB98;
  qword_1C032BB98 = (__int64)&qword_1C032BB98;
  return result;
}
