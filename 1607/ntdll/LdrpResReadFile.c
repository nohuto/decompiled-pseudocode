/*
 * XREFs of LdrpResReadFile @ 0x1800DD404
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381DC (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x1800391B0 (LdrpResCompareResourceNames.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD4C0 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x1800A64E0 (NtReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800DDAF0 (LdrpResSetFilePointer.c)
 */

__int64 __fastcall LdrpResReadFile(char *Handle, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int File; // ecx
  int v8; // [rsp+58h] [rbp-10h]

  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = LdrpResSetFilePointer();
    if ( (int)result < 0 )
      return result;
    File = NtReadFile();
    if ( File == 259 )
      File = NtWaitForSingleObject(Handle, 0, 0LL);
    if ( (File & 0xC0000000) == 0x80000000 )
      File = 0;
    if ( File >= 0 && a4 != v8 )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)File;
}
