/*
 * XREFs of MiConvertRunsToPages @ 0x1401ED338
 * Callers:
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiConvertRunsToPages(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *result; // rax
  __int64 v8; // r8
  unsigned int i; // ecx
  __int64 v10; // r10
  __int64 j; // r9

  v4 = *(unsigned int *)(a1 + 4);
  v5 = 0LL;
  if ( (_DWORD)v4 )
  {
    v6 = (_QWORD *)(a1 + 16);
    do
    {
      v5 += *v6;
      v6 += 2;
      --v4;
    }
    while ( v4 );
  }
  *a2 = v5;
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v5, 0x6546694Du);
  if ( result )
  {
    v8 = 0LL;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v10 = *(_QWORD *)(a1 + 16LL * i + 16);
      for ( j = *(_QWORD *)(a1 + 16LL * i + 8); v10; --v10 )
        result[v8++] = j++;
    }
  }
  return result;
}
