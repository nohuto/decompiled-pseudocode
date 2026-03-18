/*
 * XREFs of AslpFileLargeMapDelete @ 0x1406C9BD4
 * Callers:
 *     AslpFileLargeAssignViewAndDelete @ 0x1406C9444 (AslpFileLargeAssignViewAndDelete.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1406C94E0 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x1406C9970 (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslpFilePartialViewFree @ 0x1406C9C28 (AslpFilePartialViewFree.c)
 */

void __fastcall AslpFileLargeMapDelete(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 6);
      AslpFilePartialViewFree(v1 + 2);
      v3 = (void *)v1[1];
      if ( v3 )
        ZwClose(v3);
      AslFree((__int64)v3, v1);
      *a1 = 0LL;
    }
  }
}
