/*
 * XREFs of InitializeHidRequestList @ 0x1C0157210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_TABLE **InitializeHidRequestList()
{
  struct tagPROCESS_HID_TABLE **result; // rax

  result = (struct tagPROCESS_HID_TABLE **)aDeviceTemplate[0];
  if ( !LODWORD(aDeviceTemplate[154]) )
  {
    qword_1C03287F8 = (__int64)&gHidRequestTable;
    gHidRequestTable = (struct tagHID_PAGEONLY_REQUEST *)&gHidRequestTable;
    qword_1C0328808 = (__int64)&qword_1C0328800;
    qword_1C0328800 = (struct tagHID_PAGEONLY_REQUEST *)&qword_1C0328800;
    result = &qword_1C0328810;
    qword_1C0328818 = (__int64)&qword_1C0328810;
    qword_1C0328810 = (struct tagPROCESS_HID_TABLE *)&qword_1C0328810;
  }
  return result;
}
