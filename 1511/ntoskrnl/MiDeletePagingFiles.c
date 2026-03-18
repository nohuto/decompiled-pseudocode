/*
 * XREFs of MiDeletePagingFiles @ 0x140625668
 * Callers:
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  char **v5; // r14
  __int64 v6; // rbp
  char *v7; // rcx

  v1 = *(_DWORD *)(a1 + 5720);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    v5 = (char **)(a1 + 5728);
    v6 = v1;
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( (v7[204] & 0x50) == 0 )
        {
          v3 += *(_QWORD *)v7;
          v2 += 2LL;
        }
        MiDeletePagefile(v7, 1);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( v2 )
      MiReturnCommit(a1, v2);
  }
  return v3;
}
