/*
 * XREFs of InitializeHidRequestList @ 0x1C0113C20
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
    qword_1C03274D0 = (__int64)&gHidRequestTable;
    gHidRequestTable = (struct tagHID_PAGEONLY_REQUEST *)&gHidRequestTable;
    qword_1C03274E0 = (__int64)&qword_1C03274D8;
    qword_1C03274D8 = (struct tagHID_PAGEONLY_REQUEST *)&qword_1C03274D8;
    result = &qword_1C03274E8;
    qword_1C03274F0 = (__int64)&qword_1C03274E8;
    qword_1C03274E8 = (struct tagPROCESS_HID_TABLE *)&qword_1C03274E8;
  }
  return result;
}
