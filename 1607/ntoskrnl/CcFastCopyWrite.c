/*
 * XREFs of CcFastCopyWrite @ 0x1401B19C0
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteEx @ 0x1400E9C50 (CcCopyWriteEx.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcFastCopyWrite(PFILE_OBJECT FileObject, ULONG FileOffset, ULONG Length, PVOID Buffer)
{
  char *v4; // [rsp+20h] [rbp-28h]
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (char *)Buffer;
  LOBYTE(Buffer) = 1;
  v5[0] = FileOffset;
  CcCopyWriteEx((__int64)FileObject, (__int64)v5, *(__int64 *)&Length, (__int64)Buffer, v4, 0LL);
}
