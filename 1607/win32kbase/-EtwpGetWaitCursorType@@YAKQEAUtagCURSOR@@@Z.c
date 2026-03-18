/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00B4C24
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C007AB50 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C0119858 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C01198E8 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0119938 )
    return 116LL;
  return result;
}
