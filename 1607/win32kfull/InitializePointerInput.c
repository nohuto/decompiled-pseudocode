/*
 * XREFs of InitializePointerInput @ 0x1C0134B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *InitializePointerInput()
{
  void *result; // rax

  dword_1C0328B98 = 1;
  qword_1C032DAF8 = (__int64)&qword_1C032DAF0;
  qword_1C032DAF0 = (__int64)&qword_1C032DAF0;
  qword_1C032DB08 = (__int64)&qword_1C032DB00;
  qword_1C032DB00 = (__int64)&qword_1C032DB00;
  word_1C03345E0 = 2;
  qword_1C0329648 = (struct tagPOINTERINPUTFRAME *)&gFrameListHead;
  gFrameListHead.Flink = &gFrameListHead;
  qword_1C032DAA8 = (__int64)&qword_1C032DAA0;
  qword_1C032DAA0 = (struct tagPOINTERHOLDINGFRAME *)&qword_1C032DAA0;
  result = &gFrameTPListHead;
  qword_1C0329638 = (__int64)&gFrameTPListHead;
  gFrameTPListHead = &gFrameTPListHead;
  return result;
}
