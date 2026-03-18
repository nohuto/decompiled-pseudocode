/*
 * XREFs of MiDeletePagefile @ 0x1406A4FBC
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 *     MiDeletePagingFiles @ 0x1406A5098 (MiDeletePagingFiles.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x1400129B4 (MiFreePageFileHashPfns.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MiFreeModWriterEntry @ 0x140082AAC (MiFreeModWriterEntry.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     MiUpdatePageFileList @ 0x14016BE74 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x140231F90 (MiReleasePageHash.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x1405C0A08 (PiPagePathSetState.c)
 */

void __fastcall MiDeletePagefile(__int64 a1)
{
  _QWORD **v2; // rdi
  __int64 v3; // rsi
  struct _PRIVILEGE_SET *v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v2 = (_QWORD **)(a1 + 72);
  v3 = 2LL;
  do
  {
    if ( *v2 )
      MiFreeModWriterEntry(*v2, 0);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 128);
  if ( v4 )
    ExFreePoolEx(v4);
  v5 = *(_QWORD *)(a1 + 176);
  if ( v5 )
    MiReleasePageHash(v5, *(_DWORD *)(a1 + 8));
  MiFreePageFileHashPfns(*(_QWORD *)(a1 + 216));
  if ( (*(_BYTE *)(a1 + 165) & 1) != 0 )
    MiUpdatePageFileList(a1, 0);
  if ( (*(_WORD *)(a1 + 164) & 0x200) != 0 )
    PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 64), 0);
  v6 = *(void **)(a1 + 184);
  if ( v6 )
    ObCloseHandle(v6, 0);
  v7 = *(void **)(a1 + 64);
  if ( v7 )
    ObfDereferenceObject(v7);
  v8 = *(void **)(a1 + 120);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
