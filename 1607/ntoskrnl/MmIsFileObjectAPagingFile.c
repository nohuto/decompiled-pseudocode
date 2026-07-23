/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x14010DFD0
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x14008DAC8 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     FsRtlIsSystemPagingFile @ 0x14010DFC8 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // cl
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_140327678);
  v4 = (_QWORD *)qword_140327670;
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
  ExReleaseSpinLockShared(&dword_140327678, v3);
  return v2;
}
