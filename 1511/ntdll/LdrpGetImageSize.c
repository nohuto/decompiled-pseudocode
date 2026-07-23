/*
 * XREFs of LdrpGetImageSize @ 0x18003188C
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180031654 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpAccessResourceData @ 0x18007031C (LdrpAccessResourceData.c)
 * Callees:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180030438 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, __int64 *a2)
{
  void *v3; // rbp
  NTSTATUS VirtualMemory; // ebx
  __int64 SizeOfImage; // rdi
  PIMAGE_NT_HEADERS v7; // rax
  __int64 result; // rax
  _BYTE MemoryInformation[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  VirtualMemory = 0;
  SizeOfImage = 0LL;
  v7 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v7 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
    if ( v7->OptionalHeader.Magic == 267 || v7->OptionalHeader.Magic == 523 )
    {
      SizeOfImage = v7->OptionalHeader.SizeOfImage;
      goto LABEL_6;
    }
LABEL_11:
    VirtualMemory = -1073741701;
    goto LABEL_6;
  }
  SizeOfImage = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !SizeOfImage )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v3,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x20uLL,
                      0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      SizeOfImage = v10;
  }
LABEL_6:
  result = (unsigned int)VirtualMemory;
  *a2 = SizeOfImage;
  return result;
}
