/*
 * XREFs of MiDeletePagingFiles @ 0x1406A5098
 * Callers:
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 * Callees:
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx

  v1 = *(_DWORD *)(a1 + 5336);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = (__int64 *)(a1 + 5344);
    v4 = v1;
    do
    {
      v5 = *v3;
      if ( *v3 )
      {
        if ( (*(_BYTE *)(v5 + 164) & 0x50) == 0 )
          v2 += *(_QWORD *)v5;
        MiDeletePagefile(v5);
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
