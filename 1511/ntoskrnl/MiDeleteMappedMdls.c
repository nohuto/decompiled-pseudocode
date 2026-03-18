/*
 * XREFs of MiDeleteMappedMdls @ 0x1401D4FC4
 * Callers:
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 *     MiEnablePartitionMappedWrites @ 0x1403C85B0 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     MiFreeModWriterEntry @ 0x140030670 (MiFreeModWriterEntry.c)
 */

void __fastcall MiDeleteMappedMdls(__int64 a1)
{
  __int64 **v1; // rbx
  __int64 *v2; // rcx
  __int64 v3; // rax

  v1 = (__int64 **)(a1 + 552);
  while ( *v1 != (__int64 *)v1 )
  {
    v2 = *v1;
    v3 = **v1;
    if ( (__int64 **)(*v1)[1] != v1 || *(__int64 **)(v3 + 8) != v2 )
      __fastfail(3u);
    *v1 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v1;
    MiFreeModWriterEntry(v2, 1u);
  }
}
