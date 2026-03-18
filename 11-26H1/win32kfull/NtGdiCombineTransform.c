/*
 * XREFs of NtGdiCombineTransform @ 0x1401F2DC0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineTransform @ 0x1401F2EA4 (GreCombineTransform.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiCombineTransform(void *a1, struct _XFORML *a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  struct _XFORML v7; // [rsp+30h] [rbp-58h] BYREF
  struct _XFORML v8; // [rsp+48h] [rbp-40h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]

  memset(&v8, 0, sizeof(v8));
  memset(&v7, 0, sizeof(v7));
  v9 = 0LL;
  v10 = 0LL;
  if ( GrepProbeAndReadXFROMLFromUntrustedVa(&v8, a2) && GrepProbeAndReadXFROMLFromUntrustedVa(&v7, a3) )
  {
    v5 = GreCombineTransform(&v9, &v8, &v7);
    if ( v5 )
      GreProbeAndWriteToUntrustedVa(a1, 0x18uLL, &v9, 0x18uLL, 1uLL);
  }
  else
  {
    return 0;
  }
  return v5;
}
