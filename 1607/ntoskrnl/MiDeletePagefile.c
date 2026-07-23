/*
 * XREFs of MiDeletePagefile @ 0x14065AEEC
 * Callers:
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x140569278 (MiCreatePagefile.c)
 *     MiDeletePagingFiles @ 0x14065AFE8 (MiDeletePagingFiles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MiFreeModWriterEntry @ 0x14008E6C8 (MiFreeModWriterEntry.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     MiFreePageFileHashPfns @ 0x1400BC788 (MiFreePageFileHashPfns.c)
 *     MiUpdatePageFileList @ 0x1401431BC (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x1401FB510 (MiReleasePageHash.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x14057D7D0 (PiPagePathSetState.c)
 */

void __fastcall MiDeletePagefile(char *P, int a2)
{
  _QWORD **v3; // rdi
  __int64 v5; // rsi
  struct _PRIVILEGE_SET *v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  v3 = (_QWORD **)(P + 64);
  v5 = 2LL;
  do
  {
    if ( *v3 )
      MiFreeModWriterEntry(*v3, 0);
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 14);
  if ( v6 )
    MiDeleteSubsection(v6);
  v7 = *((_QWORD *)P + 27);
  if ( v7 )
    MiReleasePageHash(v7, *((_DWORD *)P + 2));
  MiFreePageFileHashPfns(*((_QWORD *)P + 32));
  if ( (P[205] & 1) != 0 )
    MiUpdatePageFileList((__int64)P, 0);
  if ( (*((_WORD *)P + 102) & 0x200) != 0 )
    PiPagePathSetState(*((struct _FILE_OBJECT **)P + 7), 0);
  v8 = (void *)*((_QWORD *)P + 28);
  if ( v8 )
    ObCloseHandle(v8, 0);
  v9 = (void *)*((_QWORD *)P + 7);
  if ( v9 )
    ObfDereferenceObject(v9);
  v10 = (void *)*((_QWORD *)P + 13);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (void *)*((_QWORD *)P + 24);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( a2 )
    ExFreePoolWithTag(P, 0);
}
