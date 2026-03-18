/*
 * XREFs of ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C012F0D8
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C012ECA0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C012EDD4 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vMergeSpans(struct _SPAN *a1, struct _SPAN *a2, struct _SPAN *a3, struct _SPAN *a4, struct _SPAN *a5)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx

  while ( a1 < a2 && a3 < a4 )
  {
    if ( *(_DWORD *)a1 >= *(_DWORD *)a3 )
    {
      *(_QWORD *)a5 = *(_QWORD *)a3;
      a5 = (struct _SPAN *)((char *)a5 + 8);
      a3 = (struct _SPAN *)((char *)a3 + 8);
    }
    else
    {
      *(_QWORD *)a5 = *(_QWORD *)a1;
      a5 = (struct _SPAN *)((char *)a5 + 8);
      a1 = (struct _SPAN *)((char *)a1 + 8);
    }
  }
  v8 = 0LL;
  v9 = 0LL;
  v10 = (unsigned __int64)(a2 - a1 + 7) >> 3;
  if ( a1 > a2 )
    v10 = 0LL;
  if ( v10 )
  {
    v13 = a1 - a5;
    do
    {
      ++v9;
      *(_QWORD *)a5 = *(_QWORD *)((char *)a5 + v13);
      a5 = (struct _SPAN *)((char *)a5 + 8);
    }
    while ( v9 < v10 );
  }
  v11 = (unsigned __int64)(a4 - a3 + 7) >> 3;
  if ( a3 > a4 )
    v11 = 0LL;
  if ( v11 )
  {
    v12 = a3 - a5;
    do
    {
      ++v8;
      *(_QWORD *)a5 = *(_QWORD *)((char *)a5 + v12);
      a5 = (struct _SPAN *)((char *)a5 + 8);
    }
    while ( v8 < v11 );
  }
}
