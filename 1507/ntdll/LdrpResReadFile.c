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
