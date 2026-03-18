/*
 * XREFs of ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0290284
 * Callers:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C001B660 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0267388 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028E3EC (--1REDIROPEN@@QEAA@XZ.c)
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
    *((_DWORD *)a1 + 116) = 0;
    *((_QWORD *)a1 + 57) = *((_QWORD *)a1 + 6);
    *((_WORD *)a1 + 50) = 3;
    *((_DWORD *)a1 + 117) = v2;
    *((_QWORD *)a1 + 6) = gpRedirDev;
    result = 1LL;
    *((_DWORD *)a1 + 28) = v2 | 0x23A5EF;
  }
  return result;
}
