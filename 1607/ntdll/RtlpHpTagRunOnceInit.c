/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x180051090
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataFree @ 0x18004F71C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpTagRunOnceInit(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v3; // rbx
  unsigned int v4; // edi
  void *v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  int v8; // esi

  if ( (int)RtlRunOnceExecuteOnce(
              &RtlpHpMetadataHeapInitVar,
              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpMetadataHeapInit,
              0LL,
              0LL) < 0 )
    return 0;
  memset(a2, 0, 0x28uLL);
  v3 = (unsigned __int64 *)RtlpHpMetadataAlloc(0x200uLL, 0);
  if ( !v3 )
    return 0;
  v4 = 1;
  v5 = RtlpHpMetadataAlloc(0x2000uLL, 1);
  if ( v5 )
  {
    a2[3] = v5;
    *a2 = 0LL;
    *((_DWORD *)a2 + 2) = 0;
    a2[2] = v3;
    *((_DWORD *)a2 + 3) = 2048;
    v6 = 64LL;
    v7 = 0LL;
    if ( v3 >= v3 + 64 )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        ++v7;
        *v3++ = (unsigned __int64)(a2 + 1) | 1;
      }
      while ( v7 < v6 );
    }
    v3 = 0LL;
    v8 = 0;
  }
  else
  {
    v8 = -1073741801;
  }
  if ( v3 )
    RtlpHpMetadataFree((unsigned __int64)v3);
  if ( v8 < 0 )
    return 0;
  return v4;
}
