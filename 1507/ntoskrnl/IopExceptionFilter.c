/*
 * XREFs of IopExceptionFilter @ 0x1401F2394
 * Callers:
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopExceptionFilter(int **a1, int *a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
    *a2 = (*a1)[12];
  v3 = *a2;
  if ( *a2 == -2147483646 )
    v3 = -1073741115;
  *a2 = v3;
  return 1LL;
}
