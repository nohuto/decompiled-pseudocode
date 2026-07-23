/*
 * XREFs of LdrpResReadFile @ 0x1800CC814
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800196E8 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x18001A6B0 (LdrpResCompareResourceNames.c)
 *     LdrpResSearchResourceHandle @ 0x1800CC8D0 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x180093960 (NtReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800CCF08 (LdrpResSetFilePointer.c)
 */

__int64 __fastcall LdrpResReadFile(char *Handle, __int64 a2, void *a3, ULONG a4)
{
  __int64 result; // rax
  NTSTATUS v8; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = LdrpResSetFilePointer();
    if ( (int)result < 0 )
      return result;
    v8 = NtReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, a3, a4, 0LL, 0LL);
    if ( v8 == 259 )
      v8 = NtWaitForSingleObject(Handle, 0, 0LL);
    if ( (v8 & 0xC0000000) == 0x80000000 )
      v8 = 0;
    if ( v8 >= 0 && a4 != LODWORD(IoStatusBlock.Information) )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
