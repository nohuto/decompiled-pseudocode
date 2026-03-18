/*
 * XREFs of NtGdiUMPDEngFreeUserMem @ 0x14032FD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiUMPDEngFreeUserMem(const void *a1)
{
  PVOID v2; // rcx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID pv; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  pv = 0LL;
  if ( a1 )
  {
    GreProbeAndReadFromUntrustedVa(&pv, 8uLL, a1, 8uLL, 1uLL);
    v4 = 0;
    GreProbeAndReadFromUntrustedVa(&v4, 4uLL, pv, 4uLL, 1uLL);
    GreProbeForReadFromUntrustedVa((char *)pv - 32, 0x20uLL, 8uLL);
    v2 = pv;
  }
  if ( v2 )
    EngFreeUserMem(v2);
  return 1LL;
}
