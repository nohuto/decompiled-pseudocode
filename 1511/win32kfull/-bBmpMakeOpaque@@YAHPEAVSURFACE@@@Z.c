/*
 * XREFs of ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C028DAAC
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0267388 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1C028BE80 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DB54 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
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
