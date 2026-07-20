/*
 * XREFs of SmpPathCanBeTrustedIsNotARedirection @ 0x140012BD8
 * Callers:
 *     SmpProcessFileRenames @ 0x140007624 (SmpProcessFileRenames.c)
 *     SmpCheckFolderForRedirections @ 0x140011CFC (SmpCheckFolderForRedirections.c)
 *     SmpForceDeleteTargetFile @ 0x140012510 (SmpForceDeleteTargetFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     GetFinalPathNameByHandleW @ 0x140014634 (GetFinalPathNameByHandleW.c)
 */

bool __fastcall SmpPathCanBeTrustedIsNotARedirection(HANDLE FileHandle, unsigned __int16 *a2, int a3)
{
  WCHAR *Heap; // rdi
  bool v7; // r14
  unsigned int FinalPathNameByHandleW; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  const WCHAR *v11; // r8
  __int64 v12; // rax
  char v14; // [rsp+38h] [rbp-240h] BYREF

  Heap = 0LL;
  v7 = 0;
  if ( *a2 < 0xCu )
    return v7;
  FinalPathNameByHandleW = GetFinalPathNameByHandleW(FileHandle);
  v9 = FinalPathNameByHandleW;
  if ( !FinalPathNameByHandleW )
    return v7;
  v10 = FinalPathNameByHandleW + 2;
  if ( v10 > 0x106 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 2LL * v10);
    if ( !Heap )
      return v7;
    v9 = GetFinalPathNameByHandleW(FileHandle);
    if ( !v9 )
      goto LABEL_14;
    v11 = Heap + 4;
  }
  else
  {
    v11 = (const WCHAR *)&v14;
  }
  if ( *a2 >= (unsigned __int64)(2LL * (int)v9) )
  {
    if ( a3 && v9 > 7 )
    {
      v11[v9 - 4] = 92;
      v12 = v9 - 3;
      ++v9;
    }
    else
    {
      v12 = v9 - 4;
    }
    v11[v12] = 0;
    v7 = RtlCompareUnicodeStrings((PCWCH)(*((_QWORD *)a2 + 1) + 8LL), v9 - 3, v11, v9 - 3, 1u) == 0;
  }
LABEL_14:
  if ( Heap )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  return v7;
}
