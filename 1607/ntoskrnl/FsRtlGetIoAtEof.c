/*
 * XREFs of FsRtlGetIoAtEof @ 0x1400C3FD0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpWaitForIoAtEof @ 0x1400C508C (FsRtlpWaitForIoAtEof.c)
 */

__int64 __fastcall FsRtlGetIoAtEof(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
    goto LABEL_6;
  }
  if ( a3 >= 0 )
    a3 += a4;
  if ( !*(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
LABEL_6:
    *a6 = 1;
    return 0LL;
  }
  if ( !a5 )
    return 3221225556LL;
  *a6 = FsRtlpWaitForIoAtEof(a1, a2, a3);
  return 0LL;
}
