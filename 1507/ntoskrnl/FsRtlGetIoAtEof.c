/*
 * XREFs of FsRtlGetIoAtEof @ 0x1400D5760
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpWaitForIoAtEof @ 0x1400D5A80 (FsRtlpWaitForIoAtEof.c)
 */

__int64 __fastcall FsRtlGetIoAtEof(__int64 a1, __int64 a2, __int64 a3, char a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
    goto LABEL_6;
  }
  if ( a2 >= 0 )
    a2 += a3;
  if ( !*(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
LABEL_6:
    *a5 = 1;
    return 0LL;
  }
  if ( !a4 )
    return 3221225556LL;
  *a5 = FsRtlpWaitForIoAtEof(a1, a2);
  return 0LL;
}
