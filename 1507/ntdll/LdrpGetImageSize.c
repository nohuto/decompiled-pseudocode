/*
 * XREFs of LdrpGetImageSize @ 0x180017484
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180017554 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpAccessResourceData @ 0x180018AC0 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800381AC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  int VirtualMemory; // ebx
  __int64 FileSizeFromLoadAsDataTable; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  VirtualMemory = 0;
  FileSizeFromLoadAsDataTable = 0LL;
  v7 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( !v7 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
    if ( *(_WORD *)(v7 + 24) == 267 || *(_WORD *)(v7 + 24) == 523 )
    {
      FileSizeFromLoadAsDataTable = *(unsigned int *)(v7 + 80);
      goto LABEL_6;
    }
LABEL_11:
    VirtualMemory = -1073741701;
    goto LABEL_6;
  }
  FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !FileSizeFromLoadAsDataTable )
  {
    VirtualMemory = ZwQueryVirtualMemory(-1LL, v3, 3LL, v9, 32LL, 0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      FileSizeFromLoadAsDataTable = v10;
  }
LABEL_6:
  result = (unsigned int)VirtualMemory;
  *a2 = FileSizeFromLoadAsDataTable;
  return result;
}
