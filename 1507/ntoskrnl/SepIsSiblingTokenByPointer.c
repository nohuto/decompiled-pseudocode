/*
 * XREFs of SepIsSiblingTokenByPointer @ 0x140545758
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x140545528 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall SepIsSiblingTokenByPointer(__int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // r14
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  v6 = PsReferencePrimaryToken(Process);
  if ( !v6 )
    return 3221225473LL;
  v7 = v6[4];
  v8 = v6[3];
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v6);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)v9 == (_DWORD)v7
    && __PAIR64__(HIDWORD(v9), v10) == __PAIR64__(HIDWORD(v7), v8)
    && HIDWORD(v10) == HIDWORD(v8) )
  {
    *a2 = 1;
  }
  return 0LL;
}
