/*
 * XREFs of InitializePointerInput @ 0x1C01133F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitializePointerInput()
{
  __int64 result; // rax

  qword_1C03277E8 = (__int64)&qword_1C03277E0;
  qword_1C03277E0 = (__int64)&qword_1C03277E0;
  qword_1C03277F8 = (__int64)&qword_1C03277F0;
  qword_1C03277F0 = (__int64)&qword_1C03277F0;
  word_1C032F148 = 2;
  qword_1C0327568 = (struct tagPOINTERINPUTFRAME *)&gFrameListHead;
  gFrameListHead.Flink = &gFrameListHead;
  qword_1C0327808 = (__int64)&qword_1C0327800;
  qword_1C0327800 = (struct tagPOINTERHOLDINGFRAME *)&qword_1C0327800;
  qword_1C032C5D8 = (__int64)&gFrameTPListHead;
  gFrameTPListHead = &gFrameTPListHead;
  result = 1LL;
  dword_1C0323500 = 1;
  dword_1C032F160 = 1;
  return result;
}
