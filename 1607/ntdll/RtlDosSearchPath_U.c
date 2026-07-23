/*
 * XREFs of RtlDosSearchPath_U @ 0x1800675B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDetermineDosPathNameType_U @ 0x1800095D0 (RtlDetermineDosPathNameType_U.c)
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x18006A6B8 (RtlDoesFileExists_UEx.c)
 *     RtlGetFullPathName_U @ 0x18006A920 (RtlGetFullPathName_U.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

ULONG __cdecl RtlDosSearchPath_U(
        PCWSTR Path,
        PCWSTR FileName,
        PCWSTR Extension,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart)
{
  RTL_PATH_TYPE v10; // eax
  PCWSTR v11; // rcx
  WCHAR v12; // ax
  ULONG FullPathName_U; // ebx
  unsigned int Length; // r15d
  int v15; // ebp
  unsigned int v16; // edi
  WCHAR *Heap; // rbp
  size_t v18; // r12
  WCHAR v19; // ax
  WCHAR *v20; // rdi
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v10 = RtlDetermineDosPathNameType_U(FileName);
  v11 = FileName;
  if ( v10 != RtlPathTypeRelative )
  {
    if ( (unsigned __int8)RtlDoesFileExists_UEx(FileName) )
      return RtlGetFullPathName_U(FileName, BufferLength, Buffer, FilePart);
    return 0;
  }
  v12 = *FileName;
  FullPathName_U = 0;
  while ( v12 )
  {
    if ( v12 == 46 )
      goto LABEL_6;
    v12 = *++v11;
  }
  if ( !Extension )
  {
LABEL_6:
    Length = 0;
    goto LABEL_7;
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, Extension) < 0 )
    return 0;
  Length = DestinationString.Length;
LABEL_7:
  if ( RtlInitUnicodeStringEx(&DestinationString, Path) < 0 )
    return 0;
  v15 = DestinationString.Length;
  if ( RtlInitUnicodeStringEx(&DestinationString, FileName) < 0 )
    return 0;
  v16 = DestinationString.Length;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15 + DestinationString.Length + Length + 6LL);
  if ( !Heap )
    return 0;
  v18 = v16;
  while ( 1 )
  {
    v19 = *Path;
    v20 = Heap;
    if ( !*Path )
      goto LABEL_18;
    do
    {
      ++Path;
      if ( v19 == 59 )
        break;
      *v20++ = v19;
      v19 = *Path;
    }
    while ( *Path );
    if ( v20 != Heap && *(v20 - 1) != 92 )
      *v20++ = 92;
    if ( !*Path )
LABEL_18:
      Path = 0LL;
    memmove(v20, FileName, v18);
    if ( Length )
      memmove((char *)v20 + v18, Extension, Length + 2LL);
    else
      *(WCHAR *)((char *)v20 + v18) = 0;
    if ( (unsigned __int8)RtlDoesFileExists_UEx(Heap) )
      break;
    if ( !Path )
      goto LABEL_23;
  }
  FullPathName_U = RtlGetFullPathName_U(Heap, BufferLength, Buffer, FilePart);
LABEL_23:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return FullPathName_U;
}
