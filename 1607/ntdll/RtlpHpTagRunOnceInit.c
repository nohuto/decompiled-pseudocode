/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x180051080
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180050754 (RtlpHpMetadataAlloc.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpTagRunOnceInit(PRTL_RUN_ONCE a1, _QWORD *a2, PVOID *a3)
{
  unsigned __int64 *v4; // rbx
  unsigned int v5; // edi
  void *v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // esi

  if ( RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, RtlpHpMetadataHeapInit, 0LL, 0LL) < 0 )
    return 0;
  memset(a2, 0, 0x28uLL);
  v4 = (unsigned __int64 *)RtlpHpMetadataAlloc(0x200uLL, 0);
  if ( !v4 )
    return 0;
  v5 = 1;
  v6 = RtlpHpMetadataAlloc(0x2000uLL, 1);
  if ( v6 )
  {
    a2[3] = v6;
    *a2 = 0LL;
    *((_DWORD *)a2 + 2) = 0;
    a2[2] = v4;
    *((_DWORD *)a2 + 3) = 2048;
    v7 = 64LL;
    v8 = 0LL;
    if ( v4 >= v4 + 64 )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        ++v8;
        *v4++ = (unsigned __int64)(a2 + 1) | 1;
      }
      while ( v8 < v7 );
    }
    v4 = 0LL;
    v9 = 0;
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v4 )
    RtlpHpMetadataFree((unsigned __int64)v4);
  if ( v9 < 0 )
    return 0;
  return v5;
}
