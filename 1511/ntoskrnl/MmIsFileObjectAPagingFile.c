/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x140103648
 * Callers:
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     IoSynchronousPageWriteEx @ 0x1400E0460 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400EF86C (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x140103640 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // cl
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_1402FF1E8);
  v4 = (_QWORD *)qword_1402FF1E0;
  while ( v4 )
  {
    v5 = *(v4 - 26);
    if ( a1 < v5 )
    {
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( a1 <= v5 )
      {
        v2 = 1;
        break;
      }
      v4 = (_QWORD *)v4[1];
    }
  }
  ExReleaseSpinLockShared(&dword_1402FF1E8, v3);
  return v2;
}
