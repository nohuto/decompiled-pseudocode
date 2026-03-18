/*
 * XREFs of UnreferenceUndispatchedFrameList @ 0x1401EF3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall UnreferenceUndispatchedFrameList(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *v5; // rax
  __int64 UserSessionState; // rax

  v3 = (struct _LIST_ENTRY *)((char *)PtiCurrent(a1) + 1272);
  while ( v3->Flink != v3 )
  {
    Blink = v3->Blink;
    if ( Blink->Flink != v3 || (v5 = Blink->Blink, v5->Flink != Blink) )
      __fastfail(3u);
    v3->Blink = v5;
    v5->Flink = v3;
    Blink->Blink = Blink;
    Blink->Flink = Blink;
    UserSessionState = W32GetUserSessionState(v2, v1);
    CTouchProcessor::UnreferenceUndispatchedFrame(*(CTouchProcessor **)(UserSessionState + 3256), Blink);
  }
}
