/*
 * XREFs of ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C028DC8C
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02686DC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028C060 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DD34 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bBmpMakeOpaque(struct SURFACE *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( !*((_WORD *)a1 + 50) )
  {
    v2 = *((_DWORD *)a1 + 28);
    *((_DWORD *)a1 + 116) = 0;
    *((_QWORD *)a1 + 57) = *((_QWORD *)a1 + 6);
    *((_DWORD *)a1 + 117) = v2;
    *((_WORD *)a1 + 50) = 3;
    *((_QWORD *)a1 + 6) = gpBmpDev;
    result = 1LL;
    *((_DWORD *)a1 + 28) = v2 & 0xFFFC5A10 | 0x385EF;
  }
  return result;
}
