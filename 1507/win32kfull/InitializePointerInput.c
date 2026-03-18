/*
 * XREFs of InitializePointerInput @ 0x1C0156D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitializePointerInput()
{
  __int64 result; // rax

  qword_1C03253D0 = (__int64)&qword_1C03253C8;
  qword_1C03253C8 = (__int64)&qword_1C03253C8;
  qword_1C03253E0 = (__int64)&qword_1C03253D8;
  qword_1C03253D8 = (__int64)&qword_1C03253D8;
  word_1C032F0F8 = 2;
  qword_1C03254F0 = (struct tagPOINTERINPUTFRAME *)&gFrameListHead;
  gFrameListHead.Flink = &gFrameListHead;
  qword_1C03253F0 = (__int64)&qword_1C03253E8;
  qword_1C03253E8 = (struct tagPOINTERHOLDINGFRAME *)&qword_1C03253E8;
  qword_1C032D188 = (__int64)&gFrameTPListHead;
  gFrameTPListHead = &gFrameTPListHead;
  result = 1LL;
  dword_1C0322C10 = 1;
  dword_1C032F110 = 1;
  return result;
}
