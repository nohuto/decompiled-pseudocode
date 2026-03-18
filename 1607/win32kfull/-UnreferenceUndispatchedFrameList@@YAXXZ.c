/*
 * XREFs of ?UnreferenceUndispatchedFrameList@@YAXXZ @ 0x1C010F810
 * Callers:
 *     <none>
 * Callees:
 *     UnreferenceUndispatchedFrame @ 0x1C01C2464 (UnreferenceUndispatchedFrame.c)
 */

void UnreferenceUndispatchedFrameList(void)
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  v0 = (_QWORD *)(gptiCurrent + 1008LL);
  while ( (_QWORD *)*v0 != v0 )
  {
    v1 = *(_QWORD **)(gptiCurrent + 1016LL);
    v2 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v1 != v0 || (_QWORD *)*v2 != v1 )
      __fastfail(3u);
    *(_QWORD *)(gptiCurrent + 1016LL) = v2;
    *v2 = v0;
    UnreferenceUndispatchedFrame();
  }
}
