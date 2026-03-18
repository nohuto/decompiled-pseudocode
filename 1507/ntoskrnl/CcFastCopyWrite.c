/*
 * XREFs of CcFastCopyWrite @ 0x1401DD028
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteEx @ 0x140108EF0 (CcCopyWriteEx.c)
 */

void __stdcall CcFastCopyWrite(PFILE_OBJECT FileObject, ULONG FileOffset, ULONG Length, PVOID Buffer)
{
  char *v4; // [rsp+20h] [rbp-28h]
  LARGE_INTEGER v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (char *)Buffer;
  LOBYTE(Buffer) = 1;
  v5[0].QuadPart = FileOffset;
  CcCopyWriteEx((__int64)FileObject, v5, Length, (__int64)Buffer, v4, 0LL);
}
