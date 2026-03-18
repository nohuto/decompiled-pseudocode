/*
 * XREFs of ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C028EECC
 * Callers:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C0028A48 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0265078 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028D02C (--1REDIROPEN@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMakeOpaque(struct SURFACE *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( !*((_WORD *)a1 + 50) )
  {
    v2 = *((_DWORD *)a1 + 28);
    *((_DWORD *)a1 + 118) = 0;
    *((_QWORD *)a1 + 58) = *((_QWORD *)a1 + 6);
    *((_WORD *)a1 + 50) = 3;
    *((_DWORD *)a1 + 119) = v2;
    *((_QWORD *)a1 + 6) = gpRedirDev;
    result = 1LL;
    *((_DWORD *)a1 + 28) = v2 | 0x23A5EF;
  }
  return result;
}
