/*
 * XREFs of LdrpResReadFile @ 0x1800D5054
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x18003839C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x180039378 (LdrpResCompareResourceNames.c)
 *     LdrpResSearchResourceHandle @ 0x1800D5110 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x1800A5180 (NtReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800D5748 (LdrpResSetFilePointer.c)
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
