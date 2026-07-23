/*
 * XREFs of FsFilterCtrlInit @ 0x140026100
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14008E914 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042CEE0 (FsRtlAcquireFileExclusiveCommon.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     FsFilterAllocateCompletionStack @ 0x1401B9BB0 (FsFilterAllocateCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlInit(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int16 v10; // ax
  unsigned int v11; // eax
  __int64 result; // rax
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF

  v6 = a5;
  v7 = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)a1 = 64;
  *(_QWORD *)(a1 + 16) = v6;
  memset((void *)(a1 + 24), 0, 0x28uLL);
  v10 = *(char *)(a3 + 76);
  *(_WORD *)(a1 + 72) = v10;
  *(_WORD *)(a1 + 74) = 0;
  if ( v10 <= 0xFu )
  {
    *(_QWORD *)(a1 + 80) = a1 + 88;
    v11 = 480;
    *(_WORD *)(a1 + 72) = 15;
LABEL_3:
    memset(*(void **)(a1 + 80), 0, v11);
    return v7;
  }
  result = FsFilterAllocateCompletionStack(a1, a6, &v13);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v11 = v13;
    goto LABEL_3;
  }
  return result;
}
