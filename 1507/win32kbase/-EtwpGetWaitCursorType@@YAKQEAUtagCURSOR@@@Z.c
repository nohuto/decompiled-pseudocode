/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00A6FAC
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C0013CF0 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C00FF248 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C00FF2D8 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C00FF328 )
    return 116LL;
  return result;
}
