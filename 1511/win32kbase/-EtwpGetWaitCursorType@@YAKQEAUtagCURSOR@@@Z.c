/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00AB51C
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C00771A0 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C0102238 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C01022C8 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0102318 )
    return 116LL;
  return result;
}
