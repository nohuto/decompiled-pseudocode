/*
 * XREFs of SepIsSiblingTokenByPointer @ 0x1404766F4
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x140476504 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     SepReleaseOrderedReadLocks @ 0x14007F7D8 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x14007F810 (SepAcquireOrderedReadLocks.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall SepIsSiblingTokenByPointer(unsigned __int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rdi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  v6 = PsReferencePrimaryToken(Process);
  v7 = (unsigned __int64)v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = v6[4];
  v9 = v6[3];
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v6);
  v10 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) == v8 )
  {
    if ( v10 == v9 )
    {
      *a2 = 1;
    }
    else
    {
      SepAcquireOrderedReadLocks(v7, a1);
      if ( (*(_DWORD *)(v7 + 200) & 0x20) == 0 && (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 216);
        v13 = *(_QWORD *)(v7 + 216);
        if ( (*(_BYTE *)(v13 + 32) & *(_BYTE *)(v12 + 32) & 0x40) != 0
          && v9 == *(_QWORD *)(v12 + 168)
          && v10 == *(_QWORD *)(v13 + 168) )
        {
          *a2 = 1;
        }
      }
      SepReleaseOrderedReadLocks(v7, a1);
    }
  }
  return 0LL;
}
