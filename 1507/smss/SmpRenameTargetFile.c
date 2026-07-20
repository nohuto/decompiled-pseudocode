/*
 * XREFs of SmpRenameTargetFile @ 0x140012994
 * Callers:
 *     SmpProcessFileRenames @ 0x140002964 (SmpProcessFileRenames.c)
 *     SmpShuffleMove @ 0x140012D04 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140012E78 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     memcpy_0 @ 0x14000C6BC (memcpy_0.c)
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 *     SmpCheckFolderForRedirections @ 0x1400118EC (SmpCheckFolderForRedirections.c)
 */

__int64 __fastcall SmpRenameTargetFile(const void **a1, void *a2, int a3, char a4)
{
  int v4; // esi
  __int64 v6; // rcx
  ULONG v7; // esi
  _BYTE *Heap; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(unsigned __int16 *)a1;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  v7 = v4 + 26;
  Handle = (HANDLE)-1LL;
  Heap = RtlAllocateHeap(*(PVOID *)(v6 + 48), SmBaseTag, v7);
  if ( Heap )
  {
    if ( !a4 || SmpCheckFolderForRedirections((unsigned __int16 *)a1, &Handle) )
    {
      memset_0(Heap, 0, v7);
      *((_QWORD *)Heap + 1) = 0LL;
      *Heap = a3 != 0;
      v13 = *(unsigned __int16 *)a1;
      *((_DWORD *)Heap + 4) = v13;
      memcpy_0(Heap + 20, a1[1], v13);
      v12 = NtSetInformationFile(a2, &IoStatusBlock, Heap, v7, FileRenameInformation);
    }
    else
    {
      v12 = -1073740533;
    }
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
