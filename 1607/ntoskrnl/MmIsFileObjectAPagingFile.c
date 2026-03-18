/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x14010DA6C
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14008DEA4 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008E368 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x1400E9F10 (IoPageReadEx.c)
 *     FsRtlIsSystemPagingFile @ 0x14010DA64 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // cl
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_140327638);
  v4 = (_QWORD *)qword_140327630;
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
  ExReleaseSpinLockShared(&dword_140327638, v3);
  return v2;
}
